#include <sun/java2d/opengl/GLXSurfaceData$GLXOffScreenSurfaceData.h>

#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Math.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <sun/java2d/opengl/GLXSurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef FLIP_BACKBUFFER

using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;
using $GLXSurfaceData = ::sun::java2d::opengl::GLXSurfaceData;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _GLXSurfaceData$GLXOffScreenSurfaceData_FieldInfo_[] = {
	{"offscreenImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(GLXSurfaceData$GLXOffScreenSurfaceData, offscreenImage)},
	{"width", "I", nullptr, $PRIVATE, $field(GLXSurfaceData$GLXOffScreenSurfaceData, width)},
	{"height", "I", nullptr, $PRIVATE, $field(GLXSurfaceData$GLXOffScreenSurfaceData, height)},
	{"scale", "I", nullptr, $PRIVATE | $FINAL, $field(GLXSurfaceData$GLXOffScreenSurfaceData, scale)},
	{}
};

$MethodInfo _GLXSurfaceData$GLXOffScreenSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11ComponentPeer;Lsun/java2d/opengl/GLXGraphicsConfig;IILjava/awt/Image;Ljava/awt/image/ColorModel;I)V", nullptr, $PUBLIC, $method(static_cast<void(GLXSurfaceData$GLXOffScreenSurfaceData::*)($X11ComponentPeer*,$GLXGraphicsConfig*,int32_t,int32_t,$Image*,$ColorModel*,int32_t)>(&GLXSurfaceData$GLXOffScreenSurfaceData::init$))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GLXSurfaceData$GLXOffScreenSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.GLXSurfaceData$GLXOffScreenSurfaceData", "sun.java2d.opengl.GLXSurfaceData", "GLXOffScreenSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _GLXSurfaceData$GLXOffScreenSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.GLXSurfaceData$GLXOffScreenSurfaceData",
	"sun.java2d.opengl.GLXSurfaceData",
	nullptr,
	_GLXSurfaceData$GLXOffScreenSurfaceData_FieldInfo_,
	_GLXSurfaceData$GLXOffScreenSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_GLXSurfaceData$GLXOffScreenSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.GLXSurfaceData"
};

$Object* allocate$GLXSurfaceData$GLXOffScreenSurfaceData($Class* clazz) {
	return $of($alloc(GLXSurfaceData$GLXOffScreenSurfaceData));
}

void GLXSurfaceData$GLXOffScreenSurfaceData::init$($X11ComponentPeer* peer, $GLXGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $ColorModel* cm, int32_t type) {
	$GLXSurfaceData::init$(peer, gc, cm, type);
	this->scale = $nc($($cast($X11GraphicsDevice, $nc(gc)->getDevice())))->getScaleFactor();
	this->width = width * this->scale;
	this->height = height * this->scale;
	$set(this, offscreenImage, image);
	initSurface(this->width, this->height);
}

$SurfaceData* GLXSurfaceData$GLXOffScreenSurfaceData::getReplacement() {
	return restoreContents(this->offscreenImage);
}

$Rectangle* GLXSurfaceData$GLXOffScreenSurfaceData::getBounds() {
	if (this->type == $AccelSurface::FLIP_BACKBUFFER) {
		$var($Rectangle, r, $nc(this->peer)->getBounds());
		$nc(r)->x = (r->y = 0);
		r->width = $cast(int32_t, $Math::ceil((double)(r->width * this->scale)));
		r->height = $cast(int32_t, $Math::ceil((double)(r->height * this->scale)));
		return r;
	} else {
		return $new($Rectangle, this->width, this->height);
	}
}

$Object* GLXSurfaceData$GLXOffScreenSurfaceData::getDestination() {
	return $of(this->offscreenImage);
}

double GLXSurfaceData$GLXOffScreenSurfaceData::getDefaultScaleX() {
	return (double)this->scale;
}

double GLXSurfaceData$GLXOffScreenSurfaceData::getDefaultScaleY() {
	return (double)this->scale;
}

GLXSurfaceData$GLXOffScreenSurfaceData::GLXSurfaceData$GLXOffScreenSurfaceData() {
}

$Class* GLXSurfaceData$GLXOffScreenSurfaceData::load$($String* name, bool initialize) {
	$loadClass(GLXSurfaceData$GLXOffScreenSurfaceData, name, initialize, &_GLXSurfaceData$GLXOffScreenSurfaceData_ClassInfo_, allocate$GLXSurfaceData$GLXOffScreenSurfaceData);
	return class$;
}

$Class* GLXSurfaceData$GLXOffScreenSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun