[%bs.raw {|require('./hamburger_icon.css')|}];


let component = ReasonReact.statelessComponent("HamburgerIcon");


let make = (_children) => {
  ...component,
  render: self =>
    <div className="hamburger-icon-wrapper">
      <div className="hamburger-icon">
        <div></div>
        <div></div>
        <div></div>
      </div>  
    </div>,
};
