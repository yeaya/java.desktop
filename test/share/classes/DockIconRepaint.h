#ifndef _DockIconRepaint_h_
#define _DockIconRepaint_h_
//$ class DockIconRepaint
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class Point;
		class Rectangle;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JInternalFrame;
	}
}

class $export DockIconRepaint : public ::java::lang::Object {
	$class(DockIconRepaint, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DockIconRepaint();
	void init$();
	static void createUI();
	static void lambda$test$0();
	static void lambda$test$1();
	static void main($StringArray* args);
	static void test();
	static $volatile(::java::awt::Color*) color;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JInternalFrame* jif;
	static ::java::awt::Robot* robot;
	static ::java::awt::Point* iconLoc;
	static ::java::awt::Rectangle* iconBounds;
};

#endif // _DockIconRepaint_h_