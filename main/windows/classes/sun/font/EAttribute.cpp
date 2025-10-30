#include <sun/font/EAttribute.h>

#include <java/awt/font/TextAttribute.h>
#include <java/lang/Enum.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BIDI_EMBEDDING
#undef CHAR_REPLACEMENT
#undef EBACKGROUND
#undef EBASELINE_TRANSFORM
#undef EBIDI_EMBEDDING
#undef ECHAR_REPLACEMENT
#undef EFAMILY
#undef EFONT
#undef EFOREGROUND
#undef EINPUT_METHOD_HIGHLIGHT
#undef EINPUT_METHOD_UNDERLINE
#undef EJUSTIFICATION
#undef EKERNING
#undef ELIGATURES
#undef ENUMERIC_SHAPING
#undef EPOSTURE
#undef ERUN_DIRECTION
#undef ESIZE
#undef ESTRIKETHROUGH
#undef ESUPERSCRIPT
#undef ESWAP_COLORS
#undef ETRACKING
#undef ETRANSFORM
#undef EUNDERLINE
#undef EWEIGHT
#undef EWIDTH
#undef FAMILY
#undef FONT
#undef FOREGROUND
#undef INPUT_METHOD_HIGHLIGHT
#undef INPUT_METHOD_UNDERLINE
#undef JUSTIFICATION
#undef KERNING
#undef LIGATURES
#undef NUMERIC_SHAPING
#undef POSTURE
#undef RUN_DIRECTION
#undef SIZE
#undef STRIKETHROUGH
#undef SUPERSCRIPT
#undef SWAP_COLORS
#undef TRACKING
#undef TRANSFORM
#undef UNDERLINE
#undef WEIGHT
#undef WIDTH

using $EAttributeArray = $Array<::sun::font::EAttribute>;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;

