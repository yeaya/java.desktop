#ifndef _sun_lwawt_macosx_CAccessibility$11_h_
#define _sun_lwawt_macosx_CAccessibility$11_h_
//$ class sun.lwawt.macosx.CAccessibility$11
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace javax {
	namespace accessibility {
		class AccessibleContext;
		class AccessibleState;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility$11 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$11, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$11();
	void init$(::javax::accessibility::AccessibleContext* val$ac, ::javax::accessibility::AccessibleState* val$as);
	virtual $Object* call() override;
	::javax::accessibility::AccessibleState* val$as = nullptr;
	::javax::accessibility::AccessibleContext* val$ac = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$11_h_