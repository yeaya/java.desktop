#ifndef _sun_awt_X11_XAWTXSettings$1_h_
#define _sun_awt_X11_XAWTXSettings$1_h_
//$ class sun.awt.X11.XAWTXSettings$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAWTXSettings;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XAWTXSettings$1 : public ::java::lang::Runnable {
	$class(XAWTXSettings$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XAWTXSettings$1();
	void init$(::sun::awt::X11::XAWTXSettings* this$0, ::java::util::Map* val$updatedSettings);
	virtual void run() override;
	::sun::awt::X11::XAWTXSettings* this$0 = nullptr;
	::java::util::Map* val$updatedSettings = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XAWTXSettings$1_h_