[%bs.raw {|require('./header.css')|}];


let component = ReasonReact.statelessComponent("Header");

let make = ( children) => {
  ...component,
  render: self =>
    <header className="header-main">
      <div className="header">
        <div className="container container-mobile header-container">
          {children}
          <HeaderBranding message="Grript"/>
        </div>
        <MainNav />
      </div>
    </header>,
};

  
