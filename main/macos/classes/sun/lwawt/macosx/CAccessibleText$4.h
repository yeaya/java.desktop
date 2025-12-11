#ifndef _sun_lwawt_macosx_CAccessibleText$4_h_
#define _sun_lwawt_macosx_CAccessibleText$4_h_
//$ class sun.lwawt.macosx.CAccessibleText$4
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace accessibility {
		class Accessible;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibleText$4 : public ::java::lang::Runnable {
	$class(CAccessibleText$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CAccessibleText$4();
	void init$(::javax::accessibility::Accessible* val$a, int32_t val$startIndex, int32_t val$endIndex);
	virtual void run() override;
	int32_t val$endIndex = 0;
	int32_t val$startIndex = 0;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibleText$4_h_