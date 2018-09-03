[%bs.raw {|require('./header.css')|}];


let component = ReasonReact.statelessComponent("Header");

let make = (_children) => {
  ...component,
  render: self =>
    <div className="header-main">
      <div className="header">
        <div className="container container-mobile header-container">
          <HeaderBranding message="Grript"/>
          <HamburgerIcon />
        </div>
        <MobileSidebar />
      </div>
    </div>,
};


  
