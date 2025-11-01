#ifndef _javax_swing_colorchooser_DiagramComponent_h_
#define _javax_swing_colorchooser_DiagramComponent_h_
//$ class javax.swing.colorchooser.DiagramComponent
//$ extends javax.swing.JComponent
//$ implements java.awt.event.MouseListener,java.awt.event.MouseMotionListener

#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/lang/Array.h>
#include <javax/swing/JComponent.h>

namespace java {
	namespace awt {
		class Graphics;
		class Insets;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace javax {
	namespace swing {
		namespace colorchooser {
			class ColorPanel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class DiagramComponent : public ::javax::swing::JComponent, public ::java::awt::event::MouseListener, public ::java::awt::event::MouseMotionListener {
	$class(DiagramComponent, $NO_CLASS_INIT, ::javax::swing::JComponent, ::java::awt::event::MouseListener, ::java::awt::event::MouseMotionListener)
public:
	DiagramComponent();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::colorchooser::ColorPanel* panel, bool diagram);
	static int32_t getValue(float value, int32_t min, int32_t max);
	static float getValue(int32_t value, int32_t min, int32_t max);
	using ::javax::swing::JComponent::list;
	virtual void mouseClicked(::java::awt::event::MouseEvent* event) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* event) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* event) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* event) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* event) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* event) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* event) override;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual $String* toString() override;
	::javax::swing::colorchooser::ColorPanel* panel = nullptr;
	bool diagram = false;
	::java::awt::Insets* insets$ = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	$ints* array = nullptr;
	::java::awt::image::BufferedImage* image = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_DiagramComponent_h_