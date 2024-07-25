#undef MOVE_UP
#undef MOVE_DOWN
#undef MOVE_LEFT
#undef MOVE_RIGHT
#undef SCROLL_UP
#undef SCROLL_DOWN
#undef SCROLL_LEFT
#undef SCROLL_RIGHT

/*
 * Mouse Settings Base layer
 */
#define U_MOUSE_MOVE_MAX 3200
#define U_MOUSE_SCROLL_MAX 100 // Changed from 75 to 100  because someone said that it makes encoder work - https://gist.github.com/krissen/dd27082e7ab0575619c7a31f4d2ec7ae?permalink_comment_id=4752313

#define MOVE_UP MOVE_Y(-U_MOUSE_MOVE_MAX)
#define MOVE_DOWN MOVE_Y(U_MOUSE_MOVE_MAX)
#define MOVE_LEFT MOVE_X(-U_MOUSE_MOVE_MAX)
#define MOVE_RIGHT MOVE_X(U_MOUSE_MOVE_MAX)

#define SCROLL_UP SCROLL_VERT(U_MOUSE_SCROLL_MAX)
#define SCROLL_DOWN SCROLL_VERT(-U_MOUSE_SCROLL_MAX)
#define SCROLL_LEFT SCROLL_HOR(-U_MOUSE_SCROLL_MAX)
#define SCROLL_RIGHT SCROLL_HOR(U_MOUSE_SCROLL_MAX)

/*
 * Mouse Settings Fast layer
 */
#define U_MOUSE_MOVE_MAX_FAST 4000
#define U_MOUSE_SCROLL_MAX_FAST 800

#define MOVE_UP_FAST MOVE_Y(-U_MOUSE_MOVE_MAX_FAST)
#define MOVE_DOWN_FAST MOVE_Y(U_MOUSE_MOVE_MAX_FAST)
#define MOVE_LEFT_FAST MOVE_X(-U_MOUSE_MOVE_MAX_FAST)
#define MOVE_RIGHT_FAST MOVE_X(U_MOUSE_MOVE_MAX_FAST)

#define SCROLL_UP_FAST SCROLL_VERT(U_MOUSE_SCROLL_MAX_FAST)
#define SCROLL_DOWN_FAST SCROLL_VERT(-U_MOUSE_SCROLL_MAX_FAST)
#define SCROLL_LEFT_FAST SCROLL_HOR(-U_MOUSE_SCROLL_MAX_FAST)
#define SCROLL_RIGHT_FAST SCROLL_HOR(U_MOUSE_SCROLL_MAX_FAST)

/*
 * Mouse Settings Medium layer
 */
#define U_MOUSE_MOVE_MAX_MEDIUM 3000
#define U_MOUSE_SCROLL_MAX_MEDIUM 150

#define MOVE_UP_MEDIUM MOVE_Y(-U_MOUSE_MOVE_MAX_MEDIUM)
#define MOVE_DOWN_MEDIUM MOVE_Y(U_MOUSE_MOVE_MAX_MEDIUM)
#define MOVE_LEFT_MEDIUM MOVE_X(-U_MOUSE_MOVE_MAX_MEDIUM)
#define MOVE_RIGHT_MEDIUM MOVE_X(U_MOUSE_MOVE_MAX_MEDIUM)

#define SCROLL_UP_MEDIUM SCROLL_VERT(U_MOUSE_SCROLL_MAX_MEDIUM)
#define SCROLL_DOWN_MEDIUM SCROLL_VERT(-U_MOUSE_SCROLL_MAX_MEDIUM)
#define SCROLL_LEFT_MEDIUM SCROLL_HOR(-U_MOUSE_SCROLL_MAX_MEDIUM)
#define SCROLL_RIGHT_MEDIUM SCROLL_HOR(U_MOUSE_SCROLL_MAX_MEDIUM)

/*
 * Mouse Settings Slow layer
 */
