#include <sun/java2d/d3d/D3DTextureToSurfaceTransform.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DBlitLoops.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DBlitLoops = ::sun::java2d::d3d::D3DBlitLoops;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DTextureToSurfaceTransform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DTextureToSurfaceTransform::*)()>(&D3DTextureToSurfaceTransform::init$))},
	{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DTextureToSurfaceTransform_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DTextureToSurfaceTransform",
	"sun.java2d.loops.TransformBlit",
	nullptr,
	nullptr,
	_D3DTextureToSurfaceTransform_MethodInfo_
};

$Object* allocate$D3DTextureToSurfaceTransform($Class* clazz) {
	return $of($alloc(D3DTextureToSurfaceTransform));
}

void D3DTextureToSurfaceTransform::init$() {
	$init($D3DSurfaceData);
	$init($CompositeType);
	$TransformBlit::init$($D3DSurfaceData::D3DTexture, $CompositeType::AnyAlpha, $D3DSurfaceData::D3DSurface);
}

void D3DTextureToSurfaceTransform::Transform($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* at, int32_t hint, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$D3DBlitLoops::IsoBlit(src, dst, nullptr, nullptr, comp, clip, at, hint, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), true);
}

D3DTextureToSurfaceTransform::D3DTextureToSurfaceTransform() {
}

$Class* D3DTextureToSurfaceTransform::load$($String* name, bool initialize) {
	$loadClass(D3DTextureToSurfaceTransform, name, initialize, &_D3DTextureToSurfaceTransform_ClassInfo_, allocate$D3DTextureToSurfaceTransform);
	return class$;
}

$Class* D3DTextureToSurfaceTransform::class$ = nullptr;

		} // d3d
	} // java2d
} // sun