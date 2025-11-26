#ifndef _javax_swing_JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener_h_
#define _javax_swing_JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener_h_
//$ class javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener
//$ extends javax.swing.event.ListSelectionListener

#include <javax/swing/event/ListSelectionListener.h>

namespace javax {
	namespace swing {
		class JComboBox$AccessibleJComboBox;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionEvent;
		}
	}
}

namespace javax {
	namespace swing {

class JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener : public ::javax::swing::event::ListSelectionListener {
	$class(JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener, $NO_CLASS_INIT, ::javax::swing::event::ListSelectionListener)
public:
	JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener();
	void init$(::javax::swing::JComboBox$AccessibleJComboBox* this$1);
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::javax::swing::JComboBox$AccessibleJComboBox* this$1 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener_h_