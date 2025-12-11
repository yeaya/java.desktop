#ifndef _apple_laf_JRSUIConstants$Variant_h_
#define _apple_laf_JRSUIConstants$Variant_h_
//$ class apple.laf.JRSUIConstants$Variant
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$ScrollBarPart.h>

#pragma push_macro("GRADIENT_LIST_BACKGROUND_EVEN")
#undef GRADIENT_LIST_BACKGROUND_EVEN
#pragma push_macro("GRADIENT_LIST_BACKGROUND_ODD")
#undef GRADIENT_LIST_BACKGROUND_ODD
#pragma push_macro("GRADIENT_SIDE_BAR")
#undef GRADIENT_SIDE_BAR
#pragma push_macro("GRADIENT_SIDE_BAR_FOCUSED_SELECTION")
#undef GRADIENT_SIDE_BAR_FOCUSED_SELECTION
#pragma push_macro("GRADIENT_SIDE_BAR_SELECTION")
#undef GRADIENT_SIDE_BAR_SELECTION
#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("MENU_GLYPH")
#undef MENU_GLYPH
#pragma push_macro("MENU_HIERARCHICAL")
#undef MENU_HIERARCHICAL
#pragma push_macro("MENU_POPUP")
#undef MENU_POPUP
#pragma push_macro("MENU_PULLDOWN")
#undef MENU_PULLDOWN
#pragma push_macro("SHIFT")
#undef SHIFT
#pragma push_macro("SIZE")
#undef SIZE

namespace apple {
	namespace laf {
		class JRSUIConstants$PropertyEncoding;
	}
}

namespace apple {
	namespace laf {

class JRSUIConstants$Variant : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$Variant, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$Variant();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 24; // ::apple::laf::JRSUIConstants$ScrollBarPart::SHIFT + ::apple::laf::JRSUIConstants$ScrollBarPart::SIZE
	static const int8_t SIZE = 4;
	static const int64_t MASK = 251658240; // (int64_t)15 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* variant;
	static const int8_t _menuGlyph = 1;
	static ::apple::laf::JRSUIConstants$Variant* MENU_GLYPH;
	static const int8_t _menuPopup = 2; // ::apple::laf::JRSUIConstants$Variant::_menuGlyph + 1
	static ::apple::laf::JRSUIConstants$Variant* MENU_POPUP;
	static const int8_t _menuPulldown = 3; // ::apple::laf::JRSUIConstants$Variant::_menuPopup + 1
	static ::apple::laf::JRSUIConstants$Variant* MENU_PULLDOWN;
	static const int8_t _menuHierarchical = 4; // ::apple::laf::JRSUIConstants$Variant::_menuPulldown + 1
	static ::apple::laf::JRSUIConstants$Variant* MENU_HIERARCHICAL;
	static const int8_t _gradientListBackgroundEven = 5; // ::apple::laf::JRSUIConstants$Variant::_menuHierarchical + 1
	static ::apple::laf::JRSUIConstants$Variant* GRADIENT_LIST_BACKGROUND_EVEN;
	static const int8_t _gradientListBackgroundOdd = 6; // ::apple::laf::JRSUIConstants$Variant::_gradientListBackgroundEven + 1
	static ::apple::laf::JRSUIConstants$Variant* GRADIENT_LIST_BACKGROUND_ODD;
	static const int8_t _gradientSideBar = 7; // ::apple::laf::JRSUIConstants$Variant::_gradientListBackgroundOdd + 1
	static ::apple::laf::JRSUIConstants$Variant* GRADIENT_SIDE_BAR;
	static const int8_t _gradientSideBarSelection = 8; // ::apple::laf::JRSUIConstants$Variant::_gradientSideBar + 1
	static ::apple::laf::JRSUIConstants$Variant* GRADIENT_SIDE_BAR_SELECTION;
	static const int8_t _gradientSideBarFocusedSelection = 9; // ::apple::laf::JRSUIConstants$Variant::_gradientSideBarSelection + 1
	static ::apple::laf::JRSUIConstants$Variant* GRADIENT_SIDE_BAR_FOCUSED_SELECTION;
};

	} // laf
} // apple

#pragma pop_macro("GRADIENT_LIST_BACKGROUND_EVEN")
#pragma pop_macro("GRADIENT_LIST_BACKGROUND_ODD")
#pragma pop_macro("GRADIENT_SIDE_BAR")
#pragma pop_macro("GRADIENT_SIDE_BAR_FOCUSED_SELECTION")
#pragma pop_macro("GRADIENT_SIDE_BAR_SELECTION")
#pragma pop_macro("MASK")
#pragma pop_macro("MENU_GLYPH")
#pragma pop_macro("MENU_HIERARCHICAL")
#pragma pop_macro("MENU_POPUP")
#pragma pop_macro("MENU_PULLDOWN")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")

#endif // _apple_laf_JRSUIConstants$Variant_h_