#ifndef _sun_lwawt_macosx_CAccessibility$34_h_
#define _sun_lwawt_macosx_CAccessibility$34_h_
//$ class sun.lwawt.macosx.CAccessibility$34
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

class CAccessibility$34 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$34, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$34();
	void init$(::javax::accessibility::Accessible* val$a, int32_t val$whichChildren, bool val$allowIgnored);
	virtual $Object* call() override;
	bool val$allowIgnored = false;
	int32_t val$whichChildren = 0;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$34_h_