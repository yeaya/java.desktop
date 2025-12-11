#ifndef _sun_lwawt_macosx_CAccessibility$2_h_
#define _sun_lwawt_macosx_CAccessibility$2_h_
//$ class sun.lwawt.macosx.CAccessibility$2
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace javax {
	namespace accessibility {
		class AccessibleAction;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility$2 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$2, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$2();
	void init$(::javax::accessibility::AccessibleAction* val$aa, int32_t val$index);
	virtual $Object* call() override;
	int32_t val$index = 0;
	::javax::accessibility::AccessibleAction* val$aa = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$2_h_