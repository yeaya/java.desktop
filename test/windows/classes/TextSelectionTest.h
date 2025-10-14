#ifndef _TextSelectionTest_h_
#define _TextSelectionTest_h_
//$ class TextSelectionTest
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

class $export TextSelectionTest : public ::java::lang::Object {
	$class(TextSelectionTest, 0, ::java::lang::Object)
public:
	TextSelectionTest();
	void init$();
	static void createAndShowGUI();
	static void lambda$createAndShowGUI$0(::javax::swing::JFrame* frame, ::java::awt::event::ActionEvent* e);
	static void lambda$createAndShowGUI$1(::javax::swing::JFrame* frame, ::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static $String* INSTRUCTIONS;
	static ::java::util::concurrent::CountDownLatch* latch;
	static $volatile(bool) passed;
};

#pragma pop_macro("INSTRUCTIONS")

#endif // _TextSelectionTest_h_