#ifndef _javax_swing_plaf_basic_BasicColorChooserUI$Handler_h_
#define _javax_swing_plaf_basic_BasicColorChooserUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicColorChooserUI$Handler
//$ extends javax.swing.event.ChangeListener
//$ implements java.awt.event.MouseListener,java.beans.PropertyChangeListener

#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
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
				class BasicColorChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicColorChooserUI$Handler : public ::javax::swing::event::ChangeListener, public ::java::awt::event::MouseListener, public ::java::beans::PropertyChangeListener {
	$class(BasicColorChooserUI$Handler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::awt::event::MouseListener, ::java::beans::PropertyChangeListener)
public:
	BasicColorChooserUI$Handler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicColorChooserUI* this$0);
	virtual void mouseClicked(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* evt) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* evt) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* evt) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicColorChooserUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicColorChooserUI$Handler_h_