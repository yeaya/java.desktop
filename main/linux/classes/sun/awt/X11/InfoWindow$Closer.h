#ifndef _sun_awt_X11_InfoWindow$Closer_h_
#define _sun_awt_X11_InfoWindow$Closer_h_
//$ class sun.awt.X11.InfoWindow$Closer
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class InfoWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow$Closer : public ::java::lang::Runnable {
	$class(InfoWindow$Closer, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	InfoWindow$Closer();
	void init$(::sun::awt::X11::InfoWindow* this$0);
	virtual void close();
	void doClose();
	virtual void run() override;
	virtual void schedule();
	virtual void set(::java::lang::Runnable* action, int32_t time);
	::sun::awt::X11::InfoWindow* this$0 = nullptr;
	::java::lang::Runnable* action = nullptr;
	int32_t time = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_InfoWindow$Closer_h_