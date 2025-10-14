#ifndef _PressedButtonRightClickTest_h_
#define _PressedButtonRightClickTest_h_
//$ class PressedButtonRightClickTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
	}
}

class $export PressedButtonRightClickTest : public ::java::lang::Object {
	$class(PressedButtonRightClickTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PressedButtonRightClickTest();
	void init$();
	static void constructTestUI();
	static void disposeTestUI();
	static void main($StringArray* args);
	static void test();
	static ::java::awt::Robot* testRobot;
	static ::javax::swing::JFrame* myFrame;
	static ::javax::swing::JButton* myButton;
};

#endif // _PressedButtonRightClickTest_h_