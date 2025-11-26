#ifndef _DefaultListModelAddAllTest$MyListDataListener_h_
#define _DefaultListModelAddAllTest$MyListDataListener_h_
//$ class DefaultListModelAddAllTest$MyListDataListener
//$ extends javax.swing.event.ListDataListener

#include <javax/swing/event/ListDataListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
		}
	}
}

class DefaultListModelAddAllTest$MyListDataListener : public ::javax::swing::event::ListDataListener {
	$class(DefaultListModelAddAllTest$MyListDataListener, $NO_CLASS_INIT, ::javax::swing::event::ListDataListener)
public:
	DefaultListModelAddAllTest$MyListDataListener();
	void init$();
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) override;
};

#endif // _DefaultListModelAddAllTest$MyListDataListener_h_