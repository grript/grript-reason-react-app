
let component = ReasonReact.statelessComponent("About");

let make = (_children) => {
  ...component,
  render: self =>
    <div className="about">
      (ReasonReact.string("About Page is here"))
    </div>,
};
