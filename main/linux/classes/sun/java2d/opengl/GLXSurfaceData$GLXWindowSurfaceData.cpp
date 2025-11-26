#include <sun/java2d/opengl/GLXSurfaceData$GLXWindowSurfaceData.h>

#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Math.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <sun/java2d/opengl/GLXSurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef WINDOW

using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;
using $GLXSurfaceData = ::sun::java2d::opengl::GLXSurfaceData;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _GLXSurfaceData$GLXWindowSurfaceData_FieldInfo_[] = {
	{"scale", "I", nullptr, $PROTECTED | $FINAL, $field(GLXSurfaceData$GLXWindowSurfaceData, scale)},
	{}
};

$MethodInfo _GLXSurfaceData$GLXWindowSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11ComponentPeer;Lsun/java2d/opengl/GLXGraphicsConfig;)V", nullptr, $PUBLIC, $method(static_cast<void(GLXSurfaceData$GLXWindowSurfaceData::*)($X11ComponentPeer*,$GLXGraphicsConfig*)>(&GLXSurfaceData$GLXWindowSurfaceData::init$))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GLXSurfaceData$GLXWindowSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.GLXSurfaceData$GLXWindowSurfaceData", "sun.java2d.opengl.GLXSurfaceData", "GLXWindowSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _GLXSurfaceData$GLXWindowSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.GLXSurfaceData$GLXWindowSurfaceData",
	"sun.java2d.opengl.GLXSurfaceData",
	nullptr,
	_GLXSurfaceData$GLXWindowSurfaceData_FieldInfo_,
	_GLXSurfaceData$GLXWindowSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_GLXSurfaceData$GLXWindowSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.GLXSurfaceData"
};

$Object* allocate$GLXSurfaceData$GLXWindowSurfaceData($Class* clazz) {
	return $of($alloc(GLXSurfaceData$GLXWindowSurfaceData));
}

void GLXSurfaceData$GLXWindowSurfaceData::init$($X11ComponentPeer* peer, $GLXGraphicsConfig* gc) {
	$GLXSurfaceData::init$(peer, gc, $($nc(peer)->getColorModel()), $AccelSurface::WINDOW);
	this->scale = $nc(gc)->getScale();
}

$SurfaceData* GLXSurfaceData$GLXWindowSurfaceData::getReplacement() {
	return $nc(this->peer)->getSurfaceData();
}

$Rectangle* GLXSurfaceData$GLXWindowSurfaceData::getBounds() {
	$var($Rectangle, r, $nc(this->peer)->getBounds());
	$nc(r)->x = (r->y = 0);
	r->width = $cast(int32_t, $Math::ceil((double)(r->width * this->scale)));
	r->height = $cast(int32_t, $Math::ceil((double)(r->height * this->scale)));
	return r;
}

$Object* GLXSurfaceData$GLXWindowSurfaceData::getDestination() {
	return $of($nc(this->peer)->getTarget());
}

double GLXSurfaceData$GLXWindowSurfaceData::getDefaultScaleX() {
	return (double)this->scale;
}

double GLXSurfaceData$GLXWindowSurfaceData::getDefaultScaleY() {
	return (double)this->scale;
}

GLXSurfaceData$GLXWindowSurfaceData::GLXSurfaceData$GLXWindowSurfaceData() {
}

$Class* GLXSurfaceData$GLXWindowSurfaceData::load$($String* name, bool initialize) {
	$loadClass(GLXSurfaceData$GLXWindowSurfaceData, name, initialize, &_GLXSurfaceData$GLXWindowSurfaceData_ClassInfo_, allocate$GLXSurfaceData$GLXWindowSurfaceData);
	return class$;
}

$Class* GLXSurfaceData$GLXWindowSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun