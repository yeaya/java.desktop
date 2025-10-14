#ifndef _ButtonGradientTest_h_
#define _ButtonGradientTest_h_
//$ class ButtonGradientTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class Rectangle;
		class Robot;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
	}
}

class $export ButtonGradientTest : public ::java::lang::Object {
	$class(ButtonGradientTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ButtonGradientTest();
	void init$();
	static void createAndShowGUI();
	static ::java::awt::Rectangle* getButtonBounds();
	static ::java::awt::Color* getGradientColor(int32_t w, int32_t h, ::java::awt::Color* c1, ::java::awt::Color* c2);
	static void getImageFromRobot();
	static void lambda$getButtonBounds$1($Array<::java::awt::Rectangle>* rectangles);
	static void lambda$main$0();
	static void main($StringArray* args);
	static bool similar(int32_t i1, int32_t i2);
	static bool similarColors(::java::awt::Color* c1, ::java::awt::Color* c2);
	static void testGradient();
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JButton* button;
	static ::java::util::List* images;
	static ::java::awt::Robot* robot;
};

#endif // _ButtonGradientTest_h_