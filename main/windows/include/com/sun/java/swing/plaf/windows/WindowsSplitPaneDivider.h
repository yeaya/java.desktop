#ifndef _com_sun_java_swing_plaf_windows_WindowsSplitPaneDivider_h_
#define _com_sun_java_swing_plaf_windows_WindowsSplitPaneDivider_h_
//$ class com.sun.java.swing.plaf.windows.WindowsSplitPaneDivider
//$ extends javax.swing.plaf.basic.BasicSplitPaneDivider

#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicSplitPaneUI;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsSplitPaneDivider : public ::javax::swing::plaf::basic::BasicSplitPaneDivider {
	$class(WindowsSplitPaneDivider, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSplitPaneDivider)
public:
	WindowsSplitPaneDivider();
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::add;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::getMousePosition;
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* ui);
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::remove;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsSplitPaneDivider_h_