#ifndef _DefaultComboBoxModelAddAllElementsTest$MyListDataListener_h_
#define _DefaultComboBoxModelAddAllElementsTest$MyListDataListener_h_
//$ class DefaultComboBoxModelAddAllElementsTest$MyListDataListener
//$ extends javax.swing.event.ListDataListener

#include <javax/swing/event/ListDataListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
		}
	}
}

class DefaultComboBoxModelAddAllElementsTest$MyListDataListener : public ::javax::swing::event::ListDataListener {
	$class(DefaultComboBoxModelAddAllElementsTest$MyListDataListener, $NO_CLASS_INIT, ::javax::swing::event::ListDataListener)
public:
	DefaultComboBoxModelAddAllElementsTest$MyListDataListener();
	void init$();
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) override;
};

#endif // _DefaultComboBoxModelAddAllElementsTest$MyListDataListener_h_