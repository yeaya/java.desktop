#include <javax/swing/text/StyleConstants.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/StyleConstants$CharacterConstants.h>
#include <javax/swing/text/StyleConstants$ColorConstants.h>
#include <javax/swing/text/StyleConstants$FontConstants.h>
#include <javax/swing/text/StyleConstants$ParagraphConstants.h>
#include <javax/swing/text/TabSet.h>
#include <jcpp.h>

#undef ALIGN_CENTER
#undef ALIGN_JUSTIFIED
#undef ALIGN_LEFT
#undef ALIGN_RIGHT

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $StyleConstants$CharacterConstants = ::javax::swing::text::StyleConstants$CharacterConstants;
using $StyleConstants$ColorConstants = ::javax::swing::text::StyleConstants$ColorConstants;
using $StyleConstants$FontConstants = ::javax::swing::text::StyleConstants$FontConstants;
using $StyleConstants$ParagraphConstants = ::javax::swing::text::StyleConstants$ParagraphConstants;
using $TabSet = ::javax::swing::text::TabSet;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyleConstants_FieldInfo_[] = {
	{"ComponentElementName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, ComponentElementName)},
	{"IconElementName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, IconElementName)},
	{"NameAttribute", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, NameAttribute)},
	{"ResolveAttribute", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, ResolveAttribute)},
	{"ModelAttribute", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, ModelAttribute)},
	{"BidiLevel", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, BidiLevel)},
	{"FontFamily", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, FontFamily)},
	{"Family", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, Family)},
	{"FontSize", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, FontSize)},
	{"Size", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, Size)},
	{"Bold", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, Bold)},
	{"Italic", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, Italic)},
	{"Underline", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, Underline)},
	{"StrikeThrough", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, StrikeThrough)},
	{"Superscript", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, Superscript)},
	{"Subscript", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, Subscript)},
	{"Foreground", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, Foreground)},
	{"Background", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, Background)},
	{"ComponentAttribute", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, ComponentAttribute)},
	{"IconAttribute", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, IconAttribute)},
	{"ComposedTextAttribute", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, ComposedTextAttribute)},
	{"FirstLineIndent", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, FirstLineIndent)},
	{"LeftIndent", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, LeftIndent)},
	{"RightIndent", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, RightIndent)},
	{"LineSpacing", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, LineSpacing)},
	{"SpaceAbove", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, SpaceAbove)},
	{"SpaceBelow", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, SpaceBelow)},
	{"Alignment", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, Alignment)},
	{"TabSet", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, TabSet)},
	{"Orientation", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleConstants, Orientation)},
	{"ALIGN_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StyleConstants, ALIGN_LEFT)},
	{"ALIGN_CENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StyleConstants, ALIGN_CENTER)},
	{"ALIGN_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StyleConstants, ALIGN_RIGHT)},
	{"ALIGN_JUSTIFIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StyleConstants, ALIGN_JUSTIFIED)},
	{"keys", "[Ljava/lang/Object;", nullptr, $STATIC, $staticField(StyleConstants, keys)},
	{"representation", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StyleConstants, representation)},
	{}
};

$MethodInfo _StyleConstants_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(StyleConstants::*)($String*)>(&StyleConstants::init$))},
	{"getAlignment", "(Ljavax/swing/text/AttributeSet;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($AttributeSet*)>(&StyleConstants::getAlignment))},
	{"getBackground", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Color*(*)($AttributeSet*)>(&StyleConstants::getBackground))},
	{"getBidiLevel", "(Ljavax/swing/text/AttributeSet;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($AttributeSet*)>(&StyleConstants::getBidiLevel))},
	{"getComponent", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)($AttributeSet*)>(&StyleConstants::getComponent))},
	{"getFirstLineIndent", "(Ljavax/swing/text/AttributeSet;)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($AttributeSet*)>(&StyleConstants::getFirstLineIndent))},
	{"getFontFamily", "(Ljavax/swing/text/AttributeSet;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($AttributeSet*)>(&StyleConstants::getFontFamily))},
	{"getFontSize", "(Ljavax/swing/text/AttributeSet;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($AttributeSet*)>(&StyleConstants::getFontSize))},
	{"getForeground", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Color*(*)($AttributeSet*)>(&StyleConstants::getForeground))},
	{"getIcon", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)($AttributeSet*)>(&StyleConstants::getIcon))},
	{"getLeftIndent", "(Ljavax/swing/text/AttributeSet;)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($AttributeSet*)>(&StyleConstants::getLeftIndent))},
	{"getLineSpacing", "(Ljavax/swing/text/AttributeSet;)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($AttributeSet*)>(&StyleConstants::getLineSpacing))},
	{"getRightIndent", "(Ljavax/swing/text/AttributeSet;)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($AttributeSet*)>(&StyleConstants::getRightIndent))},
	{"getSpaceAbove", "(Ljavax/swing/text/AttributeSet;)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($AttributeSet*)>(&StyleConstants::getSpaceAbove))},
	{"getSpaceBelow", "(Ljavax/swing/text/AttributeSet;)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($AttributeSet*)>(&StyleConstants::getSpaceBelow))},
	{"getTabSet", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/TabSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TabSet*(*)($AttributeSet*)>(&StyleConstants::getTabSet))},
	{"isBold", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AttributeSet*)>(&StyleConstants::isBold))},
	{"isItalic", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AttributeSet*)>(&StyleConstants::isItalic))},
	{"isStrikeThrough", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AttributeSet*)>(&StyleConstants::isStrikeThrough))},
	{"isSubscript", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AttributeSet*)>(&StyleConstants::isSubscript))},
	{"isSuperscript", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AttributeSet*)>(&StyleConstants::isSuperscript))},
	{"isUnderline", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AttributeSet*)>(&StyleConstants::isUnderline))},
	{"setAlignment", "(Ljavax/swing/text/MutableAttributeSet;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,int32_t)>(&StyleConstants::setAlignment))},
	{"setBackground", "(Ljavax/swing/text/MutableAttributeSet;Ljava/awt/Color;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,$Color*)>(&StyleConstants::setBackground))},
	{"setBidiLevel", "(Ljavax/swing/text/MutableAttributeSet;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,int32_t)>(&StyleConstants::setBidiLevel))},
	{"setBold", "(Ljavax/swing/text/MutableAttributeSet;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,bool)>(&StyleConstants::setBold))},
	{"setComponent", "(Ljavax/swing/text/MutableAttributeSet;Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,$Component*)>(&StyleConstants::setComponent))},
	{"setFirstLineIndent", "(Ljavax/swing/text/MutableAttributeSet;F)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,float)>(&StyleConstants::setFirstLineIndent))},
	{"setFontFamily", "(Ljavax/swing/text/MutableAttributeSet;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,$String*)>(&StyleConstants::setFontFamily))},
	{"setFontSize", "(Ljavax/swing/text/MutableAttributeSet;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,int32_t)>(&StyleConstants::setFontSize))},
	{"setForeground", "(Ljavax/swing/text/MutableAttributeSet;Ljava/awt/Color;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,$Color*)>(&StyleConstants::setForeground))},
	{"setIcon", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/Icon;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,$Icon*)>(&StyleConstants::setIcon))},
	{"setItalic", "(Ljavax/swing/text/MutableAttributeSet;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,bool)>(&StyleConstants::setItalic))},
	{"setLeftIndent", "(Ljavax/swing/text/MutableAttributeSet;F)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,float)>(&StyleConstants::setLeftIndent))},
	{"setLineSpacing", "(Ljavax/swing/text/MutableAttributeSet;F)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,float)>(&StyleConstants::setLineSpacing))},
	{"setRightIndent", "(Ljavax/swing/text/MutableAttributeSet;F)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,float)>(&StyleConstants::setRightIndent))},
	{"setSpaceAbove", "(Ljavax/swing/text/MutableAttributeSet;F)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,float)>(&StyleConstants::setSpaceAbove))},
	{"setSpaceBelow", "(Ljavax/swing/text/MutableAttributeSet;F)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,float)>(&StyleConstants::setSpaceBelow))},
	{"setStrikeThrough", "(Ljavax/swing/text/MutableAttributeSet;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,bool)>(&StyleConstants::setStrikeThrough))},
	{"setSubscript", "(Ljavax/swing/text/MutableAttributeSet;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,bool)>(&StyleConstants::setSubscript))},
	{"setSuperscript", "(Ljavax/swing/text/MutableAttributeSet;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,bool)>(&StyleConstants::setSuperscript))},
	{"setTabSet", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/TabSet;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,$TabSet*)>(&StyleConstants::setTabSet))},
	{"setUnderline", "(Ljavax/swing/text/MutableAttributeSet;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,bool)>(&StyleConstants::setUnderline))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleConstants_InnerClassesInfo_[] = {
	{"javax.swing.text.StyleConstants$FontConstants", "javax.swing.text.StyleConstants", "FontConstants", $PUBLIC | $STATIC},
	{"javax.swing.text.StyleConstants$ColorConstants", "javax.swing.text.StyleConstants", "ColorConstants", $PUBLIC | $STATIC},
	{"javax.swing.text.StyleConstants$CharacterConstants", "javax.swing.text.StyleConstants", "CharacterConstants", $PUBLIC | $STATIC},
	{"javax.swing.text.StyleConstants$ParagraphConstants", "javax.swing.text.StyleConstants", "ParagraphConstants", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _StyleConstants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyleConstants",
	"java.lang.Object",
	nullptr,
	_StyleConstants_FieldInfo_,
	_StyleConstants_MethodInfo_,
	nullptr,
	nullptr,
	_StyleConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.StyleConstants$FontConstants,javax.swing.text.StyleConstants$ColorConstants,javax.swing.text.StyleConstants$CharacterConstants,javax.swing.text.StyleConstants$ParagraphConstants"
};

$Object* allocate$StyleConstants($Class* clazz) {
	return $of($alloc(StyleConstants));
}


$String* StyleConstants::ComponentElementName = nullptr;

$String* StyleConstants::IconElementName = nullptr;

$Object* StyleConstants::NameAttribute = nullptr;

$Object* StyleConstants::ResolveAttribute = nullptr;

$Object* StyleConstants::ModelAttribute = nullptr;

$Object* StyleConstants::BidiLevel = nullptr;

$Object* StyleConstants::FontFamily = nullptr;

$Object* StyleConstants::Family = nullptr;

$Object* StyleConstants::FontSize = nullptr;

$Object* StyleConstants::Size = nullptr;

$Object* StyleConstants::Bold = nullptr;

$Object* StyleConstants::Italic = nullptr;

$Object* StyleConstants::Underline = nullptr;

$Object* StyleConstants::StrikeThrough = nullptr;

$Object* StyleConstants::Superscript = nullptr;

$Object* StyleConstants::Subscript = nullptr;

$Object* StyleConstants::Foreground = nullptr;

$Object* StyleConstants::Background = nullptr;

$Object* StyleConstants::ComponentAttribute = nullptr;

$Object* StyleConstants::IconAttribute = nullptr;

$Object* StyleConstants::ComposedTextAttribute = nullptr;

$Object* StyleConstants::FirstLineIndent = nullptr;

$Object* StyleConstants::LeftIndent = nullptr;

$Object* StyleConstants::RightIndent = nullptr;

$Object* StyleConstants::LineSpacing = nullptr;

$Object* StyleConstants::SpaceAbove = nullptr;

$Object* StyleConstants::SpaceBelow = nullptr;

$Object* StyleConstants::Alignment = nullptr;

$Object* StyleConstants::TabSet = nullptr;

$Object* StyleConstants::Orientation = nullptr;
$ObjectArray* StyleConstants::keys = nullptr;

$String* StyleConstants::toString() {
	return this->representation;
}

int32_t StyleConstants::getBidiLevel($AttributeSet* a) {
	$init(StyleConstants);
	$var($Integer, o, $cast($Integer, $nc(a)->getAttribute(StyleConstants::BidiLevel)));
	if (o != nullptr) {
		return o->intValue();
	}
	return 0;
}

void StyleConstants::setBidiLevel($MutableAttributeSet* a, int32_t o) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::BidiLevel, $($Integer::valueOf(o)));
}

$Component* StyleConstants::getComponent($AttributeSet* a) {
	$init(StyleConstants);
	return $cast($Component, $nc(a)->getAttribute(StyleConstants::ComponentAttribute));
}

void StyleConstants::setComponent($MutableAttributeSet* a, $Component* c) {
	$init(StyleConstants);
	$init($AbstractDocument);
	$nc(a)->addAttribute($AbstractDocument::ElementNameAttribute, StyleConstants::ComponentElementName);
	a->addAttribute(StyleConstants::ComponentAttribute, c);
}

$Icon* StyleConstants::getIcon($AttributeSet* a) {
	$init(StyleConstants);
	return $cast($Icon, $nc(a)->getAttribute(StyleConstants::IconAttribute));
}

void StyleConstants::setIcon($MutableAttributeSet* a, $Icon* c) {
	$init(StyleConstants);
	$init($AbstractDocument);
	$nc(a)->addAttribute($AbstractDocument::ElementNameAttribute, StyleConstants::IconElementName);
	a->addAttribute(StyleConstants::IconAttribute, c);
}

$String* StyleConstants::getFontFamily($AttributeSet* a) {
	$init(StyleConstants);
	$var($String, family, $cast($String, $nc(a)->getAttribute(StyleConstants::FontFamily)));
	if (family == nullptr) {
		$assign(family, "Monospaced"_s);
	}
	return family;
}

void StyleConstants::setFontFamily($MutableAttributeSet* a, $String* fam) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::FontFamily, fam);
}

int32_t StyleConstants::getFontSize($AttributeSet* a) {
	$init(StyleConstants);
	$var($Integer, size, $cast($Integer, $nc(a)->getAttribute(StyleConstants::FontSize)));
	if (size != nullptr) {
		return size->intValue();
	}
	return 12;
}

void StyleConstants::setFontSize($MutableAttributeSet* a, int32_t s) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::FontSize, $($Integer::valueOf(s)));
}

bool StyleConstants::isBold($AttributeSet* a) {
	$init(StyleConstants);
	$var($Boolean, bold, $cast($Boolean, $nc(a)->getAttribute(StyleConstants::Bold)));
	if (bold != nullptr) {
		return bold->booleanValue();
	}
	return false;
}

void StyleConstants::setBold($MutableAttributeSet* a, bool b) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::Bold, $($Boolean::valueOf(b)));
}

bool StyleConstants::isItalic($AttributeSet* a) {
	$init(StyleConstants);
	$var($Boolean, italic, $cast($Boolean, $nc(a)->getAttribute(StyleConstants::Italic)));
	if (italic != nullptr) {
		return italic->booleanValue();
	}
	return false;
}

void StyleConstants::setItalic($MutableAttributeSet* a, bool b) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::Italic, $($Boolean::valueOf(b)));
}

bool StyleConstants::isUnderline($AttributeSet* a) {
	$init(StyleConstants);
	$var($Boolean, underline, $cast($Boolean, $nc(a)->getAttribute(StyleConstants::Underline)));
	if (underline != nullptr) {
		return underline->booleanValue();
	}
	return false;
}

bool StyleConstants::isStrikeThrough($AttributeSet* a) {
	$init(StyleConstants);
	$var($Boolean, strike, $cast($Boolean, $nc(a)->getAttribute(StyleConstants::StrikeThrough)));
	if (strike != nullptr) {
		return strike->booleanValue();
	}
	return false;
}

bool StyleConstants::isSuperscript($AttributeSet* a) {
	$init(StyleConstants);
	$var($Boolean, superscript, $cast($Boolean, $nc(a)->getAttribute(StyleConstants::Superscript)));
	if (superscript != nullptr) {
		return superscript->booleanValue();
	}
	return false;
}

bool StyleConstants::isSubscript($AttributeSet* a) {
	$init(StyleConstants);
	$var($Boolean, subscript, $cast($Boolean, $nc(a)->getAttribute(StyleConstants::Subscript)));
	if (subscript != nullptr) {
		return subscript->booleanValue();
	}
	return false;
}

void StyleConstants::setUnderline($MutableAttributeSet* a, bool b) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::Underline, $($Boolean::valueOf(b)));
}

void StyleConstants::setStrikeThrough($MutableAttributeSet* a, bool b) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::StrikeThrough, $($Boolean::valueOf(b)));
}

void StyleConstants::setSuperscript($MutableAttributeSet* a, bool b) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::Superscript, $($Boolean::valueOf(b)));
}

