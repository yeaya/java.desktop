#ifndef _sun_awt_X11_InfoWindow$Closer$1_h_
#define _sun_awt_X11_InfoWindow$Closer$1_h_
//$ class sun.awt.X11.InfoWindow$Closer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class InfoWindow$Closer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow$Closer$1 : public ::java::lang::Runnable {
	$class(InfoWindow$Closer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	InfoWindow$Closer$1();
	void init$(::sun::awt::X11::InfoWindow$Closer* this$1);
	virtual void run() override;
	::sun::awt::X11::InfoWindow$Closer* this$1 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_InfoWindow$Closer$1_h_