// Layer definitions
#define DEFAULT_HM 0
#define DEFAULT_HM_ONE 1
#define DEFAULT_HM_TWO 2
#define DEFAULT_HM_THREE 3
#define DEFAULT_HM_NONE 4
#define DEFAULT_IOS 5
#define SYMBOL 6
#define NUMBER 7
#define NAV 8
#define UTILITY 9
#define MOUSE_BASE 10
#define FUNC 11
#define MOUSE_FAST 12
#define MOUSE_MEDIUM 13
#define MOUSE_SLOW 14
#define MOUSE_CRAWL 15
#define MOUSE_DEAD 16
#define CONVENIENCE_LAYER 17
#define LAYER_CHANGER 18

// global settings
&mt {
    tapping-term-ms = <200>;
};

&lt {
    tapping-term-ms = <130>; 
};

&sk {
    release-after-ms = <400>;
    quick-release;
};


// this changes the movement speed of the mouse
// time-to-max-speed-ms = <400>; // trying to speed up the mouse movement
// time-to-max-speed-ms = <385>;
&mmv {
  time-to-max-speed-ms = <360>;
  acceleration-exponent = <1>;
};

// this changes the scrolling behavior (mwh to msc)
&msc {
  time-to-max-speed-ms = <300>;
  acceleration-exponent = <0>;
};

// global keys
#define HYPER LG(LS(LA(LCTRL)))
#define MEH LS(LA(LCTRL))
#define HIKE LG(LA(LCTRL))
#define HALT LG(LA)
