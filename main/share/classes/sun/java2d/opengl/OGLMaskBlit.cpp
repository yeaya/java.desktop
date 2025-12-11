#include <sun/java2d/opengl/OGLMaskBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/MaskBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
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
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $BufferedMaskBlit = ::sun::java2d::pipe::BufferedMaskBlit;
using $Region = ::sun::java2d::pipe::Region;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLMaskBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;)V", nullptr, $PRIVATE, $method(static_cast<void(OGLMaskBlit::*)($SurfaceType*,$CompositeType*)>(&OGLMaskBlit::init$))},
	{"register", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&OGLMaskBlit::register$))},
	{"validateContext", "(Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _OGLMaskBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLMaskBlit",
	"sun.java2d.pipe.BufferedMaskBlit",
	nullptr,
	nullptr,
	_OGLMaskBlit_MethodInfo_
};

$Object* allocate$OGLMaskBlit($Class* clazz) {
	return $of($alloc(OGLMaskBlit));
}

void OGLMaskBlit::register$() {
	$init(OGLMaskBlit);
	$useLocalCurrentObjectStackCache();
	$init($SurfaceType);
	$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskBlit, $SurfaceType::IntArgb, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskBlit, $SurfaceType::IntArgbPre, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskBlit, $SurfaceType::IntRgb, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskBlit, $SurfaceType::IntRgb, $CompositeType::SrcNoEa)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskBlit, $SurfaceType::IntBgr, $CompositeType::SrcOver)),
		static_cast<$GraphicsPrimitive*>($$new(OGLMaskBlit, $SurfaceType::IntBgr, $CompositeType::SrcNoEa))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void OGLMaskBlit::init$($SurfaceType* srcType, $CompositeType* compType) {
	$init($OGLSurfaceData);
	$BufferedMaskBlit::init$($($OGLRenderQueue::getInstance()), srcType, compType, $OGLSurfaceData::OpenGLSurface);
}

void OGLMaskBlit::validateContext($SurfaceData* dstData, $Composite* comp, $Region* clip) {
	$var($OGLSurfaceData, oglDst, $cast($OGLSurfaceData, dstData));
	$OGLContext::validateContext(oglDst, oglDst, clip, comp, nullptr, nullptr, nullptr, $OGLContext::NO_CONTEXT_FLAGS);
}

OGLMaskBlit::OGLMaskBlit() {
}

$Class* OGLMaskBlit::load$($String* name, bool initialize) {
	$loadClass(OGLMaskBlit, name, initialize, &_OGLMaskBlit_ClassInfo_, allocate$OGLMaskBlit);
	return class$;
}

$Class* OGLMaskBlit::class$ = nullptr;

		} // opengl
	} // java2d
} // sun