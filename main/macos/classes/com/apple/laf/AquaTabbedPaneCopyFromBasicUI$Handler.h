#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$Handler_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$Handler_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$Handler
//$ extends javax.swing.event.ChangeListener
//$ implements java.awt.event.ContainerListener,java.awt.event.FocusListener,java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.beans.PropertyChangeListener

#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/ChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneCopyFromBasicUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ContainerEvent;
			class FocusEvent;
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
		namespace text {
			class View;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneCopyFromBasicUI$Handler : public ::javax::swing::event::ChangeListener, public ::java::awt::event::ContainerListener, public ::java::awt::event::FocusListener, public ::java::awt::event::MouseListener, public ::java::awt::event::MouseMotionListener, public ::java::beans::PropertyChangeListener {
	$class(AquaTabbedPaneCopyFromBasicUI$Handler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::awt::event::ContainerListener, ::java::awt::event::FocusListener, ::java::awt::event::MouseListener, ::java::awt::event::MouseMotionListener, ::java::beans::PropertyChangeListener)
public:
	AquaTabbedPaneCopyFromBasicUI$Handler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0);
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	void setHtmlView(::javax::swing::text::View* v, bool inserted, int32_t index);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	void updateHtmlViews(int32_t index, bool inserted);
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$Handler_h_