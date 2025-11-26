#ifndef _java_awt_Event_h_
#define _java_awt_Event_h_
//$ class java.awt.Event
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("ACTION_EVENT")
#undef ACTION_EVENT
#pragma push_macro("ALT_MASK")
#undef ALT_MASK
#pragma push_macro("BACK_SPACE")
#undef BACK_SPACE
#pragma push_macro("CAPS_LOCK")
#undef CAPS_LOCK
#pragma push_macro("CTRL_MASK")
#undef CTRL_MASK
#pragma push_macro("DELETE")
#undef DELETE
#pragma push_macro("DOWN")
#undef DOWN
#pragma push_macro("END")
#undef END
#pragma push_macro("ENTER")
#undef ENTER
#pragma push_macro("ESCAPE")
#undef ESCAPE
#pragma push_macro("GOT_FOCUS")
#undef GOT_FOCUS
#pragma push_macro("HOME")
#undef HOME
#pragma push_macro("INSERT")
#undef INSERT
#pragma push_macro("KEY_ACTION")
#undef KEY_ACTION
#pragma push_macro("KEY_ACTION_RELEASE")
#undef KEY_ACTION_RELEASE
#pragma push_macro("KEY_EVENT")
#undef KEY_EVENT
#pragma push_macro("KEY_PRESS")
#undef KEY_PRESS
#pragma push_macro("KEY_RELEASE")
#undef KEY_RELEASE
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("LIST_DESELECT")
#undef LIST_DESELECT
#pragma push_macro("LIST_EVENT")
#undef LIST_EVENT
#pragma push_macro("LIST_SELECT")
#undef LIST_SELECT
#pragma push_macro("LOAD_FILE")
#undef LOAD_FILE
#pragma push_macro("LOST_FOCUS")
#undef LOST_FOCUS
#pragma push_macro("META_MASK")
#undef META_MASK
#pragma push_macro("MISC_EVENT")
#undef MISC_EVENT
#pragma push_macro("MOUSE_DOWN")
#undef MOUSE_DOWN
#pragma push_macro("MOUSE_DRAG")
#undef MOUSE_DRAG
#pragma push_macro("MOUSE_ENTER")
#undef MOUSE_ENTER
#pragma push_macro("MOUSE_EVENT")
#undef MOUSE_EVENT
#pragma push_macro("MOUSE_EXIT")
#undef MOUSE_EXIT
#pragma push_macro("MOUSE_MOVE")
#undef MOUSE_MOVE
#pragma push_macro("MOUSE_UP")
#undef MOUSE_UP
#pragma push_macro("NUM_LOCK")
#undef NUM_LOCK
#pragma push_macro("PAUSE")
#undef PAUSE
#pragma push_macro("PGDN")
#undef PGDN
#pragma push_macro("PGUP")
#undef PGUP
#pragma push_macro("PRINT_SCREEN")
#undef PRINT_SCREEN
#pragma push_macro("RIGHT")
#undef RIGHT
#pragma push_macro("SAVE_FILE")
#undef SAVE_FILE
#pragma push_macro("SCROLL_ABSOLUTE")
#undef SCROLL_ABSOLUTE
#pragma push_macro("SCROLL_BEGIN")
#undef SCROLL_BEGIN
#pragma push_macro("SCROLL_END")
#undef SCROLL_END
#pragma push_macro("SCROLL_EVENT")
#undef SCROLL_EVENT
#pragma push_macro("SCROLL_LINE_DOWN")
#undef SCROLL_LINE_DOWN
#pragma push_macro("SCROLL_LINE_UP")
#undef SCROLL_LINE_UP
#pragma push_macro("SCROLL_LOCK")
#undef SCROLL_LOCK
#pragma push_macro("SCROLL_PAGE_DOWN")
#undef SCROLL_PAGE_DOWN
#pragma push_macro("SCROLL_PAGE_UP")
#undef SCROLL_PAGE_UP
#pragma push_macro("SHIFT_MASK")
#undef SHIFT_MASK
#pragma push_macro("TAB")
#undef TAB
#pragma push_macro("UP")
#undef UP
#pragma push_macro("WINDOW_DEICONIFY")
#undef WINDOW_DEICONIFY
#pragma push_macro("WINDOW_DESTROY")
#undef WINDOW_DESTROY
#pragma push_macro("WINDOW_EVENT")
#undef WINDOW_EVENT
#pragma push_macro("WINDOW_EXPOSE")
#undef WINDOW_EXPOSE
#pragma push_macro("WINDOW_ICONIFY")
#undef WINDOW_ICONIFY
#pragma push_macro("WINDOW_MOVED")
#undef WINDOW_MOVED

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

