#ifndef _sun_lwawt_macosx_CAccessibility$27_h_
#define _sun_lwawt_macosx_CAccessibility$27_h_
//$ class sun.lwawt.macosx.CAccessibility$27
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

class CAccessibility$27 : public ::java::lang::Runnable {
	$class(CAccessibility$27, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CAccessibility$27();
	void init$(::javax::accessibility::Accessible* val$a);
	virtual void run() override;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$27_h_