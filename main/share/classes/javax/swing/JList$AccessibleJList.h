#ifndef _javax_swing_JList$AccessibleJList_h_
#define _javax_swing_JList$AccessibleJList_h_
//$ class javax.swing.JList$AccessibleJList
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.accessibility.AccessibleSelection,java.beans.PropertyChangeListener,javax.swing.event.ListSelectionListener,javax.swing.event.ListDataListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/event/ListSelectionListener.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleRole;
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
			class ListSelectionEvent;
		}
	}
}

namespace javax {
	namespace swing {

class $export JList$AccessibleJList : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleSelection, public ::java::beans::PropertyChangeListener, public ::javax::swing::event::ListSelectionListener, public ::javax::swing::event::ListDataListener {
	$class(JList$AccessibleJList, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleSelection, ::java::beans::PropertyChangeListener, ::javax::swing::event::ListSelectionListener, ::javax::swing::event::ListDataListener)
public:
	JList$AccessibleJList();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JList* this$0);
	virtual void addAccessibleSelection(int32_t i) override;
	virtual void clearAccessibleSelection() override;
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleSelection* getAccessibleSelection() override;
	virtual ::javax::accessibility::Accessible* getAccessibleSelection(int32_t i) override;
	virtual int32_t getAccessibleSelectionCount() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) override;
	virtual bool isAccessibleChildSelected(int32_t i) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void removeAccessibleSelection(int32_t i) override;
	virtual void selectAllAccessibleSelection() override;
	virtual $String* toString() override;
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::javax::swing::JList* this$0 = nullptr;
	int32_t leadSelectionIndex = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JList$AccessibleJList_h_