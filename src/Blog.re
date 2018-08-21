
let component = ReasonReact.statelessComponent("Blog");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className="blog">
      (ReasonReact.string("This is the Blog page"))
    </div>,
};
