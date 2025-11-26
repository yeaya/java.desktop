#ifndef _javax_swing_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener_h_
#define _javax_swing_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener_h_
//$ class javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener
//$ extends javax.swing.event.PopupMenuListener

#include <javax/swing/event/PopupMenuListener.h>

namespace javax {
	namespace swing {
		class JComboBox$AccessibleJComboBox;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class PopupMenuEvent;
		}
	}
}

namespace javax {
	namespace swing {

class JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener : public ::javax::swing::event::PopupMenuListener {
	$class(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener, $NO_CLASS_INIT, ::javax::swing::event::PopupMenuListener)
public:
	JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener();
	void init$(::javax::swing::JComboBox$AccessibleJComboBox* this$1);
	virtual void popupMenuCanceled(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeInvisible(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeVisible(::javax::swing::event::PopupMenuEvent* e) override;
	::javax::swing::JComboBox$AccessibleJComboBox* this$1 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener_h_