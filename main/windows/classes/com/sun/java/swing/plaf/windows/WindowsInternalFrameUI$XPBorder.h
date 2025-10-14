#ifndef _com_sun_java_swing_plaf_windows_WindowsInternalFrameUI$XPBorder_h_
#define _com_sun_java_swing_plaf_windows_WindowsInternalFrameUI$XPBorder_h_
//$ class com.sun.java.swing.plaf.windows.WindowsInternalFrameUI$XPBorder
//$ extends javax.swing.border.AbstractBorder

#include <javax/swing/border/AbstractBorder.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsInternalFrameUI;
						class XPStyle$Skin;
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
		class Insets;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsInternalFrameUI$XPBorder : public ::javax::swing::border::AbstractBorder {
	$class(WindowsInternalFrameUI$XPBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder)
public:
	WindowsInternalFrameUI$XPBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	void init$(::com::sun::java::swing::plaf::windows::WindowsInternalFrameUI* this$0);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	::com::sun::java::swing::plaf::windows::WindowsInternalFrameUI* this$0 = nullptr;
	::com::sun::java::swing::plaf::windows::XPStyle$Skin* leftSkin = nullptr;
	::com::sun::java::swing::plaf::windows::XPStyle$Skin* rightSkin = nullptr;
	::com::sun::java::swing::plaf::windows::XPStyle$Skin* bottomSkin = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsInternalFrameUI$XPBorder_h_