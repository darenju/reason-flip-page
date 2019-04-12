type style;

[@bs.module "react-flip-page"] [@react.component]
external make:
  (
    ~animationDuration: int=?,
    ~children: React.element,
    ~className: string=?,
    ~disableSwipe: bool=?,
    ~firstComponent: React.element=?,
    ~flipOnTouch: bool=?,
    ~flipOnTouchZone: int=?,
    ~height: int=?,
    ~lastComponent: React.element=?,
    ~loopForever: bool=?,
    ~maskOpacity: float=?,
    ~maxAngle: int=?,
    ~onPageChange: (int, string) => unit=?,
    ~onStartPageChange: (int, string) => unit=?,
    ~onStartSwiping: unit => unit=?,
    ~onStopSwiping: unit => unit=?,
    ~orientation: string=?,
    ~pageBackground: string=?,
    ~perspective: string=?,
    ~responsive: bool=?,
    ~reverse: bool=?,
    ~showHint: bool=?,
    ~showSwipeHint: bool=?,
    ~showTouchHint: bool=?,
    ~startAt: int=?,
    ~style: style=?,
    ~swipeImmune: array(string)=?,
    ~treshold: int=?,
    ~uncutPages: bool=?,
    ~width: int=?
  ) =>
  React.element =
  "default";
