#ifndef _sun_lwawt_macosx_CAccessibility$4_h_
#define _sun_lwawt_macosx_CAccessibility$4_h_
//$ class sun.lwawt.macosx.CAccessibility$4
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace javax {
	namespace accessibility {
		class AccessibleComponent;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility$4 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$4, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$4();
	void init$(::javax::accessibility::AccessibleComponent* val$ac);
	virtual $Object* call() override;
	::javax::accessibility::AccessibleComponent* val$ac = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$4_h_