#ifndef _TestJProgressBarHighlightColor_h_
#define _TestJProgressBarHighlightColor_h_
//$ class TestJProgressBarHighlightColor
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GTK_LAF_CLASS")
#undef GTK_LAF_CLASS

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Point;
		class Rectangle;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JProgressBar;
	}
}

class $export TestJProgressBarHighlightColor : public ::java::lang::Object {
	$class(TestJProgressBarHighlightColor, 0, ::java::lang::Object)
public:
	TestJProgressBarHighlightColor();
	void init$();
	static void blockTillDisplayed(::java::awt::Component* comp);
	static int32_t getMaxColorDiff(::java::awt::Color* c1, ::java::awt::Color* c2);
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JProgressBar* progressBar;
	static ::java::awt::Point* point;
	static ::java::awt::Rectangle* rect;
	static ::java::awt::Robot* robot;
	static $String* GTK_LAF_CLASS;
	static int32_t minColorDifference;
};

#pragma pop_macro("GTK_LAF_CLASS")

#endif // _TestJProgressBarHighlightColor_h_