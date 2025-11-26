#ifndef _sun_awt_X11_XTextAreaPeer$XAWTScrollBarButton_h_
#define _sun_awt_X11_XTextAreaPeer$XAWTScrollBarButton_h_
//$ class sun.awt.X11.XTextAreaPeer$XAWTScrollBarButton
//$ extends javax.swing.plaf.basic.BasicArrowButton

#include <javax/swing/plaf/basic/BasicArrowButton.h>

namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class UIDefaults;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XTextAreaPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextAreaPeer$XAWTScrollBarButton : public ::javax::swing::plaf::basic::BasicArrowButton {
	$class(XTextAreaPeer$XAWTScrollBarButton, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicArrowButton)
public:
	XTextAreaPeer$XAWTScrollBarButton();
	using ::javax::swing::plaf::basic::BasicArrowButton::contains;
	using ::javax::swing::plaf::basic::BasicArrowButton::enable;
	using ::javax::swing::plaf::basic::BasicArrowButton::getBounds;
	using ::javax::swing::plaf::basic::BasicArrowButton::getSize;
	using ::javax::swing::plaf::basic::BasicArrowButton::getLocation;
	using ::javax::swing::plaf::basic::BasicArrowButton::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicArrowButton::add;
	using ::javax::swing::plaf::basic::BasicArrowButton::getMousePosition;
	void init$(::sun::awt::X11::XTextAreaPeer* this$0, int32_t direction);
	virtual ::java::awt::Dimension* getMaximumSize() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual bool isFocusTraversable() override;
	using ::javax::swing::plaf::basic::BasicArrowButton::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::plaf::basic::BasicArrowButton::setUI;
	using ::javax::swing::plaf::basic::BasicArrowButton::requestFocus;
	using ::javax::swing::plaf::basic::BasicArrowButton::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicArrowButton::repaint;
	using ::javax::swing::plaf::basic::BasicArrowButton::remove;
	::sun::awt::X11::XTextAreaPeer* this$0 = nullptr;
	::javax::swing::UIDefaults* uidefaults = nullptr;
	::java::awt::Color* darkShadow = nullptr;
	::java::awt::Color* lightShadow = nullptr;
	::java::awt::Color* buttonBack = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer$XAWTScrollBarButton_h_