[%bs.raw {|require('./main_nav.css')|}];

let component = ReasonReact.statelessComponent("MobileSidebar");

let make = ( _children) => {
  ...component,
  render: self =>
    <div className="main-nav">
      <div className="container">
        <MenuMain />
      </div>  
    </div>,
};
