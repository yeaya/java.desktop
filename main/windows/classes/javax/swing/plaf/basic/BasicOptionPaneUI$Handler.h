#ifndef _javax_swing_plaf_basic_BasicOptionPaneUI$Handler_h_
#define _javax_swing_plaf_basic_BasicOptionPaneUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicOptionPaneUI$Handler
//$ extends java.awt.event.ActionListener
//$ implements java.awt.event.MouseListener,java.beans.PropertyChangeListener

#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
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
		namespace plaf {
			namespace basic {
				class BasicOptionPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicOptionPaneUI$Handler : public ::java::awt::event::ActionListener, public ::java::awt::event::MouseListener, public ::java::beans::PropertyChangeListener {
	$class(BasicOptionPaneUI$Handler, $NO_CLASS_INIT, ::java::awt::event::ActionListener, ::java::awt::event::MouseListener, ::java::beans::PropertyChangeListener)
public:
	BasicOptionPaneUI$Handler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicOptionPaneUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicOptionPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicOptionPaneUI$Handler_h_