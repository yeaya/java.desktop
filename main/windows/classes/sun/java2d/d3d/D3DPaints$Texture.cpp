#include <sun/java2d/d3d/D3DPaints$Texture.h>

#include <java/awt/Color.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/TexturePaint.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DPaints.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <jcpp.h>

#undef TEXTURE
#undef TRANSFORM_ISIDENT

using $Color = ::java::awt::Color;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $TexturePaint = ::java::awt::TexturePaint;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DPaints = ::sun::java2d::d3d::D3DPaints;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DPaints$Texture_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(D3DPaints$Texture::*)()>(&D3DPaints$Texture::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _D3DPaints$Texture_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DPaints$Texture", "sun.java2d.d3d.D3DPaints", "Texture", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _D3DPaints$Texture_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DPaints$Texture",
	"sun.java2d.d3d.D3DPaints",
	nullptr,
	nullptr,
	_D3DPaints$Texture_MethodInfo_,
	nullptr,
	nullptr,
	_D3DPaints$Texture_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DPaints"
};

$Object* allocate$D3DPaints$Texture($Class* clazz) {
	return $of($alloc(D3DPaints$Texture));
}

void D3DPaints$Texture::init$() {
	$D3DPaints::init$();
}

bool D3DPaints$Texture::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($TexturePaint, paint, $cast($TexturePaint, $nc(sg2d)->paint));
	$var($D3DSurfaceData, dstData, $cast($D3DSurfaceData, sg2d->surfaceData));
	$var($BufferedImage, bi, $nc(paint)->getImage());
	$var($D3DGraphicsDevice, gd, $cast($D3DGraphicsDevice, $nc($($nc(dstData)->getDeviceConfiguration()))->getDevice()));
	int32_t imgw = $nc(bi)->getWidth();
	int32_t imgh = bi->getHeight();
	if (!$nc(gd)->isCapPresent(32)) {
		if (((int32_t)(imgw & (uint32_t)(imgw - 1))) != 0 || ((int32_t)(imgh & (uint32_t)(imgh - 1))) != 0) {
			return false;
		}
	}
	if (!$nc(gd)->isCapPresent(64) && imgw != imgh) {
		return false;
	}
	$init($CompositeType);
	$var($SurfaceData, srcData, dstData->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
	if (!($instanceOf($D3DSurfaceData, srcData))) {
		$assign(srcData, dstData->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
		if (!($instanceOf($D3DSurfaceData, srcData))) {
			return false;
		}
	}
	$var($D3DSurfaceData, d3dData, $cast($D3DSurfaceData, srcData));
	if ($nc(d3dData)->getType() != $D3DSurfaceData::TEXTURE) {
		return false;
	}
	return true;
}

D3DPaints$Texture::D3DPaints$Texture() {
}

$Class* D3DPaints$Texture::load$($String* name, bool initialize) {
	$loadClass(D3DPaints$Texture, name, initialize, &_D3DPaints$Texture_ClassInfo_, allocate$D3DPaints$Texture);
	return class$;
}

$Class* D3DPaints$Texture::class$ = nullptr;

		} // d3d
	} // java2d
} // sun