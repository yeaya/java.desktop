#ifndef _com_sun_java_swing_plaf_windows_WindowsScrollBarUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsScrollBarUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsScrollBarUI
//$ extends javax.swing.plaf.basic.BasicScrollBarUI

#include <javax/swing/plaf/basic/BasicScrollBarUI.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class WindowsScrollBarUI$Grid;
						class XPStyle;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JComponent;
		class JScrollBar;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicScrollBarUI$ArrowButtonListener;
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

class $import WindowsScrollBarUI : public ::javax::swing::plaf::basic::BasicScrollBarUI {
	$class(WindowsScrollBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicScrollBarUI)
public:
	WindowsScrollBarUI();
	void init$();
	static ::javax::swing::JScrollBar* access$000(::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* x0);
	static ::javax::swing::JButton* access$100(::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* x0);
	static ::javax::swing::JButton* access$200(::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* x0);
	static ::javax::swing::JButton* access$300(::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* x0);
	static ::javax::swing::JButton* access$400(::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* x0);
	static ::javax::swing::JScrollBar* access$500(::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* x0);
	static ::javax::swing::JScrollBar* access$600(::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* x0);
	static ::javax::swing::JScrollBar* access$700(::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* x0);
	static ::javax::swing::JScrollBar* access$800(::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* x0);
	virtual void configureScrollBarColors() override;
	virtual ::javax::swing::plaf::basic::BasicScrollBarUI$ArrowButtonListener* createArrowButtonListener() override;
	virtual ::javax::swing::JButton* createDecreaseButton(int32_t orientation) override;
	virtual ::javax::swing::JButton* createIncreaseButton(int32_t orientation) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMinimumThumbSize() override;
	static ::java::awt::Dimension* getSize(::java::awt::Component* component, ::com::sun::java::swing::plaf::windows::XPStyle* xp, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	virtual void installDefaults() override;
	virtual void paintDecreaseHighlight(::java::awt::Graphics* g) override;
	virtual void paintIncreaseHighlight(::java::awt::Graphics* g) override;
	virtual void paintThumb(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* thumbBounds) override;
	virtual void paintTrack(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* trackBounds) override;
	virtual void setThumbRollover(bool active) override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	::com::sun::java::swing::plaf::windows::WindowsScrollBarUI$Grid* thumbGrid = nullptr;
	::com::sun::java::swing::plaf::windows::WindowsScrollBarUI$Grid* highlightGrid = nullptr;
	::java::awt::Dimension* horizontalThumbSize = nullptr;
	::java::awt::Dimension* verticalThumbSize = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsScrollBarUI_h_