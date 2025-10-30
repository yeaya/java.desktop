#include <sun/java2d/opengl/OGLBlitLoops.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/ScaledBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/opengl/OGLAnyCompositeBlit.h>
#include <sun/java2d/opengl/OGLBufImgOps.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLGeneralBlit.h>
#include <sun/java2d/opengl/OGLGeneralTransformedBlit.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLRTTSurfaceToSurfaceBlit.h>
#include <sun/java2d/opengl/OGLRTTSurfaceToSurfaceScale.h>
#include <sun/java2d/opengl/OGLRTTSurfaceToSurfaceTransform.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceToSurfaceBlit.h>
#include <sun/java2d/opengl/OGLSurfaceToSurfaceScale.h>
#include <sun/java2d/opengl/OGLSurfaceToSurfaceTransform.h>
#include <sun/java2d/opengl/OGLSurfaceToSwBlit.h>
#include <sun/java2d/opengl/OGLSwToSurfaceBlit.h>
#include <sun/java2d/opengl/OGLSwToSurfaceScale.h>
#include <sun/java2d/opengl/OGLSwToSurfaceTransform.h>
#include <sun/java2d/opengl/OGLSwToTextureBlit.h>
#include <sun/java2d/opengl/OGLTextureToSurfaceBlit.h>
#include <sun/java2d/opengl/OGLTextureToSurfaceScale.h>
#include <sun/java2d/opengl/OGLTextureToSurfaceTransform.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef FBOBJECT
#undef OFFSET_HINT
#undef OFFSET_ISOBLIT
#undef OFFSET_RTT
#undef OFFSET_SRCTYPE
#undef OFFSET_TEXTURE
#undef OFFSET_XFORM
#undef OPAQUE
#undef PF_3BYTE_BGR
#undef PF_BYTE_GRAY
#undef PF_INT_ARGB
#undef PF_INT_ARGB_PRE
#undef PF_INT_BGR
#undef PF_INT_BGRX
#undef PF_INT_RGB
#undef PF_INT_RGBX
#undef PF_USHORT_555_RGB
#undef PF_USHORT_555_RGBX
#undef PF_USHORT_565_RGB
#undef PF_USHORT_GRAY
#undef SRC_IS_OPAQUE
#undef TEXTURE

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
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $OGLAnyCompositeBlit = ::sun::java2d::opengl::OGLAnyCompositeBlit;
using $OGLBufImgOps = ::sun::java2d::opengl::OGLBufImgOps;
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLGeneralBlit = ::sun::java2d::opengl::OGLGeneralBlit;
using $OGLGeneralTransformedBlit = ::sun::java2d::opengl::OGLGeneralTransformedBlit;
using $OGLGraphicsConfig = ::sun::java2d::opengl::OGLGraphicsConfig;
using $OGLRTTSurfaceToSurfaceBlit = ::sun::java2d::opengl::OGLRTTSurfaceToSurfaceBlit;
using $OGLRTTSurfaceToSurfaceScale = ::sun::java2d::opengl::OGLRTTSurfaceToSurfaceScale;
using $OGLRTTSurfaceToSurfaceTransform = ::sun::java2d::opengl::OGLRTTSurfaceToSurfaceTransform;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $OGLSurfaceToSurfaceBlit = ::sun::java2d::opengl::OGLSurfaceToSurfaceBlit;
using $OGLSurfaceToSurfaceScale = ::sun::java2d::opengl::OGLSurfaceToSurfaceScale;
using $OGLSurfaceToSurfaceTransform = ::sun::java2d::opengl::OGLSurfaceToSurfaceTransform;
using $OGLSurfaceToSwBlit = ::sun::java2d::opengl::OGLSurfaceToSwBlit;
using $OGLSwToSurfaceBlit = ::sun::java2d::opengl::OGLSwToSurfaceBlit;
using $OGLSwToSurfaceScale = ::sun::java2d::opengl::OGLSwToSurfaceScale;
using $OGLSwToSurfaceTransform = ::sun::java2d::opengl::OGLSwToSurfaceTransform;
using $OGLSwToTextureBlit = ::sun::java2d::opengl::OGLSwToTextureBlit;
using $OGLTextureToSurfaceBlit = ::sun::java2d::opengl::OGLTextureToSurfaceBlit;
using $OGLTextureToSurfaceScale = ::sun::java2d::opengl::OGLTextureToSurfaceScale;
using $OGLTextureToSurfaceTransform = ::sun::java2d::opengl::OGLTextureToSurfaceTransform;
using $BufferedBufImgOps = ::sun::java2d::pipe::BufferedBufImgOps;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $Region = ::sun::java2d::pipe::Region;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLBlitLoops_FieldInfo_[] = {
	{"OFFSET_SRCTYPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OGLBlitLoops, OFFSET_SRCTYPE)},
	{"OFFSET_HINT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OGLBlitLoops, OFFSET_HINT)},
	{"OFFSET_TEXTURE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OGLBlitLoops, OFFSET_TEXTURE)},
	{"OFFSET_RTT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OGLBlitLoops, OFFSET_RTT)},
	{"OFFSET_XFORM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OGLBlitLoops, OFFSET_XFORM)},
	{"OFFSET_ISOBLIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OGLBlitLoops, OFFSET_ISOBLIT)},
	{}
};

$MethodInfo _OGLBlitLoops_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OGLBlitLoops::*)()>(&OGLBlitLoops::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIDDDDIZ)V", nullptr, $STATIC, $method(static_cast<void(*)($SurfaceData*,$SurfaceData*,$Composite*,$Region*,$AffineTransform*,int32_t,int32_t,int32_t,int32_t,int32_t,double,double,double,double,int32_t,bool)>(&OGLBlitLoops::Blit))},
	{"IsoBlit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIDDDDZ)V", nullptr, $STATIC, $method(static_cast<void(*)($SurfaceData*,$SurfaceData*,$BufferedImage*,$BufferedImageOp*,$Composite*,$Region*,$AffineTransform*,int32_t,int32_t,int32_t,int32_t,int32_t,double,double,double,double,bool)>(&OGLBlitLoops::IsoBlit))},
	{"createPackedParams", "(ZZZZII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(bool,bool,bool,bool,int32_t,int32_t)>(&OGLBlitLoops::createPackedParams))},
	{"enqueueBlit", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;IIIIIDDDD)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*,$SurfaceData*,$SurfaceData*,int32_t,int32_t,int32_t,int32_t,int32_t,double,double,double,double)>(&OGLBlitLoops::enqueueBlit))},
	{"register", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&OGLBlitLoops::register$))},
	{}
};

