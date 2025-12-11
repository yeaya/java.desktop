#ifndef _sun_lwawt_macosx_CAccessibility$3_h_
#define _sun_lwawt_macosx_CAccessibility$3_h_
//$ class sun.lwawt.macosx.CAccessibility$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace accessibility {
		class AccessibleAction;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility$3 : public ::java::lang::Runnable {
	$class(CAccessibility$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CAccessibility$3();
	void init$(::javax::accessibility::AccessibleAction* val$aa, int32_t val$index);
	virtual void run() override;
	int32_t val$index = 0;
	::javax::accessibility::AccessibleAction* val$aa = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$3_h_