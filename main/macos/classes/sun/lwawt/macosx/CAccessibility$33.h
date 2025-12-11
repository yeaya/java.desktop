#ifndef _sun_lwawt_macosx_CAccessibility$33_h_
#define _sun_lwawt_macosx_CAccessibility$33_h_
//$ class sun.lwawt.macosx.CAccessibility$33
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

class CAccessibility$33 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$33, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$33();
	void init$(::javax::accessibility::Accessible* val$a, $booleans* val$ret);
	virtual $Object* call() override;
	$booleans* val$ret = nullptr;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$33_h_