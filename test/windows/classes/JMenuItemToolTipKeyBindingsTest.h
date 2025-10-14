#ifndef _JMenuItemToolTipKeyBindingsTest_h_
#define _JMenuItemToolTipKeyBindingsTest_h_
//$ class JMenuItemToolTipKeyBindingsTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TIMEOUT")
#undef TIMEOUT

namespace java {
	namespace awt {
		class Dialog;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export JMenuItemToolTipKeyBindingsTest : public ::java::lang::Object {
	$class(JMenuItemToolTipKeyBindingsTest, 0, ::java::lang::Object)
public:
	JMenuItemToolTipKeyBindingsTest();
	void init$();
	static void completeTest();
	static void createAndShowGUI();
	static void lambda$main$0();
	static void main($StringArray* args);
	static void waitForCompleting();
	static const int64_t TIMEOUT = 300000; // 5 * 60 * 1000
	static ::java::util::concurrent::atomic::AtomicBoolean* testCompleted;
	static $volatile(bool) testResult;
	static ::java::awt::Dialog* controlDialog;
	static ::javax::swing::JFrame* testFrame;
	static $String* instructions;
};

#pragma pop_macro("TIMEOUT")

#endif // _JMenuItemToolTipKeyBindingsTest_h_