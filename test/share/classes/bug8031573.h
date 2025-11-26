#ifndef _bug8031573_h_
#define _bug8031573_h_
//$ class bug8031573
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

class $export bug8031573 : public ::java::lang::Object {
	$class(bug8031573, 0, ::java::lang::Object)
public:
	bug8031573();
	void init$();
	static void createTestGUI();
	static void lambda$createTestGUI$2(::java::awt::event::ActionEvent* e);
	static void lambda$createTestGUI$3(::java::awt::event::ActionEvent* e);
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static $volatile(::javax::swing::JFrame*) frame;
	static $volatile(bool) passed;
	static ::java::util::concurrent::CountDownLatch* latch;
	static $String* INSTRUCTIONS;
};

#pragma pop_macro("INSTRUCTIONS")

#endif // _bug8031573_h_