void StyleConstants::setSubscript($MutableAttributeSet* a, bool b) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::Subscript, $($Boolean::valueOf(b)));
}

$Color* StyleConstants::getForeground($AttributeSet* a) {
	$init(StyleConstants);
	$var($Color, fg, $cast($Color, $nc(a)->getAttribute(StyleConstants::Foreground)));
	if (fg == nullptr) {
		$init($Color);
		$assign(fg, $Color::black);
	}
	return fg;
}

void StyleConstants::setForeground($MutableAttributeSet* a, $Color* fg) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::Foreground, fg);
}

$Color* StyleConstants::getBackground($AttributeSet* a) {
	$init(StyleConstants);
	$var($Color, fg, $cast($Color, $nc(a)->getAttribute(StyleConstants::Background)));
	if (fg == nullptr) {
		$init($Color);
		$assign(fg, $Color::black);
	}
	return fg;
}

void StyleConstants::setBackground($MutableAttributeSet* a, $Color* fg) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::Background, fg);
}

float StyleConstants::getFirstLineIndent($AttributeSet* a) {
	$init(StyleConstants);
	$var($Float, indent, $cast($Float, $nc(a)->getAttribute(StyleConstants::FirstLineIndent)));
	if (indent != nullptr) {
		return indent->floatValue();
	}
	return (float)0;
}

