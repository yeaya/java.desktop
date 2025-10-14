#ifndef _com_sun_java_swing_plaf_windows_WindowsTabbedPaneUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsTabbedPaneUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTabbedPaneUI
//$ extends javax.swing.plaf.basic.BasicTabbedPaneUI

#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$State;
						class XPStyle$Skin;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsTabbedPaneUI : public ::javax::swing::plaf::basic::BasicTabbedPaneUI {
	$class(WindowsTabbedPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTabbedPaneUI)
public:
	WindowsTabbedPaneUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void installDefaults() override;
	virtual void paintContentBorder(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex) override;
	void paintRotatedSkin(::java::awt::Graphics* g, ::com::sun::java::swing::plaf::windows::XPStyle$Skin* skin, int32_t tabPlacement, int32_t x, int32_t y, int32_t w, int32_t h, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	virtual void paintTabBackground(::java::awt::Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) override;
	virtual void paintTabBorder(::java::awt::Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) override;
	virtual void setRolloverTab(int32_t index) override;
	virtual void uninstallDefaults() override;
	static ::java::util::Set* managingFocusForwardTraversalKeys;
	static ::java::util::Set* managingFocusBackwardTraversalKeys;
	bool contentOpaque = false;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsTabbedPaneUI_h_