namespace java {
	namespace awt {

class $import Event : public ::java::io::Serializable {
	$class(Event, 0, ::java::io::Serializable)
public:
	Event();
	void init$(Object$* target, int64_t when, int32_t id, int32_t x, int32_t y, int32_t key, int32_t modifiers, Object$* arg);
	void init$(Object$* target, int64_t when, int32_t id, int32_t x, int32_t y, int32_t key, int32_t modifiers);
	void init$(Object$* target, int32_t id, Object$* arg);
	virtual void consume();
	virtual bool controlDown();
	virtual char16_t getKeyEventChar();
	static int32_t getOldEventKey(::java::awt::event::KeyEvent* e);
	static void initIDs();
	virtual bool isConsumed();
	virtual bool metaDown();
	virtual $String* paramString();
	virtual bool shiftDown();
	virtual $String* toString() override;
	virtual void translate(int32_t dx, int32_t dy);
	int64_t data = 0;
	static const int32_t SHIFT_MASK = 1; // 1 << 0
	static const int32_t CTRL_MASK = 2; // 1 << 1
	static const int32_t META_MASK = 4; // 1 << 2
	static const int32_t ALT_MASK = 8; // 1 << 3
	static const int32_t HOME = 1000;
	static const int32_t END = 1001;
	static const int32_t PGUP = 1002;
	static const int32_t PGDN = 1003;
	static const int32_t UP = 1004;
	static const int32_t DOWN = 1005;
	static const int32_t LEFT = 1006;
	static const int32_t RIGHT = 1007;
	static const int32_t F1 = 1008;
	static const int32_t F2 = 1009;
	static const int32_t F3 = 1010;
	static const int32_t F4 = 1011;
	static const int32_t F5 = 1012;
	static const int32_t F6 = 1013;
	static const int32_t F7 = 1014;
	static const int32_t F8 = 1015;
	static const int32_t F9 = 1016;
	static const int32_t F10 = 1017;
	static const int32_t F11 = 1018;
	static const int32_t F12 = 1019;
	static const int32_t PRINT_SCREEN = 1020;
	static const int32_t SCROLL_LOCK = 1021;
	static const int32_t CAPS_LOCK = 1022;
	static const int32_t NUM_LOCK = 1023;
	static const int32_t PAUSE = 1024;
	static const int32_t INSERT = 1025;
	static const int32_t ENTER = ((char16_t)10);
	static const int32_t BACK_SPACE = ((char16_t)8);
	static const int32_t TAB = ((char16_t)9);
	static const int32_t ESCAPE = 27;
	static const int32_t DELETE = 127;
	static const int32_t WINDOW_EVENT = 200;
	static const int32_t WINDOW_DESTROY = 201; // 1 + WINDOW_EVENT
	static const int32_t WINDOW_EXPOSE = 202; // 2 + WINDOW_EVENT
	static const int32_t WINDOW_ICONIFY = 203; // 3 + WINDOW_EVENT
	static const int32_t WINDOW_DEICONIFY = 204; // 4 + WINDOW_EVENT
	static const int32_t WINDOW_MOVED = 205; // 5 + WINDOW_EVENT
	static const int32_t KEY_EVENT = 400;
	static const int32_t KEY_PRESS = 401; // 1 + KEY_EVENT
	static const int32_t KEY_RELEASE = 402; // 2 + KEY_EVENT
	static const int32_t KEY_ACTION = 403; // 3 + KEY_EVENT
	static const int32_t KEY_ACTION_RELEASE = 404; // 4 + KEY_EVENT
	static const int32_t MOUSE_EVENT = 500;
	static const int32_t MOUSE_DOWN = 501; // 1 + MOUSE_EVENT
	static const int32_t MOUSE_UP = 502; // 2 + MOUSE_EVENT
	static const int32_t MOUSE_MOVE = 503; // 3 + MOUSE_EVENT
	static const int32_t MOUSE_ENTER = 504; // 4 + MOUSE_EVENT
	static const int32_t MOUSE_EXIT = 505; // 5 + MOUSE_EVENT
	static const int32_t MOUSE_DRAG = 506; // 6 + MOUSE_EVENT
	static const int32_t SCROLL_EVENT = 600;
	static const int32_t SCROLL_LINE_UP = 601; // 1 + SCROLL_EVENT
	static const int32_t SCROLL_LINE_DOWN = 602; // 2 + SCROLL_EVENT
	static const int32_t SCROLL_PAGE_UP = 603; // 3 + SCROLL_EVENT
	static const int32_t SCROLL_PAGE_DOWN = 604; // 4 + SCROLL_EVENT
	static const int32_t SCROLL_ABSOLUTE = 605; // 5 + SCROLL_EVENT
	static const int32_t SCROLL_BEGIN = 606; // 6 + SCROLL_EVENT
	static const int32_t SCROLL_END = 607; // 7 + SCROLL_EVENT
	static const int32_t LIST_EVENT = 700;
	static const int32_t LIST_SELECT = 701; // 1 + LIST_EVENT
	static const int32_t LIST_DESELECT = 702; // 2 + LIST_EVENT
	static const int32_t MISC_EVENT = 1000;
	static const int32_t ACTION_EVENT = 1001; // 1 + MISC_EVENT
	static const int32_t LOAD_FILE = 1002; // 2 + MISC_EVENT
	static const int32_t SAVE_FILE = 1003; // 3 + MISC_EVENT
	static const int32_t GOT_FOCUS = 1004; // 4 + MISC_EVENT
	static const int32_t LOST_FOCUS = 1005; // 5 + MISC_EVENT
	$Object* target = nullptr;
	int64_t when = 0;
	int32_t id = 0;
	int32_t x = 0;
	int32_t y = 0;
	int32_t key = 0;
	int32_t modifiers = 0;
	int32_t clickCount = 0;
	$Object* arg = nullptr;
	::java::awt::Event* evt = nullptr;
	static $Array<int32_t, 2>* actionKeyCodes;
	bool consumed = false;
	static const int64_t serialVersionUID = (int64_t)0x4C2C91F0D476797F;
};

	} // awt
} // java