$ClassInfo _OGLBlitLoops_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.opengl.OGLBlitLoops",
	"java.lang.Object",
	nullptr,
	_OGLBlitLoops_FieldInfo_,
	_OGLBlitLoops_MethodInfo_
};

$Object* allocate$OGLBlitLoops($Class* clazz) {
	return $of($alloc(OGLBlitLoops));
}

void OGLBlitLoops::init$() {
}

void OGLBlitLoops::register$() {
	$useLocalCurrentObjectStackCache();
	$init($SurfaceType);
	$var($Blit, blitIntArgbPreToSurface, $new($OGLSwToSurfaceBlit, $SurfaceType::IntArgbPre, $OGLSurfaceData::PF_INT_ARGB_PRE));
	$var($Blit, blitIntArgbPreToTexture, $new($OGLSwToTextureBlit, $SurfaceType::IntArgbPre, $OGLSurfaceData::PF_INT_ARGB_PRE));
	$var($TransformBlit, transformBlitIntArgbPreToSurface, $new($OGLSwToSurfaceTransform, $SurfaceType::IntArgbPre, $OGLSurfaceData::PF_INT_ARGB_PRE));
	$var($OGLSurfaceToSwBlit, blitSurfaceToIntArgbPre, $new($OGLSurfaceToSwBlit, $SurfaceType::IntArgbPre, $OGLSurfaceData::PF_INT_ARGB_PRE));
	$init($OGLSurfaceData);
	$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new($OGLSurfaceToSurfaceBlit)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSurfaceToSurfaceScale)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSurfaceToSurfaceTransform)),
		static_cast<$GraphicsPrimitive*>($$new($OGLRTTSurfaceToSurfaceBlit)),
		static_cast<$GraphicsPrimitive*>($$new($OGLRTTSurfaceToSurfaceScale)),
		static_cast<$GraphicsPrimitive*>($$new($OGLRTTSurfaceToSurfaceTransform)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSurfaceToSwBlit, $SurfaceType::IntArgb, $OGLSurfaceData::PF_INT_ARGB)),
		static_cast<$GraphicsPrimitive*>(blitSurfaceToIntArgbPre),
		static_cast<$GraphicsPrimitive*>(blitIntArgbPreToSurface),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceBlit, $SurfaceType::IntRgb, $OGLSurfaceData::PF_INT_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceBlit, $SurfaceType::IntRgbx, $OGLSurfaceData::PF_INT_RGBX)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceBlit, $SurfaceType::IntBgr, $OGLSurfaceData::PF_INT_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceBlit, $SurfaceType::IntBgrx, $OGLSurfaceData::PF_INT_BGRX)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceBlit, $SurfaceType::ThreeByteBgr, $OGLSurfaceData::PF_3BYTE_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceBlit, $SurfaceType::Ushort565Rgb, $OGLSurfaceData::PF_USHORT_565_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceBlit, $SurfaceType::Ushort555Rgb, $OGLSurfaceData::PF_USHORT_555_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceBlit, $SurfaceType::Ushort555Rgbx, $OGLSurfaceData::PF_USHORT_555_RGBX)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceBlit, $SurfaceType::ByteGray, $OGLSurfaceData::PF_BYTE_GRAY)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceBlit, $SurfaceType::UshortGray, $OGLSurfaceData::PF_USHORT_GRAY)),
		static_cast<$GraphicsPrimitive*>($$new($OGLGeneralBlit, $OGLSurfaceData::OpenGLSurface, $CompositeType::AnyAlpha, blitIntArgbPreToSurface)),
		static_cast<$GraphicsPrimitive*>($$new($OGLAnyCompositeBlit, $OGLSurfaceData::OpenGLSurface, blitSurfaceToIntArgbPre, blitSurfaceToIntArgbPre, blitIntArgbPreToSurface)),
		static_cast<$GraphicsPrimitive*>($$new($OGLAnyCompositeBlit, $SurfaceType::Any, nullptr, blitSurfaceToIntArgbPre, blitIntArgbPreToSurface)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceScale, $SurfaceType::IntRgb, $OGLSurfaceData::PF_INT_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceScale, $SurfaceType::IntRgbx, $OGLSurfaceData::PF_INT_RGBX)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceScale, $SurfaceType::IntBgr, $OGLSurfaceData::PF_INT_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceScale, $SurfaceType::IntBgrx, $OGLSurfaceData::PF_INT_BGRX)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceScale, $SurfaceType::ThreeByteBgr, $OGLSurfaceData::PF_3BYTE_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceScale, $SurfaceType::Ushort565Rgb, $OGLSurfaceData::PF_USHORT_565_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceScale, $SurfaceType::Ushort555Rgb, $OGLSurfaceData::PF_USHORT_555_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceScale, $SurfaceType::Ushort555Rgbx, $OGLSurfaceData::PF_USHORT_555_RGBX)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceScale, $SurfaceType::ByteGray, $OGLSurfaceData::PF_BYTE_GRAY)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceScale, $SurfaceType::UshortGray, $OGLSurfaceData::PF_USHORT_GRAY)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceScale, $SurfaceType::IntArgbPre, $OGLSurfaceData::PF_INT_ARGB_PRE)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceTransform, $SurfaceType::IntRgb, $OGLSurfaceData::PF_INT_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceTransform, $SurfaceType::IntRgbx, $OGLSurfaceData::PF_INT_RGBX)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceTransform, $SurfaceType::IntBgr, $OGLSurfaceData::PF_INT_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceTransform, $SurfaceType::IntBgrx, $OGLSurfaceData::PF_INT_BGRX)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceTransform, $SurfaceType::ThreeByteBgr, $OGLSurfaceData::PF_3BYTE_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceTransform, $SurfaceType::Ushort565Rgb, $OGLSurfaceData::PF_USHORT_565_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceTransform, $SurfaceType::Ushort555Rgb, $OGLSurfaceData::PF_USHORT_555_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceTransform, $SurfaceType::Ushort555Rgbx, $OGLSurfaceData::PF_USHORT_555_RGBX)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceTransform, $SurfaceType::ByteGray, $OGLSurfaceData::PF_BYTE_GRAY)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToSurfaceTransform, $SurfaceType::UshortGray, $OGLSurfaceData::PF_USHORT_GRAY)),
		static_cast<$GraphicsPrimitive*>(transformBlitIntArgbPreToSurface),
		static_cast<$GraphicsPrimitive*>($$new($OGLGeneralTransformedBlit, transformBlitIntArgbPreToSurface)),
		static_cast<$GraphicsPrimitive*>($$new($OGLTextureToSurfaceBlit)),
		static_cast<$GraphicsPrimitive*>($$new($OGLTextureToSurfaceScale)),
		static_cast<$GraphicsPrimitive*>($$new($OGLTextureToSurfaceTransform)),
		static_cast<$GraphicsPrimitive*>(blitIntArgbPreToTexture),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToTextureBlit, $SurfaceType::IntRgb, $OGLSurfaceData::PF_INT_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToTextureBlit, $SurfaceType::IntRgbx, $OGLSurfaceData::PF_INT_RGBX)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToTextureBlit, $SurfaceType::IntBgr, $OGLSurfaceData::PF_INT_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToTextureBlit, $SurfaceType::IntBgrx, $OGLSurfaceData::PF_INT_BGRX)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToTextureBlit, $SurfaceType::ThreeByteBgr, $OGLSurfaceData::PF_3BYTE_BGR)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToTextureBlit, $SurfaceType::Ushort565Rgb, $OGLSurfaceData::PF_USHORT_565_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToTextureBlit, $SurfaceType::Ushort555Rgb, $OGLSurfaceData::PF_USHORT_555_RGB)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToTextureBlit, $SurfaceType::Ushort555Rgbx, $OGLSurfaceData::PF_USHORT_555_RGBX)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToTextureBlit, $SurfaceType::ByteGray, $OGLSurfaceData::PF_BYTE_GRAY)),
		static_cast<$GraphicsPrimitive*>($$new($OGLSwToTextureBlit, $SurfaceType::UshortGray, $OGLSurfaceData::PF_USHORT_GRAY)),
		static_cast<$GraphicsPrimitive*>($$new($OGLGeneralBlit, $OGLSurfaceData::OpenGLTexture, $CompositeType::SrcNoEa, blitIntArgbPreToTexture))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

