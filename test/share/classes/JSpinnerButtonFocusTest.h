#ifndef _JSpinnerButtonFocusTest_h_
#define _JSpinnerButtonFocusTest_h_
//$ class JSpinnerButtonFocusTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
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
		class JSpinner;
		class JSpinner$DefaultEditor;
	}
}

class $export JSpinnerButtonFocusTest : public ::java::lang::Object {
	$class(JSpinnerButtonFocusTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JSpinnerButtonFocusTest();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$main$2();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::java::awt::Robot* robot;
	static ::javax::swing::JSpinner* spinner1;
	static ::javax::swing::JSpinner* spinner2;
	static ::javax::swing::JSpinner$DefaultEditor* editor1;
	static ::javax::swing::JSpinner$DefaultEditor* editor2;
	static $volatile(bool) isJTextFieldFocused;
	static $volatile(::java::util::concurrent::CountDownLatch*) latch1;
};

#endif // _JSpinnerButtonFocusTest_h_