#pragma pop_macro("ACTION_EVENT")
#pragma pop_macro("ALT_MASK")
#pragma pop_macro("BACK_SPACE")
#pragma pop_macro("CAPS_LOCK")
#pragma pop_macro("CTRL_MASK")
#pragma pop_macro("DELETE")
#pragma pop_macro("DOWN")
#pragma pop_macro("END")
#pragma pop_macro("ENTER")
#pragma pop_macro("ESCAPE")
#pragma pop_macro("GOT_FOCUS")
#pragma pop_macro("HOME")
#pragma pop_macro("INSERT")
#pragma pop_macro("KEY_ACTION")
#pragma pop_macro("KEY_ACTION_RELEASE")
#pragma pop_macro("KEY_EVENT")
#pragma pop_macro("KEY_PRESS")
#pragma pop_macro("KEY_RELEASE")
#pragma pop_macro("LEFT")
#pragma pop_macro("LIST_DESELECT")
#pragma pop_macro("LIST_EVENT")
#pragma pop_macro("LIST_SELECT")
#pragma pop_macro("LOAD_FILE")
#pragma pop_macro("LOST_FOCUS")
#pragma pop_macro("META_MASK")
#pragma pop_macro("MISC_EVENT")
#pragma pop_macro("MOUSE_DOWN")
#pragma pop_macro("MOUSE_DRAG")
#pragma pop_macro("MOUSE_ENTER")
#pragma pop_macro("MOUSE_EVENT")
#pragma pop_macro("MOUSE_EXIT")
#pragma pop_macro("MOUSE_MOVE")
#pragma pop_macro("MOUSE_UP")
#pragma pop_macro("NUM_LOCK")
#pragma pop_macro("PAUSE")
#pragma pop_macro("PGDN")
#pragma pop_macro("PGUP")
#pragma pop_macro("PRINT_SCREEN")
#pragma pop_macro("RIGHT")
#pragma pop_macro("SAVE_FILE")
#pragma pop_macro("SCROLL_ABSOLUTE")
#pragma pop_macro("SCROLL_BEGIN")
#pragma pop_macro("SCROLL_END")
#pragma pop_macro("SCROLL_EVENT")
#pragma pop_macro("SCROLL_LINE_DOWN")
#pragma pop_macro("SCROLL_LINE_UP")
#pragma pop_macro("SCROLL_LOCK")
#pragma pop_macro("SCROLL_PAGE_DOWN")
#pragma pop_macro("SCROLL_PAGE_UP")
#pragma pop_macro("SHIFT_MASK")
#pragma pop_macro("TAB")
#pragma pop_macro("UP")
#pragma pop_macro("WINDOW_DEICONIFY")
#pragma pop_macro("WINDOW_DESTROY")
#pragma pop_macro("WINDOW_EVENT")
#pragma pop_macro("WINDOW_EXPOSE")
#pragma pop_macro("WINDOW_ICONIFY")
#pragma pop_macro("WINDOW_MOVED")

#endif // _java_awt_Event_h_