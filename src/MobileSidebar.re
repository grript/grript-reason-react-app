[%bs.raw {|require('./mobile_sidebar.css')|}];

let component = ReasonReact.statelessComponent("MobileSidebar");

let make = ( _children) => {
  ...component,
  render: self =>
    <div className="mobile-sidebar">
      <div className="container">
        <MenuMain />
      </div>  
    </div>,
};
