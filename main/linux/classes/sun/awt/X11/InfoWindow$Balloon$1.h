#ifndef _sun_awt_X11_InfoWindow$Balloon$1_h_
#define _sun_awt_X11_InfoWindow$Balloon$1_h_
//$ class sun.awt.X11.InfoWindow$Balloon$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class InfoWindow$Balloon;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow$Balloon$1 : public ::java::lang::Runnable {
	$class(InfoWindow$Balloon$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	InfoWindow$Balloon$1();
	void init$(::sun::awt::X11::InfoWindow$Balloon* this$0);
	virtual void run() override;
	::sun::awt::X11::InfoWindow$Balloon* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_InfoWindow$Balloon$1_h_