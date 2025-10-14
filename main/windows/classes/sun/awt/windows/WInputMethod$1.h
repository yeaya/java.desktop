#ifndef _sun_awt_windows_WInputMethod$1_h_
#define _sun_awt_windows_WInputMethod$1_h_
//$ class sun.awt.windows.WInputMethod$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace windows {
			class WInputMethod;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WInputMethod$1 : public ::java::lang::Runnable {
	$class(WInputMethod$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WInputMethod$1();
	void init$(::sun::awt::windows::WInputMethod* this$0);
	virtual void run() override;
	::sun::awt::windows::WInputMethod* this$0 = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WInputMethod$1_h_