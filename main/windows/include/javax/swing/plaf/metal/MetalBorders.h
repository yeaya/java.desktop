#ifndef _javax_swing_plaf_metal_MetalBorders_h_
#define _javax_swing_plaf_metal_MetalBorders_h_
//$ class javax.swing.plaf.metal.MetalBorders
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NO_BUTTON_ROLLOVER")
#undef NO_BUTTON_ROLLOVER

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
			namespace metal {

class $import MetalBorders : public ::java::lang::Object {
	$class(MetalBorders, 0, ::java::lang::Object)
public:
	MetalBorders();
	void init$();
	static ::javax::swing::border::Border* getButtonBorder();
	static ::javax::swing::border::Border* getDesktopIconBorder();
	static ::javax::swing::border::Border* getTextBorder();
	static ::javax::swing::border::Border* getTextFieldBorder();
	static ::javax::swing::border::Border* getToggleButtonBorder();
	static ::javax::swing::border::Border* getToolBarNonrolloverBorder();
	static ::javax::swing::border::Border* getToolBarRolloverBorder();
	static $Object* NO_BUTTON_ROLLOVER;
	static ::javax::swing::border::Border* buttonBorder;
	static ::javax::swing::border::Border* textBorder;
	static ::javax::swing::border::Border* textFieldBorder;
	static ::javax::swing::border::Border* toggleButtonBorder;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("NO_BUTTON_ROLLOVER")

#endif // _javax_swing_plaf_metal_MetalBorders_h_