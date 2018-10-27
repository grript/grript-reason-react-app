
let component = ReasonReact.statelessComponent("Home");

let make = (_children) => {
  ...component,
  render: self =>
    <div className="home">
      (ReasonReact.string("This is the Home page"))
    </div>,
};