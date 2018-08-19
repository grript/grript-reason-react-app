[%bs.raw {|require('./index.css')|}];

[@bs.module "./registerServiceWorker"]
external register_service_worker : unit => unit = "default";

ReactDOMRe.renderToElementWithId(
  <App message="Welcome to React and Reason" />,
  "root",
);

ReactDOMRe.renderToElementWithId(
  <Header />,
  "header",
);



register_service_worker();
