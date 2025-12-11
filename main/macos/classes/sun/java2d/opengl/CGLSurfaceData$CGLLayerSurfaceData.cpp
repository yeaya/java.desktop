#include <sun/java2d/opengl/CGLSurfaceData$CGLLayerSurfaceData.h>

#include <java/awt/image/ColorModel.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <sun/java2d/opengl/CGLLayer.h>
#include <sun/java2d/opengl/CGLSurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <jcpp.h>

#undef FBOBJECT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CGLGraphicsConfig = ::sun::java2d::opengl::CGLGraphicsConfig;
using $CGLLayer = ::sun::java2d::opengl::CGLLayer;
using $CGLSurfaceData = ::sun::java2d::opengl::CGLSurfaceData;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _CGLSurfaceData$CGLLayerSurfaceData_FieldInfo_[] = {
	{"layer", "Lsun/java2d/opengl/CGLLayer;", nullptr, $PRIVATE | $FINAL, $field(CGLSurfaceData$CGLLayerSurfaceData, layer)},
	{}
};

$MethodInfo _CGLSurfaceData$CGLLayerSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/opengl/CGLLayer;Lsun/java2d/opengl/CGLGraphicsConfig;II)V", nullptr, $PRIVATE, $method(static_cast<void(CGLSurfaceData$CGLLayerSurfaceData::*)($CGLLayer*,$CGLGraphicsConfig*,int32_t,int32_t)>(&CGLSurfaceData$CGLLayerSurfaceData::init$))},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"isOnScreen", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _CGLSurfaceData$CGLLayerSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.CGLSurfaceData$CGLLayerSurfaceData", "sun.java2d.opengl.CGLSurfaceData", "CGLLayerSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CGLSurfaceData$CGLLayerSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.CGLSurfaceData$CGLLayerSurfaceData",
	"sun.java2d.opengl.CGLSurfaceData",
	nullptr,
	_CGLSurfaceData$CGLLayerSurfaceData_FieldInfo_,
	_CGLSurfaceData$CGLLayerSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_CGLSurfaceData$CGLLayerSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.CGLSurfaceData"
};

$Object* allocate$CGLSurfaceData$CGLLayerSurfaceData($Class* clazz) {
	return $of($alloc(CGLSurfaceData$CGLLayerSurfaceData));
}

void CGLSurfaceData$CGLLayerSurfaceData::init$($CGLLayer* layer, $CGLGraphicsConfig* gc, int32_t width, int32_t height) {
	$CGLSurfaceData::init$(layer, gc, $($nc(gc)->getColorModel()), $OGLSurfaceData::FBOBJECT, width, height);
	$set(this, layer, layer);
	initSurface(this->width, this->height);
}

$SurfaceData* CGLSurfaceData$CGLLayerSurfaceData::getReplacement() {
	return $nc(this->layer)->getSurfaceData();
}

bool CGLSurfaceData$CGLLayerSurfaceData::isOnScreen() {
	return true;
}

$Object* CGLSurfaceData$CGLLayerSurfaceData::getDestination() {
	return $of($nc(this->layer)->getDestination());
}

int32_t CGLSurfaceData$CGLLayerSurfaceData::getTransparency() {
	return $nc(this->layer)->getTransparency();
}

void CGLSurfaceData$CGLLayerSurfaceData::invalidate() {
	$CGLSurfaceData::invalidate();
	clearWindow();
}

CGLSurfaceData$CGLLayerSurfaceData::CGLSurfaceData$CGLLayerSurfaceData() {
}

$Class* CGLSurfaceData$CGLLayerSurfaceData::load$($String* name, bool initialize) {
	$loadClass(CGLSurfaceData$CGLLayerSurfaceData, name, initialize, &_CGLSurfaceData$CGLLayerSurfaceData_ClassInfo_, allocate$CGLSurfaceData$CGLLayerSurfaceData);
	return class$;
}

$Class* CGLSurfaceData$CGLLayerSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun