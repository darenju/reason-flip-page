# reason-flip-page

Reason bindings to react-flip-page.

> Please note: If you are using `reason-react@0.6.x`, please use version `0.1.0` of this package, this version being made for `reason-react@0.7.x`.

# Installation

```
yarn add react-flip-page reason-flip-page
```

Add to `bsconfig.json`:

```
"bs-dependencies": [
  "reason-flip-page"
]
```

# API

All the original react-flip-page properties are supported. Check out [the original documentation](https://github.com/darenju/react-flip-page#props) to see the list of properties.

# Example

```reason
let component = ReasonReact.statelessComponent("Example");

let make = _ => {
  ...component,

  render: _ => {
    <FlipPage>
      <div>{ReasonReact.string("Page 1")}</div>
      <div>{ReasonReact.string("Page 2")}</div>
      <div>{ReasonReact.string("Page 3")}</div>
    </FlipPage>
  }
};
```

# TODO

- Make the callbacks work.

# Thanks

Thanks to **Leo** from the ReasonML Slack#react for helping me how to make the package usable in a ReasonML project.
