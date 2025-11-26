#ifndef _TestJTextPaneBackgroundColor_h_
#define _TestJTextPaneBackgroundColor_h_
//$ class TestJTextPaneBackgroundColor
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GTK_LAF_CLASS")
#undef GTK_LAF_CLASS

namespace java {
	namespace awt {
		class Component;
		class Point;
		class Rectangle;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTextPane;
	}
}

class $export TestJTextPaneBackgroundColor : public ::java::lang::Object {
	$class(TestJTextPaneBackgroundColor, 0, ::java::lang::Object)
public:
	TestJTextPaneBackgroundColor();
	void init$();
	static void blockTillDisplayed(::java::awt::Component* comp);
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextPane* textPane;
	static ::java::awt::Point* point;
	static ::java::awt::Rectangle* rect;
	static ::java::awt::Robot* robot;
	static $String* GTK_LAF_CLASS;
};

#pragma pop_macro("GTK_LAF_CLASS")

#endif // _TestJTextPaneBackgroundColor_h_