#ifndef _sun_lwawt_macosx_CAccessibleText$12_h_
#define _sun_lwawt_macosx_CAccessibleText$12_h_
//$ class sun.lwawt.macosx.CAccessibleText$12
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

class CAccessibleText$12 : public ::java::util::concurrent::Callable {
	$class(CAccessibleText$12, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibleText$12();
	void init$(::javax::accessibility::Accessible* val$a, int32_t val$index);
	virtual $Object* call() override;
	int32_t val$index = 0;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibleText$12_h_