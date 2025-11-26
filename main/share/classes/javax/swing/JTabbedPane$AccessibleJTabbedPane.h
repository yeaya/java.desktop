#ifndef _javax_swing_JTabbedPane$AccessibleJTabbedPane_h_
#define _javax_swing_JTabbedPane$AccessibleJTabbedPane_h_
//$ class javax.swing.JTabbedPane$AccessibleJTabbedPane
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.accessibility.AccessibleSelection,javax.swing.event.ChangeListener

#include <javax/accessibility/AccessibleSelection.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JTabbedPane;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace javax {
	namespace swing {

class $export JTabbedPane$AccessibleJTabbedPane : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleSelection, public ::javax::swing::event::ChangeListener {
	$class(JTabbedPane$AccessibleJTabbedPane, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleSelection, ::javax::swing::event::ChangeListener)
public:
	JTabbedPane$AccessibleJTabbedPane();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JTabbedPane* this$0);
	virtual void addAccessibleSelection(int32_t i) override;
	virtual void clearAccessibleSelection() override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleSelection* getAccessibleSelection() override;
	virtual ::javax::accessibility::Accessible* getAccessibleSelection(int32_t i) override;
	virtual int32_t getAccessibleSelectionCount() override;
	virtual bool isAccessibleChildSelected(int32_t i) override;
	virtual void removeAccessibleSelection(int32_t i) override;
	virtual void selectAllAccessibleSelection() override;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JTabbedPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTabbedPane$AccessibleJTabbedPane_h_