#ifndef _sun_swing_plaf_DesktopProperty$1_h_
#define _sun_swing_plaf_DesktopProperty$1_h_
//$ class sun.swing.plaf.DesktopProperty$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace swing {
		namespace plaf {
			class DesktopProperty;
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {

class DesktopProperty$1 : public ::java::lang::Runnable {
	$class(DesktopProperty$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	DesktopProperty$1();
	void init$(::sun::swing::plaf::DesktopProperty* this$0);
	virtual void run() override;
	::sun::swing::plaf::DesktopProperty* this$0 = nullptr;
};

		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_DesktopProperty$1_h_