void StyleConstants::setFirstLineIndent($MutableAttributeSet* a, float i) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::FirstLineIndent, $($Float::valueOf(i)));
}

float StyleConstants::getRightIndent($AttributeSet* a) {
	$init(StyleConstants);
	$var($Float, indent, $cast($Float, $nc(a)->getAttribute(StyleConstants::RightIndent)));
	if (indent != nullptr) {
		return indent->floatValue();
	}
	return (float)0;
}

void StyleConstants::setRightIndent($MutableAttributeSet* a, float i) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::RightIndent, $($Float::valueOf(i)));
}

float StyleConstants::getLeftIndent($AttributeSet* a) {
	$init(StyleConstants);
	$var($Float, indent, $cast($Float, $nc(a)->getAttribute(StyleConstants::LeftIndent)));
	if (indent != nullptr) {
		return indent->floatValue();
	}
	return (float)0;
}

void StyleConstants::setLeftIndent($MutableAttributeSet* a, float i) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::LeftIndent, $($Float::valueOf(i)));
}

float StyleConstants::getLineSpacing($AttributeSet* a) {
	$init(StyleConstants);
	$var($Float, space, $cast($Float, $nc(a)->getAttribute(StyleConstants::LineSpacing)));
	if (space != nullptr) {
		return space->floatValue();
	}
	return (float)0;
}

