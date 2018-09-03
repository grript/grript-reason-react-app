[%bs.raw {|require('./styles/footer.css')|}];


let component = ReasonReact.statelessComponent("Footer");


let make = (_children) => {
  ...component,
  render: self =>
    <div className="footer">
      <div className="container container-mobile">
        (ReasonReact.string("Footer here"))
      </div>  
    </div>,
};

