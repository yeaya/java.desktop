#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode.h>

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Enum.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode$1.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode$2.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode$3.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <jcpp.h>

#undef OFF
#undef ON_NO_AA
#undef ON_WITH_AA

using $DMarlinRenderingEngine$NormModeArray = $Array<::sun::java2d::marlin::DMarlinRenderingEngine$NormMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DMarlinRenderingEngine$NormMode$1 = ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode$1;
using $DMarlinRenderingEngine$NormMode$2 = ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode$2;
using $DMarlinRenderingEngine$NormMode$3 = ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode$3;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _DMarlinRenderingEngine$NormMode_FieldInfo_[] = {
	{"ON_WITH_AA", "Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DMarlinRenderingEngine$NormMode, ON_WITH_AA)},
	{"ON_NO_AA", "Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DMarlinRenderingEngine$NormMode, ON_NO_AA)},
	{"OFF", "Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DMarlinRenderingEngine$NormMode, OFF)},
	{"$VALUES", "[Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DMarlinRenderingEngine$NormMode, $VALUES)},
	{}
};

$MethodInfo _DMarlinRenderingEngine$NormMode_MethodInfo_[] = {
	{"$values", "()[Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DMarlinRenderingEngine$NormModeArray*(*)()>(&DMarlinRenderingEngine$NormMode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DMarlinRenderingEngine$NormMode::*)($String*,int32_t)>(&DMarlinRenderingEngine$NormMode::init$))},
	{"getNormalizingPathIterator", "(Lsun/java2d/marlin/RendererContext;Ljava/awt/geom/PathIterator;)Ljava/awt/geom/PathIterator;", nullptr, $ABSTRACT},
	{"valueOf", "(Ljava/lang/String;)Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DMarlinRenderingEngine$NormMode*(*)($String*)>(&DMarlinRenderingEngine$NormMode::valueOf))},
	{"values", "()[Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DMarlinRenderingEngine$NormModeArray*(*)()>(&DMarlinRenderingEngine$NormMode::values))},
	{}
};

$InnerClassInfo _DMarlinRenderingEngine$NormMode_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode", "sun.java2d.marlin.DMarlinRenderingEngine", "NormMode", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode$3", nullptr, nullptr, $FINAL | $ENUM},
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode$2", nullptr, nullptr, $FINAL | $ENUM},
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _DMarlinRenderingEngine$NormMode_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT | $ENUM,
	"sun.java2d.marlin.DMarlinRenderingEngine$NormMode",
	"java.lang.Enum",
	nullptr,
	_DMarlinRenderingEngine$NormMode_FieldInfo_,
	_DMarlinRenderingEngine$NormMode_MethodInfo_,
	"Ljava/lang/Enum<Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;>;",
	nullptr,
	_DMarlinRenderingEngine$NormMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DMarlinRenderingEngine"
};

$Object* allocate$DMarlinRenderingEngine$NormMode($Class* clazz) {
	return $of($alloc(DMarlinRenderingEngine$NormMode));
}

DMarlinRenderingEngine$NormMode* DMarlinRenderingEngine$NormMode::ON_WITH_AA = nullptr;
DMarlinRenderingEngine$NormMode* DMarlinRenderingEngine$NormMode::ON_NO_AA = nullptr;
DMarlinRenderingEngine$NormMode* DMarlinRenderingEngine$NormMode::OFF = nullptr;
$DMarlinRenderingEngine$NormModeArray* DMarlinRenderingEngine$NormMode::$VALUES = nullptr;

$DMarlinRenderingEngine$NormModeArray* DMarlinRenderingEngine$NormMode::$values() {
	$init(DMarlinRenderingEngine$NormMode);
	return $new($DMarlinRenderingEngine$NormModeArray, {
		DMarlinRenderingEngine$NormMode::ON_WITH_AA,
		DMarlinRenderingEngine$NormMode::ON_NO_AA,
		DMarlinRenderingEngine$NormMode::OFF
	});
}

$DMarlinRenderingEngine$NormModeArray* DMarlinRenderingEngine$NormMode::values() {
	$init(DMarlinRenderingEngine$NormMode);
	return $cast($DMarlinRenderingEngine$NormModeArray, DMarlinRenderingEngine$NormMode::$VALUES->clone());
}

DMarlinRenderingEngine$NormMode* DMarlinRenderingEngine$NormMode::valueOf($String* name) {
	$init(DMarlinRenderingEngine$NormMode);
	return $cast(DMarlinRenderingEngine$NormMode, $Enum::valueOf(DMarlinRenderingEngine$NormMode::class$, name));
}

void DMarlinRenderingEngine$NormMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$DMarlinRenderingEngine$NormMode($Class* class$) {
	$assignStatic(DMarlinRenderingEngine$NormMode::ON_WITH_AA, $new($DMarlinRenderingEngine$NormMode$1, "ON_WITH_AA"_s, 0));
	$assignStatic(DMarlinRenderingEngine$NormMode::ON_NO_AA, $new($DMarlinRenderingEngine$NormMode$2, "ON_NO_AA"_s, 1));
	$assignStatic(DMarlinRenderingEngine$NormMode::OFF, $new($DMarlinRenderingEngine$NormMode$3, "OFF"_s, 2));
	$assignStatic(DMarlinRenderingEngine$NormMode::$VALUES, DMarlinRenderingEngine$NormMode::$values());
}

DMarlinRenderingEngine$NormMode::DMarlinRenderingEngine$NormMode() {
}

$Class* DMarlinRenderingEngine$NormMode::load$($String* name, bool initialize) {
	$loadClass(DMarlinRenderingEngine$NormMode, name, initialize, &_DMarlinRenderingEngine$NormMode_ClassInfo_, clinit$DMarlinRenderingEngine$NormMode, allocate$DMarlinRenderingEngine$NormMode);
	return class$;
}

$Class* DMarlinRenderingEngine$NormMode::class$ = nullptr;

		} // marlin
	} // java2d
} // sun