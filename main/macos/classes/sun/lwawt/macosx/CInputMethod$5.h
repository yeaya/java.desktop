#ifndef _sun_lwawt_macosx_CInputMethod$5_h_
#define _sun_lwawt_macosx_CInputMethod$5_h_
//$ class sun.lwawt.macosx.CInputMethod$5
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
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

class CInputMethod$5 : public ::java::lang::Runnable {
	$class(CInputMethod$5, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CInputMethod$5();
	void init$(::sun::lwawt::macosx::CInputMethod* this$0, $ints* val$returnValue);
	virtual void run() override;
	::sun::lwawt::macosx::CInputMethod* this$0 = nullptr;
	$ints* val$returnValue = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CInputMethod$5_h_