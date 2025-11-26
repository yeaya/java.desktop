#ifndef _sun_awt_X11_XWarningWindow$1_h_
#define _sun_awt_X11_XWarningWindow$1_h_
//$ class sun.awt.X11.XWarningWindow$1
//$ extends sun.awt.X11.InfoWindow$Tooltip$LiveArguments

#include <sun/awt/X11/InfoWindow$Tooltip$LiveArguments.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XWarningWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XWarningWindow$1 : public ::sun::awt::X11::InfoWindow$Tooltip$LiveArguments {
	$class(XWarningWindow$1, $NO_CLASS_INIT, ::sun::awt::X11::InfoWindow$Tooltip$LiveArguments)
public:
	XWarningWindow$1();
	void init$(::sun::awt::X11::XWarningWindow* this$0);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual $String* getTooltipString() override;
	virtual bool isDisposed() override;
	::sun::awt::X11::XWarningWindow* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XWarningWindow$1_h_