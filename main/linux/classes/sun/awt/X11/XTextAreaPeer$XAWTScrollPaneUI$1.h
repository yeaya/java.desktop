#ifndef _sun_awt_X11_XTextAreaPeer$XAWTScrollPaneUI$1_h_
#define _sun_awt_X11_XTextAreaPeer$XAWTScrollPaneUI$1_h_
//$ class sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI$1
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XTextAreaPeer$XAWTScrollPaneUI;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextAreaPeer$XAWTScrollPaneUI$1 : public ::java::beans::PropertyChangeListener {
	$class(XTextAreaPeer$XAWTScrollPaneUI$1, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	XTextAreaPeer$XAWTScrollPaneUI$1();
	void init$(::sun::awt::X11::XTextAreaPeer$XAWTScrollPaneUI* this$1);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::sun::awt::X11::XTextAreaPeer$XAWTScrollPaneUI* this$1 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer$XAWTScrollPaneUI$1_h_