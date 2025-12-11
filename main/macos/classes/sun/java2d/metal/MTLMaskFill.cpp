#include <sun/java2d/metal/MTLMaskFill.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/ClassCastException.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/BufferedMaskFill.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $MTLContext = ::sun::java2d::metal::MTLContext;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $BufferedMaskFill = ::sun::java2d::pipe::BufferedMaskFill;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLMaskFill_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;)V", nullptr, $PROTECTED, $method(static_cast<void(MTLMaskFill::*)($SurfaceType*,$CompositeType*)>(&MTLMaskFill::init$))},
	{"maskFill", "(IIIIIII[B)V", nullptr, $PROTECTED | $NATIVE},
	{"register", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&MTLMaskFill::register$))},
	{"validateContext", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Composite;I)V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_maskFill 1

$ClassInfo _MTLMaskFill_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLMaskFill",
	"sun.java2d.pipe.BufferedMaskFill",
	nullptr,
	nullptr,
	_MTLMaskFill_MethodInfo_
};

$Object* allocate$MTLMaskFill($Class* clazz) {
	return $of($alloc(MTLMaskFill));
}

void MTLMaskFill::register$() {
	$init(MTLMaskFill);
	$useLocalCurrentObjectStackCache();
	$init($SurfaceType);
	$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new(MTLMaskFill, $SurfaceType::AnyColor, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(MTLMaskFill, $SurfaceType::OpaqueColor, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(MTLMaskFill, $SurfaceType::GradientPaint, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(MTLMaskFill, $SurfaceType::OpaqueGradientPaint, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(MTLMaskFill, $SurfaceType::LinearGradientPaint, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(MTLMaskFill, $SurfaceType::OpaqueLinearGradientPaint, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(MTLMaskFill, $SurfaceType::RadialGradientPaint, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(MTLMaskFill, $SurfaceType::OpaqueRadialGradientPaint, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(MTLMaskFill, $SurfaceType::TexturePaint, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(MTLMaskFill, $SurfaceType::OpaqueTexturePaint, $CompositeType::SrcNoEa))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void MTLMaskFill::init$($SurfaceType* srcType, $CompositeType* compType) {
	$init($MTLSurfaceData);
	$BufferedMaskFill::init$($($MTLRenderQueue::getInstance()), srcType, compType, $MTLSurfaceData::MTLSurface);
}

void MTLMaskFill::maskFill(int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask) {
	$prepareNative(MTLMaskFill, maskFill, void, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask);
	$invokeNative(x, y, w, h, maskoff, maskscan, masklen, mask);
	$finishNative();
}

void MTLMaskFill::validateContext($SunGraphics2D* sg2d, $Composite* comp, int32_t ctxflags) {
	$useLocalCurrentObjectStackCache();
	$var($MTLSurfaceData, dstData, nullptr);
	try {
		$assign(dstData, $cast($MTLSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$MTLContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), comp, nullptr, sg2d->paint, sg2d, ctxflags);
}

MTLMaskFill::MTLMaskFill() {
}

$Class* MTLMaskFill::load$($String* name, bool initialize) {
	$loadClass(MTLMaskFill, name, initialize, &_MTLMaskFill_ClassInfo_, allocate$MTLMaskFill);
	return class$;
}

$Class* MTLMaskFill::class$ = nullptr;

		} // metal
	} // java2d
} // sun