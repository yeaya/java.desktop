#ifndef _TestJSpinnerPressUnpress_h_
#define _TestJSpinnerPressUnpress_h_
//$ class TestJSpinnerPressUnpress
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GTK_LAF_CLASS")
#undef GTK_LAF_CLASS
#pragma push_macro("INSTRUCTIONS")
#undef INSTRUCTIONS

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
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
	}
}

class $export TestJSpinnerPressUnpress : public ::java::lang::Object {
	$class(TestJSpinnerPressUnpress, 0, ::java::lang::Object)
public:
	TestJSpinnerPressUnpress();
	void init$();
	static void createUI();
	static void lambda$createUI$0(::java::awt::event::ActionEvent* e);
	static void lambda$createUI$1(::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static ::javax::swing::JFrame* mainFrame;
	static $volatile(bool) testResult;
	static $volatile(::java::util::concurrent::CountDownLatch*) countDownLatch;
	static $String* GTK_LAF_CLASS;
	static $String* INSTRUCTIONS;
};

#pragma pop_macro("GTK_LAF_CLASS")
#pragma pop_macro("INSTRUCTIONS")

#endif // _TestJSpinnerPressUnpress_h_