#include <sun/java2d/d3d/D3DBlitLoops.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <sun/java2d/ScreenUpdateManager.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DBufImgOps.h>
#include <sun/java2d/d3d/D3DContext.h>
#include <sun/java2d/d3d/D3DGeneralBlit.h>
#include <sun/java2d/d3d/D3DGeneralTransformedBlit.h>
#include <sun/java2d/d3d/D3DRTTSurfaceToSurfaceBlit.h>
#include <sun/java2d/d3d/D3DRTTSurfaceToSurfaceScale.h>
#include <sun/java2d/d3d/D3DRTTSurfaceToSurfaceTransform.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <sun/java2d/d3d/D3DScreenUpdateManager.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/d3d/D3DSurfaceToGDIWindowSurfaceBlit.h>
#include <sun/java2d/d3d/D3DSurfaceToGDIWindowSurfaceScale.h>
#include <sun/java2d/d3d/D3DSurfaceToGDIWindowSurfaceTransform.h>
#include <sun/java2d/d3d/D3DSurfaceToSurfaceBlit.h>
#include <sun/java2d/d3d/D3DSurfaceToSurfaceScale.h>
#include <sun/java2d/d3d/D3DSurfaceToSurfaceTransform.h>
#include <sun/java2d/d3d/D3DSurfaceToSwBlit.h>
#include <sun/java2d/d3d/D3DSwToSurfaceBlit.h>
#include <sun/java2d/d3d/D3DSwToSurfaceScale.h>
#include <sun/java2d/d3d/D3DSwToSurfaceTransform.h>
#include <sun/java2d/d3d/D3DSwToTextureBlit.h>
#include <sun/java2d/d3d/D3DTextureToSurfaceBlit.h>
#include <sun/java2d/d3d/D3DTextureToSurfaceScale.h>
#include <sun/java2d/d3d/D3DTextureToSurfaceTransform.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/ScaledBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef OFFSET_HINT
#undef OFFSET_ISOBLIT
#undef OFFSET_RTT
#undef OFFSET_SRCTYPE
#undef OFFSET_TEXTURE
#undef OFFSET_XFORM
#undef OPAQUE
#undef SRC_IS_OPAQUE
#undef ST_3BYTE_BGR
#undef ST_BYTE_INDEXED
#undef ST_INT_ARGB
#undef ST_INT_ARGB_PRE
#undef ST_INT_BGR
#undef ST_INT_RGB
#undef ST_USHORT_555_RGB
#undef ST_USHORT_565_RGB
#undef TEXTURE
#undef WINDOW

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $Paint = ::java::awt::Paint;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ScreenUpdateManager = ::sun::java2d::ScreenUpdateManager;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DBufImgOps = ::sun::java2d::d3d::D3DBufImgOps;
using $D3DContext = ::sun::java2d::d3d::D3DContext;
using $D3DGeneralBlit = ::sun::java2d::d3d::D3DGeneralBlit;
using $D3DGeneralTransformedBlit = ::sun::java2d::d3d::D3DGeneralTransformedBlit;
using $D3DRTTSurfaceToSurfaceBlit = ::sun::java2d::d3d::D3DRTTSurfaceToSurfaceBlit;
using $D3DRTTSurfaceToSurfaceScale = ::sun::java2d::d3d::D3DRTTSurfaceToSurfaceScale;
using $D3DRTTSurfaceToSurfaceTransform = ::sun::java2d::d3d::D3DRTTSurfaceToSurfaceTransform;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;
using $D3DScreenUpdateManager = ::sun::java2d::d3d::D3DScreenUpdateManager;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $D3DSurfaceToGDIWindowSurfaceBlit = ::sun::java2d::d3d::D3DSurfaceToGDIWindowSurfaceBlit;
using $D3DSurfaceToGDIWindowSurfaceScale = ::sun::java2d::d3d::D3DSurfaceToGDIWindowSurfaceScale;
using $D3DSurfaceToGDIWindowSurfaceTransform = ::sun::java2d::d3d::D3DSurfaceToGDIWindowSurfaceTransform;
using $D3DSurfaceToSurfaceBlit = ::sun::java2d::d3d::D3DSurfaceToSurfaceBlit;
using $D3DSurfaceToSurfaceScale = ::sun::java2d::d3d::D3DSurfaceToSurfaceScale;
using $D3DSurfaceToSurfaceTransform = ::sun::java2d::d3d::D3DSurfaceToSurfaceTransform;
using $D3DSurfaceToSwBlit = ::sun::java2d::d3d::D3DSurfaceToSwBlit;
using $D3DSwToSurfaceBlit = ::sun::java2d::d3d::D3DSwToSurfaceBlit;
using $D3DSwToSurfaceScale = ::sun::java2d::d3d::D3DSwToSurfaceScale;
using $D3DSwToSurfaceTransform = ::sun::java2d::d3d::D3DSwToSurfaceTransform;
using $D3DSwToTextureBlit = ::sun::java2d::d3d::D3DSwToTextureBlit;
using $D3DTextureToSurfaceBlit = ::sun::java2d::d3d::D3DTextureToSurfaceBlit;
using $D3DTextureToSurfaceScale = ::sun::java2d::d3d::D3DTextureToSurfaceScale;
using $D3DTextureToSurfaceTransform = ::sun::java2d::d3d::D3DTextureToSurfaceTransform;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $BufferedBufImgOps = ::sun::java2d::pipe::BufferedBufImgOps;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $Region = ::sun::java2d::pipe::Region;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DBlitLoops_FieldInfo_[] = {
	{"OFFSET_SRCTYPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(D3DBlitLoops, OFFSET_SRCTYPE)},
	{"OFFSET_HINT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(D3DBlitLoops, OFFSET_HINT)},
	{"OFFSET_TEXTURE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(D3DBlitLoops, OFFSET_TEXTURE)},
	{"OFFSET_RTT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(D3DBlitLoops, OFFSET_RTT)},
	{"OFFSET_XFORM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(D3DBlitLoops, OFFSET_XFORM)},
	{"OFFSET_ISOBLIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(D3DBlitLoops, OFFSET_ISOBLIT)},
	{}
};

$MethodInfo _D3DBlitLoops_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DBlitLoops::*)()>(&D3DBlitLoops::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIDDDDIZ)V", nullptr, $STATIC, $method(static_cast<void(*)($SurfaceData*,$SurfaceData*,$Composite*,$Region*,$AffineTransform*,int32_t,int32_t,int32_t,int32_t,int32_t,double,double,double,double,int32_t,bool)>(&D3DBlitLoops::Blit))},
	{"IsoBlit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIDDDDZ)V", nullptr, $STATIC, $method(static_cast<void(*)($SurfaceData*,$SurfaceData*,$BufferedImage*,$BufferedImageOp*,$Composite*,$Region*,$AffineTransform*,int32_t,int32_t,int32_t,int32_t,int32_t,double,double,double,double,bool)>(&D3DBlitLoops::IsoBlit))},
	{"createPackedParams", "(ZZZZII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(bool,bool,bool,bool,int32_t,int32_t)>(&D3DBlitLoops::createPackedParams))},
	{"enqueueBlit", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;IIIIIDDDD)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*,$SurfaceData*,$SurfaceData*,int32_t,int32_t,int32_t,int32_t,int32_t,double,double,double,double)>(&D3DBlitLoops::enqueueBlit))},
	{"register", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&D3DBlitLoops::register$))},
	{}
};