#define U_MOUSE_MOVE_MAX_SLOW 4000
#define U_MOUSE_SCROLL_MAX_SLOW 50

#define MOVE_UP_SLOW MOVE_Y(-U_MOUSE_MOVE_MAX_SLOW)
#define MOVE_DOWN_SLOW MOVE_Y(U_MOUSE_MOVE_MAX_SLOW)
#define MOVE_LEFT_SLOW MOVE_X(-U_MOUSE_MOVE_MAX_SLOW)
#define MOVE_RIGHT_SLOW MOVE_X(U_MOUSE_MOVE_MAX_SLOW)

#define SCROLL_UP_SLOW SCROLL_VERT(U_MOUSE_SCROLL_MAX_SLOW)
#define SCROLL_DOWN_SLOW SCROLL_VERT(-U_MOUSE_SCROLL_MAX_SLOW)
#define SCROLL_LEFT_SLOW SCROLL_HOR(-U_MOUSE_SCROLL_MAX_SLOW)
#define SCROLL_RIGHT_SLOW SCROLL_HOR(U_MOUSE_SCROLL_MAX_SLOW)

/*
 * Mouse Settings DEAD layer
 */
#define U_MOUSE_MOVE_MAX_CRAWL 800
#define U_MOUSE_SCROLL_MAX_CRAWL 15

#define MOVE_UP_CRAWL MOVE_Y(-U_MOUSE_MOVE_MAX_CRAWL)
#define MOVE_DOWN_CRAWL MOVE_Y(U_MOUSE_MOVE_MAX_CRAWL)
#define MOVE_LEFT_CRAWL MOVE_X(-U_MOUSE_MOVE_MAX_CRAWL)
#define MOVE_RIGHT_CRAWL MOVE_X(U_MOUSE_MOVE_MAX_CRAWL)

#define SCROLL_UP_CRAWL SCROLL_VERT(U_MOUSE_SCROLL_MAX_CRAWL)
#define SCROLL_DOWN_CRAWL SCROLL_VERT(-U_MOUSE_SCROLL_MAX_CRAWL)
#define SCROLL_LEFT_CRAWL SCROLL_HOR(-U_MOUSE_SCROLL_MAX_CRAWL)
#define SCROLL_RIGHT_CRAWL SCROLL_HOR(U_MOUSE_SCROLL_MAX_CRAWL)

/*
 * Mouse Settings dead layer
 */
#define U_MOUSE_MOVE_MAX_DEAD 400
#define U_MOUSE_SCROLL_MAX_DEAD 7

#define MOVE_UP_DEAD MOVE_Y(-U_MOUSE_MOVE_MAX_DEAD)
#define MOVE_DOWN_DEAD MOVE_Y(U_MOUSE_MOVE_MAX_DEAD)
#define MOVE_LEFT_DEAD MOVE_X(-U_MOUSE_MOVE_MAX_DEAD)
#define MOVE_RIGHT_DEAD MOVE_X(U_MOUSE_MOVE_MAX_DEAD)

#define SCROLL_UP_DEAD SCROLL_VERT(U_MOUSE_SCROLL_MAX_DEAD)
#define SCROLL_DOWN_DEAD SCROLL_VERT(-U_MOUSE_SCROLL_MAX_DEAD)
#define SCROLL_LEFT_DEAD SCROLL_HOR(-U_MOUSE_SCROLL_MAX_DEAD)
#define SCROLL_RIGHT_DEAD SCROLL_HOR(U_MOUSE_SCROLL_MAX_DEAD)

#define U_MS_U &mmv MOVE_UP
#define U_MS_D &mmv MOVE_DOWN
#define U_MS_L &mmv MOVE_LEFT
#define U_MS_R &mmv MOVE_RIGHT
#define U_WH_U &msc SCRL_UP
#define U_WH_D &msc SCRL_DOWN
#define U_WH_L &msc SCRL_LEFT
#define U_WH_R &msc SCRL_RIGHT