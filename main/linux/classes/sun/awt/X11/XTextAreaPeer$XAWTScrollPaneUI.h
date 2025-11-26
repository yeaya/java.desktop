#ifndef _sun_awt_X11_XTextAreaPeer$XAWTScrollPaneUI_h_
#define _sun_awt_X11_XTextAreaPeer$XAWTScrollPaneUI_h_
//$ class sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI
//$ extends javax.swing.plaf.basic.BasicScrollPaneUI

#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JScrollPane;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
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

class XTextAreaPeer$XAWTScrollPaneUI : public ::javax::swing::plaf::basic::BasicScrollPaneUI {
	$class(XTextAreaPeer$XAWTScrollPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicScrollPaneUI)
public:
	XTextAreaPeer$XAWTScrollPaneUI();
	void init$(::sun::awt::X11::XTextAreaPeer* this$0);
	::java::beans::PropertyChangeListener* createPropertyChangeHandler();
	virtual void installDefaults(::javax::swing::JScrollPane* scrollpane) override;
	virtual void installListeners(::javax::swing::JScrollPane* scrollPane) override;
	bool isLeftToRight(::java::awt::Component* c);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void uninstallDefaults(::javax::swing::JScrollPane* c) override;
	virtual void uninstallListeners(::javax::swing::JComponent* scrollPane) override;
	::sun::awt::X11::XTextAreaPeer* this$0 = nullptr;
	::javax::swing::border::Border* vsbMarginBorderR = nullptr;
	::javax::swing::border::Border* vsbMarginBorderL = nullptr;
	::javax::swing::border::Border* hsbMarginBorder = nullptr;
	::javax::swing::border::Border* vsbBorder = nullptr;
	::javax::swing::border::Border* hsbBorder = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeHandler = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer$XAWTScrollPaneUI_h_