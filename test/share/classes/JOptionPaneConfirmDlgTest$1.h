#ifndef _JOptionPaneConfirmDlgTest$1_h_
#define _JOptionPaneConfirmDlgTest$1_h_
//$ class JOptionPaneConfirmDlgTest$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class JOptionPaneConfirmDlgTest;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class JOptionPaneConfirmDlgTest$1 : public ::java::awt::event::ActionListener {
	$class(JOptionPaneConfirmDlgTest$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	JOptionPaneConfirmDlgTest$1();
	void init$(::JOptionPaneConfirmDlgTest* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::JOptionPaneConfirmDlgTest* this$0 = nullptr;
};

#endif // _JOptionPaneConfirmDlgTest$1_h_