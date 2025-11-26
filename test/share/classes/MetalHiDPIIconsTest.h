#ifndef _MetalHiDPIIconsTest_h_
#define _MetalHiDPIIconsTest_h_
//$ class MetalHiDPIIconsTest
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

class $export MetalHiDPIIconsTest : public ::java::lang::Object {
	$class(MetalHiDPIIconsTest, 0, ::java::lang::Object)
public:
	MetalHiDPIIconsTest();
	void init$();
	static void createUI();
	static void lambda$createUI$0(::javax::swing::JFrame* mainFrame, ::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static $volatile(bool) testResult;
	static $volatile(::java::util::concurrent::CountDownLatch*) countDownLatch;
	static $String* INSTRUCTIONS;
};

#pragma pop_macro("INSTRUCTIONS")

#endif // _MetalHiDPIIconsTest_h_