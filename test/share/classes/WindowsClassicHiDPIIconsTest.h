#ifndef _WindowsClassicHiDPIIconsTest_h_
#define _WindowsClassicHiDPIIconsTest_h_
//$ class WindowsClassicHiDPIIconsTest
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

class $export WindowsClassicHiDPIIconsTest : public ::java::lang::Object {
	$class(WindowsClassicHiDPIIconsTest, 0, ::java::lang::Object)
public:
	WindowsClassicHiDPIIconsTest();
	void init$();
	static ::javax::swing::JPanel* createJPanel();
	static void createUI();
	static void lambda$createUI$0(::javax::swing::JFrame* mainFrame, ::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static $volatile(bool) testResult;
	static $volatile(::java::util::concurrent::CountDownLatch*) countDownLatch;
	static $String* INSTRUCTIONS;
};

#pragma pop_macro("INSTRUCTIONS")

#endif // _WindowsClassicHiDPIIconsTest_h_