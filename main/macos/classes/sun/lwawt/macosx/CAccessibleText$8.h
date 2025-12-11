#ifndef _sun_lwawt_macosx_CAccessibleText$8_h_
#define _sun_lwawt_macosx_CAccessibleText$8_h_
//$ class sun.lwawt.macosx.CAccessibleText$8
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

class CAccessibleText$8 : public ::java::util::concurrent::Callable {
	$class(CAccessibleText$8, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibleText$8();
	void init$(::javax::accessibility::Accessible* val$a);
	virtual $Object* call() override;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibleText$8_h_