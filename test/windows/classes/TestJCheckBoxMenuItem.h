#ifndef _TestJCheckBoxMenuItem_h_
#define _TestJCheckBoxMenuItem_h_
//$ class TestJCheckBoxMenuItem
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $export TestJCheckBoxMenuItem : public ::java::lang::Object {
	$class(TestJCheckBoxMenuItem, 0, ::java::lang::Object)
public:
	TestJCheckBoxMenuItem();
	void init$();
	static void createInstructionUI();
	static void createTestUI();
	static void disposeUI();
	static void lambda$createInstructionUI$0(::java::awt::event::ActionEvent* e);
	static void lambda$createInstructionUI$1(::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static ::javax::swing::JFrame* instructionFrame;
	static ::javax::swing::JFrame* testFrame;
	static $volatile(bool) testResult;
	static $volatile(::java::util::concurrent::CountDownLatch*) countDownLatch;
	static $String* INSTRUCTIONS;
	static $String* synthStyleXML;
};

#pragma pop_macro("INSTRUCTIONS")

#endif // _TestJCheckBoxMenuItem_h_