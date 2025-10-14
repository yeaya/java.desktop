#ifndef _TestJFileChooserNewFolderAction_h_
#define _TestJFileChooserNewFolderAction_h_
//$ class TestJFileChooserNewFolderAction
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

class $export TestJFileChooserNewFolderAction : public ::java::lang::Object {
	$class(TestJFileChooserNewFolderAction, 0, ::java::lang::Object)
public:
	TestJFileChooserNewFolderAction();
	void init$();
	static void createInstructionUI();
	static void createTestUI();
	static void disposeUI();
	static void lambda$createInstructionUI$0(::java::awt::event::ActionEvent* e);
	static void lambda$createInstructionUI$1(::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static ::javax::swing::JFrame* instructionFrame;
	static $String* lafName;
	static $volatile(bool) testPassed;
	static $volatile(::java::util::concurrent::CountDownLatch*) countDownLatch;
	static $String* INSTRUCTIONS;
};

#pragma pop_macro("INSTRUCTIONS")

#endif // _TestJFileChooserNewFolderAction_h_