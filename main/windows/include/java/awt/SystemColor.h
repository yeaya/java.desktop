#ifndef _java_awt_SystemColor_h_
#define _java_awt_SystemColor_h_
//$ class java.awt.SystemColor
//$ extends java.awt.Color

#include <java/awt/Color.h>
#include <java/lang/Array.h>

#pragma push_macro("ACTIVE_CAPTION")
#undef ACTIVE_CAPTION
#pragma push_macro("ACTIVE_CAPTION_BORDER")
#undef ACTIVE_CAPTION_BORDER
#pragma push_macro("ACTIVE_CAPTION_TEXT")
#undef ACTIVE_CAPTION_TEXT
#pragma push_macro("CONTROL")
#undef CONTROL
#pragma push_macro("CONTROL_DK_SHADOW")
#undef CONTROL_DK_SHADOW
#pragma push_macro("CONTROL_HIGHLIGHT")
#undef CONTROL_HIGHLIGHT
#pragma push_macro("CONTROL_LT_HIGHLIGHT")
#undef CONTROL_LT_HIGHLIGHT
#pragma push_macro("CONTROL_SHADOW")
#undef CONTROL_SHADOW
#pragma push_macro("CONTROL_TEXT")
#undef CONTROL_TEXT
#pragma push_macro("DESKTOP")
#undef DESKTOP
#pragma push_macro("INACTIVE_CAPTION")
#undef INACTIVE_CAPTION
#pragma push_macro("INACTIVE_CAPTION_BORDER")
#undef INACTIVE_CAPTION_BORDER
#pragma push_macro("INACTIVE_CAPTION_TEXT")
#undef INACTIVE_CAPTION_TEXT
#pragma push_macro("INFO")
#undef INFO
#pragma push_macro("INFO_TEXT")
#undef INFO_TEXT
#pragma push_macro("MENU")
#undef MENU
#pragma push_macro("MENU_TEXT")
#undef MENU_TEXT
#pragma push_macro("NUM_COLORS")
#undef NUM_COLORS
#pragma push_macro("SCROLLBAR")
#undef SCROLLBAR
#pragma push_macro("TEXT")
#undef TEXT
#pragma push_macro("TEXT_HIGHLIGHT")
#undef TEXT_HIGHLIGHT
#pragma push_macro("TEXT_HIGHLIGHT_TEXT")
#undef TEXT_HIGHLIGHT_TEXT
#pragma push_macro("TEXT_INACTIVE_TEXT")
#undef TEXT_INACTIVE_TEXT
#pragma push_macro("TEXT_TEXT")
#undef TEXT_TEXT
#pragma push_macro("WINDOW")
#undef WINDOW
#pragma push_macro("WINDOW_BORDER")
#undef WINDOW_BORDER
#pragma push_macro("WINDOW_TEXT")
#undef WINDOW_TEXT

