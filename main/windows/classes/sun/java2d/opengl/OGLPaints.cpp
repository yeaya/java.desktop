#include <sun/java2d/opengl/OGLPaints.h>

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
#include <sun/java2d/opengl/OGLPaints$Gradient.h>
#include <sun/java2d/opengl/OGLPaints$LinearGradient.h>
#include <sun/java2d/opengl/OGLPaints$RadialGradient.h>
#include <sun/java2d/opengl/OGLPaints$Texture.h>
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
using $OGLPaints$Gradient = ::sun::java2d::opengl::OGLPaints$Gradient;
using $OGLPaints$LinearGradient = ::sun::java2d::opengl::OGLPaints$LinearGradient;
using $OGLPaints$RadialGradient = ::sun::java2d::opengl::OGLPaints$RadialGradient;
using $OGLPaints$Texture = ::sun::java2d::opengl::OGLPaints$Texture;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLPaints_FieldInfo_[] = {
	{"impls", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Lsun/java2d/opengl/OGLPaints;>;", $PRIVATE | $STATIC, $staticField(OGLPaints, impls)},
	{}
};

$MethodInfo _OGLPaints_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OGLPaints::*)()>(&OGLPaints::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $ABSTRACT},
	{"isValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($SunGraphics2D*)>(&OGLPaints::isValid))},
	{}
};

$InnerClassInfo _OGLPaints_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLPaints$RadialGradient", "sun.java2d.opengl.OGLPaints", "RadialGradient", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.OGLPaints$LinearGradient", "sun.java2d.opengl.OGLPaints", "LinearGradient", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.OGLPaints$MultiGradient", "sun.java2d.opengl.OGLPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
	{"sun.java2d.opengl.OGLPaints$Texture", "sun.java2d.opengl.OGLPaints", "Texture", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.OGLPaints$Gradient", "sun.java2d.opengl.OGLPaints", "Gradient", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _OGLPaints_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.java2d.opengl.OGLPaints",
	"java.lang.Object",
	nullptr,
	_OGLPaints_FieldInfo_,
	_OGLPaints_MethodInfo_,
	nullptr,
	nullptr,
	_OGLPaints_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLPaints$RadialGradient,sun.java2d.opengl.OGLPaints$LinearGradient,sun.java2d.opengl.OGLPaints$MultiGradient,sun.java2d.opengl.OGLPaints$Texture,sun.java2d.opengl.OGLPaints$Gradient"
};

$Object* allocate$OGLPaints($Class* clazz) {
	return $of($alloc(OGLPaints));
}


$Map* OGLPaints::impls = nullptr;

void OGLPaints::init$() {
}

bool OGLPaints::isValid($SunGraphics2D* sg2d) {
	$init(OGLPaints);
	$var(OGLPaints, impl, $cast(OGLPaints, $nc(OGLPaints::impls)->get($($Integer::valueOf($nc(sg2d)->paintState)))));
	return (impl != nullptr && impl->isPaintValid(sg2d));
}

void clinit$OGLPaints($Class* class$) {
	$assignStatic(OGLPaints::impls, $new($HashMap, 4, 1.0f));
	{
		$var($Object, var$0, $of($Integer::valueOf($SunGraphics2D::PAINT_GRADIENT)));
		$nc(OGLPaints::impls)->put(var$0, $$new($OGLPaints$Gradient));
		$var($Object, var$1, $of($Integer::valueOf($SunGraphics2D::PAINT_LIN_GRADIENT)));
		$nc(OGLPaints::impls)->put(var$1, $$new($OGLPaints$LinearGradient));
		$var($Object, var$2, $of($Integer::valueOf($SunGraphics2D::PAINT_RAD_GRADIENT)));
		$nc(OGLPaints::impls)->put(var$2, $$new($OGLPaints$RadialGradient));
		$var($Object, var$3, $of($Integer::valueOf($SunGraphics2D::PAINT_TEXTURE)));
		$nc(OGLPaints::impls)->put(var$3, $$new($OGLPaints$Texture));
	}
}

OGLPaints::OGLPaints() {
}

$Class* OGLPaints::load$($String* name, bool initialize) {
	$loadClass(OGLPaints, name, initialize, &_OGLPaints_ClassInfo_, clinit$OGLPaints, allocate$OGLPaints);
	return class$;
}

$Class* OGLPaints::class$ = nullptr;

		} // opengl
	} // java2d
} // sun