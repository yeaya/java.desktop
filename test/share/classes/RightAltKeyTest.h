#ifndef _RightAltKeyTest_h_
#define _RightAltKeyTest_h_
//$ class RightAltKeyTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTabbedPane;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

class $export RightAltKeyTest : public ::java::lang::Object {
	$class(RightAltKeyTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RightAltKeyTest();
	void init$();
	virtual void disposeUI();
	virtual void errLog($String* componentName, $String* lookAndFeel);
	void lambda$testJMenuItem$0(::java::awt::event::ActionEvent* e);
	void lambda$testJTabbedPane$1(::javax::swing::JTabbedPane* tp, ::javax::swing::event::ChangeEvent* e);
	static void main($StringArray* args);
	virtual void test();
	virtual void testJMenu();
	virtual void testJMenuItem();
	virtual void testJOptionPane();
	virtual void testJTabbedPane();
	virtual void testJTextArea();
	bool action = false;
	::javax::swing::JFrame* frame = nullptr;
};

#endif // _RightAltKeyTest_h_