let str = ReasonReact.string;

type route =
  | Home
  | About
  | Blog
  | Contact;

type state = {route};

type action =
  | ChangeRoute(route);

let reducer = (action, _state) => {
  Js.log("reducer");
  Js.log(action);
  switch action {
  | ChangeRoute(route) => ReasonReact.Update({route: route})
  };
}

let mapUrlToRoute = (url: ReasonReact.Router.url) =>
  switch url.path {
  | [] => Home
  | ["about"] => About
  | ["blog"] => Blog
  | ["contact"] => Contact
  | _ => Home
  };

let component = ReasonReact.reducerComponent("Router");  

let make = (_children) => {
  ...component,
  reducer,
  initialState: () => {route: Home},
  didMount: self => {
    Js.log("hello rocks 10");
    Js.log(self.state.route);
    let watcherID = ReasonReact.Router.watchUrl((url) => self.send(ChangeRoute(url |> mapUrlToRoute)));   

    self.onUnmount(() => ReasonReact.Router.unwatchUrl(watcherID));
  },
  render: (self) =>
    <div>
      (
        switch self.state.route {
        | Home => <Home />
        | About => <About />
        | Blog => <Blog />
        | Contact => <Contact />
        }
      )
    </div>
};
