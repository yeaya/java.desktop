#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$WindowsLayoutStyle_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$WindowsLayoutStyle_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsLayoutStyle
//$ extends sun.swing.DefaultLayoutStyle

#include <sun/swing/DefaultLayoutStyle.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsLookAndFeel;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Container;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class LayoutStyle$ComponentPlacement;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsLookAndFeel$WindowsLayoutStyle : public ::sun::swing::DefaultLayoutStyle {
	$class(WindowsLookAndFeel$WindowsLayoutStyle, $NO_CLASS_INIT, ::sun::swing::DefaultLayoutStyle)
public:
	WindowsLookAndFeel$WindowsLayoutStyle();
	void init$(::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* this$0);
	virtual int32_t getContainerGap(::javax::swing::JComponent* component, int32_t position, ::java::awt::Container* parent) override;
	virtual int32_t getPreferredGap(::javax::swing::JComponent* component1, ::javax::swing::JComponent* component2, ::javax::swing::LayoutStyle$ComponentPlacement* type, int32_t position, ::java::awt::Container* parent) override;
	::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$WindowsLayoutStyle_h_