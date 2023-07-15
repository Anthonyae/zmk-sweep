// Layer definitions
#define DEFAULT_HM 0
#define DEFAULT_HM_ONE 1
#define DEFAULT_HM_TWO 2
#define DEFAULT_HM_NONE 3
#define SYMBOL 4
#define NUMBER 5
#define NAV 6
#define UTILITY 7
#define MOUSE_BASE 8
#define FUNC 9
#define MOUSE_FAST 10
#define MOUSE_MEDIUM 11
#define MOUSE_SLOW 12
#define MOUSE_CRAWL 13
#define MOUSE_DEAD 14
#define CONVENIENCE_LAYER 15


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
