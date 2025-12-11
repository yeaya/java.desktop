#ifndef _sun_lwawt_macosx_CAccessibleText$1_h_
#define _sun_lwawt_macosx_CAccessibleText$1_h_
//$ class sun.lwawt.macosx.CAccessibleText$1
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

class CAccessibleText$1 : public ::java::util::concurrent::Callable {
	$class(CAccessibleText$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibleText$1();
	void init$(::javax::accessibility::Accessible* val$a);
	virtual $Object* call() override;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibleText$1_h_