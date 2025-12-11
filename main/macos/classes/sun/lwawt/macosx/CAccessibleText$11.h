#ifndef _sun_lwawt_macosx_CAccessibleText$11_h_
#define _sun_lwawt_macosx_CAccessibleText$11_h_
//$ class sun.lwawt.macosx.CAccessibleText$11
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

class CAccessibleText$11 : public ::java::util::concurrent::Callable {
	$class(CAccessibleText$11, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibleText$11();
	void init$(::javax::accessibility::Accessible* val$a, int32_t val$line);
	virtual $Object* call() override;
	int32_t val$line = 0;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibleText$11_h_