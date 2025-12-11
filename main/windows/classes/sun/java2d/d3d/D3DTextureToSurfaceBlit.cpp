#include <sun/java2d/d3d/D3DTextureToSurfaceBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DBlitLoops.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TYPE_NEAREST_NEIGHBOR

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $AffineTransformOp = ::java::awt::image::AffineTransformOp;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DBlitLoops = ::sun::java2d::d3d::D3DBlitLoops;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DTextureToSurfaceBlit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DTextureToSurfaceBlit::*)()>(&D3DTextureToSurfaceBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DTextureToSurfaceBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DTextureToSurfaceBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	nullptr,
	_D3DTextureToSurfaceBlit_MethodInfo_
};

$Object* allocate$D3DTextureToSurfaceBlit($Class* clazz) {
	return $of($alloc(D3DTextureToSurfaceBlit));
}

void D3DTextureToSurfaceBlit::init$() {
	$init($D3DSurfaceData);
	$init($CompositeType);
	$Blit::init$($D3DSurfaceData::D3DTexture, $CompositeType::AnyAlpha, $D3DSurfaceData::D3DSurface);
}

void D3DTextureToSurfaceBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$D3DBlitLoops::IsoBlit(src, dst, nullptr, nullptr, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), true);
}

D3DTextureToSurfaceBlit::D3DTextureToSurfaceBlit() {
}

$Class* D3DTextureToSurfaceBlit::load$($String* name, bool initialize) {
	$loadClass(D3DTextureToSurfaceBlit, name, initialize, &_D3DTextureToSurfaceBlit_ClassInfo_, allocate$D3DTextureToSurfaceBlit);
	return class$;
}

$Class* D3DTextureToSurfaceBlit::class$ = nullptr;

		} // d3d
	} // java2d
} // sun