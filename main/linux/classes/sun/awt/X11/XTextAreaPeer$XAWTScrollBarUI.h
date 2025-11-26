#ifndef _sun_awt_X11_XTextAreaPeer$XAWTScrollBarUI_h_
#define _sun_awt_X11_XTextAreaPeer$XAWTScrollBarUI_h_
//$ class sun.awt.X11.XTextAreaPeer$XAWTScrollBarUI
//$ extends javax.swing.plaf.basic.BasicScrollBarUI

#include <javax/swing/plaf/basic/BasicScrollBarUI.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JComponent;
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

class XTextAreaPeer$XAWTScrollBarUI : public ::javax::swing::plaf::basic::BasicScrollBarUI {
	$class(XTextAreaPeer$XAWTScrollBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicScrollBarUI)
public:
	XTextAreaPeer$XAWTScrollBarUI();
	void init$(::sun::awt::X11::XTextAreaPeer* this$0);
	virtual void configureScrollBarColors() override;
	virtual ::javax::swing::JButton* createDecreaseButton(int32_t orientation) override;
	virtual ::javax::swing::JButton* createIncreaseButton(int32_t orientation) override;
	::javax::swing::JButton* getDecreaseButton();
	::javax::swing::JButton* getIncreaseButton();
	virtual void installDefaults() override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintThumb(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* thumbBounds) override;
	::sun::awt::X11::XTextAreaPeer* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer$XAWTScrollBarUI_h_