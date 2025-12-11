#ifndef _sun_lwawt_macosx_CInputMethod$3_h_
#define _sun_lwawt_macosx_CInputMethod$3_h_
//$ class sun.lwawt.macosx.CInputMethod$3
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

class CInputMethod$3 : public ::java::lang::Runnable {
	$class(CInputMethod$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CInputMethod$3();
	void init$(::sun::lwawt::macosx::CInputMethod* this$0, $StringArray* val$retString, int32_t val$locationIn, int32_t val$lengthIn);
	virtual void run() override;
	::sun::lwawt::macosx::CInputMethod* this$0 = nullptr;
	int32_t val$lengthIn = 0;
	int32_t val$locationIn = 0;
	$StringArray* val$retString = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CInputMethod$3_h_