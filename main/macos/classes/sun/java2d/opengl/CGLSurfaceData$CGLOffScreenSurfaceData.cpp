#include <sun/java2d/opengl/CGLSurfaceData$CGLOffScreenSurfaceData.h>

#include <java/awt/Image.h>
#include <java/awt/image/ColorModel.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <sun/java2d/opengl/CGLLayer.h>
#include <sun/java2d/opengl/CGLSurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CGLGraphicsConfig = ::sun::java2d::opengl::CGLGraphicsConfig;
using $CGLLayer = ::sun::java2d::opengl::CGLLayer;
using $CGLSurfaceData = ::sun::java2d::opengl::CGLSurfaceData;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _CGLSurfaceData$CGLOffScreenSurfaceData_FieldInfo_[] = {
	{"offscreenImage", "Ljava/awt/Image;", nullptr, $PRIVATE | $FINAL, $field(CGLSurfaceData$CGLOffScreenSurfaceData, offscreenImage)},
	{}
};

$MethodInfo _CGLSurfaceData$CGLOffScreenSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/opengl/CGLGraphicsConfig;IILjava/awt/Image;Ljava/awt/image/ColorModel;I)V", nullptr, $PRIVATE, $method(static_cast<void(CGLSurfaceData$CGLOffScreenSurfaceData::*)($CGLGraphicsConfig*,int32_t,int32_t,$Image*,$ColorModel*,int32_t)>(&CGLSurfaceData$CGLOffScreenSurfaceData::init$))},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CGLSurfaceData$CGLOffScreenSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.CGLSurfaceData$CGLOffScreenSurfaceData", "sun.java2d.opengl.CGLSurfaceData", "CGLOffScreenSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CGLSurfaceData$CGLOffScreenSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.CGLSurfaceData$CGLOffScreenSurfaceData",
	"sun.java2d.opengl.CGLSurfaceData",
	nullptr,
	_CGLSurfaceData$CGLOffScreenSurfaceData_FieldInfo_,
	_CGLSurfaceData$CGLOffScreenSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_CGLSurfaceData$CGLOffScreenSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.CGLSurfaceData"
};

$Object* allocate$CGLSurfaceData$CGLOffScreenSurfaceData($Class* clazz) {
	return $of($alloc(CGLSurfaceData$CGLOffScreenSurfaceData));
}

void CGLSurfaceData$CGLOffScreenSurfaceData::init$($CGLGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $ColorModel* cm, int32_t type) {
	$CGLSurfaceData::init$(nullptr, gc, cm, type, width, height);
	$set(this, offscreenImage, image);
	initSurface(this->width, this->height);
}

$SurfaceData* CGLSurfaceData$CGLOffScreenSurfaceData::getReplacement() {
	return restoreContents(this->offscreenImage);
}

$Object* CGLSurfaceData$CGLOffScreenSurfaceData::getDestination() {
	return $of(this->offscreenImage);
}

CGLSurfaceData$CGLOffScreenSurfaceData::CGLSurfaceData$CGLOffScreenSurfaceData() {
}

$Class* CGLSurfaceData$CGLOffScreenSurfaceData::load$($String* name, bool initialize) {
	$loadClass(CGLSurfaceData$CGLOffScreenSurfaceData, name, initialize, &_CGLSurfaceData$CGLOffScreenSurfaceData_ClassInfo_, allocate$CGLSurfaceData$CGLOffScreenSurfaceData);
	return class$;
}

$Class* CGLSurfaceData$CGLOffScreenSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun