#ifndef _javax_swing_plaf_basic_BasicSliderUI$Handler_h_
#define _javax_swing_plaf_basic_BasicSliderUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicSliderUI$Handler
//$ extends javax.swing.event.ChangeListener
//$ implements java.awt.event.ComponentListener,java.awt.event.FocusListener,java.beans.PropertyChangeListener

#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
			class FocusEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
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
		namespace plaf {
			namespace basic {
				class BasicSliderUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicSliderUI$Handler : public ::javax::swing::event::ChangeListener, public ::java::awt::event::ComponentListener, public ::java::awt::event::FocusListener, public ::java::beans::PropertyChangeListener {
	$class(BasicSliderUI$Handler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::awt::event::ComponentListener, ::java::awt::event::FocusListener, ::java::beans::PropertyChangeListener)
public:
	BasicSliderUI$Handler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicSliderUI* this$0);
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicSliderUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSliderUI$Handler_h_