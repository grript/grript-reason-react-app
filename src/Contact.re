
let component = ReasonReact.statelessComponent("Contact");

let make = (_children) => {
  ...component,
  render: self =>
    <div className="contact">
      (ReasonReact.string("This is the Contact page"))
    </div>,
};