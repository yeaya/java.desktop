#ifndef _TestSelectedTextBackgroundColor_h_
#define _TestSelectedTextBackgroundColor_h_
//$ class TestSelectedTextBackgroundColor
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
		class JFormattedTextField;
		class JFrame;
		class JSpinner;
	}
}

class $export TestSelectedTextBackgroundColor : public ::java::lang::Object {
	$class(TestSelectedTextBackgroundColor, 0, ::java::lang::Object)
public:
	TestSelectedTextBackgroundColor();
	void init$();
	static void blockTillDisplayed(::java::awt::Component* comp);
	static int32_t getMaxColorDiff(::java::awt::Color* c1, ::java::awt::Color* c2);
	static ::javax::swing::JFormattedTextField* getTextField(::javax::swing::JSpinner* spinner);
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JSpinner* listModelSpinner;
	static ::java::awt::Point* point;
	static ::java::awt::Rectangle* rect;
	static ::java::awt::Robot* robot;
	static $String* GTK_LAF_CLASS;
	static int32_t minColorDifference;
};

#pragma pop_macro("GTK_LAF_CLASS")

#endif // _TestSelectedTextBackgroundColor_h_