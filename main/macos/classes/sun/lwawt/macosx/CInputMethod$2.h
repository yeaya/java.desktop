#ifndef _sun_lwawt_macosx_CInputMethod$2_h_
#define _sun_lwawt_macosx_CInputMethod$2_h_
//$ class sun.lwawt.macosx.CInputMethod$2
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

class CInputMethod$2 : public ::java::lang::Runnable {
	$class(CInputMethod$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CInputMethod$2();
	void init$(::sun::lwawt::macosx::CInputMethod* this$0);
	virtual void run() override;
	::sun::lwawt::macosx::CInputMethod* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CInputMethod$2_h_