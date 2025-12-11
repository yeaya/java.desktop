#ifndef _sun_lwawt_macosx_CAccessibility$7_h_
#define _sun_lwawt_macosx_CAccessibility$7_h_
//$ class sun.lwawt.macosx.CAccessibility$7
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility$7 : public ::java::lang::Runnable {
	$class(CAccessibility$7, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CAccessibility$7();
	void init$(::javax::accessibility::AccessibleContext* val$ac, int32_t val$index);
	virtual void run() override;
	int32_t val$index = 0;
	::javax::accessibility::AccessibleContext* val$ac = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$7_h_