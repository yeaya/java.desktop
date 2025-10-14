#include <sun/java2d/opengl/OGLMaskFill.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/pipe/BufferedMaskFill.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $Paint = ::java::awt::Paint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $BufferedMaskFill = ::sun::java2d::pipe::BufferedMaskFill;
using $Region = ::sun::java2d::pipe::Region;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLMaskFill_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;)V", nullptr, $PROTECTED, $method(static_cast<void(OGLMaskFill::*)($SurfaceType*,$CompositeType*)>(&OGLMaskFill::init$))},
	{"maskFill", "(IIIIIII[B)V", nullptr, $PROTECTED | $NATIVE},
	{"register", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&OGLMaskFill::register$))},
	{"validateContext", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Composite;I)V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_maskFill 1

$ClassInfo _OGLMaskFill_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLMaskFill",
	"sun.java2d.pipe.BufferedMaskFill",
	nullptr,
	nullptr,
	_OGLMaskFill_MethodInfo_
};

$Object* allocate$OGLMaskFill($Class* clazz) {
	return $of($alloc(OGLMaskFill));
}

void OGLMaskFill::register$() {
	$init(OGLMaskFill);
		$init($SurfaceType);
		$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskFill, $SurfaceType::AnyColor, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskFill, $SurfaceType::OpaqueColor, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskFill, $SurfaceType::GradientPaint, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskFill, $SurfaceType::OpaqueGradientPaint, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskFill, $SurfaceType::LinearGradientPaint, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskFill, $SurfaceType::OpaqueLinearGradientPaint, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskFill, $SurfaceType::RadialGradientPaint, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskFill, $SurfaceType::OpaqueRadialGradientPaint, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskFill, $SurfaceType::TexturePaint, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskFill, $SurfaceType::OpaqueTexturePaint, $CompositeType::SrcNoEa))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void OGLMaskFill::init$($SurfaceType* srcType, $CompositeType* compType) {
	$init($OGLSurfaceData);
	$BufferedMaskFill::init$($($OGLRenderQueue::getInstance()), srcType, compType, $OGLSurfaceData::OpenGLSurface);
}

void OGLMaskFill::maskFill(int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask) {
	$prepareNative(OGLMaskFill, maskFill, void, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask);
	$invokeNative(OGLMaskFill, maskFill, x, y, w, h, maskoff, maskscan, masklen, mask);
	$finishNative();
}

void OGLMaskFill::validateContext($SunGraphics2D* sg2d, $Composite* comp, int32_t ctxflags) {
	$var($OGLSurfaceData, dstData, nullptr);
	try {
		$assign(dstData, $cast($OGLSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException&) {
		$var($ClassCastException, e, $catch());
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$OGLContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), comp, nullptr, sg2d->paint, sg2d, ctxflags);
}

OGLMaskFill::OGLMaskFill() {
}

$Class* OGLMaskFill::load$($String* name, bool initialize) {
	$loadClass(OGLMaskFill, name, initialize, &_OGLMaskFill_ClassInfo_, allocate$OGLMaskFill);
	return class$;
}

$Class* OGLMaskFill::class$ = nullptr;

		} // opengl
	} // java2d
} // sun