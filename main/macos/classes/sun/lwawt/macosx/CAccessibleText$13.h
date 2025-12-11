#ifndef _sun_lwawt_macosx_CAccessibleText$13_h_
#define _sun_lwawt_macosx_CAccessibleText$13_h_
//$ class sun.lwawt.macosx.CAccessibleText$13
//$ extends java.util.concurrent.Callable

#include <java/lang/Array.h>
#include <java/util/concurrent/Callable.h>

namespace javax {
	namespace accessibility {
		class Accessible;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibleText$13 : public ::java::util::concurrent::Callable {
	$class(CAccessibleText$13, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibleText$13();
	void init$(::javax::accessibility::Accessible* val$a, $doubles* val$ret, int32_t val$location, int32_t val$length);
	virtual $Object* call() override;
	int32_t val$length = 0;
	int32_t val$location = 0;
	$doubles* val$ret = nullptr;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibleText$13_h_