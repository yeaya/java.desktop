#ifndef _javax_swing_JPopupMenu$AccessibleJPopupMenu_h_
#define _javax_swing_JPopupMenu$AccessibleJPopupMenu_h_
//$ class javax.swing.JPopupMenu$AccessibleJPopupMenu
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JPopupMenu;
	}
}

namespace javax {
	namespace swing {

class $export JPopupMenu$AccessibleJPopupMenu : public ::javax::swing::JComponent$AccessibleJComponent, public ::java::beans::PropertyChangeListener {
	$class(JPopupMenu$AccessibleJPopupMenu, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::java::beans::PropertyChangeListener)
public:
	JPopupMenu$AccessibleJPopupMenu();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JPopupMenu* this$0);
	void fireActiveDescendant();
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	void handlePopupIsVisibleEvent(bool visible);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JPopupMenu* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JPopupMenu$AccessibleJPopupMenu_h_