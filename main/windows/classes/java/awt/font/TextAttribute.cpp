#include <java/awt/font/TextAttribute.h>

#include <java/awt/font/JavaAWTFontAccessImpl.h>
#include <java/io/InvalidObjectException.h>
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
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jdk/internal/access/JavaAWTFontAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BIDI_EMBEDDING
#undef CHAR_REPLACEMENT
#undef FALSE
#undef FAMILY
#undef FONT
#undef FOREGROUND
#undef INPUT_METHOD_HIGHLIGHT
#undef INPUT_METHOD_UNDERLINE
#undef JUSTIFICATION
#undef JUSTIFICATION_FULL
#undef JUSTIFICATION_NONE
#undef KERNING
#undef KERNING_ON
#undef LIGATURES
#undef LIGATURES_ON
#undef NUMERIC_SHAPING
#undef POSTURE
#undef POSTURE_OBLIQUE
#undef POSTURE_REGULAR
#undef RUN_DIRECTION
#undef RUN_DIRECTION_LTR
#undef RUN_DIRECTION_RTL
#undef SIZE
#undef STRIKETHROUGH
#undef STRIKETHROUGH_ON
#undef SUPERSCRIPT
#undef SUPERSCRIPT_SUB
#undef SUPERSCRIPT_SUPER
#undef SWAP_COLORS
#undef SWAP_COLORS_ON
#undef TRACKING
#undef TRACKING_LOOSE
#undef TRACKING_TIGHT
#undef TRANSFORM
#undef TRUE
#undef UNDERLINE
#undef UNDERLINE_LOW_DASHED
#undef UNDERLINE_LOW_DOTTED
#undef UNDERLINE_LOW_GRAY
#undef UNDERLINE_LOW_ONE_PIXEL
#undef UNDERLINE_LOW_TWO_PIXEL
#undef UNDERLINE_ON
#undef WEIGHT
#undef WEIGHT_BOLD
#undef WEIGHT_DEMIBOLD
#undef WEIGHT_DEMILIGHT
#undef WEIGHT_EXTRABOLD
#undef WEIGHT_EXTRA_LIGHT
#undef WEIGHT_HEAVY
#undef WEIGHT_LIGHT
#undef WEIGHT_MEDIUM
#undef WEIGHT_REGULAR
#undef WEIGHT_SEMIBOLD
#undef WEIGHT_ULTRABOLD
#undef WIDTH
#undef WIDTH_CONDENSED
#undef WIDTH_EXTENDED
#undef WIDTH_REGULAR
#undef WIDTH_SEMI_CONDENSED
#undef WIDTH_SEMI_EXTENDED

