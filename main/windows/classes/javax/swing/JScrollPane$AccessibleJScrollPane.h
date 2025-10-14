#ifndef _javax_swing_JScrollPane$AccessibleJScrollPane_h_
#define _javax_swing_JScrollPane$AccessibleJScrollPane_h_
//$ class javax.swing.JScrollPane$AccessibleJScrollPane
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.swing.event.ChangeListener,java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/event/ChangeListener.h>

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
		class JScrollBar;
		class JScrollPane;
		class JViewport;
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

class $export JScrollPane$AccessibleJScrollPane : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::swing::event::ChangeListener, public ::java::beans::PropertyChangeListener {
	$class(JScrollPane$AccessibleJScrollPane, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::swing::event::ChangeListener, ::java::beans::PropertyChangeListener)
public:
	JScrollPane$AccessibleJScrollPane();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JScrollPane* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void resetViewPort();
	virtual void setScrollBarRelations(::javax::swing::JScrollBar* scrollBar);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JScrollPane* this$0 = nullptr;
	::javax::swing::JViewport* viewPort = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JScrollPane$AccessibleJScrollPane_h_