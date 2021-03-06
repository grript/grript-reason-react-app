[%bs.raw {|require('./App.css')|}];

[@bs.module] external logo : string = "./logo.svg";

type nav = {isOpen: bool};

type action =
  | ToggleMenu;

type state = {
  nav
};

let component = ReasonReact.reducerComponent("App");

let make = (~message, _children) => {
  ...component,
  initialState: () => {
    nav: {
      isOpen: false
    }
  },
  reducer: (action, state) =>
    switch action {
    | ToggleMenu => {
        Js.log("Togglemenu clicked!");

        [%bs.raw {| document.documentElement.classList.toggle('overlay-is-open') |}];
        ReasonReact.Update({
          ...state,
          nav: {
            isOpen: !state.nav.isOpen
          }
        })
      }  
    },
  render: (self) =>
    <div className=("App " ++ (self.state.nav.isOpen ? " overlay-open" : " overlay-closed"))>      
      <Header >
        ...<HamburgerIcon onClick=(_event  => self.send(ToggleMenu)) />
      </Header>
      <main className="container container-mobile content-main">
        <Router>
          <div className="App-header">
            <img src=logo className="App-logo" alt="logo" />
            <h2> (ReasonReact.string(message)) </h2>
          </div>
          <p className="App-intro">
            (ReasonReact.string("To get started, edit"))
            <code> (ReasonReact.string(" src/App.re ")) </code>
            (ReasonReact.string("and save to reload."))
          </p>
        </Router>  
      </main>  
      <Footer />
      <Overlay />
    </div>,
};
