#ifndef _sun_lwawt_macosx_CAccessibility$31_h_
#define _sun_lwawt_macosx_CAccessibility$31_h_
//$ class sun.lwawt.macosx.CAccessibility$31
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace javax {
	namespace accessibility {
		class AccessibleValue;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility$31 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$31, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$31();
	void init$(::javax::accessibility::AccessibleValue* val$av);
	virtual $Object* call() override;
	::javax::accessibility::AccessibleValue* val$av = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$31_h_