$ClassInfo _D3DBlitLoops_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.d3d.D3DBlitLoops",
	"java.lang.Object",
	nullptr,
	_D3DBlitLoops_FieldInfo_,
	_D3DBlitLoops_MethodInfo_
};

$Object* allocate$D3DBlitLoops($Class* clazz) {
	return $of($alloc(D3DBlitLoops));
}

void D3DBlitLoops::init$() {
}

void D3DBlitLoops::register$() {
	$useLocalCurrentObjectStackCache();
	$init($SurfaceType);
	$var($Blit, blitIntArgbPreToSurface, $new($D3DSwToSurfaceBlit, $SurfaceType::IntArgbPre, $D3DSurfaceData::ST_INT_ARGB_PRE));
	$var($Blit, blitIntArgbPreToTexture, $new($D3DSwToTextureBlit, $SurfaceType::IntArgbPre, $D3DSurfaceData::ST_INT_ARGB_PRE));
	$var($TransformBlit, transformBlitIntArgbPreToSurface, $new($D3DSwToSurfaceTransform, $SurfaceType::IntArgbPre, $D3DSurfaceData::ST_INT_ARGB_PRE));
	$init($D3DSurfaceData);
	$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new($D3DSurfaceToGDIWindowSurfaceBlit)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSurfaceToGDIWindowSurfaceScale)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSurfaceToGDIWindowSurfaceTransform)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSurfaceToSurfaceBlit)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSurfaceToSurfaceScale)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSurfaceToSurfaceTransform)),
		static_cast<$GraphicsPrimitive*>($$new($D3DRTTSurfaceToSurfaceBlit)),
		static_cast<$GraphicsPrimitive*>($$new($D3DRTTSurfaceToSurfaceScale)),
		static_cast<$GraphicsPrimitive*>($$new($D3DRTTSurfaceToSurfaceTransform)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSurfaceToSwBlit, $SurfaceType::IntArgb, $D3DSurfaceData::ST_INT_ARGB)),
		static_cast<$GraphicsPrimitive*>(blitIntArgbPreToSurface),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceBlit, $SurfaceType::IntArgb, $D3DSurfaceData::ST_INT_ARGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceBlit, $SurfaceType::IntRgb, $D3DSurfaceData::ST_INT_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceBlit, $SurfaceType::IntBgr, $D3DSurfaceData::ST_INT_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceBlit, $SurfaceType::ThreeByteBgr, $D3DSurfaceData::ST_3BYTE_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceBlit, $SurfaceType::Ushort565Rgb, $D3DSurfaceData::ST_USHORT_565_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceBlit, $SurfaceType::Ushort555Rgb, $D3DSurfaceData::ST_USHORT_555_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceBlit, $SurfaceType::ByteIndexed, $D3DSurfaceData::ST_BYTE_INDEXED)),
		static_cast<$GraphicsPrimitive*>($$new($D3DGeneralBlit, $D3DSurfaceData::D3DSurface, $CompositeType::AnyAlpha, blitIntArgbPreToSurface)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceScale, $SurfaceType::IntArgb, $D3DSurfaceData::ST_INT_ARGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceScale, $SurfaceType::IntArgbPre, $D3DSurfaceData::ST_INT_ARGB_PRE)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceScale, $SurfaceType::IntRgb, $D3DSurfaceData::ST_INT_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceScale, $SurfaceType::IntBgr, $D3DSurfaceData::ST_INT_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceScale, $SurfaceType::ThreeByteBgr, $D3DSurfaceData::ST_3BYTE_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceScale, $SurfaceType::Ushort565Rgb, $D3DSurfaceData::ST_USHORT_565_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceScale, $SurfaceType::Ushort555Rgb, $D3DSurfaceData::ST_USHORT_555_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceScale, $SurfaceType::ByteIndexed, $D3DSurfaceData::ST_BYTE_INDEXED)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceTransform, $SurfaceType::IntArgb, $D3DSurfaceData::ST_INT_ARGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceTransform, $SurfaceType::IntRgb, $D3DSurfaceData::ST_INT_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceTransform, $SurfaceType::IntBgr, $D3DSurfaceData::ST_INT_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceTransform, $SurfaceType::ThreeByteBgr, $D3DSurfaceData::ST_3BYTE_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceTransform, $SurfaceType::Ushort565Rgb, $D3DSurfaceData::ST_USHORT_565_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceTransform, $SurfaceType::Ushort555Rgb, $D3DSurfaceData::ST_USHORT_555_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToSurfaceTransform, $SurfaceType::ByteIndexed, $D3DSurfaceData::ST_BYTE_INDEXED)),
		static_cast<$GraphicsPrimitive*>(transformBlitIntArgbPreToSurface),
		static_cast<$GraphicsPrimitive*>($$new($D3DGeneralTransformedBlit, transformBlitIntArgbPreToSurface)),
		static_cast<$GraphicsPrimitive*>($$new($D3DTextureToSurfaceBlit)),
		static_cast<$GraphicsPrimitive*>($$new($D3DTextureToSurfaceScale)),
		static_cast<$GraphicsPrimitive*>($$new($D3DTextureToSurfaceTransform)),
		static_cast<$GraphicsPrimitive*>(blitIntArgbPreToTexture),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToTextureBlit, $SurfaceType::IntRgb, $D3DSurfaceData::ST_INT_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToTextureBlit, $SurfaceType::IntArgb, $D3DSurfaceData::ST_INT_ARGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToTextureBlit, $SurfaceType::IntBgr, $D3DSurfaceData::ST_INT_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToTextureBlit, $SurfaceType::ThreeByteBgr, $D3DSurfaceData::ST_3BYTE_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToTextureBlit, $SurfaceType::Ushort565Rgb, $D3DSurfaceData::ST_USHORT_565_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToTextureBlit, $SurfaceType::Ushort555Rgb, $D3DSurfaceData::ST_USHORT_555_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($D3DSwToTextureBlit, $SurfaceType::ByteIndexed, $D3DSurfaceData::ST_BYTE_INDEXED)),
		static_cast<$GraphicsPrimitive*>($$new($D3DGeneralBlit, $D3DSurfaceData::D3DTexture, $CompositeType::SrcNoEa, blitIntArgbPreToTexture))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

