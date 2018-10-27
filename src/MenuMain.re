[%bs.raw {|require('./menu_main.css')|}];

let component = ReasonReact.statelessComponent("MainMenu");

let make = ( _children) => {
  ...component,
  render: self =>
    <nav className="menu-main">
      <ul>
        <li><Link href="/about">(ReasonReact.string("About"))</Link></li>
        <li><Link href="/blog">(ReasonReact.string("Blog"))</Link></li>
        <li><Link href="/contact">(ReasonReact.string("Contact 1"))</Link></li>
        <li><Link href="/contact">(ReasonReact.string("Contact 2"))</Link></li>
        <li><Link href="/contact">(ReasonReact.string("Contact 3"))</Link></li>
      </ul>
    </nav>,
};
