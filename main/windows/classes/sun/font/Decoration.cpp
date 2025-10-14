#include <sun/font/Decoration.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/Paint.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <sun/font/AttributeValues.h>
#include <sun/font/Decoration$DecorationImpl.h>
#include <sun/font/Decoration$Label.h>
#include <sun/font/EAttribute.h>
#include <sun/font/Underline.h>
#include <jcpp.h>

#undef EBACKGROUND
#undef EFOREGROUND
#undef EINPUT_METHOD_HIGHLIGHT
#undef EINPUT_METHOD_UNDERLINE
#undef ESTRIKETHROUGH
#undef ESWAP_COLORS
#undef EUNDERLINE
#undef PLAIN
#undef VALUES_MASK

using $EAttributeArray = $Array<::sun::font::EAttribute>;
using $Graphics2D = ::java::awt::Graphics2D;
using $Paint = ::java::awt::Paint;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $AttributeValues = ::sun::font::AttributeValues;
using $Decoration$DecorationImpl = ::sun::font::Decoration$DecorationImpl;
using $Decoration$Label = ::sun::font::Decoration$Label;
using $EAttribute = ::sun::font::EAttribute;
using $Underline = ::sun::font::Underline;

namespace sun {
	namespace font {

$FieldInfo _Decoration_FieldInfo_[] = {
	{"VALUES_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Decoration, VALUES_MASK)},
	{"PLAIN", "Lsun/font/Decoration;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Decoration, PLAIN)},
	{}
};

$MethodInfo _Decoration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Decoration::*)()>(&Decoration::init$))},
	{"drawTextAndDecorations", "(Lsun/font/Decoration$Label;Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC},
	{"getCharVisualBounds", "(Lsun/font/Decoration$Label;I)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getDecoration", "(Lsun/font/AttributeValues;)Lsun/font/Decoration;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Decoration*(*)($AttributeValues*)>(&Decoration::getDecoration))},
	{"getDecoration", "(Ljava/util/Map;)Lsun/font/Decoration;", "(Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)Lsun/font/Decoration;", $PUBLIC | $STATIC, $method(static_cast<Decoration*(*)($Map*)>(&Decoration::getDecoration))},
	{"getOutline", "(Lsun/font/Decoration$Label;FF)Ljava/awt/Shape;", nullptr, 0},
	{"getPlainDecoration", "()Lsun/font/Decoration;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Decoration*(*)()>(&Decoration::getPlainDecoration))},
	{"getVisualBounds", "(Lsun/font/Decoration$Label;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Decoration_InnerClassesInfo_[] = {
	{"sun.font.Decoration$DecorationImpl", "sun.font.Decoration", "DecorationImpl", $PRIVATE | $STATIC | $FINAL},
	{"sun.font.Decoration$Label", "sun.font.Decoration", "Label", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Decoration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.Decoration",
	"java.lang.Object",
	nullptr,
	_Decoration_FieldInfo_,
	_Decoration_MethodInfo_,
	nullptr,
	nullptr,
	_Decoration_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.Decoration$DecorationImpl,sun.font.Decoration$Label"
};

$Object* allocate$Decoration($Class* clazz) {
	return $of($alloc(Decoration));
}

int32_t Decoration::VALUES_MASK = 0;
Decoration* Decoration::PLAIN = nullptr;

void Decoration::init$() {
}

Decoration* Decoration::getPlainDecoration() {
	$init(Decoration);
	return Decoration::PLAIN;
}

Decoration* Decoration::getDecoration($AttributeValues* values$renamed) {
	$init(Decoration);
	$var($AttributeValues, values, values$renamed);
	if (values == nullptr || !$nc(values)->anyDefined(Decoration::VALUES_MASK)) {
		return Decoration::PLAIN;
	}
	$assign(values, $nc(values)->applyIMHighlight());
	$var($Paint, var$0, values->getForeground());
	$var($Paint, var$1, values->getBackground());
	bool var$2 = values->getSwapColors();
	bool var$3 = values->getStrikethrough();
	$var($Underline, var$4, $Underline::getUnderline(values->getUnderline()));
	return $new($Decoration$DecorationImpl, var$0, var$1, var$2, var$3, var$4, $($Underline::getUnderline(values->getInputMethodUnderline())));
}

Decoration* Decoration::getDecoration($Map* attributes) {
	$init(Decoration);
	if (attributes == nullptr) {
		return Decoration::PLAIN;
	}
	return getDecoration($($AttributeValues::fromMap(attributes)));
}

void Decoration::drawTextAndDecorations($Decoration$Label* label, $Graphics2D* g2d, float x, float y) {
	$nc(label)->handleDraw(g2d, x, y);
}

$Rectangle2D* Decoration::getVisualBounds($Decoration$Label* label) {
	return $nc(label)->handleGetVisualBounds();
}

$Rectangle2D* Decoration::getCharVisualBounds($Decoration$Label* label, int32_t index) {
	return $nc(label)->handleGetCharVisualBounds(index);
}

$Shape* Decoration::getOutline($Decoration$Label* label, float x, float y) {
	return $nc(label)->handleGetOutline(x, y);
}

void clinit$Decoration($Class* class$) {
		$init($EAttribute);
	Decoration::VALUES_MASK = $AttributeValues::getMask($$new($EAttributeArray, {
		$EAttribute::EFOREGROUND,
		$EAttribute::EBACKGROUND,
		$EAttribute::ESWAP_COLORS,
		$EAttribute::ESTRIKETHROUGH,
		$EAttribute::EUNDERLINE,
		$EAttribute::EINPUT_METHOD_HIGHLIGHT,
		$EAttribute::EINPUT_METHOD_UNDERLINE
	}));
	$assignStatic(Decoration::PLAIN, $new(Decoration));
}

Decoration::Decoration() {
}

$Class* Decoration::load$($String* name, bool initialize) {
	$loadClass(Decoration, name, initialize, &_Decoration_ClassInfo_, clinit$Decoration, allocate$Decoration);
	return class$;
}

$Class* Decoration::class$ = nullptr;

	} // font
} // sun