/*
* Mouse Settings Base layer
*/
#define U_MOUSE_MOVE_MAX 3200
#define U_MOUSE_SCROLL_MAX 50

#undef MOVE_UP
#undef MOVE_DOWN
#undef MOVE_LEFT
#undef MOVE_RIGHT
#undef SCROLL_UP
#undef SCROLL_DOWN
#undef SCROLL_LEFT
#undef SCROLL_RIGHT

#define MOVE_UP MOVE_VERT(-U_MOUSE_MOVE_MAX)
#define MOVE_DOWN MOVE_VERT(U_MOUSE_MOVE_MAX)
#define MOVE_LEFT MOVE_HOR(-U_MOUSE_MOVE_MAX)
#define MOVE_RIGHT MOVE_HOR(U_MOUSE_MOVE_MAX)

#define SCROLL_UP SCROLL_VERT(U_MOUSE_SCROLL_MAX)
#define SCROLL_DOWN SCROLL_VERT(-U_MOUSE_SCROLL_MAX)
#define SCROLL_LEFT SCROLL_HOR(-U_MOUSE_SCROLL_MAX)
#define SCROLL_RIGHT SCROLL_HOR(U_MOUSE_SCROLL_MAX)

/*
* Mouse Settings Fast layer
*/
#define U_MOUSE_MOVE_MAX_FAST 6000
#define U_MOUSE_SCROLL_MAX_FAST 800

#define MOVE_UP_FAST MOVE_VERT(-U_MOUSE_MOVE_MAX_FAST)
#define MOVE_DOWN_FAST MOVE_VERT(U_MOUSE_MOVE_MAX_FAST)
#define MOVE_LEFT_FAST MOVE_HOR(-U_MOUSE_MOVE_MAX_FAST)
#define MOVE_RIGHT_FAST MOVE_HOR(U_MOUSE_MOVE_MAX_FAST)

#define SCROLL_UP_FAST SCROLL_VERT(U_MOUSE_SCROLL_MAX_FAST)
#define SCROLL_DOWN_FAST SCROLL_VERT(-U_MOUSE_SCROLL_MAX_FAST)
#define SCROLL_LEFT_FAST SCROLL_HOR(-U_MOUSE_SCROLL_MAX_FAST)
#define SCROLL_RIGHT_FAST SCROLL_HOR(U_MOUSE_SCROLL_MAX_FAST)

/*
* Mouse Settings Medium layer
*/
#define U_MOUSE_MOVE_MAX_MEDIUM 3000
#define U_MOUSE_SCROLL_MAX_MEDIUM 150

#define MOVE_UP_MEDIUM MOVE_VERT(-U_MOUSE_MOVE_MAX_MEDIUM)
#define MOVE_DOWN_MEDIUM MOVE_VERT(U_MOUSE_MOVE_MAX_MEDIUM)
#define MOVE_LEFT_MEDIUM MOVE_HOR(-U_MOUSE_MOVE_MAX_MEDIUM)
#define MOVE_RIGHT_MEDIUM MOVE_HOR(U_MOUSE_MOVE_MAX_MEDIUM)

#define SCROLL_UP_MEDIUM SCROLL_VERT(U_MOUSE_SCROLL_MAX_MEDIUM)
#define SCROLL_DOWN_MEDIUM SCROLL_VERT(-U_MOUSE_SCROLL_MAX_MEDIUM)
#define SCROLL_LEFT_MEDIUM SCROLL_HOR(-U_MOUSE_SCROLL_MAX_MEDIUM)
#define SCROLL_RIGHT_MEDIUM SCROLL_HOR(U_MOUSE_SCROLL_MAX_MEDIUM)

/*
* Mouse Settings Slow layer
*/
#define U_MOUSE_MOVE_MAX_SLOW 2500
#define U_MOUSE_SCROLL_MAX_SLOW 50

#define MOVE_UP_SLOW MOVE_VERT(-U_MOUSE_MOVE_MAX_SLOW)
#define MOVE_DOWN_SLOW MOVE_VERT(U_MOUSE_MOVE_MAX_SLOW)
#define MOVE_LEFT_SLOW MOVE_HOR(-U_MOUSE_MOVE_MAX_SLOW)
#define MOVE_RIGHT_SLOW MOVE_HOR(U_MOUSE_MOVE_MAX_SLOW)

#define SCROLL_UP_SLOW SCROLL_VERT(U_MOUSE_SCROLL_MAX_SLOW)
#define SCROLL_DOWN_SLOW SCROLL_VERT(-U_MOUSE_SCROLL_MAX_SLOW)
#define SCROLL_LEFT_SLOW SCROLL_HOR(-U_MOUSE_SCROLL_MAX_SLOW)
#define SCROLL_RIGHT_SLOW SCROLL_HOR(U_MOUSE_SCROLL_MAX_SLOW)

/*
* Mouse Settings Crawl layer
*/
#define U_MOUSE_MOVE_MAX_CRAWL 1300
#define U_MOUSE_SCROLL_MAX_CRAWL 15

#define MOVE_UP_CRAWL MOVE_VERT(-U_MOUSE_MOVE_MAX_CRAWL)
#define MOVE_DOWN_CRAWL MOVE_VERT(U_MOUSE_MOVE_MAX_CRAWL)
#define MOVE_LEFT_CRAWL MOVE_HOR(-U_MOUSE_MOVE_MAX_CRAWL)
#define MOVE_RIGHT_CRAWL MOVE_HOR(U_MOUSE_MOVE_MAX_CRAWL)

#define SCROLL_UP_CRAWL SCROLL_VERT(U_MOUSE_SCROLL_MAX_CRAWL)
#define SCROLL_DOWN_CRAWL SCROLL_VERT(-U_MOUSE_SCROLL_MAX_CRAWL)
#define SCROLL_LEFT_CRAWL SCROLL_HOR(-U_MOUSE_SCROLL_MAX_CRAWL)
#define SCROLL_RIGHT_CRAWL SCROLL_HOR(U_MOUSE_SCROLL_MAX_SLOW)
