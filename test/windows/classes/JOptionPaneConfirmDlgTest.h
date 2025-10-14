#ifndef _JOptionPaneConfirmDlgTest_h_
#define _JOptionPaneConfirmDlgTest_h_
//$ class JOptionPaneConfirmDlgTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JInternalFrame;
	}
}

class $export JOptionPaneConfirmDlgTest : public ::java::lang::Object {
	$class(JOptionPaneConfirmDlgTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JOptionPaneConfirmDlgTest();
	void init$();
	virtual void createGUI();
	void lambda$new$0();
	void lambda$new$1();
	static void main($StringArray* args);
	::javax::swing::JInternalFrame* textFrame = nullptr;
	::javax::swing::JFrame* f = nullptr;
};

#endif // _JOptionPaneConfirmDlgTest_h_