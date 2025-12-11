#ifndef _sun_lwawt_macosx_CAccessibility$6_h_
#define _sun_lwawt_macosx_CAccessibility$6_h_
//$ class sun.lwawt.macosx.CAccessibility$6
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

class CAccessibility$6 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$6, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$6();
	void init$(::javax::accessibility::AccessibleContext* val$ac, int32_t val$index);
	virtual $Object* call() override;
	int32_t val$index = 0;
	::javax::accessibility::AccessibleContext* val$ac = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$6_h_