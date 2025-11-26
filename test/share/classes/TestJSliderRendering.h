#ifndef _TestJSliderRendering_h_
#define _TestJSliderRendering_h_
//$ class TestJSliderRendering
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
		class JSlider;
	}
}

class $export TestJSliderRendering : public ::java::lang::Object {
	$class(TestJSliderRendering, 0, ::java::lang::Object)
public:
	TestJSliderRendering();
	void init$();
	static void blockTillDisplayed(::java::awt::Component* comp);
	static int32_t getMaxColorDiff(::java::awt::Color* c1, ::java::awt::Color* c2);
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JSlider* slider;
	static ::java::awt::Point* point;
	static ::java::awt::Rectangle* rect;
	static ::java::awt::Robot* robot;
	static $String* GTK_LAF_CLASS;
	static int32_t minColorDifference;
};

#pragma pop_macro("GTK_LAF_CLASS")

#endif // _TestJSliderRendering_h_