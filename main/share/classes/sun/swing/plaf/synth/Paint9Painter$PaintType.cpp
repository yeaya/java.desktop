#include <sun/swing/plaf/synth/Paint9Painter$PaintType.h>

#include <java/lang/Enum.h>
#include <sun/swing/plaf/synth/Paint9Painter.h>
#include <jcpp.h>

#undef CENTER
#undef PAINT9_STRETCH
#undef PAINT9_TILE
#undef TILE

using $Paint9Painter$PaintTypeArray = $Array<::sun::swing::plaf::synth::Paint9Painter$PaintType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _Paint9Painter$PaintType_FieldInfo_[] = {
	{"CENTER", "Lsun/swing/plaf/synth/Paint9Painter$PaintType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Paint9Painter$PaintType, CENTER)},
	{"TILE", "Lsun/swing/plaf/synth/Paint9Painter$PaintType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Paint9Painter$PaintType, TILE)},
	{"PAINT9_STRETCH", "Lsun/swing/plaf/synth/Paint9Painter$PaintType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Paint9Painter$PaintType, PAINT9_STRETCH)},
	{"PAINT9_TILE", "Lsun/swing/plaf/synth/Paint9Painter$PaintType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Paint9Painter$PaintType, PAINT9_TILE)},
	{"$VALUES", "[Lsun/swing/plaf/synth/Paint9Painter$PaintType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Paint9Painter$PaintType, $VALUES)},
	{}
};

$MethodInfo _Paint9Painter$PaintType_MethodInfo_[] = {
	{"$values", "()[Lsun/swing/plaf/synth/Paint9Painter$PaintType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Paint9Painter$PaintTypeArray*(*)()>(&Paint9Painter$PaintType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Paint9Painter$PaintType::*)($String*,int32_t)>(&Paint9Painter$PaintType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/swing/plaf/synth/Paint9Painter$PaintType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Paint9Painter$PaintType*(*)($String*)>(&Paint9Painter$PaintType::valueOf))},
	{"values", "()[Lsun/swing/plaf/synth/Paint9Painter$PaintType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Paint9Painter$PaintTypeArray*(*)()>(&Paint9Painter$PaintType::values))},
	{}
};

$InnerClassInfo _Paint9Painter$PaintType_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.Paint9Painter$PaintType", "sun.swing.plaf.synth.Paint9Painter", "PaintType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Paint9Painter$PaintType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.swing.plaf.synth.Paint9Painter$PaintType",
	"java.lang.Enum",
	nullptr,
	_Paint9Painter$PaintType_FieldInfo_,
	_Paint9Painter$PaintType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/swing/plaf/synth/Paint9Painter$PaintType;>;",
	nullptr,
	_Paint9Painter$PaintType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.Paint9Painter"
};

$Object* allocate$Paint9Painter$PaintType($Class* clazz) {
	return $of($alloc(Paint9Painter$PaintType));
}

Paint9Painter$PaintType* Paint9Painter$PaintType::CENTER = nullptr;
Paint9Painter$PaintType* Paint9Painter$PaintType::TILE = nullptr;
Paint9Painter$PaintType* Paint9Painter$PaintType::PAINT9_STRETCH = nullptr;
Paint9Painter$PaintType* Paint9Painter$PaintType::PAINT9_TILE = nullptr;
$Paint9Painter$PaintTypeArray* Paint9Painter$PaintType::$VALUES = nullptr;

$Paint9Painter$PaintTypeArray* Paint9Painter$PaintType::$values() {
	$init(Paint9Painter$PaintType);
	return $new($Paint9Painter$PaintTypeArray, {
		Paint9Painter$PaintType::CENTER,
		Paint9Painter$PaintType::TILE,
		Paint9Painter$PaintType::PAINT9_STRETCH,
		Paint9Painter$PaintType::PAINT9_TILE
	});
}

$Paint9Painter$PaintTypeArray* Paint9Painter$PaintType::values() {
	$init(Paint9Painter$PaintType);
	return $cast($Paint9Painter$PaintTypeArray, Paint9Painter$PaintType::$VALUES->clone());
}

Paint9Painter$PaintType* Paint9Painter$PaintType::valueOf($String* name) {
	$init(Paint9Painter$PaintType);
	return $cast(Paint9Painter$PaintType, $Enum::valueOf(Paint9Painter$PaintType::class$, name));
}

void Paint9Painter$PaintType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Paint9Painter$PaintType($Class* class$) {
	$assignStatic(Paint9Painter$PaintType::CENTER, $new(Paint9Painter$PaintType, "CENTER"_s, 0));
	$assignStatic(Paint9Painter$PaintType::TILE, $new(Paint9Painter$PaintType, "TILE"_s, 1));
	$assignStatic(Paint9Painter$PaintType::PAINT9_STRETCH, $new(Paint9Painter$PaintType, "PAINT9_STRETCH"_s, 2));
	$assignStatic(Paint9Painter$PaintType::PAINT9_TILE, $new(Paint9Painter$PaintType, "PAINT9_TILE"_s, 3));
	$assignStatic(Paint9Painter$PaintType::$VALUES, Paint9Painter$PaintType::$values());
}

Paint9Painter$PaintType::Paint9Painter$PaintType() {
}

$Class* Paint9Painter$PaintType::load$($String* name, bool initialize) {
	$loadClass(Paint9Painter$PaintType, name, initialize, &_Paint9Painter$PaintType_ClassInfo_, clinit$Paint9Painter$PaintType, allocate$Paint9Painter$PaintType);
	return class$;
}

$Class* Paint9Painter$PaintType::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun