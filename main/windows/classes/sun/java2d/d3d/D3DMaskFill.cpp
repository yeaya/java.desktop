#include <sun/java2d/d3d/D3DMaskFill.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/ClassCastException.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DContext.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/SurfaceType.h>
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
using $D3DContext = ::sun::java2d::d3d::D3DContext;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $BufferedMaskFill = ::sun::java2d::pipe::BufferedMaskFill;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DMaskFill_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;)V", nullptr, $PROTECTED, $method(static_cast<void(D3DMaskFill::*)($SurfaceType*,$CompositeType*)>(&D3DMaskFill::init$))},
	{"maskFill", "(IIIIIII[B)V", nullptr, $PROTECTED | $NATIVE},
	{"register", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&D3DMaskFill::register$))},
	{"validateContext", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Composite;I)V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_maskFill 1

$ClassInfo _D3DMaskFill_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DMaskFill",
	"sun.java2d.pipe.BufferedMaskFill",
	nullptr,
	nullptr,
	_D3DMaskFill_MethodInfo_
};

$Object* allocate$D3DMaskFill($Class* clazz) {
	return $of($alloc(D3DMaskFill));
}

void D3DMaskFill::register$() {
	$init(D3DMaskFill);
	$useLocalCurrentObjectStackCache();
	$init($SurfaceType);
	$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskFill, $SurfaceType::AnyColor, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskFill, $SurfaceType::OpaqueColor, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskFill, $SurfaceType::GradientPaint, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskFill, $SurfaceType::OpaqueGradientPaint, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskFill, $SurfaceType::LinearGradientPaint, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskFill, $SurfaceType::OpaqueLinearGradientPaint, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskFill, $SurfaceType::RadialGradientPaint, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskFill, $SurfaceType::OpaqueRadialGradientPaint, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskFill, $SurfaceType::TexturePaint, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskFill, $SurfaceType::OpaqueTexturePaint, $CompositeType::SrcNoEa))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void D3DMaskFill::init$($SurfaceType* srcType, $CompositeType* compType) {
	$init($D3DSurfaceData);
	$BufferedMaskFill::init$($($D3DRenderQueue::getInstance()), srcType, compType, $D3DSurfaceData::D3DSurface);
}

void D3DMaskFill::maskFill(int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask) {
	$prepareNative(D3DMaskFill, maskFill, void, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask);
	$invokeNative(x, y, w, h, maskoff, maskscan, masklen, mask);
	$finishNative();
}

void D3DMaskFill::validateContext($SunGraphics2D* sg2d, $Composite* comp, int32_t ctxflags) {
	$useLocalCurrentObjectStackCache();
	$var($D3DSurfaceData, dstData, nullptr);
	try {
		$assign(dstData, $cast($D3DSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$D3DContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), comp, nullptr, sg2d->paint, sg2d, ctxflags);
}

D3DMaskFill::D3DMaskFill() {
}

$Class* D3DMaskFill::load$($String* name, bool initialize) {
	$loadClass(D3DMaskFill, name, initialize, &_D3DMaskFill_ClassInfo_, allocate$D3DMaskFill);
	return class$;
}

$Class* D3DMaskFill::class$ = nullptr;

		} // d3d
	} // java2d
} // sun