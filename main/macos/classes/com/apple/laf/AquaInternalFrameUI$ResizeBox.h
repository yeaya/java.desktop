#ifndef _com_apple_laf_AquaInternalFrameUI$ResizeBox_h_
#define _com_apple_laf_AquaInternalFrameUI$ResizeBox_h_
//$ class com.apple.laf.AquaInternalFrameUI$ResizeBox
//$ extends javax.swing.JLabel
//$ implements java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.awt.event.MouseWheelListener,java.awt.event.ComponentListener,java.beans.PropertyChangeListener,javax.swing.plaf.UIResource

#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseWheelListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/plaf/UIResource.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFrameUI;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
			class MouseEvent;
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
		class JLayeredPane;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFrameUI$ResizeBox : public ::javax::swing::JLabel, public ::java::awt::event::MouseListener, public ::java::awt::event::MouseMotionListener, public ::java::awt::event::MouseWheelListener, public ::java::awt::event::ComponentListener, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::UIResource {
	$class(AquaInternalFrameUI$ResizeBox, $NO_CLASS_INIT, ::javax::swing::JLabel, ::java::awt::event::MouseListener, ::java::awt::event::MouseMotionListener, ::java::awt::event::MouseWheelListener, ::java::awt::event::ComponentListener, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::UIResource)
public:
	AquaInternalFrameUI$ResizeBox();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaInternalFrameUI* this$0, ::javax::swing::JLayeredPane* layeredPane);
	void addListeners();
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	void forwardEventToFrame(::java::awt::event::MouseEvent* e);
	::java::awt::Component* getComponentToForwardTo(::java::awt::event::MouseEvent* e, ::java::awt::Point* dst);
	using ::javax::swing::JLabel::list;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void mouseWheelMoved(::java::awt::event::MouseWheelEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	using ::javax::swing::JLabel::remove;
	void removeListeners();
	using ::javax::swing::JLabel::repaint;
	void repositionResizeBox();
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	void resizeInternalFrame(::java::awt::Point* pt);
	using ::javax::swing::JLabel::setUI;
	bool testGrowboxPoint(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual $String* toString() override;
	::com::apple::laf::AquaInternalFrameUI* this$0 = nullptr;
	::javax::swing::JLayeredPane* layeredPane = nullptr;
	::java::awt::Dimension* originalSize = nullptr;
	::java::awt::Point* originalLocation = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameUI$ResizeBox_h_