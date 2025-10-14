#ifndef _javax_swing_JDesktopPane$ComponentPosition_h_
#define _javax_swing_JDesktopPane$ComponentPosition_h_
//$ class javax.swing.JDesktopPane$ComponentPosition
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace javax {
	namespace swing {
		class JInternalFrame;
	}
}

namespace javax {
	namespace swing {

class JDesktopPane$ComponentPosition : public ::java::lang::Comparable {
	$class(JDesktopPane$ComponentPosition, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	JDesktopPane$ComponentPosition();
	void init$(::javax::swing::JInternalFrame* component, int32_t layer, int32_t zOrder);
	virtual int32_t compareTo(::javax::swing::JDesktopPane$ComponentPosition* o);
	virtual int32_t compareTo(Object$* o) override;
	::javax::swing::JInternalFrame* component = nullptr;
	int32_t layer = 0;
	int32_t zOrder = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JDesktopPane$ComponentPosition_h_