#ifndef _sun_lwawt_macosx_CInputMethod$1_h_
#define _sun_lwawt_macosx_CInputMethod$1_h_
//$ class sun.lwawt.macosx.CInputMethod$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace lwawt {
		namespace macosx {
			class CInputMethod;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CInputMethod$1 : public ::java::lang::Runnable {
	$class(CInputMethod$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CInputMethod$1();
	void init$(::sun::lwawt::macosx::CInputMethod* this$0);
	virtual void run() override;
	::sun::lwawt::macosx::CInputMethod* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CInputMethod$1_h_