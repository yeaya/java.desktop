#ifndef _javax_swing_plaf_metal_MetalTheme_h_
#define _javax_swing_plaf_metal_MetalTheme_h_
//$ class javax.swing.plaf.metal.MetalTheme
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CONTROL_TEXT_FONT")
#undef CONTROL_TEXT_FONT
#pragma push_macro("MENU_TEXT_FONT")
#undef MENU_TEXT_FONT
#pragma push_macro("SUB_TEXT_FONT")
#undef SUB_TEXT_FONT
#pragma push_macro("SYSTEM_TEXT_FONT")
#undef SYSTEM_TEXT_FONT
#pragma push_macro("USER_TEXT_FONT")
#undef USER_TEXT_FONT
#pragma push_macro("WINDOW_TITLE_FONT")
#undef WINDOW_TITLE_FONT

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ColorUIResource;
			class FontUIResource;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalTheme : public ::java::lang::Object {
	$class(MetalTheme, 0, ::java::lang::Object)
public:
	MetalTheme();
	void init$();
	virtual void addCustomEntriesToTable(::javax::swing::UIDefaults* table);
	virtual ::javax::swing::plaf::ColorUIResource* getAcceleratorForeground();
	virtual ::javax::swing::plaf::ColorUIResource* getAcceleratorSelectedForeground();
	virtual ::javax::swing::plaf::ColorUIResource* getBlack();
	virtual ::javax::swing::plaf::ColorUIResource* getControl();
	virtual ::javax::swing::plaf::ColorUIResource* getControlDarkShadow();
	virtual ::javax::swing::plaf::ColorUIResource* getControlDisabled();
	virtual ::javax::swing::plaf::ColorUIResource* getControlHighlight();
	virtual ::javax::swing::plaf::ColorUIResource* getControlInfo();
	virtual ::javax::swing::plaf::ColorUIResource* getControlShadow();
	virtual ::javax::swing::plaf::ColorUIResource* getControlTextColor();
	virtual ::javax::swing::plaf::FontUIResource* getControlTextFont() {return nullptr;}
	virtual ::javax::swing::plaf::ColorUIResource* getDesktopColor();
	virtual ::javax::swing::plaf::ColorUIResource* getFocusColor();
	virtual ::javax::swing::plaf::ColorUIResource* getHighlightedTextColor();
	virtual ::javax::swing::plaf::ColorUIResource* getInactiveControlTextColor();
	virtual ::javax::swing::plaf::ColorUIResource* getInactiveSystemTextColor();
	virtual ::javax::swing::plaf::ColorUIResource* getMenuBackground();
	virtual ::javax::swing::plaf::ColorUIResource* getMenuDisabledForeground();
	virtual ::javax::swing::plaf::ColorUIResource* getMenuForeground();
	virtual ::javax::swing::plaf::ColorUIResource* getMenuSelectedBackground();
	virtual ::javax::swing::plaf::ColorUIResource* getMenuSelectedForeground();
	virtual ::javax::swing::plaf::FontUIResource* getMenuTextFont() {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual ::javax::swing::plaf::ColorUIResource* getPrimary1() {return nullptr;}
	virtual ::javax::swing::plaf::ColorUIResource* getPrimary2() {return nullptr;}
	virtual ::javax::swing::plaf::ColorUIResource* getPrimary3() {return nullptr;}
	virtual ::javax::swing::plaf::ColorUIResource* getPrimaryControl();
	virtual ::javax::swing::plaf::ColorUIResource* getPrimaryControlDarkShadow();
	virtual ::javax::swing::plaf::ColorUIResource* getPrimaryControlHighlight();
	virtual ::javax::swing::plaf::ColorUIResource* getPrimaryControlInfo();
	virtual ::javax::swing::plaf::ColorUIResource* getPrimaryControlShadow();
	virtual ::javax::swing::plaf::ColorUIResource* getSecondary1() {return nullptr;}
	virtual ::javax::swing::plaf::ColorUIResource* getSecondary2() {return nullptr;}
	virtual ::javax::swing::plaf::ColorUIResource* getSecondary3() {return nullptr;}
	virtual ::javax::swing::plaf::ColorUIResource* getSeparatorBackground();
	virtual ::javax::swing::plaf::ColorUIResource* getSeparatorForeground();
	virtual ::javax::swing::plaf::FontUIResource* getSubTextFont() {return nullptr;}
	virtual ::javax::swing::plaf::ColorUIResource* getSystemTextColor();
	virtual ::javax::swing::plaf::FontUIResource* getSystemTextFont() {return nullptr;}
	virtual ::javax::swing::plaf::ColorUIResource* getTextHighlightColor();
	virtual ::javax::swing::plaf::ColorUIResource* getUserTextColor();
	virtual ::javax::swing::plaf::FontUIResource* getUserTextFont() {return nullptr;}
	virtual ::javax::swing::plaf::ColorUIResource* getWhite();
	virtual ::javax::swing::plaf::ColorUIResource* getWindowBackground();
	virtual ::javax::swing::plaf::ColorUIResource* getWindowTitleBackground();
	virtual ::javax::swing::plaf::FontUIResource* getWindowTitleFont() {return nullptr;}
	virtual ::javax::swing::plaf::ColorUIResource* getWindowTitleForeground();
	virtual ::javax::swing::plaf::ColorUIResource* getWindowTitleInactiveBackground();
	virtual ::javax::swing::plaf::ColorUIResource* getWindowTitleInactiveForeground();
	virtual void install();
	virtual bool isSystemTheme();
	static const int32_t CONTROL_TEXT_FONT = 0;
	static const int32_t SYSTEM_TEXT_FONT = 1;
	static const int32_t USER_TEXT_FONT = 2;
	static const int32_t MENU_TEXT_FONT = 3;
	static const int32_t WINDOW_TITLE_FONT = 4;
	static const int32_t SUB_TEXT_FONT = 5;
	static ::javax::swing::plaf::ColorUIResource* white;
	static ::javax::swing::plaf::ColorUIResource* black;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("CONTROL_TEXT_FONT")
#pragma pop_macro("MENU_TEXT_FONT")
#pragma pop_macro("SUB_TEXT_FONT")
#pragma pop_macro("SYSTEM_TEXT_FONT")
#pragma pop_macro("USER_TEXT_FONT")
#pragma pop_macro("WINDOW_TITLE_FONT")

#endif // _javax_swing_plaf_metal_MetalTheme_h_