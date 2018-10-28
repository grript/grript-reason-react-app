[%bs.raw {|require('./footer.css')|}];


let component = ReasonReact.statelessComponent("Footer");


let make = (_children) => {
  ...component,
  render: self =>
    <footer className="footer">
      <div className="container container-mobile">
        (ReasonReact.string("Footer here"))
      </div>  
    </footer>,
};

