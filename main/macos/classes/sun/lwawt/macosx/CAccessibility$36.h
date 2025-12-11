#ifndef _sun_lwawt_macosx_CAccessibility$36_h_
#define _sun_lwawt_macosx_CAccessibility$36_h_
//$ class sun.lwawt.macosx.CAccessibility$36
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

class CAccessibility$36 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$36, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$36();
	void init$(::javax::accessibility::Accessible* val$ax);
	virtual $Object* call() override;
	::javax::accessibility::Accessible* val$ax = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$36_h_