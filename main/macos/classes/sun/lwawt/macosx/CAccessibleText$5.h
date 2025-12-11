#ifndef _sun_lwawt_macosx_CAccessibleText$5_h_
#define _sun_lwawt_macosx_CAccessibleText$5_h_
//$ class sun.lwawt.macosx.CAccessibleText$5
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace javax {
	namespace accessibility {
		class AccessibleEditableText;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibleText$5 : public ::java::util::concurrent::Callable {
	$class(CAccessibleText$5, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CAccessibleText$5();
	void init$(::javax::accessibility::AccessibleEditableText* val$aet, int32_t val$start, int32_t val$stop);
	virtual $Object* call() override;
	int32_t val$stop = 0;
	int32_t val$start = 0;
	::javax::accessibility::AccessibleEditableText* val$aet = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibleText$5_h_