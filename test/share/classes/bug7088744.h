#ifndef _bug7088744_h_
#define _bug7088744_h_
//$ class bug7088744
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUTTON_EVENTS_SEQUENCE")
#undef BUTTON_EVENTS_SEQUENCE
#pragma push_macro("MOUSE_CLICKED")
#undef MOUSE_CLICKED
#pragma push_macro("MOUSE_PRESSED")
#undef MOUSE_PRESSED
#pragma push_macro("MOUSE_RELEASED")
#undef MOUSE_RELEASED

namespace java {
	namespace awt {
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JLabel;
	}
}

class $export bug7088744 : public ::java::lang::Object {
	$class(bug7088744, 0, ::java::lang::Object)
public:
	bug7088744();
	void init$();
	static void main($StringArray* args);
	static void processEvent(int32_t eventType, ::java::awt::event::MouseEvent* e);
	static $volatile(::javax::swing::JLabel*) label;
	static $volatile(::javax::swing::JFrame*) frame;
	static $volatile(::java::awt::Point*) point;
	static const int32_t MOUSE_CLICKED = 1;
	static const int32_t MOUSE_PRESSED = 2;
	static const int32_t MOUSE_RELEASED = 3;
	static $Array<int32_t, 2>* BUTTON_EVENTS_SEQUENCE;
	static int32_t eventCount;
};

#pragma pop_macro("BUTTON_EVENTS_SEQUENCE")
#pragma pop_macro("MOUSE_CLICKED")
#pragma pop_macro("MOUSE_PRESSED")
#pragma pop_macro("MOUSE_RELEASED")

#endif // _bug7088744_h_