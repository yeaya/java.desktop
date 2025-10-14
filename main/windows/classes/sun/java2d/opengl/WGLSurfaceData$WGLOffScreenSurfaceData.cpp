#include <sun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData.h>

#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <sun/java2d/opengl/WGLSurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef FLIP_BACKBUFFER

using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $WGLGraphicsConfig = ::sun::java2d::opengl::WGLGraphicsConfig;
using $WGLSurfaceData = ::sun::java2d::opengl::WGLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _WGLSurfaceData$WGLOffScreenSurfaceData_FieldInfo_[] = {
	{"offscreenImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(WGLSurfaceData$WGLOffScreenSurfaceData, offscreenImage)},
	{"width", "I", nullptr, $PRIVATE, $field(WGLSurfaceData$WGLOffScreenSurfaceData, width)},
	{"height", "I", nullptr, $PRIVATE, $field(WGLSurfaceData$WGLOffScreenSurfaceData, height)},
	{}
};

$MethodInfo _WGLSurfaceData$WGLOffScreenSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WComponentPeer;Lsun/java2d/opengl/WGLGraphicsConfig;IILjava/awt/Image;Ljava/awt/image/ColorModel;I)V", nullptr, $PUBLIC, $method(static_cast<void(WGLSurfaceData$WGLOffScreenSurfaceData::*)($WComponentPeer*,$WGLGraphicsConfig*,int32_t,int32_t,$Image*,$ColorModel*,int32_t)>(&WGLSurfaceData$WGLOffScreenSurfaceData::init$))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WGLSurfaceData$WGLOffScreenSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.WGLSurfaceData$WGLOffScreenSurfaceData", "sun.java2d.opengl.WGLSurfaceData", "WGLOffScreenSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WGLSurfaceData$WGLOffScreenSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.WGLSurfaceData$WGLOffScreenSurfaceData",
	"sun.java2d.opengl.WGLSurfaceData",
	nullptr,
	_WGLSurfaceData$WGLOffScreenSurfaceData_FieldInfo_,
	_WGLSurfaceData$WGLOffScreenSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_WGLSurfaceData$WGLOffScreenSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.WGLSurfaceData"
};

$Object* allocate$WGLSurfaceData$WGLOffScreenSurfaceData($Class* clazz) {
	return $of($alloc(WGLSurfaceData$WGLOffScreenSurfaceData));
}

void WGLSurfaceData$WGLOffScreenSurfaceData::init$($WComponentPeer* peer, $WGLGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $ColorModel* cm, int32_t type) {
	$WGLSurfaceData::init$(peer, gc, cm, type);
	this->width = $Region::clipRound(width * this->scaleX);
	this->height = $Region::clipRound(height * this->scaleY);
	$set(this, offscreenImage, image);
	initSurface(this->width, this->height);
}

$SurfaceData* WGLSurfaceData$WGLOffScreenSurfaceData::getReplacement() {
	return restoreContents(this->offscreenImage);
}

$Rectangle* WGLSurfaceData$WGLOffScreenSurfaceData::getBounds() {
	if (this->type == $AccelSurface::FLIP_BACKBUFFER) {
		$var($Rectangle, r, $nc(this->peer)->getBounds());
		$nc(r)->width = $Region::clipRound(r->width * this->scaleX);
		r->height = $Region::clipRound(r->height * this->scaleY);
		r->x = (r->y = 0);
		return r;
	} else {
		return $new($Rectangle, this->width, this->height);
	}
}

$Object* WGLSurfaceData$WGLOffScreenSurfaceData::getDestination() {
	return $of(this->offscreenImage);
}

WGLSurfaceData$WGLOffScreenSurfaceData::WGLSurfaceData$WGLOffScreenSurfaceData() {
}

$Class* WGLSurfaceData$WGLOffScreenSurfaceData::load$($String* name, bool initialize) {
	$loadClass(WGLSurfaceData$WGLOffScreenSurfaceData, name, initialize, &_WGLSurfaceData$WGLOffScreenSurfaceData_ClassInfo_, allocate$WGLSurfaceData$WGLOffScreenSurfaceData);
	return class$;
}

$Class* WGLSurfaceData$WGLOffScreenSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun