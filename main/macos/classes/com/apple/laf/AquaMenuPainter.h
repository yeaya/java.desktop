#ifndef _com_apple_laf_AquaMenuPainter_h_
#define _com_apple_laf_AquaMenuPainter_h_
//$ class com.apple.laf.AquaMenuPainter
//$ extends java.lang.Object

#include <java/awt/event/InputEvent.h>

#pragma push_macro("ALT_GRAPH_MASK")
#undef ALT_GRAPH_MASK
#pragma push_macro("ALT_MASK")
#undef ALT_MASK
#pragma push_macro("CTRL_MASK")
#undef CTRL_MASK
#pragma push_macro("META_MASK")
#undef META_MASK
#pragma push_macro("SHIFT_MASK")
#undef SHIFT_MASK

namespace com {
	namespace apple {
		namespace laf {
			class AquaMenuPainter$Client;
			class AquaMenuPainter$RecyclableBorder;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Font;
		class FontMetrics;
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class ButtonModel;
		class Icon;
		class JComponent;
		class JMenuItem;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaMenuPainter : public ::java::lang::Object {
	$class(AquaMenuPainter, 0, ::java::lang::Object)
public:
	AquaMenuPainter();
	void init$();
	virtual void drawString(::java::awt::Graphics* g, ::javax::swing::JComponent* c, $String* text, int32_t underlinedChar, int32_t x, int32_t y, bool isEnabled, bool isSelected);
	static $String* getKeyModifiersText(int32_t modifiers, bool isLeftToRight);
	static $String* getKeyModifiersUnicode(int32_t modifiers, bool isLeftToRight);
	static ::javax::swing::border::Border* getMenuBarPainter();
	virtual ::java::awt::Dimension* getPreferredMenuItemSize(::javax::swing::JComponent* c, ::javax::swing::Icon* checkIcon, ::javax::swing::Icon* arrowIcon, int32_t defaultTextIconGap, ::java::awt::Font* acceleratorFont);
	static ::javax::swing::border::Border* getSelectedMenuBarItemPainter();
	static ::javax::swing::border::Border* getSelectedMenuItemPainter();
	static ::com::apple::laf::AquaMenuPainter* instance();
	static bool isTopLevelMenu(::javax::swing::JMenuItem* menuItem);
	$String* layoutMenuItem(::javax::swing::JMenuItem* menuItem, ::java::awt::FontMetrics* fm, $String* text, ::java::awt::FontMetrics* fmAccel, $String* keyString, $String* modifiersString, ::javax::swing::Icon* icon, ::javax::swing::Icon* checkIcon, ::javax::swing::Icon* arrowIcon, int32_t verticalAlignment, int32_t horizontalAlignment, int32_t verticalTextPosition, int32_t horizontalTextPosition, ::java::awt::Rectangle* viewR, ::java::awt::Rectangle* iconR, ::java::awt::Rectangle* textR, ::java::awt::Rectangle* acceleratorR, ::java::awt::Rectangle* checkIconR, ::java::awt::Rectangle* arrowIconR, int32_t textIconGap, int32_t menuItemGap);
	virtual void paintArrow(::java::awt::Graphics* g, ::javax::swing::JMenuItem* c, ::javax::swing::ButtonModel* model, ::javax::swing::Icon* arrowIcon, ::java::awt::Rectangle* arrowIconRect);
	virtual void paintCheck(::java::awt::Graphics* g, ::javax::swing::JMenuItem* item, ::javax::swing::Icon* checkIcon, ::java::awt::Rectangle* checkIconRect);
	virtual void paintIcon(::java::awt::Graphics* g, ::javax::swing::JMenuItem* c, ::java::awt::Rectangle* localIconRect, bool isEnabled);
	virtual void paintMenuBarBackground(::java::awt::Graphics* g, int32_t width, int32_t height, ::javax::swing::JComponent* c);
	virtual void paintMenuItem(::com::apple::laf::AquaMenuPainter$Client* client, ::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::javax::swing::Icon* checkIcon, ::javax::swing::Icon* arrowIcon, ::java::awt::Color* background, ::java::awt::Color* foreground, ::java::awt::Color* disabledForeground, ::java::awt::Color* selectionForeground, int32_t defaultTextIconGap, ::java::awt::Font* acceleratorFont);
	virtual void paintSelectedMenuItemBackground(::java::awt::Graphics* g, int32_t width, int32_t height);
	virtual void paintSelectedMenuTitleBackground(::java::awt::Graphics* g, int32_t width, int32_t height);
	static const int8_t kShiftGlyph = 5;
	static const int8_t kOptionGlyph = 7;
	static const int8_t kControlGlyph = 6;
	static const int8_t kPencilGlyph = 15;
	static const int8_t kCommandMark = 17;
	static const char16_t kUBlackDiamond = 9670;
	static const char16_t kUCheckMark = 10003;
	static const char16_t kUControlGlyph = 8963;
	static const char16_t kUOptionGlyph = 8997;
	static const char16_t kUEnterGlyph = 8996;
	static const char16_t kUCommandGlyph = 8984;
	static const char16_t kULeftDeleteGlyph = 9003;
	static const char16_t kURightDeleteGlyph = 8998;
	static const char16_t kUShiftGlyph = 8679;
	static const char16_t kUCapsLockGlyph = 8682;
	static const int32_t ALT_GRAPH_MASK = 32; // 1 << 5
	static const int32_t sUnsupportedModifiersMask = -48; // ~(::java::awt::event::InputEvent::CTRL_MASK | ::java::awt::event::InputEvent::ALT_MASK | ::java::awt::event::InputEvent::SHIFT_MASK | ::java::awt::event::InputEvent::META_MASK | ALT_GRAPH_MASK)
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* sPainter;
	static const int32_t defaultMenuItemGap = 2;
	static const int32_t kAcceleratorArrowSpace = 16;
	static ::com::apple::laf::AquaMenuPainter$RecyclableBorder* menuBarPainter;
	static ::com::apple::laf::AquaMenuPainter$RecyclableBorder* selectedMenuBarItemPainter;
	static ::com::apple::laf::AquaMenuPainter$RecyclableBorder* selectedMenuItemPainter;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("ALT_GRAPH_MASK")
#pragma pop_macro("ALT_MASK")
#pragma pop_macro("CTRL_MASK")
#pragma pop_macro("META_MASK")
#pragma pop_macro("SHIFT_MASK")

#endif // _com_apple_laf_AquaMenuPainter_h_