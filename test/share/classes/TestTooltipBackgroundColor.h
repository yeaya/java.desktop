#ifndef _TestTooltipBackgroundColor_h_
#define _TestTooltipBackgroundColor_h_
//$ class TestTooltipBackgroundColor
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
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JLabel;
	}
}

class $export TestTooltipBackgroundColor : public ::java::lang::Object {
	$class(TestTooltipBackgroundColor, 0, ::java::lang::Object)
public:
	TestTooltipBackgroundColor();
	void init$();
	static void blockTillDisplayed(::java::awt::Component* comp);
	static ::java::awt::Component* findSubComponent(::java::awt::Component* parent, $String* className);
	static int32_t getMaxColorDiff(::java::awt::Color* c1, ::java::awt::Color* c2);
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JLabel* label;
	static ::java::awt::Point* point;
	static ::java::awt::Rectangle* rect;
	static ::java::awt::Robot* robot;
	static $String* GTK_LAF_CLASS;
	static int32_t minColorDifference;
	static ::java::util::concurrent::CountDownLatch* latch;
};

#pragma pop_macro("GTK_LAF_CLASS")

#endif // _TestTooltipBackgroundColor_h_