namespace sun {
	namespace font {

$FieldInfo _EAttribute_FieldInfo_[] = {
	{"EFAMILY", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EFAMILY)},
	{"EWEIGHT", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EWEIGHT)},
	{"EWIDTH", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EWIDTH)},
	{"EPOSTURE", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EPOSTURE)},
	{"ESIZE", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, ESIZE)},
	{"ETRANSFORM", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, ETRANSFORM)},
	{"ESUPERSCRIPT", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, ESUPERSCRIPT)},
	{"EFONT", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EFONT)},
	{"ECHAR_REPLACEMENT", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, ECHAR_REPLACEMENT)},
	{"EFOREGROUND", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EFOREGROUND)},
	{"EBACKGROUND", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EBACKGROUND)},
	{"EUNDERLINE", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EUNDERLINE)},
	{"ESTRIKETHROUGH", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, ESTRIKETHROUGH)},
	{"ERUN_DIRECTION", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, ERUN_DIRECTION)},
	{"EBIDI_EMBEDDING", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EBIDI_EMBEDDING)},
	{"EJUSTIFICATION", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EJUSTIFICATION)},
	{"EINPUT_METHOD_HIGHLIGHT", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EINPUT_METHOD_HIGHLIGHT)},
	{"EINPUT_METHOD_UNDERLINE", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EINPUT_METHOD_UNDERLINE)},
	{"ESWAP_COLORS", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, ESWAP_COLORS)},
	{"ENUMERIC_SHAPING", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, ENUMERIC_SHAPING)},
	{"EKERNING", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EKERNING)},
	{"ELIGATURES", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, ELIGATURES)},
	{"ETRACKING", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, ETRACKING)},
	{"EBASELINE_TRANSFORM", "Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EAttribute, EBASELINE_TRANSFORM)},
	{"$VALUES", "[Lsun/font/EAttribute;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(EAttribute, $VALUES)},
	{"mask", "I", nullptr, $FINAL, $field(EAttribute, mask)},
	{"att", "Ljava/awt/font/TextAttribute;", nullptr, $FINAL, $field(EAttribute, att)},
	{"atts", "[Lsun/font/EAttribute;", nullptr, $STATIC | $FINAL, $staticField(EAttribute, atts)},
	{}
};

$MethodInfo _EAttribute_MethodInfo_[] = {
	{"$values", "()[Lsun/font/EAttribute;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$EAttributeArray*(*)()>(&EAttribute::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/awt/font/TextAttribute;)V", "(Ljava/awt/font/TextAttribute;)V", $PRIVATE, $method(static_cast<void(EAttribute::*)($String*,int32_t,$TextAttribute*)>(&EAttribute::init$))},
	{"forAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;)Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC, $method(static_cast<EAttribute*(*)($AttributedCharacterIterator$Attribute*)>(&EAttribute::forAttribute))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC, $method(static_cast<EAttribute*(*)($String*)>(&EAttribute::valueOf))},
	{"values", "()[Lsun/font/EAttribute;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$EAttributeArray*(*)()>(&EAttribute::values))},
	{}
};

$ClassInfo _EAttribute_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.font.EAttribute",
	"java.lang.Enum",
	nullptr,
	_EAttribute_FieldInfo_,
	_EAttribute_MethodInfo_,
	"Ljava/lang/Enum<Lsun/font/EAttribute;>;"
};

$Object* allocate$EAttribute($Class* clazz) {
	return $of($alloc(EAttribute));
}

EAttribute* EAttribute::EFAMILY = nullptr;
EAttribute* EAttribute::EWEIGHT = nullptr;
EAttribute* EAttribute::EWIDTH = nullptr;
EAttribute* EAttribute::EPOSTURE = nullptr;
EAttribute* EAttribute::ESIZE = nullptr;
EAttribute* EAttribute::ETRANSFORM = nullptr;
EAttribute* EAttribute::ESUPERSCRIPT = nullptr;
EAttribute* EAttribute::EFONT = nullptr;
EAttribute* EAttribute::ECHAR_REPLACEMENT = nullptr;
EAttribute* EAttribute::EFOREGROUND = nullptr;
EAttribute* EAttribute::EBACKGROUND = nullptr;
EAttribute* EAttribute::EUNDERLINE = nullptr;
EAttribute* EAttribute::ESTRIKETHROUGH = nullptr;
EAttribute* EAttribute::ERUN_DIRECTION = nullptr;
EAttribute* EAttribute::EBIDI_EMBEDDING = nullptr;
EAttribute* EAttribute::EJUSTIFICATION = nullptr;
EAttribute* EAttribute::EINPUT_METHOD_HIGHLIGHT = nullptr;
EAttribute* EAttribute::EINPUT_METHOD_UNDERLINE = nullptr;
EAttribute* EAttribute::ESWAP_COLORS = nullptr;
EAttribute* EAttribute::ENUMERIC_SHAPING = nullptr;
EAttribute* EAttribute::EKERNING = nullptr;
EAttribute* EAttribute::ELIGATURES = nullptr;
EAttribute* EAttribute::ETRACKING = nullptr;
EAttribute* EAttribute::EBASELINE_TRANSFORM = nullptr;
$EAttributeArray* EAttribute::$VALUES = nullptr;
$EAttributeArray* EAttribute::atts = nullptr;

$EAttributeArray* EAttribute::$values() {
	$init(EAttribute);
	return $new($EAttributeArray, {
		EAttribute::EFAMILY,
		EAttribute::EWEIGHT,
		EAttribute::EWIDTH,
		EAttribute::EPOSTURE,
		EAttribute::ESIZE,
		EAttribute::ETRANSFORM,
		EAttribute::ESUPERSCRIPT,
		EAttribute::EFONT,
		EAttribute::ECHAR_REPLACEMENT,
		EAttribute::EFOREGROUND,
		EAttribute::EBACKGROUND,
		EAttribute::EUNDERLINE,
		EAttribute::ESTRIKETHROUGH,
		EAttribute::ERUN_DIRECTION,
		EAttribute::EBIDI_EMBEDDING,
		EAttribute::EJUSTIFICATION,
		EAttribute::EINPUT_METHOD_HIGHLIGHT,
		EAttribute::EINPUT_METHOD_UNDERLINE,
		EAttribute::ESWAP_COLORS,
		EAttribute::ENUMERIC_SHAPING,
		EAttribute::EKERNING,
		EAttribute::ELIGATURES,
		EAttribute::ETRACKING,
		EAttribute::EBASELINE_TRANSFORM
	});
}

$EAttributeArray* EAttribute::values() {
	$init(EAttribute);
	return $cast($EAttributeArray, EAttribute::$VALUES->clone());
}

EAttribute* EAttribute::valueOf($String* name) {
	$init(EAttribute);
	return $cast(EAttribute, $Enum::valueOf(EAttribute::class$, name));
}

void EAttribute::init$($String* $enum$name, int32_t $enum$ordinal, $TextAttribute* ta) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->mask = $sl(1, ordinal());
	$set(this, att, ta);
}

EAttribute* EAttribute::forAttribute($AttributedCharacterIterator$Attribute* ta) {
	$init(EAttribute);
	{
		$var($EAttributeArray, arr$, EAttribute::atts);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			EAttribute* ea = arr$->get(i$);
			{
				if ($equals($nc(ea)->att, ta)) {
					return ea;
				}
			}
		}
	}
	return nullptr;
}

$String* EAttribute::toString() {
	$useLocalCurrentObjectStackCache();
	return $($nc($(name()))->substring(1))->toLowerCase();
}

