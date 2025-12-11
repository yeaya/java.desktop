#ifndef _sun_lwawt_macosx_CInputMethod$6_h_
#define _sun_lwawt_macosx_CInputMethod$6_h_
//$ class sun.lwawt.macosx.CInputMethod$6
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

class CInputMethod$6 : public ::java::lang::Runnable {
	$class(CInputMethod$6, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CInputMethod$6();
	void init$(::sun::lwawt::macosx::CInputMethod* this$0, $ints* val$rect, int32_t val$absoluteTextOffset);
	virtual void run() override;
	::sun::lwawt::macosx::CInputMethod* this$0 = nullptr;
	int32_t val$absoluteTextOffset = 0;
	$ints* val$rect = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CInputMethod$6_h_