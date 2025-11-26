#ifndef _TooMuchWheelRotationEventsTest_h_
#define _TooMuchWheelRotationEventsTest_h_
//$ class TooMuchWheelRotationEventsTest
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
		class JPanel;
	}
}

class $export TooMuchWheelRotationEventsTest : public ::java::lang::Object {
	$class(TooMuchWheelRotationEventsTest, 0, ::java::lang::Object)
public:
	TooMuchWheelRotationEventsTest();
	void init$();
	static ::javax::swing::JPanel* createTestPanel();
	static void createUI();
	static $String* getLongString();
	static $String* getLongString(char16_t c1, char16_t c2);
	static void lambda$createUI$0(::javax::swing::JFrame* mainFrame, ::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static $volatile(bool) testResult;
	static $volatile(::java::util::concurrent::CountDownLatch*) countDownLatch;
	static $String* INSTRUCTIONS;
};

#pragma pop_macro("INSTRUCTIONS")

#endif // _TooMuchWheelRotationEventsTest_h_