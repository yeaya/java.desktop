#ifndef _javax_swing_plaf_basic_BasicScrollBarUI$Handler_h_
#define _javax_swing_plaf_basic_BasicScrollBarUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicScrollBarUI$Handler
//$ extends java.awt.event.FocusListener
//$ implements java.beans.PropertyChangeListener

#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace awt {
		namespace event {
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
		namespace plaf {
			namespace basic {
				class BasicScrollBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicScrollBarUI$Handler : public ::java::awt::event::FocusListener, public ::java::beans::PropertyChangeListener {
	$class(BasicScrollBarUI$Handler, $NO_CLASS_INIT, ::java::awt::event::FocusListener, ::java::beans::PropertyChangeListener)
public:
	BasicScrollBarUI$Handler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicScrollBarUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicScrollBarUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicScrollBarUI$Handler_h_