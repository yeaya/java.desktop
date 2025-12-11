#include <javax/swing/plaf/nimbus/ImageScalingHelper$PaintType.h>

#include <java/lang/Enum.h>
#include <javax/swing/plaf/nimbus/ImageScalingHelper.h>
#include <jcpp.h>

#undef CENTER
#undef PAINT9_STRETCH
#undef PAINT9_TILE
#undef TILE

using $ImageScalingHelper$PaintTypeArray = $Array<::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _ImageScalingHelper$PaintType_FieldInfo_[] = {
	{"CENTER", "Ljavax/swing/plaf/nimbus/ImageScalingHelper$PaintType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ImageScalingHelper$PaintType, CENTER)},
	{"TILE", "Ljavax/swing/plaf/nimbus/ImageScalingHelper$PaintType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ImageScalingHelper$PaintType, TILE)},
	{"PAINT9_STRETCH", "Ljavax/swing/plaf/nimbus/ImageScalingHelper$PaintType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ImageScalingHelper$PaintType, PAINT9_STRETCH)},
	{"PAINT9_TILE", "Ljavax/swing/plaf/nimbus/ImageScalingHelper$PaintType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ImageScalingHelper$PaintType, PAINT9_TILE)},
	{"$VALUES", "[Ljavax/swing/plaf/nimbus/ImageScalingHelper$PaintType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ImageScalingHelper$PaintType, $VALUES)},
	{}
};

$MethodInfo _ImageScalingHelper$PaintType_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/plaf/nimbus/ImageScalingHelper$PaintType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ImageScalingHelper$PaintTypeArray*(*)()>(&ImageScalingHelper$PaintType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ImageScalingHelper$PaintType::*)($String*,int32_t)>(&ImageScalingHelper$PaintType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/plaf/nimbus/ImageScalingHelper$PaintType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ImageScalingHelper$PaintType*(*)($String*)>(&ImageScalingHelper$PaintType::valueOf))},
	{"values", "()[Ljavax/swing/plaf/nimbus/ImageScalingHelper$PaintType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ImageScalingHelper$PaintTypeArray*(*)()>(&ImageScalingHelper$PaintType::values))},
	{}
};

$InnerClassInfo _ImageScalingHelper$PaintType_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.ImageScalingHelper$PaintType", "javax.swing.plaf.nimbus.ImageScalingHelper", "PaintType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ImageScalingHelper$PaintType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.plaf.nimbus.ImageScalingHelper$PaintType",
	"java.lang.Enum",
	nullptr,
	_ImageScalingHelper$PaintType_FieldInfo_,
	_ImageScalingHelper$PaintType_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/plaf/nimbus/ImageScalingHelper$PaintType;>;",
	nullptr,
	_ImageScalingHelper$PaintType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.ImageScalingHelper"
};

$Object* allocate$ImageScalingHelper$PaintType($Class* clazz) {
	return $of($alloc(ImageScalingHelper$PaintType));
}

ImageScalingHelper$PaintType* ImageScalingHelper$PaintType::CENTER = nullptr;
ImageScalingHelper$PaintType* ImageScalingHelper$PaintType::TILE = nullptr;
ImageScalingHelper$PaintType* ImageScalingHelper$PaintType::PAINT9_STRETCH = nullptr;
ImageScalingHelper$PaintType* ImageScalingHelper$PaintType::PAINT9_TILE = nullptr;
$ImageScalingHelper$PaintTypeArray* ImageScalingHelper$PaintType::$VALUES = nullptr;

$ImageScalingHelper$PaintTypeArray* ImageScalingHelper$PaintType::$values() {
	$init(ImageScalingHelper$PaintType);
	return $new($ImageScalingHelper$PaintTypeArray, {
		ImageScalingHelper$PaintType::CENTER,
		ImageScalingHelper$PaintType::TILE,
		ImageScalingHelper$PaintType::PAINT9_STRETCH,
		ImageScalingHelper$PaintType::PAINT9_TILE
	});
}

$ImageScalingHelper$PaintTypeArray* ImageScalingHelper$PaintType::values() {
	$init(ImageScalingHelper$PaintType);
	return $cast($ImageScalingHelper$PaintTypeArray, ImageScalingHelper$PaintType::$VALUES->clone());
}

ImageScalingHelper$PaintType* ImageScalingHelper$PaintType::valueOf($String* name) {
	$init(ImageScalingHelper$PaintType);
	return $cast(ImageScalingHelper$PaintType, $Enum::valueOf(ImageScalingHelper$PaintType::class$, name));
}

void ImageScalingHelper$PaintType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ImageScalingHelper$PaintType($Class* class$) {
	$assignStatic(ImageScalingHelper$PaintType::CENTER, $new(ImageScalingHelper$PaintType, "CENTER"_s, 0));
	$assignStatic(ImageScalingHelper$PaintType::TILE, $new(ImageScalingHelper$PaintType, "TILE"_s, 1));
	$assignStatic(ImageScalingHelper$PaintType::PAINT9_STRETCH, $new(ImageScalingHelper$PaintType, "PAINT9_STRETCH"_s, 2));
	$assignStatic(ImageScalingHelper$PaintType::PAINT9_TILE, $new(ImageScalingHelper$PaintType, "PAINT9_TILE"_s, 3));
	$assignStatic(ImageScalingHelper$PaintType::$VALUES, ImageScalingHelper$PaintType::$values());
}

ImageScalingHelper$PaintType::ImageScalingHelper$PaintType() {
}

$Class* ImageScalingHelper$PaintType::load$($String* name, bool initialize) {
	$loadClass(ImageScalingHelper$PaintType, name, initialize, &_ImageScalingHelper$PaintType_ClassInfo_, clinit$ImageScalingHelper$PaintType, allocate$ImageScalingHelper$PaintType);
	return class$;
}

$Class* ImageScalingHelper$PaintType::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax