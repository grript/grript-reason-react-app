[%bs.raw {|require('./overlay.css')|}];


let component = ReasonReact.statelessComponent("Overlay");

let make = (_children) => {
  ...component,
  render: self =>
    <div className="overlay">
      <div className="overlay-inner"></div>
    </div>,
};