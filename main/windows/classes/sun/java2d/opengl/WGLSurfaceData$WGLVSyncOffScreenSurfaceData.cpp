#include <sun/java2d/opengl/WGLSurfaceData$WGLVSyncOffScreenSurfaceData.h>

#include <java/awt/Image.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <sun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData.h>
#include <sun/java2d/opengl/WGLSurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef FLIP_BACKBUFFER

using $Image = ::java::awt::Image;
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
using $WGLSurfaceData$WGLOffScreenSurfaceData = ::sun::java2d::opengl::WGLSurfaceData$WGLOffScreenSurfaceData;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _WGLSurfaceData$WGLVSyncOffScreenSurfaceData_FieldInfo_[] = {
	{"flipSurface", "Lsun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData;", nullptr, $PRIVATE, $field(WGLSurfaceData$WGLVSyncOffScreenSurfaceData, flipSurface)},
	{}
};

$MethodInfo _WGLSurfaceData$WGLVSyncOffScreenSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WComponentPeer;Lsun/java2d/opengl/WGLGraphicsConfig;IILjava/awt/Image;Ljava/awt/image/ColorModel;I)V", nullptr, $PUBLIC, $method(static_cast<void(WGLSurfaceData$WGLVSyncOffScreenSurfaceData::*)($WComponentPeer*,$WGLGraphicsConfig*,int32_t,int32_t,$Image*,$ColorModel*,int32_t)>(&WGLSurfaceData$WGLVSyncOffScreenSurfaceData::init$))},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getFlipSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WGLSurfaceData$WGLVSyncOffScreenSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.WGLSurfaceData$WGLVSyncOffScreenSurfaceData", "sun.java2d.opengl.WGLSurfaceData", "WGLVSyncOffScreenSurfaceData", $PUBLIC | $STATIC},
	{"sun.java2d.opengl.WGLSurfaceData$WGLOffScreenSurfaceData", "sun.java2d.opengl.WGLSurfaceData", "WGLOffScreenSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WGLSurfaceData$WGLVSyncOffScreenSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.WGLSurfaceData$WGLVSyncOffScreenSurfaceData",
	"sun.java2d.opengl.WGLSurfaceData$WGLOffScreenSurfaceData",
	nullptr,
	_WGLSurfaceData$WGLVSyncOffScreenSurfaceData_FieldInfo_,
	_WGLSurfaceData$WGLVSyncOffScreenSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_WGLSurfaceData$WGLVSyncOffScreenSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.WGLSurfaceData"
};

$Object* allocate$WGLSurfaceData$WGLVSyncOffScreenSurfaceData($Class* clazz) {
	return $of($alloc(WGLSurfaceData$WGLVSyncOffScreenSurfaceData));
}

void WGLSurfaceData$WGLVSyncOffScreenSurfaceData::init$($WComponentPeer* peer, $WGLGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $ColorModel* cm, int32_t type) {
	$WGLSurfaceData$WGLOffScreenSurfaceData::init$(peer, gc, width, height, image, cm, type);
	$set(this, flipSurface, $WGLSurfaceData::createData(peer, image, $AccelSurface::FLIP_BACKBUFFER));
}

$SurfaceData* WGLSurfaceData$WGLVSyncOffScreenSurfaceData::getFlipSurface() {
	return this->flipSurface;
}

void WGLSurfaceData$WGLVSyncOffScreenSurfaceData::flush() {
	$nc(this->flipSurface)->flush();
	$WGLSurfaceData$WGLOffScreenSurfaceData::flush();
}

WGLSurfaceData$WGLVSyncOffScreenSurfaceData::WGLSurfaceData$WGLVSyncOffScreenSurfaceData() {
}

$Class* WGLSurfaceData$WGLVSyncOffScreenSurfaceData::load$($String* name, bool initialize) {
	$loadClass(WGLSurfaceData$WGLVSyncOffScreenSurfaceData, name, initialize, &_WGLSurfaceData$WGLVSyncOffScreenSurfaceData_ClassInfo_, allocate$WGLSurfaceData$WGLVSyncOffScreenSurfaceData);
	return class$;
}

$Class* WGLSurfaceData$WGLVSyncOffScreenSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun