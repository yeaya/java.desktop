#ifndef _javax_swing_JEditorPane$JEditorPaneAccessibleHypertextSupport$1_h_
#define _javax_swing_JEditorPane$JEditorPaneAccessibleHypertextSupport$1_h_
//$ class javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$1
//$ extends javax.swing.event.DocumentListener

#include <javax/swing/event/DocumentListener.h>

namespace javax {
	namespace swing {
		class JEditorPane;
		class JEditorPane$JEditorPaneAccessibleHypertextSupport;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}

namespace javax {
	namespace swing {

class JEditorPane$JEditorPaneAccessibleHypertextSupport$1 : public ::javax::swing::event::DocumentListener {
	$class(JEditorPane$JEditorPaneAccessibleHypertextSupport$1, $NO_CLASS_INIT, ::javax::swing::event::DocumentListener)
public:
	JEditorPane$JEditorPaneAccessibleHypertextSupport$1();
	void init$(::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport* this$1, ::javax::swing::JEditorPane* val$this$0);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* theEvent) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* theEvent) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* theEvent) override;
	::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport* this$1 = nullptr;
	::javax::swing::JEditorPane* val$this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$JEditorPaneAccessibleHypertextSupport$1_h_