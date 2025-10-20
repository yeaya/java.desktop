#include <sun/java2d/d3d/D3DMaskBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DContext.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/MaskBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/BufferedMaskBlit.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef NO_CONTEXT_FLAGS

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $Paint = ::java::awt::Paint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DContext = ::sun::java2d::d3d::D3DContext;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $BufferedMaskBlit = ::sun::java2d::pipe::BufferedMaskBlit;
using $Region = ::sun::java2d::pipe::Region;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DMaskBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;)V", nullptr, $PRIVATE, $method(static_cast<void(D3DMaskBlit::*)($SurfaceType*,$CompositeType*)>(&D3DMaskBlit::init$))},
	{"register", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&D3DMaskBlit::register$))},
	{"validateContext", "(Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _D3DMaskBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DMaskBlit",
	"sun.java2d.pipe.BufferedMaskBlit",
	nullptr,
	nullptr,
	_D3DMaskBlit_MethodInfo_
};

$Object* allocate$D3DMaskBlit($Class* clazz) {
	return $of($alloc(D3DMaskBlit));
}

void D3DMaskBlit::register$() {
	$init(D3DMaskBlit);
	$useLocalCurrentObjectStackCache();
		$init($SurfaceType);
		$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskBlit, $SurfaceType::IntArgb, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskBlit, $SurfaceType::IntArgbPre, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskBlit, $SurfaceType::IntRgb, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskBlit, $SurfaceType::IntRgb, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskBlit, $SurfaceType::IntBgr, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(D3DMaskBlit, $SurfaceType::IntBgr, $CompositeType::SrcNoEa))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void D3DMaskBlit::init$($SurfaceType* srcType, $CompositeType* compType) {
	$init($D3DSurfaceData);
	$BufferedMaskBlit::init$($($D3DRenderQueue::getInstance()), srcType, compType, $D3DSurfaceData::D3DSurface);
}

void D3DMaskBlit::validateContext($SurfaceData* dstData, $Composite* comp, $Region* clip) {
	$var($D3DSurfaceData, d3dDst, $cast($D3DSurfaceData, dstData));
	$D3DContext::validateContext(d3dDst, d3dDst, clip, comp, nullptr, nullptr, nullptr, $D3DContext::NO_CONTEXT_FLAGS);
}

D3DMaskBlit::D3DMaskBlit() {
}

$Class* D3DMaskBlit::load$($String* name, bool initialize) {
	$loadClass(D3DMaskBlit, name, initialize, &_D3DMaskBlit_ClassInfo_, allocate$D3DMaskBlit);
	return class$;
}

$Class* D3DMaskBlit::class$ = nullptr;

		} // d3d
	} // java2d
} // sun