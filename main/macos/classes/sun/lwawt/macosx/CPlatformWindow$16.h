#ifndef _sun_lwawt_macosx_CPlatformWindow$16_h_
#define _sun_lwawt_macosx_CPlatformWindow$16_h_
//$ class sun.lwawt.macosx.CPlatformWindow$16
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace lwawt {
		namespace macosx {
			class CPlatformWindow;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformWindow$16 : public ::java::lang::Runnable {
	$class(CPlatformWindow$16, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CPlatformWindow$16();
	void init$(::sun::lwawt::macosx::CPlatformWindow* this$0);
	virtual void run() override;
	::sun::lwawt::macosx::CPlatformWindow* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformWindow$16_h_