int32_t D3DBlitLoops::createPackedParams(bool isoblit, bool texture, bool rtt, bool xform, int32_t hint, int32_t srctype) {
	return (((((($sl(srctype, D3DBlitLoops::OFFSET_SRCTYPE)) | ($sl(hint, D3DBlitLoops::OFFSET_HINT))) | ($sl(texture ? 1 : 0, D3DBlitLoops::OFFSET_TEXTURE))) | ($sl(rtt ? 1 : 0, D3DBlitLoops::OFFSET_RTT))) | ($sl(xform ? 1 : 0, D3DBlitLoops::OFFSET_XFORM))) | ($sl(isoblit ? 1 : 0, D3DBlitLoops::OFFSET_ISOBLIT)));
}

void D3DBlitLoops::enqueueBlit($RenderQueue* rq, $SurfaceData* src, $SurfaceData* dst, int32_t packedParams, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$useLocalCurrentObjectStackCache();
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacityAndAlignment(72, 24);
	$nc(buf)->putInt(31);
	buf->putInt(packedParams);
	$nc($(buf->putInt(sx1)))->putInt(sy1);
	$nc($(buf->putInt(sx2)))->putInt(sy2);
	$nc($(buf->putDouble(dx1)))->putDouble(dy1);
	$nc($(buf->putDouble(dx2)))->putDouble(dy2);
	buf->putLong($nc(src)->getNativeOps());
	buf->putLong($nc(dst)->getNativeOps());
}

