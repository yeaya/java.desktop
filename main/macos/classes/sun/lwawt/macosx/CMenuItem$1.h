#ifndef _sun_lwawt_macosx_CMenuItem$1_h_
#define _sun_lwawt_macosx_CMenuItem$1_h_
//$ class sun.lwawt.macosx.CMenuItem$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace lwawt {
		namespace macosx {
			class CMenuItem;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CMenuItem$1 : public ::java::lang::Runnable {
	$class(CMenuItem$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CMenuItem$1();
	void init$(::sun::lwawt::macosx::CMenuItem* this$0, int64_t val$when, int32_t val$modifiers);
	virtual void run() override;
	::sun::lwawt::macosx::CMenuItem* this$0 = nullptr;
	int32_t val$modifiers = 0;
	int64_t val$when = 0;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CMenuItem$1_h_