void StyleConstants::setLineSpacing($MutableAttributeSet* a, float i) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::LineSpacing, $($Float::valueOf(i)));
}

float StyleConstants::getSpaceAbove($AttributeSet* a) {
	$init(StyleConstants);
	$var($Float, space, $cast($Float, $nc(a)->getAttribute(StyleConstants::SpaceAbove)));
	if (space != nullptr) {
		return space->floatValue();
	}
	return (float)0;
}

void StyleConstants::setSpaceAbove($MutableAttributeSet* a, float i) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::SpaceAbove, $($Float::valueOf(i)));
}

float StyleConstants::getSpaceBelow($AttributeSet* a) {
	$init(StyleConstants);
	$var($Float, space, $cast($Float, $nc(a)->getAttribute(StyleConstants::SpaceBelow)));
	if (space != nullptr) {
		return space->floatValue();
	}
	return (float)0;
}

void StyleConstants::setSpaceBelow($MutableAttributeSet* a, float i) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::SpaceBelow, $($Float::valueOf(i)));
}

int32_t StyleConstants::getAlignment($AttributeSet* a) {
	$init(StyleConstants);
	$var($Integer, align, $cast($Integer, $nc(a)->getAttribute(StyleConstants::Alignment)));
	if (align != nullptr) {
		return align->intValue();
	}
	return StyleConstants::ALIGN_LEFT;
}

