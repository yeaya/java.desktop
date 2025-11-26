#include <sun/java2d/opengl/GLXSurfaceData$GLXVSyncOffScreenSurfaceData.h>

#include <java/awt/Image.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <sun/java2d/opengl/GLXSurfaceData$GLXOffScreenSurfaceData.h>
#include <sun/java2d/opengl/GLXSurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef FLIP_BACKBUFFER

using $Image = ::java::awt::Image;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;
using $GLXSurfaceData = ::sun::java2d::opengl::GLXSurfaceData;
using $GLXSurfaceData$GLXOffScreenSurfaceData = ::sun::java2d::opengl::GLXSurfaceData$GLXOffScreenSurfaceData;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _GLXSurfaceData$GLXVSyncOffScreenSurfaceData_FieldInfo_[] = {
	{"flipSurface", "Lsun/java2d/opengl/GLXSurfaceData$GLXOffScreenSurfaceData;", nullptr, $PRIVATE, $field(GLXSurfaceData$GLXVSyncOffScreenSurfaceData, flipSurface)},
	{}
};

$MethodInfo _GLXSurfaceData$GLXVSyncOffScreenSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11ComponentPeer;Lsun/java2d/opengl/GLXGraphicsConfig;IILjava/awt/Image;Ljava/awt/image/ColorModel;I)V", nullptr, $PUBLIC, $method(static_cast<void(GLXSurfaceData$GLXVSyncOffScreenSurfaceData::*)($X11ComponentPeer*,$GLXGraphicsConfig*,int32_t,int32_t,$Image*,$ColorModel*,int32_t)>(&GLXSurfaceData$GLXVSyncOffScreenSurfaceData::init$))},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getFlipSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GLXSurfaceData$GLXVSyncOffScreenSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.GLXSurfaceData$GLXVSyncOffScreenSurfaceData", "sun.java2d.opengl.GLXSurfaceData", "GLXVSyncOffScreenSurfaceData", $PUBLIC | $STATIC},
	{"sun.java2d.opengl.GLXSurfaceData$GLXOffScreenSurfaceData", "sun.java2d.opengl.GLXSurfaceData", "GLXOffScreenSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _GLXSurfaceData$GLXVSyncOffScreenSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.GLXSurfaceData$GLXVSyncOffScreenSurfaceData",
	"sun.java2d.opengl.GLXSurfaceData$GLXOffScreenSurfaceData",
	nullptr,
	_GLXSurfaceData$GLXVSyncOffScreenSurfaceData_FieldInfo_,
	_GLXSurfaceData$GLXVSyncOffScreenSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_GLXSurfaceData$GLXVSyncOffScreenSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.GLXSurfaceData"
};

$Object* allocate$GLXSurfaceData$GLXVSyncOffScreenSurfaceData($Class* clazz) {
	return $of($alloc(GLXSurfaceData$GLXVSyncOffScreenSurfaceData));
}

void GLXSurfaceData$GLXVSyncOffScreenSurfaceData::init$($X11ComponentPeer* peer, $GLXGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $ColorModel* cm, int32_t type) {
	$GLXSurfaceData$GLXOffScreenSurfaceData::init$(peer, gc, width, height, image, cm, type);
	$set(this, flipSurface, $GLXSurfaceData::createData(peer, image, $AccelSurface::FLIP_BACKBUFFER));
}

$SurfaceData* GLXSurfaceData$GLXVSyncOffScreenSurfaceData::getFlipSurface() {
	return this->flipSurface;
}

void GLXSurfaceData$GLXVSyncOffScreenSurfaceData::flush() {
	$nc(this->flipSurface)->flush();
	$GLXSurfaceData$GLXOffScreenSurfaceData::flush();
}

GLXSurfaceData$GLXVSyncOffScreenSurfaceData::GLXSurfaceData$GLXVSyncOffScreenSurfaceData() {
}

$Class* GLXSurfaceData$GLXVSyncOffScreenSurfaceData::load$($String* name, bool initialize) {
	$loadClass(GLXSurfaceData$GLXVSyncOffScreenSurfaceData, name, initialize, &_GLXSurfaceData$GLXVSyncOffScreenSurfaceData_ClassInfo_, allocate$GLXSurfaceData$GLXVSyncOffScreenSurfaceData);
	return class$;
}

$Class* GLXSurfaceData$GLXVSyncOffScreenSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun