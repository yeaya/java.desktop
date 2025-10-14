#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$IndentIcon_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$IndentIcon_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$IndentIcon
//$ extends javax.swing.Icon

#include <javax/swing/Icon.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsFileChooserUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsFileChooserUI$IndentIcon : public ::javax::swing::Icon {
	$class(WindowsFileChooserUI$IndentIcon, $NO_CLASS_INIT, ::javax::swing::Icon)
public:
	WindowsFileChooserUI$IndentIcon();
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
	::javax::swing::Icon* icon = nullptr;
	int32_t depth = 0;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$IndentIcon_h_