void D3DBlitLoops::Blit($SurfaceData* srcData, $SurfaceData* dstData, $Composite* comp, $Region* clip, $AffineTransform* xform, int32_t hint, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2, int32_t srctype, bool texture) {
	$useLocalCurrentObjectStackCache();
	int32_t ctxflags = 0;
	if ($nc(srcData)->getTransparency() == $Transparency::OPAQUE) {
		ctxflags |= $D3DContext::SRC_IS_OPAQUE;
	}
	$var($D3DSurfaceData, d3dDst, $cast($D3DSurfaceData, dstData));
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			rq->addReference(srcData);
			if (texture) {
				$D3DContext::setScratchSurface($($cast($D3DContext, $nc(d3dDst)->getContext())));
			} else {
				$D3DContext::validateContext(d3dDst, d3dDst, clip, comp, xform, nullptr, nullptr, ctxflags);
			}
			int32_t packedParams = createPackedParams(false, texture, false, xform != nullptr, hint, srctype);
			enqueueBlit(rq, srcData, dstData, packedParams, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2);
			rq->flushNow();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if ($nc(d3dDst)->getType() == $D3DSurfaceData::WINDOW) {
		$var($D3DScreenUpdateManager, mgr, $cast($D3DScreenUpdateManager, $ScreenUpdateManager::getInstance()));
		$nc(mgr)->runUpdateNow();
	}
}

void D3DBlitLoops::IsoBlit($SurfaceData* srcData, $SurfaceData* dstData, $BufferedImage* srcImg, $BufferedImageOp* biop, $Composite* comp, $Region* clip, $AffineTransform* xform, int32_t hint, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2, bool texture) {
	$useLocalCurrentObjectStackCache();
	int32_t ctxflags = 0;
	if ($nc(srcData)->getTransparency() == $Transparency::OPAQUE) {
		ctxflags |= $D3DContext::SRC_IS_OPAQUE;
	}
	$var($D3DSurfaceData, d3dDst, $cast($D3DSurfaceData, dstData));
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	bool rtt = false;
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($D3DSurfaceData, d3dSrc, $cast($D3DSurfaceData, srcData));
			int32_t srctype = $nc(d3dSrc)->getType();
			$var($D3DSurfaceData, srcCtxData, d3dSrc);
			if (srctype == $D3DSurfaceData::TEXTURE) {
				rtt = false;
			} else {
				rtt = true;
			}
			$D3DContext::validateContext(srcCtxData, d3dDst, clip, comp, xform, nullptr, nullptr, ctxflags);
			if (biop != nullptr) {
				$D3DBufImgOps::enableBufImgOp(rq, d3dSrc, srcImg, biop);
			}
			int32_t packedParams = createPackedParams(true, texture, rtt, xform != nullptr, hint, 0);
			enqueueBlit(rq, srcData, dstData, packedParams, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2);
			if (biop != nullptr) {
				$D3DBufImgOps::disableBufImgOp(rq, biop);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (rtt && ($nc(d3dDst)->getType() == $D3DSurfaceData::WINDOW)) {
		$var($D3DScreenUpdateManager, mgr, $cast($D3DScreenUpdateManager, $ScreenUpdateManager::getInstance()));
		$nc(mgr)->runUpdateNow();
	}
}

D3DBlitLoops::D3DBlitLoops() {
}

$Class* D3DBlitLoops::load$($String* name, bool initialize) {
	$loadClass(D3DBlitLoops, name, initialize, &_D3DBlitLoops_ClassInfo_, allocate$D3DBlitLoops);
	return class$;
}

$Class* D3DBlitLoops::class$ = nullptr;

		} // d3d
	} // java2d
} // sun