int32_t OGLBlitLoops::createPackedParams(bool isoblit, bool texture, bool rtt, bool xform, int32_t hint, int32_t srctype) {
	return (((((($sl(srctype, OGLBlitLoops::OFFSET_SRCTYPE)) | ($sl(hint, OGLBlitLoops::OFFSET_HINT))) | ($sl(texture ? 1 : 0, OGLBlitLoops::OFFSET_TEXTURE))) | ($sl(rtt ? 1 : 0, OGLBlitLoops::OFFSET_RTT))) | ($sl(xform ? 1 : 0, OGLBlitLoops::OFFSET_XFORM))) | ($sl(isoblit ? 1 : 0, OGLBlitLoops::OFFSET_ISOBLIT)));
}

void OGLBlitLoops::enqueueBlit($RenderQueue* rq, $SurfaceData* src, $SurfaceData* dst, int32_t packedParams, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
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

void OGLBlitLoops::Blit($SurfaceData* srcData, $SurfaceData* dstData, $Composite* comp, $Region* clip, $AffineTransform* xform, int32_t hint, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2, int32_t srctype, bool texture) {
	$useLocalCurrentObjectStackCache();
	int32_t ctxflags = 0;
	if ($nc(srcData)->getTransparency() == $Transparency::OPAQUE) {
		ctxflags |= $OGLContext::SRC_IS_OPAQUE;
	}
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			rq->addReference(srcData);
			$var($OGLSurfaceData, oglDst, $cast($OGLSurfaceData, dstData));
			if (texture) {
				$var($OGLGraphicsConfig, gc, $nc(oglDst)->getOGLGraphicsConfig());
				$OGLContext::setScratchSurface(gc);
			} else {
				$OGLContext::validateContext(oglDst, oglDst, clip, comp, xform, nullptr, nullptr, ctxflags);
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
}

void OGLBlitLoops::IsoBlit($SurfaceData* srcData, $SurfaceData* dstData, $BufferedImage* srcImg, $BufferedImageOp* biop, $Composite* comp, $Region* clip, $AffineTransform* xform, int32_t hint, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2, bool texture) {
	$useLocalCurrentObjectStackCache();
	int32_t ctxflags = 0;
	if ($nc(srcData)->getTransparency() == $Transparency::OPAQUE) {
		ctxflags |= $OGLContext::SRC_IS_OPAQUE;
	}
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($OGLSurfaceData, oglSrc, $cast($OGLSurfaceData, srcData));
			$var($OGLSurfaceData, oglDst, $cast($OGLSurfaceData, dstData));
			int32_t srctype = $nc(oglSrc)->getType();
			bool rtt = false;
			$var($OGLSurfaceData, srcCtxData, nullptr);
			if (srctype == $OGLSurfaceData::TEXTURE) {
				rtt = false;
				$assign(srcCtxData, oglDst);
			} else {
				rtt = true;
				if (srctype == $OGLSurfaceData::FBOBJECT) {
					$assign(srcCtxData, oglDst);
				} else {
					$assign(srcCtxData, oglSrc);
				}
			}
			$OGLContext::validateContext(srcCtxData, oglDst, clip, comp, xform, nullptr, nullptr, ctxflags);
			if (biop != nullptr) {
				$OGLBufImgOps::enableBufImgOp(rq, oglSrc, srcImg, biop);
			}
			int32_t packedParams = createPackedParams(true, texture, rtt, xform != nullptr, hint, 0);
			enqueueBlit(rq, srcData, dstData, packedParams, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2);
			if (biop != nullptr) {
				$OGLBufImgOps::disableBufImgOp(rq, biop);
			}
			if (rtt && $nc(oglDst)->isOnScreen()) {
				rq->flushNow();
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
}

OGLBlitLoops::OGLBlitLoops() {
}

$Class* OGLBlitLoops::load$($String* name, bool initialize) {
	$loadClass(OGLBlitLoops, name, initialize, &_OGLBlitLoops_ClassInfo_, allocate$OGLBlitLoops);
	return class$;
}

$Class* OGLBlitLoops::class$ = nullptr;

		} // opengl
	} // java2d
} // sun