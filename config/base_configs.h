// Layer definitions
#define DEFAULT_HM 0
#define DEFAULT_HM_ONE 1
#define DEFAULT_HM_TWO 2
#define DEFAULT_HM_THREE 3
#define DEFAULT_HM_NONE 4
#define SYMBOL 5
#define NUMBER 6
#define NAV 7
#define UTILITY 8
#define MOUSE_BASE 9
#define FUNC 10
#define MOUSE_FAST 11
#define MOUSE_MEDIUM 12
#define MOUSE_SLOW 13
#define MOUSE_CRAWL 14
#define MOUSE_DEAD 15
#define CONVENIENCE_LAYER 16
#define LAYER_CHANGER 17

// global settings
&mt {
    tapping-term-ms = <200>;
};

&lt {
    tapping-term-ms = <130>; 
};

// this changes the movement speed of the mouse
// time-to-max-speed-ms = <400>; // trying to speed up the mouse movement
// time-to-max-speed-ms = <385>;
&mmv {
  time-to-max-speed-ms = <360>;
  acceleration-exponent = <1>;
};

// this changes the scrolling behavior
&mwh {
  time-to-max-speed-ms = <300>;
  acceleration-exponent = <0>;
};

&sk {
    release-after-ms = <400>;
    quick-release;
};

// global keys
#define HYPER LG(LS(LA(LCTRL)))
#define MEH LS(LA(LCTRL))
#define HIKE LG(LA(LCTRL))
#define HALT LG(LA)