void clinit$EAttribute($Class* class$) {
	$init($TextAttribute);
	$assignStatic(EAttribute::EFAMILY, $new(EAttribute, "EFAMILY"_s, 0, $TextAttribute::FAMILY));
	$assignStatic(EAttribute::EWEIGHT, $new(EAttribute, "EWEIGHT"_s, 1, $TextAttribute::WEIGHT));
	$assignStatic(EAttribute::EWIDTH, $new(EAttribute, "EWIDTH"_s, 2, $TextAttribute::WIDTH));
	$assignStatic(EAttribute::EPOSTURE, $new(EAttribute, "EPOSTURE"_s, 3, $TextAttribute::POSTURE));
	$assignStatic(EAttribute::ESIZE, $new(EAttribute, "ESIZE"_s, 4, $TextAttribute::SIZE));
	$assignStatic(EAttribute::ETRANSFORM, $new(EAttribute, "ETRANSFORM"_s, 5, $TextAttribute::TRANSFORM));
	$assignStatic(EAttribute::ESUPERSCRIPT, $new(EAttribute, "ESUPERSCRIPT"_s, 6, $TextAttribute::SUPERSCRIPT));
	$assignStatic(EAttribute::EFONT, $new(EAttribute, "EFONT"_s, 7, $TextAttribute::FONT));
	$assignStatic(EAttribute::ECHAR_REPLACEMENT, $new(EAttribute, "ECHAR_REPLACEMENT"_s, 8, $TextAttribute::CHAR_REPLACEMENT));
	$assignStatic(EAttribute::EFOREGROUND, $new(EAttribute, "EFOREGROUND"_s, 9, $TextAttribute::FOREGROUND));
	$assignStatic(EAttribute::EBACKGROUND, $new(EAttribute, "EBACKGROUND"_s, 10, $TextAttribute::BACKGROUND));
	$assignStatic(EAttribute::EUNDERLINE, $new(EAttribute, "EUNDERLINE"_s, 11, $TextAttribute::UNDERLINE));
	$assignStatic(EAttribute::ESTRIKETHROUGH, $new(EAttribute, "ESTRIKETHROUGH"_s, 12, $TextAttribute::STRIKETHROUGH));
	$assignStatic(EAttribute::ERUN_DIRECTION, $new(EAttribute, "ERUN_DIRECTION"_s, 13, $TextAttribute::RUN_DIRECTION));
	$assignStatic(EAttribute::EBIDI_EMBEDDING, $new(EAttribute, "EBIDI_EMBEDDING"_s, 14, $TextAttribute::BIDI_EMBEDDING));
	$assignStatic(EAttribute::EJUSTIFICATION, $new(EAttribute, "EJUSTIFICATION"_s, 15, $TextAttribute::JUSTIFICATION));
	$assignStatic(EAttribute::EINPUT_METHOD_HIGHLIGHT, $new(EAttribute, "EINPUT_METHOD_HIGHLIGHT"_s, 16, $TextAttribute::INPUT_METHOD_HIGHLIGHT));
	$assignStatic(EAttribute::EINPUT_METHOD_UNDERLINE, $new(EAttribute, "EINPUT_METHOD_UNDERLINE"_s, 17, $TextAttribute::INPUT_METHOD_UNDERLINE));
	$assignStatic(EAttribute::ESWAP_COLORS, $new(EAttribute, "ESWAP_COLORS"_s, 18, $TextAttribute::SWAP_COLORS));
	$assignStatic(EAttribute::ENUMERIC_SHAPING, $new(EAttribute, "ENUMERIC_SHAPING"_s, 19, $TextAttribute::NUMERIC_SHAPING));
	$assignStatic(EAttribute::EKERNING, $new(EAttribute, "EKERNING"_s, 20, $TextAttribute::KERNING));
	$assignStatic(EAttribute::ELIGATURES, $new(EAttribute, "ELIGATURES"_s, 21, $TextAttribute::LIGATURES));
	$assignStatic(EAttribute::ETRACKING, $new(EAttribute, "ETRACKING"_s, 22, $TextAttribute::TRACKING));
	$assignStatic(EAttribute::EBASELINE_TRANSFORM, $new(EAttribute, "EBASELINE_TRANSFORM"_s, 23, nullptr));
	$assignStatic(EAttribute::$VALUES, EAttribute::$values());
	$assignStatic(EAttribute::atts, $fcast($EAttributeArray, EAttribute::class$->getEnumConstants()));
}

EAttribute::EAttribute() {
}

$Class* EAttribute::load$($String* name, bool initialize) {
	$loadClass(EAttribute, name, initialize, &_EAttribute_ClassInfo_, clinit$EAttribute, allocate$EAttribute);
	return class$;
}

$Class* EAttribute::class$ = nullptr;

	} // font
} // sun