using $JavaAWTFontAccessImpl = ::java::awt::font::JavaAWTFontAccessImpl;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $JavaAWTFontAccess = ::jdk::internal::access::JavaAWTFontAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _TextAttribute_FieldInfo_[] = {
	{"instanceMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/awt/font/TextAttribute;>;", $PRIVATE | $STATIC | $FINAL, $staticField(TextAttribute, instanceMap)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextAttribute, serialVersionUID)},
	{"FAMILY", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, FAMILY)},
	{"WEIGHT", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WEIGHT)},
	{"WEIGHT_EXTRA_LIGHT", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WEIGHT_EXTRA_LIGHT)},
	{"WEIGHT_LIGHT", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WEIGHT_LIGHT)},
	{"WEIGHT_DEMILIGHT", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WEIGHT_DEMILIGHT)},
	{"WEIGHT_REGULAR", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WEIGHT_REGULAR)},
	{"WEIGHT_SEMIBOLD", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WEIGHT_SEMIBOLD)},
	{"WEIGHT_MEDIUM", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WEIGHT_MEDIUM)},
	{"WEIGHT_DEMIBOLD", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WEIGHT_DEMIBOLD)},
	{"WEIGHT_BOLD", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WEIGHT_BOLD)},
	{"WEIGHT_HEAVY", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WEIGHT_HEAVY)},
	{"WEIGHT_EXTRABOLD", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WEIGHT_EXTRABOLD)},
	{"WEIGHT_ULTRABOLD", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WEIGHT_ULTRABOLD)},
	{"WIDTH", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WIDTH)},
	{"WIDTH_CONDENSED", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WIDTH_CONDENSED)},
	{"WIDTH_SEMI_CONDENSED", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WIDTH_SEMI_CONDENSED)},
	{"WIDTH_REGULAR", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WIDTH_REGULAR)},
	{"WIDTH_SEMI_EXTENDED", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WIDTH_SEMI_EXTENDED)},
	{"WIDTH_EXTENDED", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, WIDTH_EXTENDED)},
	{"POSTURE", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, POSTURE)},
	{"POSTURE_REGULAR", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, POSTURE_REGULAR)},
	{"POSTURE_OBLIQUE", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, POSTURE_OBLIQUE)},
	{"SIZE", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, SIZE)},
	{"TRANSFORM", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, TRANSFORM)},
	{"SUPERSCRIPT", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, SUPERSCRIPT)},
	{"SUPERSCRIPT_SUPER", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, SUPERSCRIPT_SUPER)},
	{"SUPERSCRIPT_SUB", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, SUPERSCRIPT_SUB)},
	{"FONT", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, FONT)},
	{"CHAR_REPLACEMENT", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, CHAR_REPLACEMENT)},
	{"FOREGROUND", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, FOREGROUND)},
	{"BACKGROUND", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, BACKGROUND)},
	{"UNDERLINE", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, UNDERLINE)},
	{"UNDERLINE_ON", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, UNDERLINE_ON)},
	{"STRIKETHROUGH", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, STRIKETHROUGH)},
	{"STRIKETHROUGH_ON", "Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, STRIKETHROUGH_ON)},
	{"RUN_DIRECTION", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, RUN_DIRECTION)},
	{"RUN_DIRECTION_LTR", "Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, RUN_DIRECTION_LTR)},
	{"RUN_DIRECTION_RTL", "Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, RUN_DIRECTION_RTL)},
	{"BIDI_EMBEDDING", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, BIDI_EMBEDDING)},
	{"JUSTIFICATION", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, JUSTIFICATION)},
	{"JUSTIFICATION_FULL", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, JUSTIFICATION_FULL)},
	{"JUSTIFICATION_NONE", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, JUSTIFICATION_NONE)},
	{"INPUT_METHOD_HIGHLIGHT", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, INPUT_METHOD_HIGHLIGHT)},
	{"INPUT_METHOD_UNDERLINE", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, INPUT_METHOD_UNDERLINE)},
	{"UNDERLINE_LOW_ONE_PIXEL", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, UNDERLINE_LOW_ONE_PIXEL)},
	{"UNDERLINE_LOW_TWO_PIXEL", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, UNDERLINE_LOW_TWO_PIXEL)},
	{"UNDERLINE_LOW_DOTTED", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, UNDERLINE_LOW_DOTTED)},
	{"UNDERLINE_LOW_GRAY", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, UNDERLINE_LOW_GRAY)},
	{"UNDERLINE_LOW_DASHED", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, UNDERLINE_LOW_DASHED)},
	{"SWAP_COLORS", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, SWAP_COLORS)},
	{"SWAP_COLORS_ON", "Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, SWAP_COLORS_ON)},
	{"NUMERIC_SHAPING", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, NUMERIC_SHAPING)},
	{"KERNING", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, KERNING)},
	{"KERNING_ON", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, KERNING_ON)},
	{"LIGATURES", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, LIGATURES)},
	{"LIGATURES_ON", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, LIGATURES_ON)},
	{"TRACKING", "Ljava/awt/font/TextAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, TRACKING)},
	{"TRACKING_TIGHT", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, TRACKING_TIGHT)},
	{"TRACKING_LOOSE", "Ljava/lang/Float;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextAttribute, TRACKING_LOOSE)},
	{}
};

$MethodInfo _TextAttribute_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(TextAttribute::*)($String*)>(&TextAttribute::init$))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.InvalidObjectException"},
	{}
};

