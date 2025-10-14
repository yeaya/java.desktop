#ifndef _bug7146377_h_
#define _bug7146377_h_
//$ class bug7146377
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $export bug7146377 : public ::java::lang::Object {
	$class(bug7146377, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug7146377();
	void init$();
	static void check($String* methodName, bool newValue, bool oldValue, $String* eventAsStr);
	static void checkEvent(::java::awt::event::MouseEvent* e);
	static $String* eventToString(::java::awt::event::MouseEvent* e);
	static void main($StringArray* args);
	static bool oldIsLeftMouseButton(::java::awt::event::MouseEvent* e);
	static bool oldIsMiddleMouseButton(::java::awt::event::MouseEvent* e);
	static bool oldIsRightMouseButton(::java::awt::event::MouseEvent* e);
	static ::javax::swing::JLabel* label;
	static ::javax::swing::JFrame* frame;
	static $volatile(::java::awt::Point*) point;
};

#endif // _bug7146377_h_