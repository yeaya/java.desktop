#include <sun/java2d/d3d/D3DSurfaceToSurfaceBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DSurfaceToSurfaceBlit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DSurfaceToSurfaceBlit::*)()>(&D3DSurfaceToSurfaceBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DSurfaceToSurfaceBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceToSurfaceBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	nullptr,
	_D3DSurfaceToSurfaceBlit_MethodInfo_
};

$Object* allocate$D3DSurfaceToSurfaceBlit($Class* clazz) {
	return $of($alloc(D3DSurfaceToSurfaceBlit));
}

void D3DSurfaceToSurfaceBlit::init$() {
	$init($D3DSurfaceData);
	$init($CompositeType);
	$Blit::init$($D3DSurfaceData::D3DSurface, $CompositeType::AnyAlpha, $D3DSurfaceData::D3DSurface);
}

void D3DSurfaceToSurfaceBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$D3DBlitLoops::IsoBlit(src, dst, nullptr, nullptr, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), false);
}

D3DSurfaceToSurfaceBlit::D3DSurfaceToSurfaceBlit() {
}

$Class* D3DSurfaceToSurfaceBlit::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceToSurfaceBlit, name, initialize, &_D3DSurfaceToSurfaceBlit_ClassInfo_, allocate$D3DSurfaceToSurfaceBlit);
	return class$;
}

$Class* D3DSurfaceToSurfaceBlit::class$ = nullptr;

		} // d3d
	} // java2d
} // sun