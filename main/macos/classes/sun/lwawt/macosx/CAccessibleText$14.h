#ifndef _sun_lwawt_macosx_CAccessibleText$14_h_
#define _sun_lwawt_macosx_CAccessibleText$14_h_
//$ class sun.lwawt.macosx.CAccessibleText$14
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

class CAccessibleText$14 : public ::java::util::concurrent::Callable {
	$class(CAccessibleText$14, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibleText$14();
	void init$(::javax::accessibility::Accessible* val$a, int32_t val$location, int32_t val$length);
	virtual $Object* call() override;
	int32_t val$length = 0;
	int32_t val$location = 0;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibleText$14_h_