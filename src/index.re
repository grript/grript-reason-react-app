[%bs.raw {|require('./index.css')|}];
/* [%bs.raw {|require('./styles/header.css')|}]; */

[@bs.module "./registerServiceWorker"]
external register_service_worker : unit => unit = "default";

ReactDOMRe.renderToElementWithId(
  <App message="Welcome to React and Reason" />,
  "root",
);

/* ReasonReact.Router.push calls the pushState browser API which */
/* when given an empty url will push the current url */
/* ReasonReact.Router.push(""); */



register_service_worker();
