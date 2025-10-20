#include <sun/java2d/d3d/D3DPaints.h>

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
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/d3d/D3DPaints$Gradient.h>
#include <sun/java2d/d3d/D3DPaints$LinearGradient.h>
#include <sun/java2d/d3d/D3DPaints$RadialGradient.h>
#include <sun/java2d/d3d/D3DPaints$Texture.h>
#include <jcpp.h>

#undef PAINT_GRADIENT
#undef PAINT_LIN_GRADIENT
#undef PAINT_RAD_GRADIENT
#undef PAINT_TEXTURE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $D3DPaints$Gradient = ::sun::java2d::d3d::D3DPaints$Gradient;
using $D3DPaints$LinearGradient = ::sun::java2d::d3d::D3DPaints$LinearGradient;
using $D3DPaints$RadialGradient = ::sun::java2d::d3d::D3DPaints$RadialGradient;
using $D3DPaints$Texture = ::sun::java2d::d3d::D3DPaints$Texture;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DPaints_FieldInfo_[] = {
	{"impls", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Lsun/java2d/d3d/D3DPaints;>;", $PRIVATE | $STATIC, $staticField(D3DPaints, impls)},
	{}
};

$MethodInfo _D3DPaints_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DPaints::*)()>(&D3DPaints::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $ABSTRACT},
	{"isValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($SunGraphics2D*)>(&D3DPaints::isValid))},
	{}
};

$InnerClassInfo _D3DPaints_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DPaints$RadialGradient", "sun.java2d.d3d.D3DPaints", "RadialGradient", $PRIVATE | $STATIC},
	{"sun.java2d.d3d.D3DPaints$LinearGradient", "sun.java2d.d3d.D3DPaints", "LinearGradient", $PRIVATE | $STATIC},
	{"sun.java2d.d3d.D3DPaints$MultiGradient", "sun.java2d.d3d.D3DPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
	{"sun.java2d.d3d.D3DPaints$Texture", "sun.java2d.d3d.D3DPaints", "Texture", $PRIVATE | $STATIC},
	{"sun.java2d.d3d.D3DPaints$Gradient", "sun.java2d.d3d.D3DPaints", "Gradient", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _D3DPaints_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.java2d.d3d.D3DPaints",
	"java.lang.Object",
	nullptr,
	_D3DPaints_FieldInfo_,
	_D3DPaints_MethodInfo_,
	nullptr,
	nullptr,
	_D3DPaints_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DPaints$RadialGradient,sun.java2d.d3d.D3DPaints$LinearGradient,sun.java2d.d3d.D3DPaints$MultiGradient,sun.java2d.d3d.D3DPaints$Texture,sun.java2d.d3d.D3DPaints$Gradient"
};

$Object* allocate$D3DPaints($Class* clazz) {
	return $of($alloc(D3DPaints));
}


$Map* D3DPaints::impls = nullptr;

void D3DPaints::init$() {
}

bool D3DPaints::isValid($SunGraphics2D* sg2d) {
	$init(D3DPaints);
	$useLocalCurrentObjectStackCache();
	$var(D3DPaints, impl, $cast(D3DPaints, $nc(D3DPaints::impls)->get($($Integer::valueOf($nc(sg2d)->paintState)))));
	return (impl != nullptr && impl->isPaintValid(sg2d));
}

void clinit$D3DPaints($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(D3DPaints::impls, $new($HashMap, 4, 1.0f));
	{
		$var($Object, var$0, $of($Integer::valueOf($SunGraphics2D::PAINT_GRADIENT)));
		$nc(D3DPaints::impls)->put(var$0, $$new($D3DPaints$Gradient));
		$var($Object, var$1, $of($Integer::valueOf($SunGraphics2D::PAINT_LIN_GRADIENT)));
		$nc(D3DPaints::impls)->put(var$1, $$new($D3DPaints$LinearGradient));
		$var($Object, var$2, $of($Integer::valueOf($SunGraphics2D::PAINT_RAD_GRADIENT)));
		$nc(D3DPaints::impls)->put(var$2, $$new($D3DPaints$RadialGradient));
		$var($Object, var$3, $of($Integer::valueOf($SunGraphics2D::PAINT_TEXTURE)));
		$nc(D3DPaints::impls)->put(var$3, $$new($D3DPaints$Texture));
	}
}

D3DPaints::D3DPaints() {
}

$Class* D3DPaints::load$($String* name, bool initialize) {
	$loadClass(D3DPaints, name, initialize, &_D3DPaints_ClassInfo_, clinit$D3DPaints, allocate$D3DPaints);
	return class$;
}

$Class* D3DPaints::class$ = nullptr;

		} // d3d
	} // java2d
} // sun