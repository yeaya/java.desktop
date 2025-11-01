#ifndef _javax_swing_plaf_basic_BasicInternalFrameUI$Handler_h_
#define _javax_swing_plaf_basic_BasicInternalFrameUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameUI$Handler
//$ extends java.awt.event.ComponentListener
//$ implements javax.swing.event.InternalFrameListener,java.awt.LayoutManager,javax.swing.event.MouseInputListener,java.beans.PropertyChangeListener,java.awt.event.WindowFocusListener,javax.swing.SwingConstants

#include <java/awt/LayoutManager.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/WindowFocusListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/event/InternalFrameListener.h>
#include <javax/swing/event/MouseInputListener.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
			class MouseEvent;
			class WindowEvent;
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
			class InternalFrameEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicInternalFrameUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicInternalFrameUI$Handler : public ::java::awt::event::ComponentListener, public ::javax::swing::event::InternalFrameListener, public ::java::awt::LayoutManager, public ::javax::swing::event::MouseInputListener, public ::java::beans::PropertyChangeListener, public ::java::awt::event::WindowFocusListener, public ::javax::swing::SwingConstants {
	$class(BasicInternalFrameUI$Handler, $NO_CLASS_INIT, ::java::awt::event::ComponentListener, ::javax::swing::event::InternalFrameListener, ::java::awt::LayoutManager, ::javax::swing::event::MouseInputListener, ::java::beans::PropertyChangeListener, ::java::awt::event::WindowFocusListener, ::javax::swing::SwingConstants)
public:
	BasicInternalFrameUI$Handler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicInternalFrameUI* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	virtual void internalFrameActivated(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameClosed(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameClosing(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameDeactivated(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameDeiconified(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameIconified(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameOpened(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void layoutContainer(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	virtual $String* toString() override;
	virtual void windowGainedFocus(::java::awt::event::WindowEvent* e) override;
	virtual void windowLostFocus(::java::awt::event::WindowEvent* e) override;
	::javax::swing::plaf::basic::BasicInternalFrameUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameUI$Handler_h_