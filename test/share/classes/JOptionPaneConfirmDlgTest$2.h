#ifndef _JOptionPaneConfirmDlgTest$2_h_
#define _JOptionPaneConfirmDlgTest$2_h_
//$ class JOptionPaneConfirmDlgTest$2
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

class JOptionPaneConfirmDlgTest$2 : public ::java::awt::event::ActionListener {
	$class(JOptionPaneConfirmDlgTest$2, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	JOptionPaneConfirmDlgTest$2();
	void init$(::JOptionPaneConfirmDlgTest* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::JOptionPaneConfirmDlgTest* this$0 = nullptr;
};

#endif // _JOptionPaneConfirmDlgTest$2_h_