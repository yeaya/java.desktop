#ifndef _sun_lwawt_macosx_CAccessibility$23_h_
#define _sun_lwawt_macosx_CAccessibility$23_h_
//$ class sun.lwawt.macosx.CAccessibility$23
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace awt {
		class Container;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility$23 : public ::java::util::concurrent::Callable {
	$class(CAccessibility$23, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibility$23();
	void init$(::java::awt::Container* val$parent, float val$hitPointX, float val$hitPointY);
	virtual $Object* call() override;
	float val$hitPointY = 0.0;
	float val$hitPointX = 0.0;
	::java::awt::Container* val$parent = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibility$23_h_