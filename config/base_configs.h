// Layer definitions
#define DEFAULT 0
#define DEFAULT_NO_HM 1
#define DEFAULT_LONG_HM 2
#define SYMBOL 3
#define NUMBER 4
#define NAV 5
#define UTILITY 6
#define MOUSE_BASE 7
#define FUNC 8
#define MOUSE_FAST 9
#define MOUSE_MEDIUM 10
#define MOUSE_SLOW 11
#define MOUSE_CRAWL 12
#define NUMBER_TEST 13
#define CONVENIENCE_LAYER 14

// global settings
&mt {
    tapping-term-ms = <200>;
};

&lt {
    tapping-term-ms = <130>;
};

// this changes the movement speed of the mouse
&mmv {
  time-to-max-speed-ms = <400>;
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
    /delete-property/ ignore-modifiers;
};

// global keys
#define HYPER LG(LS(LA(LCTRL)))
#define MEH LS(LA(LCTRL))
#define HIKE LG(LA(LCTRL))
#define HALT LG(LA) 