#ifndef _javax_swing_plaf_basic_BasicScrollPaneUI$Handler_h_
#define _javax_swing_plaf_basic_BasicScrollPaneUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicScrollPaneUI$Handler
//$ extends javax.swing.event.ChangeListener
//$ implements java.beans.PropertyChangeListener,java.awt.event.MouseWheelListener

#include <java/awt/event/MouseWheelListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseWheelEvent;
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
		namespace plaf {
			namespace basic {
				class BasicScrollPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicScrollPaneUI$Handler : public ::javax::swing::event::ChangeListener, public ::java::beans::PropertyChangeListener, public ::java::awt::event::MouseWheelListener {
	$class(BasicScrollPaneUI$Handler, 0, ::javax::swing::event::ChangeListener, ::java::beans::PropertyChangeListener, ::java::awt::event::MouseWheelListener)
public:
	BasicScrollPaneUI$Handler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicScrollPaneUI* this$0);
	void hsbStateChanged(::javax::swing::JViewport* viewport, ::javax::swing::event::ChangeEvent* e);
	virtual void mouseWheelMoved(::java::awt::event::MouseWheelEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	void sbPropertyChange(::java::beans::PropertyChangeEvent* e);
	void scrollPanePropertyChange(::java::beans::PropertyChangeEvent* e);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	void vsbStateChanged(::javax::swing::JViewport* viewport, ::javax::swing::event::ChangeEvent* e);
	::javax::swing::plaf::basic::BasicScrollPaneUI* this$0 = nullptr;
	static bool $assertionsDisabled;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicScrollPaneUI$Handler_h_