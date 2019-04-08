[@bs.module "react-flip-page"]
external flipPage: ReasonReact.reactClass = "default";

type style;

type props = {
  .
  "animationDuration": Js.undefined(int),
  "className": Js.undefined(string),
  "disableSwipe": bool,
  "firstComponent": Js.undefined(ReasonReact.reactElement),
  "flipOnTouch": bool,
  "flipOnTouchZone": Js.undefined(int),
  "height": Js.undefined(int),
  "lastComponent": Js.undefined(ReasonReact.reactElement),
  "loopForever": bool,
  "maskOpacity": Js.undefined(float),
  "maxAngle": Js.undefined(int),
  "onPageChange": Js.undefined(unit),
  "onStartPageChange": Js.undefined(unit),
  "onStartSwiping": Js.undefined(unit),
  "onStopSwiping": Js.undefined(unit),
  "orientation": string,
  "pageBackground": Js.undefined(string),
  "perspective": Js.undefined(string),
  "responsive": bool,
  "reverse": bool,
  "showHint": bool,
  "showSwipeHint": bool,
  "showTouchHint": bool,
  "startAt": Js.undefined(int),
  "style": Js.undefined(style),
  "swipeImmune": Js.undefined(array(string)),
  "treshold": Js.undefined(int),
  "uncutPages": bool,
  "width": Js.undefined(int),
};

let boolFromOpt = x =>
  switch (x) {
  | None => false
  | Some(x) => x
  };

let orientationFromOpt = orientation =>
  switch (orientation) {
  | None => "vertical"
  | Some(x) =>
    switch (x) {
    | "horizontal" => "horizontal"
    | _ => "vertical"
    }
  };

let make =
  (
    ~animationDuration=?,
    ~className=?,
    ~disableSwipe=?,
    ~firstComponent=?,
    ~flipOnTouch=?,
    ~flipOnTouchZone=?,
    ~height=?,
    ~lastComponent=?,
    ~loopForever=?,
    ~maskOpacity=?,
    ~maxAngle=?,
    ~onPageChange=?,
    ~onStartPageChange=?,
    ~onStartSwiping=?,
    ~onStopSwiping=?,
    ~orientation=?,
    ~pageBackground=?,
    ~perspective=?,
    ~responsive=?,
    ~reverse=?,
    ~showHint=?,
    ~showSwipeHint=?,
    ~showTouchHint=?,
    ~startAt=?,
    ~style=?,
    ~swipeImmune=?,
    ~treshold=?,
    ~uncutPages=?,
    ~width=?,
    children,
  ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=flipPage,
    ~props={
      "animationDuration": animationDuration |> Js.Undefined.fromOption,
      "className": className |> Js.Undefined.fromOption,
      "disableSwipe": disableSwipe |> boolFromOpt,
      "firstComponent": firstComponent |> Js.Undefined.fromOption,
      "flipOnTouch": flipOnTouch |> boolFromOpt,
      "flipOnTouchZone": flipOnTouchZone |> Js.Undefined.fromOption,
      "height": height |> Js.Undefined.fromOption,
      "lastComponent": lastComponent |> Js.Undefined.fromOption,
      "loopForever": loopForever |> boolFromOpt,
      "maskOpacity": maskOpacity |> Js.Undefined.fromOption,
      "maxAngle": maxAngle |> Js.Undefined.fromOption,
      "onPageChange": onPageChange |> Js.Undefined.fromOption,
      "onStartPageChange": onStartPageChange |> Js.Undefined.fromOption,
      "onStartSwiping": onStartSwiping |> Js.Undefined.fromOption,
      "onStopSwiping": onStopSwiping |> Js.Undefined.fromOption,
      "orientation": orientation |> orientationFromOpt,
      "pageBackground": pageBackground |> Js.Undefined.fromOption,
      "perspective": perspective |> Js.Undefined.fromOption,
      "responsive": responsive |> boolFromOpt,
      "reverse": reverse |> boolFromOpt,
      "showHint": showHint |> boolFromOpt,
      "showSwipeHint": showSwipeHint |> boolFromOpt,
      "showTouchHint": showTouchHint |> boolFromOpt,
      "startAt": startAt |> Js.Undefined.fromOption,
      "style": style |> Js.Undefined.fromOption,
      "swipeImmune": swipeImmune |> Js.Undefined.fromOption,
      "treshold": treshold |> Js.Undefined.fromOption,
      "uncutPages": uncutPages |> boolFromOpt,
      "width": width |> Js.Undefined.fromOption,
    }: props,
    children,
  );
