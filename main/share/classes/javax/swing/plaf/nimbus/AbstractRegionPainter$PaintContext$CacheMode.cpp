#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode.h>

#include <java/lang/Enum.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

#undef FIXED_SIZES
#undef NINE_SQUARE_SCALE
#undef NO_CACHING

using $AbstractRegionPainter$PaintContext$CacheModeArray = $Array<::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractRegionPainter = ::javax::swing::plaf::nimbus::AbstractRegionPainter;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _AbstractRegionPainter$PaintContext$CacheMode_FieldInfo_[] = {
	{"NO_CACHING", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractRegionPainter$PaintContext$CacheMode, NO_CACHING)},
	{"FIXED_SIZES", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractRegionPainter$PaintContext$CacheMode, FIXED_SIZES)},
	{"NINE_SQUARE_SCALE", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractRegionPainter$PaintContext$CacheMode, NINE_SQUARE_SCALE)},
	{"$VALUES", "[Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractRegionPainter$PaintContext$CacheMode, $VALUES)},
	{}
};

$MethodInfo _AbstractRegionPainter$PaintContext$CacheMode_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$AbstractRegionPainter$PaintContext$CacheModeArray*(*)()>(&AbstractRegionPainter$PaintContext$CacheMode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(AbstractRegionPainter$PaintContext$CacheMode::*)($String*,int32_t)>(&AbstractRegionPainter$PaintContext$CacheMode::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AbstractRegionPainter$PaintContext$CacheMode*(*)($String*)>(&AbstractRegionPainter$PaintContext$CacheMode::valueOf))},
	{"values", "()[Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AbstractRegionPainter$PaintContext$CacheModeArray*(*)()>(&AbstractRegionPainter$PaintContext$CacheMode::values))},
	{}
};

$InnerClassInfo _AbstractRegionPainter$PaintContext$CacheMode_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext", "javax.swing.plaf.nimbus.AbstractRegionPainter", "PaintContext", $PROTECTED | $STATIC},
	{"javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext$CacheMode", "javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext", "CacheMode", $PROTECTED | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _AbstractRegionPainter$PaintContext$CacheMode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext$CacheMode",
	"java.lang.Enum",
	nullptr,
	_AbstractRegionPainter$PaintContext$CacheMode_FieldInfo_,
	_AbstractRegionPainter$PaintContext$CacheMode_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode;>;",
	nullptr,
	_AbstractRegionPainter$PaintContext$CacheMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.AbstractRegionPainter"
};

$Object* allocate$AbstractRegionPainter$PaintContext$CacheMode($Class* clazz) {
	return $of($alloc(AbstractRegionPainter$PaintContext$CacheMode));
}

AbstractRegionPainter$PaintContext$CacheMode* AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING = nullptr;
AbstractRegionPainter$PaintContext$CacheMode* AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES = nullptr;
AbstractRegionPainter$PaintContext$CacheMode* AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE = nullptr;
$AbstractRegionPainter$PaintContext$CacheModeArray* AbstractRegionPainter$PaintContext$CacheMode::$VALUES = nullptr;

$AbstractRegionPainter$PaintContext$CacheModeArray* AbstractRegionPainter$PaintContext$CacheMode::$values() {
	$init(AbstractRegionPainter$PaintContext$CacheMode);
	return $new($AbstractRegionPainter$PaintContext$CacheModeArray, {
		AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING,
		AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES,
		AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE
	});
}

$AbstractRegionPainter$PaintContext$CacheModeArray* AbstractRegionPainter$PaintContext$CacheMode::values() {
	$init(AbstractRegionPainter$PaintContext$CacheMode);
	return $cast($AbstractRegionPainter$PaintContext$CacheModeArray, AbstractRegionPainter$PaintContext$CacheMode::$VALUES->clone());
}

AbstractRegionPainter$PaintContext$CacheMode* AbstractRegionPainter$PaintContext$CacheMode::valueOf($String* name) {
	$init(AbstractRegionPainter$PaintContext$CacheMode);
	return $cast(AbstractRegionPainter$PaintContext$CacheMode, $Enum::valueOf(AbstractRegionPainter$PaintContext$CacheMode::class$, name));
}

void AbstractRegionPainter$PaintContext$CacheMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$AbstractRegionPainter$PaintContext$CacheMode($Class* class$) {
	$assignStatic(AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, $new(AbstractRegionPainter$PaintContext$CacheMode, "NO_CACHING"_s, 0));
	$assignStatic(AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $new(AbstractRegionPainter$PaintContext$CacheMode, "FIXED_SIZES"_s, 1));
	$assignStatic(AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $new(AbstractRegionPainter$PaintContext$CacheMode, "NINE_SQUARE_SCALE"_s, 2));
	$assignStatic(AbstractRegionPainter$PaintContext$CacheMode::$VALUES, AbstractRegionPainter$PaintContext$CacheMode::$values());
}

AbstractRegionPainter$PaintContext$CacheMode::AbstractRegionPainter$PaintContext$CacheMode() {
}

$Class* AbstractRegionPainter$PaintContext$CacheMode::load$($String* name, bool initialize) {
	$loadClass(AbstractRegionPainter$PaintContext$CacheMode, name, initialize, &_AbstractRegionPainter$PaintContext$CacheMode_ClassInfo_, clinit$AbstractRegionPainter$PaintContext$CacheMode, allocate$AbstractRegionPainter$PaintContext$CacheMode);
	return class$;
}

$Class* AbstractRegionPainter$PaintContext$CacheMode::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax