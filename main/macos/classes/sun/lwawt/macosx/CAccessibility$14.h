#ifndef _sun_lwawt_macosx_CAccessibility$14_h_
#define _sun_lwawt_macosx_CAccessibility$14_h_
//$ class sun.lwawt.macosx.CAccessibility$14
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace javax {
	namespace accessibility {
		class AccessibleText;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility$14 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$14, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$14();
	void init$(::javax::accessibility::AccessibleText* val$at);
	virtual $Object* call() override;
	::javax::accessibility::AccessibleText* val$at = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$14_h_