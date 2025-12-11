#ifndef _sun_lwawt_macosx_CAccessibility$30_h_
#define _sun_lwawt_macosx_CAccessibility$30_h_
//$ class sun.lwawt.macosx.CAccessibility$30
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace javax {
	namespace accessibility {
		class Accessible;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility$30 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$30, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$30();
	void init$(::javax::accessibility::Accessible* val$a);
	virtual $Object* call() override;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$30_h_