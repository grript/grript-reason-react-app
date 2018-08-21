
let component = ReasonReact.statelessComponent("MainMenu");

let make = ( _children) => {
  ...component,
  render: self =>
    <nav className="menu-main">
      <ul>
        <li><Link href="/about">(ReasonReact.string("About"))</Link></li>
        <li><Link href="/blog">(ReasonReact.string("Blog"))</Link></li>
        <li><Link href="/contact">(ReasonReact.string("Contact"))</Link></li>
      </ul>
    </nav>,
};
