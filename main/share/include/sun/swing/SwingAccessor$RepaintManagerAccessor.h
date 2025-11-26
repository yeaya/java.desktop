#ifndef _sun_swing_SwingAccessor$RepaintManagerAccessor_h_
#define _sun_swing_SwingAccessor$RepaintManagerAccessor_h_
//$ interface sun.swing.SwingAccessor$RepaintManagerAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class RepaintManager;
	}
}
namespace sun {
	namespace swing {
		class SwingUtilities2$RepaintListener;
	}
}

namespace sun {
	namespace swing {

class $import SwingAccessor$RepaintManagerAccessor : public ::java::lang::Object {
	$interface(SwingAccessor$RepaintManagerAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addRepaintListener(::javax::swing::RepaintManager* rm, ::sun::swing::SwingUtilities2$RepaintListener* l) {}
	virtual void removeRepaintListener(::javax::swing::RepaintManager* rm, ::sun::swing::SwingUtilities2$RepaintListener* l) {}
};

	} // swing
} // sun

#endif // _sun_swing_SwingAccessor$RepaintManagerAccessor_h_