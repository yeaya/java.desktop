#ifndef _sun_lwawt_macosx_CAccessibility$10_h_
#define _sun_lwawt_macosx_CAccessibility$10_h_
//$ class sun.lwawt.macosx.CAccessibility$10
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility$10 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$10, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$10();
	void init$(::javax::accessibility::AccessibleContext* val$ac);
	virtual $Object* call() override;
	::javax::accessibility::AccessibleContext* val$ac = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$10_h_