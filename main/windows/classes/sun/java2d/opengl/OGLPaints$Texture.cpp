#include <sun/java2d/opengl/OGLPaints$Texture.h>

#include <java/awt/Color.h>
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
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/opengl/OGLPaints.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <jcpp.h>

#undef TEXTURE
#undef TRANSFORM_ISIDENT

using $Color = ::java::awt::Color;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $TexturePaint = ::java::awt::TexturePaint;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $OGLPaints = ::sun::java2d::opengl::OGLPaints;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLPaints$Texture_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(OGLPaints$Texture::*)()>(&OGLPaints$Texture::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _OGLPaints$Texture_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLPaints$Texture", "sun.java2d.opengl.OGLPaints", "Texture", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _OGLPaints$Texture_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLPaints$Texture",
	"sun.java2d.opengl.OGLPaints",
	nullptr,
	nullptr,
	_OGLPaints$Texture_MethodInfo_,
	nullptr,
	nullptr,
	_OGLPaints$Texture_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLPaints"
};

$Object* allocate$OGLPaints$Texture($Class* clazz) {
	return $of($alloc(OGLPaints$Texture));
}

void OGLPaints$Texture::init$() {
	$OGLPaints::init$();
}

bool OGLPaints$Texture::isPaintValid($SunGraphics2D* sg2d) {
	$var($TexturePaint, paint, $cast($TexturePaint, $nc(sg2d)->paint));
	$var($OGLSurfaceData, dstData, $cast($OGLSurfaceData, sg2d->surfaceData));
	$var($BufferedImage, bi, $nc(paint)->getImage());
	if (!$nc(dstData)->isTexNonPow2Available()) {
		int32_t imgw = $nc(bi)->getWidth();
		int32_t imgh = bi->getHeight();
		if (((int32_t)(imgw & (uint32_t)(imgw - 1))) != 0 || ((int32_t)(imgh & (uint32_t)(imgh - 1))) != 0) {
			return false;
		}
	}
	$init($CompositeType);
	$var($SurfaceData, srcData, $nc(dstData)->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
	if (!($instanceOf($OGLSurfaceData, srcData))) {
		$assign(srcData, dstData->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
		if (!($instanceOf($OGLSurfaceData, srcData))) {
			return false;
		}
	}
	$var($OGLSurfaceData, oglData, $cast($OGLSurfaceData, srcData));
	if ($nc(oglData)->getType() != $OGLSurfaceData::TEXTURE) {
		return false;
	}
	return true;
}

OGLPaints$Texture::OGLPaints$Texture() {
}

$Class* OGLPaints$Texture::load$($String* name, bool initialize) {
	$loadClass(OGLPaints$Texture, name, initialize, &_OGLPaints$Texture_ClassInfo_, allocate$OGLPaints$Texture);
	return class$;
}

$Class* OGLPaints$Texture::class$ = nullptr;

		} // opengl
	} // java2d
} // sun