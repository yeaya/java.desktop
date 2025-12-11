#ifndef _sun_lwawt_macosx_CInputMethod$7_h_
#define _sun_lwawt_macosx_CInputMethod$7_h_
//$ class sun.lwawt.macosx.CInputMethod$7
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		namespace font {
			class TextHitInfo;
		}
	}
}
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

class CInputMethod$7 : public ::java::lang::Runnable {
	$class(CInputMethod$7, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CInputMethod$7();
	void init$(::sun::lwawt::macosx::CInputMethod* this$0, $Array<::java::awt::font::TextHitInfo>* val$offsetInfo, int32_t val$screenX, int32_t val$screenY, $ints* val$insertPositionOffset);
	virtual void run() override;
	::sun::lwawt::macosx::CInputMethod* this$0 = nullptr;
	$ints* val$insertPositionOffset = nullptr;
	int32_t val$screenY = 0;
	int32_t val$screenX = 0;
	$Array<::java::awt::font::TextHitInfo>* val$offsetInfo = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CInputMethod$7_h_