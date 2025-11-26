#ifndef _sun_awt_X11CustomCursor$1CCount_h_
#define _sun_awt_X11CustomCursor$1CCount_h_
//$ class sun.awt.X11CustomCursor$1CCount
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace sun {
	namespace awt {
		class X11CustomCursor;
	}
}

namespace sun {
	namespace awt {

class X11CustomCursor$1CCount : public ::java::lang::Comparable {
	$class(X11CustomCursor$1CCount, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	X11CustomCursor$1CCount();
	void init$(::sun::awt::X11CustomCursor* this$0, int32_t cl, int32_t ct);
	virtual int32_t compareTo(::sun::awt::X11CustomCursor$1CCount* cc);
	virtual int32_t compareTo(Object$* cc) override;
	::sun::awt::X11CustomCursor* this$0 = nullptr;
	int32_t color = 0;
	int32_t count = 0;
};

	} // awt
} // sun

#endif // _sun_awt_X11CustomCursor$1CCount_h_