#ifndef _sun_lwawt_macosx_CAccessibleText$6_h_
#define _sun_lwawt_macosx_CAccessibleText$6_h_
//$ class sun.lwawt.macosx.CAccessibleText$6
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

class CAccessibleText$6 : public ::java::util::concurrent::Callable {
	$class(CAccessibleText$6, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibleText$6();
	void init$(::javax::accessibility::Accessible* val$a, int32_t val$x, int32_t val$y);
	virtual $Object* call() override;
	int32_t val$y = 0;
	int32_t val$x = 0;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibleText$6_h_