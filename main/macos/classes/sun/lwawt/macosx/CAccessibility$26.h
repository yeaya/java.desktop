#ifndef _sun_lwawt_macosx_CAccessibility$26_h_
#define _sun_lwawt_macosx_CAccessibility$26_h_
//$ class sun.lwawt.macosx.CAccessibility$26
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

class CAccessibility$26 : public ::java::lang::Runnable {
	$class(CAccessibility$26, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CAccessibility$26();
	void init$(::javax::accessibility::Accessible* val$a);
	virtual void run() override;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$26_h_