[%bs.raw {|require('./main_nav.css')|}];

let component = ReasonReact.statelessComponent("MobileSidebar");

let handleClick = (_event, _self) => [%bs.raw {| document.documentElement.classList.toggle('overlay-is-open') |}];

let make = ( _children) => {
  ...component,
  render: self =>
    <div className="main-nav">
      <div className="main-nav-container">
        <div className="close-menu-wrapper">
          <div className="close-menu" onClick=(self.handle(handleClick))>
          (ReasonReact.string("Close menu"))
          </div>
        </div>  
        <div className="main-nav-inner container" id="main-nav-inner">
          <MenuMain />
          </div>  
      </div>  
    </div>,
};
