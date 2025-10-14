#ifndef _com_sun_java_swing_plaf_windows_WindowsButtonUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsButtonUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsButtonUI
//$ extends javax.swing.plaf.basic.BasicButtonUI

#include <javax/swing/plaf/basic/BasicButtonUI.h>

#pragma push_macro("WINDOWS_BUTTON_UI_KEY")
#undef WINDOWS_BUTTON_UI_KEY

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$State;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dimension;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
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

class $import WindowsButtonUI : public ::javax::swing::plaf::basic::BasicButtonUI {
	$class(WindowsButtonUI, 0, ::javax::swing::plaf::basic::BasicButtonUI)
public:
	WindowsButtonUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Color* getFocusColor();
	static ::java::awt::Insets* getOpaqueInsets(::javax::swing::border::Border* b, ::java::awt::Component* c);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* getXPButtonState(::javax::swing::AbstractButton* b);
	static ::com::sun::java::swing::plaf::windows::TMSchema$Part* getXPButtonType(::javax::swing::AbstractButton* b);
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintButtonPressed(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b) override;
	virtual void paintFocus(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* viewRect, ::java::awt::Rectangle* textRect, ::java::awt::Rectangle* iconRect) override;
	using ::javax::swing::plaf::basic::BasicButtonUI::paintText;
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* textRect, $String* text) override;
	static void paintXPButtonBackground(::java::awt::Graphics* g, ::javax::swing::JComponent* c);
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	int32_t dashedRectGapX = 0;
	int32_t dashedRectGapY = 0;
	int32_t dashedRectGapWidth = 0;
	int32_t dashedRectGapHeight = 0;
	::java::awt::Color* focusColor = nullptr;
	bool defaults_initialized = false;
	static $Object* WINDOWS_BUTTON_UI_KEY;
	::java::awt::Rectangle* viewRect = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("WINDOWS_BUTTON_UI_KEY")

#endif // _com_sun_java_swing_plaf_windows_WindowsButtonUI_h_