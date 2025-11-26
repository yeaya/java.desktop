#ifndef _JTableScrollTest_h_
#define _JTableScrollTest_h_
//$ class JTableScrollTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JDialog;
		class JFrame;
	}
}

class $export JTableScrollTest : public ::java::lang::Object {
	$class(JTableScrollTest, 0, ::java::lang::Object)
public:
	JTableScrollTest();
	void init$();
	static void createTable();
	static void doTest(::java::lang::Runnable* action);
	static void lambda$doTest$0(::javax::swing::JDialog* dialog, ::java::awt::event::ActionEvent* e);
	static void lambda$doTest$1(::javax::swing::JDialog* dialog, ::java::awt::event::ActionEvent* e);
	static void lambda$doTest$2(::javax::swing::JButton* testButton, ::java::lang::Runnable* action, ::javax::swing::JButton* passButton, ::javax::swing::JButton* failButton, ::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
};

#endif // _JTableScrollTest_h_