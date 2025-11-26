#ifndef _CaretFloatingPointAPITest_h_
#define _CaretFloatingPointAPITest_h_
//$ class CaretFloatingPointAPITest
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

class $export CaretFloatingPointAPITest : public ::java::lang::Object {
	$class(CaretFloatingPointAPITest, 0, ::java::lang::Object)
public:
	CaretFloatingPointAPITest();
	void init$();
	static void createUI();
	static void lambda$createUI$0(::javax::swing::JFrame* mainFrame, ::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static $volatile(bool) testResult;
	static $volatile(::java::util::concurrent::CountDownLatch*) countDownLatch;
	static $String* INSTRUCTIONS;
};

#pragma pop_macro("INSTRUCTIONS")

#endif // _CaretFloatingPointAPITest_h_