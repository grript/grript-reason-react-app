[%bs.raw {|require('./hamburger_icon.css')|}];


let component = ReasonReact.statelessComponent("HamburgerIcon");

let handleClick = (_event, _self) => Js.log("clicked!");


let make = (~onClick, _children) => {
  ...component,
  render: self =>
    <div className="hamburger-icon-wrapper" onClick>
      <div className="hamburger-icon">
        <div></div>
        <div></div>
        <div></div>
      </div>  
    </div>,
};