#ifndef _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$WindowsTitlePaneLayout_h_
#define _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$WindowsTitlePaneLayout_h_
//$ class com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$WindowsTitlePaneLayout
//$ extends javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout

#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$TitlePaneLayout.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class WindowsInternalFrameTitlePane;
						class XPStyle;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Container;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsInternalFrameTitlePane$WindowsTitlePaneLayout : public ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$TitlePaneLayout {
	$class(WindowsInternalFrameTitlePane$WindowsTitlePaneLayout, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$TitlePaneLayout)
public:
	WindowsInternalFrameTitlePane$WindowsTitlePaneLayout();
	void init$(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* this$0);
	int32_t layoutButton(::javax::swing::JComponent* button, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, int32_t x, int32_t y, int32_t w, int32_t h, int32_t gap, bool leftToRight);
	virtual void layoutContainer(::java::awt::Container* c) override;
	::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* this$0 = nullptr;
	::java::awt::Insets* captionMargin = nullptr;
	::java::awt::Insets* contentMargin = nullptr;
	::com::sun::java::swing::plaf::windows::XPStyle* xp = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$WindowsTitlePaneLayout_h_