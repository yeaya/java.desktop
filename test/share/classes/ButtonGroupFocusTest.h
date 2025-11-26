#ifndef _ButtonGroupFocusTest_h_
#define _ButtonGroupFocusTest_h_
//$ class ButtonGroupFocusTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JRadioButton;
	}
}

class $export ButtonGroupFocusTest : public ::java::lang::Object {
	$class(ButtonGroupFocusTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ButtonGroupFocusTest();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$main$2();
	static void lambda$main$3();
	static void main($StringArray* args);
	static ::javax::swing::JRadioButton* button1;
	static ::javax::swing::JRadioButton* button2;
	static ::javax::swing::JRadioButton* button3;
	static ::javax::swing::JRadioButton* button4;
	static ::javax::swing::JRadioButton* button5;
	static ::java::awt::Robot* robot;
	static ::javax::swing::JFrame* frame;
};

#endif // _ButtonGroupFocusTest_h_