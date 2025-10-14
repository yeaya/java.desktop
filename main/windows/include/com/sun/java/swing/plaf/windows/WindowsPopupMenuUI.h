#ifndef _com_sun_java_swing_plaf_windows_WindowsPopupMenuUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsPopupMenuUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsPopupMenuUI
//$ extends javax.swing.plaf.basic.BasicPopupMenuUI

#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>

#pragma push_macro("GUTTER_OFFSET_KEY")
#undef GUTTER_OFFSET_KEY

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsPopupMenuUI$MnemonicListener;
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
namespace javax {
	namespace swing {
		class JComponent;
		class JPopupMenu;
		class Popup;
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

class $import WindowsPopupMenuUI : public ::javax::swing::plaf::basic::BasicPopupMenuUI {
	$class(WindowsPopupMenuUI, 0, ::javax::swing::plaf::basic::BasicPopupMenuUI)
public:
	WindowsPopupMenuUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static int32_t getGutterWidth();
	virtual ::javax::swing::Popup* getPopup(::javax::swing::JPopupMenu* popupMenu, int32_t x, int32_t y) override;
	static int32_t getSpanAfterGutter();
	static int32_t getSpanBeforeGutter();
	static int32_t getTextOffset(::javax::swing::JComponent* c);
	virtual void installListeners() override;
	static bool isLeftToRight(::javax::swing::JComponent* c);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	static ::com::sun::java::swing::plaf::windows::WindowsPopupMenuUI$MnemonicListener* mnemonicListener;
	static $Object* GUTTER_OFFSET_KEY;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("GUTTER_OFFSET_KEY")

#endif // _com_sun_java_swing_plaf_windows_WindowsPopupMenuUI_h_