$InnerClassInfo _TextAttribute_InnerClassesInfo_[] = {
	{"java.text.AttributedCharacterIterator$Attribute", "java.text.AttributedCharacterIterator", "Attribute", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TextAttribute_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.font.TextAttribute",
	"java.text.AttributedCharacterIterator$Attribute",
	nullptr,
	_TextAttribute_FieldInfo_,
	_TextAttribute_MethodInfo_,
	nullptr,
	nullptr,
	_TextAttribute_InnerClassesInfo_
};

$Object* allocate$TextAttribute($Class* clazz) {
	return $of($alloc(TextAttribute));
}

$Map* TextAttribute::instanceMap = nullptr;

TextAttribute* TextAttribute::FAMILY = nullptr;

TextAttribute* TextAttribute::WEIGHT = nullptr;

$Float* TextAttribute::WEIGHT_EXTRA_LIGHT = nullptr;

$Float* TextAttribute::WEIGHT_LIGHT = nullptr;

$Float* TextAttribute::WEIGHT_DEMILIGHT = nullptr;

$Float* TextAttribute::WEIGHT_REGULAR = nullptr;

$Float* TextAttribute::WEIGHT_SEMIBOLD = nullptr;

$Float* TextAttribute::WEIGHT_MEDIUM = nullptr;

$Float* TextAttribute::WEIGHT_DEMIBOLD = nullptr;

$Float* TextAttribute::WEIGHT_BOLD = nullptr;

$Float* TextAttribute::WEIGHT_HEAVY = nullptr;

$Float* TextAttribute::WEIGHT_EXTRABOLD = nullptr;

$Float* TextAttribute::WEIGHT_ULTRABOLD = nullptr;

TextAttribute* TextAttribute::WIDTH = nullptr;

$Float* TextAttribute::WIDTH_CONDENSED = nullptr;

$Float* TextAttribute::WIDTH_SEMI_CONDENSED = nullptr;

$Float* TextAttribute::WIDTH_REGULAR = nullptr;

$Float* TextAttribute::WIDTH_SEMI_EXTENDED = nullptr;

$Float* TextAttribute::WIDTH_EXTENDED = nullptr;

TextAttribute* TextAttribute::POSTURE = nullptr;

$Float* TextAttribute::POSTURE_REGULAR = nullptr;

$Float* TextAttribute::POSTURE_OBLIQUE = nullptr;

TextAttribute* TextAttribute::SIZE = nullptr;

TextAttribute* TextAttribute::TRANSFORM = nullptr;

TextAttribute* TextAttribute::SUPERSCRIPT = nullptr;

$Integer* TextAttribute::SUPERSCRIPT_SUPER = nullptr;

$Integer* TextAttribute::SUPERSCRIPT_SUB = nullptr;

TextAttribute* TextAttribute::FONT = nullptr;

TextAttribute* TextAttribute::CHAR_REPLACEMENT = nullptr;

TextAttribute* TextAttribute::FOREGROUND = nullptr;

TextAttribute* TextAttribute::BACKGROUND = nullptr;

TextAttribute* TextAttribute::UNDERLINE = nullptr;

$Integer* TextAttribute::UNDERLINE_ON = nullptr;

TextAttribute* TextAttribute::STRIKETHROUGH = nullptr;

$Boolean* TextAttribute::STRIKETHROUGH_ON = nullptr;

TextAttribute* TextAttribute::RUN_DIRECTION = nullptr;

$Boolean* TextAttribute::RUN_DIRECTION_LTR = nullptr;

$Boolean* TextAttribute::RUN_DIRECTION_RTL = nullptr;

TextAttribute* TextAttribute::BIDI_EMBEDDING = nullptr;

TextAttribute* TextAttribute::JUSTIFICATION = nullptr;

$Float* TextAttribute::JUSTIFICATION_FULL = nullptr;

$Float* TextAttribute::JUSTIFICATION_NONE = nullptr;

TextAttribute* TextAttribute::INPUT_METHOD_HIGHLIGHT = nullptr;

TextAttribute* TextAttribute::INPUT_METHOD_UNDERLINE = nullptr;

$Integer* TextAttribute::UNDERLINE_LOW_ONE_PIXEL = nullptr;

$Integer* TextAttribute::UNDERLINE_LOW_TWO_PIXEL = nullptr;

$Integer* TextAttribute::UNDERLINE_LOW_DOTTED = nullptr;

$Integer* TextAttribute::UNDERLINE_LOW_GRAY = nullptr;

$Integer* TextAttribute::UNDERLINE_LOW_DASHED = nullptr;

TextAttribute* TextAttribute::SWAP_COLORS = nullptr;

$Boolean* TextAttribute::SWAP_COLORS_ON = nullptr;

TextAttribute* TextAttribute::NUMERIC_SHAPING = nullptr;

TextAttribute* TextAttribute::KERNING = nullptr;

$Integer* TextAttribute::KERNING_ON = nullptr;

TextAttribute* TextAttribute::LIGATURES = nullptr;

$Integer* TextAttribute::LIGATURES_ON = nullptr;

TextAttribute* TextAttribute::TRACKING = nullptr;

$Float* TextAttribute::TRACKING_TIGHT = nullptr;

$Float* TextAttribute::TRACKING_LOOSE = nullptr;

void TextAttribute::init$($String* name) {
	$AttributedCharacterIterator$Attribute::init$(name);
	if ($of(this)->getClass() == TextAttribute::class$) {
		$nc(TextAttribute::instanceMap)->put(name, this);
	}
}

$Object* TextAttribute::readResolve() {
	if ($of(this)->getClass() != TextAttribute::class$) {
		$throwNew($InvalidObjectException, "subclass didn\'t correctly implement readResolve"_s);
	}
	$var(TextAttribute, instance, $cast(TextAttribute, $nc(TextAttribute::instanceMap)->get($(getName()))));
	if (instance != nullptr) {
		return $of(instance);
	} else {
		$throwNew($InvalidObjectException, "unknown attribute name"_s);
	}
}

void clinit$TextAttribute($Class* class$) {
	$assignStatic(TextAttribute::instanceMap, $new($HashMap, 29));
	{
		if ($SharedSecrets::getJavaAWTFontAccess() == nullptr) {
			$SharedSecrets::setJavaAWTFontAccess($$new($JavaAWTFontAccessImpl));
		}
	}
	$assignStatic(TextAttribute::FAMILY, $new(TextAttribute, "family"_s));
	$assignStatic(TextAttribute::WEIGHT, $new(TextAttribute, "weight"_s));
	$assignStatic(TextAttribute::WEIGHT_EXTRA_LIGHT, $Float::valueOf(0.5f));
	$assignStatic(TextAttribute::WEIGHT_LIGHT, $Float::valueOf(0.75f));
	$assignStatic(TextAttribute::WEIGHT_DEMILIGHT, $Float::valueOf(0.875f));
	$assignStatic(TextAttribute::WEIGHT_REGULAR, $Float::valueOf(1.0f));
	$assignStatic(TextAttribute::WEIGHT_SEMIBOLD, $Float::valueOf(1.25f));
	$assignStatic(TextAttribute::WEIGHT_MEDIUM, $Float::valueOf(1.5f));
	$assignStatic(TextAttribute::WEIGHT_DEMIBOLD, $Float::valueOf(1.75f));
	$assignStatic(TextAttribute::WEIGHT_BOLD, $Float::valueOf(2.0f));
	$assignStatic(TextAttribute::WEIGHT_HEAVY, $Float::valueOf(2.25f));
	$assignStatic(TextAttribute::WEIGHT_EXTRABOLD, $Float::valueOf(2.5f));
	$assignStatic(TextAttribute::WEIGHT_ULTRABOLD, $Float::valueOf(2.75f));
	$assignStatic(TextAttribute::WIDTH, $new(TextAttribute, "width"_s));
	$assignStatic(TextAttribute::WIDTH_CONDENSED, $Float::valueOf(0.75f));
	$assignStatic(TextAttribute::WIDTH_SEMI_CONDENSED, $Float::valueOf(0.875f));
	$assignStatic(TextAttribute::WIDTH_REGULAR, $Float::valueOf(1.0f));
	$assignStatic(TextAttribute::WIDTH_SEMI_EXTENDED, $Float::valueOf(1.25f));
	$assignStatic(TextAttribute::WIDTH_EXTENDED, $Float::valueOf(1.5f));
	$assignStatic(TextAttribute::POSTURE, $new(TextAttribute, "posture"_s));
	$assignStatic(TextAttribute::POSTURE_REGULAR, $Float::valueOf(0.0f));
	$assignStatic(TextAttribute::POSTURE_OBLIQUE, $Float::valueOf(0.2f));
	$assignStatic(TextAttribute::SIZE, $new(TextAttribute, "size"_s));
	$assignStatic(TextAttribute::TRANSFORM, $new(TextAttribute, "transform"_s));
	$assignStatic(TextAttribute::SUPERSCRIPT, $new(TextAttribute, "superscript"_s));
	$assignStatic(TextAttribute::SUPERSCRIPT_SUPER, $Integer::valueOf(1));
	$assignStatic(TextAttribute::SUPERSCRIPT_SUB, $Integer::valueOf(-1));
	$assignStatic(TextAttribute::FONT, $new(TextAttribute, "font"_s));
	$assignStatic(TextAttribute::CHAR_REPLACEMENT, $new(TextAttribute, "char_replacement"_s));
	$assignStatic(TextAttribute::FOREGROUND, $new(TextAttribute, "foreground"_s));
	$assignStatic(TextAttribute::BACKGROUND, $new(TextAttribute, "background"_s));
	$assignStatic(TextAttribute::UNDERLINE, $new(TextAttribute, "underline"_s));
	$assignStatic(TextAttribute::UNDERLINE_ON, $Integer::valueOf(0));
	$assignStatic(TextAttribute::STRIKETHROUGH, $new(TextAttribute, "strikethrough"_s));
	$init($Boolean);
	$assignStatic(TextAttribute::STRIKETHROUGH_ON, $Boolean::TRUE);
	$assignStatic(TextAttribute::RUN_DIRECTION, $new(TextAttribute, "run_direction"_s));
	$assignStatic(TextAttribute::RUN_DIRECTION_LTR, $Boolean::FALSE);
	$assignStatic(TextAttribute::RUN_DIRECTION_RTL, $Boolean::TRUE);
	$assignStatic(TextAttribute::BIDI_EMBEDDING, $new(TextAttribute, "bidi_embedding"_s));
	$assignStatic(TextAttribute::JUSTIFICATION, $new(TextAttribute, "justification"_s));
	$assignStatic(TextAttribute::JUSTIFICATION_FULL, $Float::valueOf(1.0f));
	$assignStatic(TextAttribute::JUSTIFICATION_NONE, $Float::valueOf(0.0f));
	$assignStatic(TextAttribute::INPUT_METHOD_HIGHLIGHT, $new(TextAttribute, "input method highlight"_s));
	$assignStatic(TextAttribute::INPUT_METHOD_UNDERLINE, $new(TextAttribute, "input method underline"_s));
	$assignStatic(TextAttribute::UNDERLINE_LOW_ONE_PIXEL, $Integer::valueOf(1));
	$assignStatic(TextAttribute::UNDERLINE_LOW_TWO_PIXEL, $Integer::valueOf(2));
	$assignStatic(TextAttribute::UNDERLINE_LOW_DOTTED, $Integer::valueOf(3));
	$assignStatic(TextAttribute::UNDERLINE_LOW_GRAY, $Integer::valueOf(4));
	$assignStatic(TextAttribute::UNDERLINE_LOW_DASHED, $Integer::valueOf(5));
	$assignStatic(TextAttribute::SWAP_COLORS, $new(TextAttribute, "swap_colors"_s));
	$assignStatic(TextAttribute::SWAP_COLORS_ON, $Boolean::TRUE);
	$assignStatic(TextAttribute::NUMERIC_SHAPING, $new(TextAttribute, "numeric_shaping"_s));
	$assignStatic(TextAttribute::KERNING, $new(TextAttribute, "kerning"_s));
	$assignStatic(TextAttribute::KERNING_ON, $Integer::valueOf(1));
	$assignStatic(TextAttribute::LIGATURES, $new(TextAttribute, "ligatures"_s));
	$assignStatic(TextAttribute::LIGATURES_ON, $Integer::valueOf(1));
	$assignStatic(TextAttribute::TRACKING, $new(TextAttribute, "tracking"_s));
	$assignStatic(TextAttribute::TRACKING_TIGHT, $Float::valueOf(-0.04f));
	$assignStatic(TextAttribute::TRACKING_LOOSE, $Float::valueOf(0.04f));
}

TextAttribute::TextAttribute() {
}

$Class* TextAttribute::load$($String* name, bool initialize) {
	$loadClass(TextAttribute, name, initialize, &_TextAttribute_ClassInfo_, clinit$TextAttribute, allocate$TextAttribute);
	return class$;
}

$Class* TextAttribute::class$ = nullptr;

		} // font
	} // awt
} // java