namespace java {
	namespace awt {

class $import SystemColor : public ::java::awt::Color {
	$class(SystemColor, 0, ::java::awt::Color)
public:
	SystemColor();
	void init$(int8_t index);
	$Object* readResolve();
	virtual $String* toString() override;
	static void updateSystemColors();
	$Object* writeReplace();
	static const int32_t DESKTOP = 0;
	static const int32_t ACTIVE_CAPTION = 1;
	static const int32_t ACTIVE_CAPTION_TEXT = 2;
	static const int32_t ACTIVE_CAPTION_BORDER = 3;
	static const int32_t INACTIVE_CAPTION = 4;
	static const int32_t INACTIVE_CAPTION_TEXT = 5;
	static const int32_t INACTIVE_CAPTION_BORDER = 6;
	static const int32_t WINDOW = 7;
	static const int32_t WINDOW_BORDER = 8;
	static const int32_t WINDOW_TEXT = 9;
	static const int32_t MENU = 10;
	static const int32_t MENU_TEXT = 11;
	static const int32_t TEXT = 12;
	static const int32_t TEXT_TEXT = 13;
	static const int32_t TEXT_HIGHLIGHT = 14;
	static const int32_t TEXT_HIGHLIGHT_TEXT = 15;
	static const int32_t TEXT_INACTIVE_TEXT = 16;
	static const int32_t CONTROL = 17;
	static const int32_t CONTROL_TEXT = 18;
	static const int32_t CONTROL_HIGHLIGHT = 19;
	static const int32_t CONTROL_LT_HIGHLIGHT = 20;
	static const int32_t CONTROL_SHADOW = 21;
	static const int32_t CONTROL_DK_SHADOW = 22;
	static const int32_t SCROLLBAR = 23;
	static const int32_t INFO = 24;
	static const int32_t INFO_TEXT = 25;
	static const int32_t NUM_COLORS = 26;
	static $ints* systemColors;
	static ::java::awt::SystemColor* desktop;
	static ::java::awt::SystemColor* activeCaption;
	static ::java::awt::SystemColor* activeCaptionText;
	static ::java::awt::SystemColor* activeCaptionBorder;
	static ::java::awt::SystemColor* inactiveCaption;
	static ::java::awt::SystemColor* inactiveCaptionText;
	static ::java::awt::SystemColor* inactiveCaptionBorder;
	static ::java::awt::SystemColor* window;
	static ::java::awt::SystemColor* windowBorder;
	static ::java::awt::SystemColor* windowText;
	static ::java::awt::SystemColor* menu;
	static ::java::awt::SystemColor* menuText;
	static ::java::awt::SystemColor* text;
	static ::java::awt::SystemColor* textText;
	static ::java::awt::SystemColor* textHighlight;
	static ::java::awt::SystemColor* textHighlightText;
	static ::java::awt::SystemColor* textInactiveText;
	static ::java::awt::SystemColor* control;
	static ::java::awt::SystemColor* controlText;
	static ::java::awt::SystemColor* controlHighlight;
	static ::java::awt::SystemColor* controlLtHighlight;
	static ::java::awt::SystemColor* controlShadow;
	static ::java::awt::SystemColor* controlDkShadow;
	static ::java::awt::SystemColor* scrollbar;
	static ::java::awt::SystemColor* info;
	static ::java::awt::SystemColor* infoText;
	static const int64_t serialVersionUID = (int64_t)0x3E7E60742EBE9388;
	int32_t index = 0;
	static $Array<::java::awt::SystemColor>* systemColorObjects;
};

	} // awt
} // java

#pragma pop_macro("ACTIVE_CAPTION")
#pragma pop_macro("ACTIVE_CAPTION_BORDER")
#pragma pop_macro("ACTIVE_CAPTION_TEXT")
#pragma pop_macro("CONTROL")
#pragma pop_macro("CONTROL_DK_SHADOW")
#pragma pop_macro("CONTROL_HIGHLIGHT")
#pragma pop_macro("CONTROL_LT_HIGHLIGHT")
#pragma pop_macro("CONTROL_SHADOW")
#pragma pop_macro("CONTROL_TEXT")
#pragma pop_macro("DESKTOP")
#pragma pop_macro("INACTIVE_CAPTION")
#pragma pop_macro("INACTIVE_CAPTION_BORDER")
#pragma pop_macro("INACTIVE_CAPTION_TEXT")
#pragma pop_macro("INFO")
#pragma pop_macro("INFO_TEXT")
#pragma pop_macro("MENU")
#pragma pop_macro("MENU_TEXT")
#pragma pop_macro("NUM_COLORS")
#pragma pop_macro("SCROLLBAR")
#pragma pop_macro("TEXT")
#pragma pop_macro("TEXT_HIGHLIGHT")
#pragma pop_macro("TEXT_HIGHLIGHT_TEXT")
#pragma pop_macro("TEXT_INACTIVE_TEXT")
#pragma pop_macro("TEXT_TEXT")
#pragma pop_macro("WINDOW")
#pragma pop_macro("WINDOW_BORDER")
#pragma pop_macro("WINDOW_TEXT")

#endif // _java_awt_SystemColor_h_