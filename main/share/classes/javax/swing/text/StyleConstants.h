#ifndef _javax_swing_text_StyleConstants_h_
#define _javax_swing_text_StyleConstants_h_
//$ class javax.swing.text.StyleConstants
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALIGN_CENTER")
#undef ALIGN_CENTER
#pragma push_macro("ALIGN_JUSTIFIED")
#undef ALIGN_JUSTIFIED
#pragma push_macro("ALIGN_LEFT")
#undef ALIGN_LEFT
#pragma push_macro("ALIGN_RIGHT")
#undef ALIGN_RIGHT

namespace java {
	namespace awt {
		class Color;
		class Component;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class MutableAttributeSet;
			class TabSet;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export StyleConstants : public ::java::lang::Object {
	$class(StyleConstants, 0, ::java::lang::Object)
public:
	StyleConstants();
	void init$($String* representation);
	static int32_t getAlignment(::javax::swing::text::AttributeSet* a);
	static ::java::awt::Color* getBackground(::javax::swing::text::AttributeSet* a);
	static int32_t getBidiLevel(::javax::swing::text::AttributeSet* a);
	static ::java::awt::Component* getComponent(::javax::swing::text::AttributeSet* a);
	static float getFirstLineIndent(::javax::swing::text::AttributeSet* a);
	static $String* getFontFamily(::javax::swing::text::AttributeSet* a);
	static int32_t getFontSize(::javax::swing::text::AttributeSet* a);
	static ::java::awt::Color* getForeground(::javax::swing::text::AttributeSet* a);
	static ::javax::swing::Icon* getIcon(::javax::swing::text::AttributeSet* a);
	static float getLeftIndent(::javax::swing::text::AttributeSet* a);
	static float getLineSpacing(::javax::swing::text::AttributeSet* a);
	static float getRightIndent(::javax::swing::text::AttributeSet* a);
	static float getSpaceAbove(::javax::swing::text::AttributeSet* a);
	static float getSpaceBelow(::javax::swing::text::AttributeSet* a);
	static ::javax::swing::text::TabSet* getTabSet(::javax::swing::text::AttributeSet* a);
	static bool isBold(::javax::swing::text::AttributeSet* a);
	static bool isItalic(::javax::swing::text::AttributeSet* a);
	static bool isStrikeThrough(::javax::swing::text::AttributeSet* a);
	static bool isSubscript(::javax::swing::text::AttributeSet* a);
	static bool isSuperscript(::javax::swing::text::AttributeSet* a);
	static bool isUnderline(::javax::swing::text::AttributeSet* a);
	static void setAlignment(::javax::swing::text::MutableAttributeSet* a, int32_t align);
	static void setBackground(::javax::swing::text::MutableAttributeSet* a, ::java::awt::Color* fg);
	static void setBidiLevel(::javax::swing::text::MutableAttributeSet* a, int32_t o);
	static void setBold(::javax::swing::text::MutableAttributeSet* a, bool b);
	static void setComponent(::javax::swing::text::MutableAttributeSet* a, ::java::awt::Component* c);
	static void setFirstLineIndent(::javax::swing::text::MutableAttributeSet* a, float i);
	static void setFontFamily(::javax::swing::text::MutableAttributeSet* a, $String* fam);
	static void setFontSize(::javax::swing::text::MutableAttributeSet* a, int32_t s);
	static void setForeground(::javax::swing::text::MutableAttributeSet* a, ::java::awt::Color* fg);
	static void setIcon(::javax::swing::text::MutableAttributeSet* a, ::javax::swing::Icon* c);
	static void setItalic(::javax::swing::text::MutableAttributeSet* a, bool b);
	static void setLeftIndent(::javax::swing::text::MutableAttributeSet* a, float i);
	static void setLineSpacing(::javax::swing::text::MutableAttributeSet* a, float i);
	static void setRightIndent(::javax::swing::text::MutableAttributeSet* a, float i);
	static void setSpaceAbove(::javax::swing::text::MutableAttributeSet* a, float i);
	static void setSpaceBelow(::javax::swing::text::MutableAttributeSet* a, float i);
	static void setStrikeThrough(::javax::swing::text::MutableAttributeSet* a, bool b);
	static void setSubscript(::javax::swing::text::MutableAttributeSet* a, bool b);
	static void setSuperscript(::javax::swing::text::MutableAttributeSet* a, bool b);
	static void setTabSet(::javax::swing::text::MutableAttributeSet* a, ::javax::swing::text::TabSet* tabs);
	static void setUnderline(::javax::swing::text::MutableAttributeSet* a, bool b);
	virtual $String* toString() override;
	static $String* ComponentElementName;
	static $String* IconElementName;
	static $Object* NameAttribute;
	static $Object* ResolveAttribute;
	static $Object* ModelAttribute;
	static $Object* BidiLevel;
	static $Object* FontFamily;
	static $Object* Family;
	static $Object* FontSize;
	static $Object* Size;
	static $Object* Bold;
	static $Object* Italic;
	static $Object* Underline;
	static $Object* StrikeThrough;
	static $Object* Superscript;
	static $Object* Subscript;
	static $Object* Foreground;
	static $Object* Background;
	static $Object* ComponentAttribute;
	static $Object* IconAttribute;
	static $Object* ComposedTextAttribute;
	static $Object* FirstLineIndent;
	static $Object* LeftIndent;
	static $Object* RightIndent;
	static $Object* LineSpacing;
	static $Object* SpaceAbove;
	static $Object* SpaceBelow;
	static $Object* Alignment;
	static $Object* TabSet;
	static $Object* Orientation;
	static const int32_t ALIGN_LEFT = 0;
	static const int32_t ALIGN_CENTER = 1;
	static const int32_t ALIGN_RIGHT = 2;
	static const int32_t ALIGN_JUSTIFIED = 3;
	static $ObjectArray* keys;
	$String* representation = nullptr;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("ALIGN_CENTER")
#pragma pop_macro("ALIGN_JUSTIFIED")
#pragma pop_macro("ALIGN_LEFT")
#pragma pop_macro("ALIGN_RIGHT")

#endif // _javax_swing_text_StyleConstants_h_