void StyleConstants::setAlignment($MutableAttributeSet* a, int32_t align) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::Alignment, $($Integer::valueOf(align)));
}

$TabSet* StyleConstants::getTabSet($AttributeSet* a) {
	$init(StyleConstants);
	$var($TabSet, tabs, $cast($TabSet, $nc(a)->getAttribute(StyleConstants::TabSet)));
	return tabs;
}

void StyleConstants::setTabSet($MutableAttributeSet* a, $TabSet* tabs) {
	$init(StyleConstants);
	$nc(a)->addAttribute(StyleConstants::TabSet, tabs);
}

void StyleConstants::init$($String* representation) {
	$set(this, representation, representation);
}

void clinit$StyleConstants($Class* class$) {
	$assignStatic(StyleConstants::ComponentElementName, "component"_s);
	$assignStatic(StyleConstants::IconElementName, "icon"_s);
	$assignStatic(StyleConstants::NameAttribute, $new(StyleConstants, "name"_s));
	$assignStatic(StyleConstants::ResolveAttribute, $new(StyleConstants, "resolver"_s));
	$assignStatic(StyleConstants::ModelAttribute, $new(StyleConstants, "model"_s));
	$assignStatic(StyleConstants::BidiLevel, $new($StyleConstants$CharacterConstants, "bidiLevel"_s));
	$assignStatic(StyleConstants::FontFamily, $new($StyleConstants$FontConstants, "family"_s));
	$assignStatic(StyleConstants::Family, StyleConstants::FontFamily);
	$assignStatic(StyleConstants::FontSize, $new($StyleConstants$FontConstants, "size"_s));
	$assignStatic(StyleConstants::Size, StyleConstants::FontSize);
	$assignStatic(StyleConstants::Bold, $new($StyleConstants$FontConstants, "bold"_s));
	$assignStatic(StyleConstants::Italic, $new($StyleConstants$FontConstants, "italic"_s));
	$assignStatic(StyleConstants::Underline, $new($StyleConstants$CharacterConstants, "underline"_s));
	$assignStatic(StyleConstants::StrikeThrough, $new($StyleConstants$CharacterConstants, "strikethrough"_s));
	$assignStatic(StyleConstants::Superscript, $new($StyleConstants$CharacterConstants, "superscript"_s));
	$assignStatic(StyleConstants::Subscript, $new($StyleConstants$CharacterConstants, "subscript"_s));
	$assignStatic(StyleConstants::Foreground, $new($StyleConstants$ColorConstants, "foreground"_s));
	$assignStatic(StyleConstants::Background, $new($StyleConstants$ColorConstants, "background"_s));
	$assignStatic(StyleConstants::ComponentAttribute, $new($StyleConstants$CharacterConstants, "component"_s));
	$assignStatic(StyleConstants::IconAttribute, $new($StyleConstants$CharacterConstants, "icon"_s));
	$assignStatic(StyleConstants::ComposedTextAttribute, $new(StyleConstants, "composed text"_s));
	$assignStatic(StyleConstants::FirstLineIndent, $new($StyleConstants$ParagraphConstants, "FirstLineIndent"_s));
	$assignStatic(StyleConstants::LeftIndent, $new($StyleConstants$ParagraphConstants, "LeftIndent"_s));
	$assignStatic(StyleConstants::RightIndent, $new($StyleConstants$ParagraphConstants, "RightIndent"_s));
	$assignStatic(StyleConstants::LineSpacing, $new($StyleConstants$ParagraphConstants, "LineSpacing"_s));
	$assignStatic(StyleConstants::SpaceAbove, $new($StyleConstants$ParagraphConstants, "SpaceAbove"_s));
	$assignStatic(StyleConstants::SpaceBelow, $new($StyleConstants$ParagraphConstants, "SpaceBelow"_s));
	$assignStatic(StyleConstants::Alignment, $new($StyleConstants$ParagraphConstants, "Alignment"_s));
	$assignStatic(StyleConstants::TabSet, $new($StyleConstants$ParagraphConstants, "TabSet"_s));
	$assignStatic(StyleConstants::Orientation, $new($StyleConstants$ParagraphConstants, "Orientation"_s));
	$assignStatic(StyleConstants::keys, $new($ObjectArray, {
		StyleConstants::NameAttribute,
		StyleConstants::ResolveAttribute,
		StyleConstants::BidiLevel,
		StyleConstants::FontFamily,
		StyleConstants::FontSize,
		StyleConstants::Bold,
		StyleConstants::Italic,
		StyleConstants::Underline,
		StyleConstants::StrikeThrough,
		StyleConstants::Superscript,
		StyleConstants::Subscript,
		StyleConstants::Foreground,
		StyleConstants::Background,
		StyleConstants::ComponentAttribute,
		StyleConstants::IconAttribute,
		StyleConstants::FirstLineIndent,
		StyleConstants::LeftIndent,
		StyleConstants::RightIndent,
		StyleConstants::LineSpacing,
		StyleConstants::SpaceAbove,
		StyleConstants::SpaceBelow,
		StyleConstants::Alignment,
		StyleConstants::TabSet,
		StyleConstants::Orientation,
		StyleConstants::ModelAttribute,
		StyleConstants::ComposedTextAttribute
	}));
}

StyleConstants::StyleConstants() {
}

$Class* StyleConstants::load$($String* name, bool initialize) {
	$loadClass(StyleConstants, name, initialize, &_StyleConstants_ClassInfo_, clinit$StyleConstants, allocate$StyleConstants);
	return class$;
}

$Class* StyleConstants::class$ = nullptr;

		} // text
	} // swing
} // javax