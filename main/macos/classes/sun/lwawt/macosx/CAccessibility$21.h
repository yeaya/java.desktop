#ifndef _sun_lwawt_macosx_CAccessibility$21_h_
#define _sun_lwawt_macosx_CAccessibility$21_h_
//$ class sun.lwawt.macosx.CAccessibility$21
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility$21 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$21, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$21();
	void init$(::javax::accessibility::Accessible* val$a, ::java::awt::Component* val$c);
	virtual $Object* call() override;
	::java::awt::Component* val$c = nullptr;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$21_h_