#ifndef _javax_swing_plaf_basic_BasicMenuBarUI$Handler_h_
#define _javax_swing_plaf_basic_BasicMenuBarUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicMenuBarUI$Handler
//$ extends javax.swing.event.ChangeListener
//$ implements java.awt.event.ContainerListener

#include <java/awt/event/ContainerListener.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ContainerEvent;
		}
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
				class BasicMenuBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicMenuBarUI$Handler : public ::javax::swing::event::ChangeListener, public ::java::awt::event::ContainerListener {
	$class(BasicMenuBarUI$Handler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::awt::event::ContainerListener)
public:
	BasicMenuBarUI$Handler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicMenuBarUI* this$0);
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicMenuBarUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicMenuBarUI$Handler_h_