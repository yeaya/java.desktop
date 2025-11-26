#include <sun/java2d/xr/XRSurfaceData$XRInternalSurfaceData.h>

#include <java/awt/Rectangle.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $XRBackend = ::sun::java2d::xr::XRBackend;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRSurfaceData$XRInternalSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/xr/XRBackend;I)V", nullptr, $PUBLIC, $method(static_cast<void(XRSurfaceData$XRInternalSurfaceData::*)($XRBackend*,int32_t)>(&XRSurfaceData$XRInternalSurfaceData::init$))},
	{"canSourceSendExposures", "(IIII)Z", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XRSurfaceData$XRInternalSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRSurfaceData$XRInternalSurfaceData", "sun.java2d.xr.XRSurfaceData", "XRInternalSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XRSurfaceData$XRInternalSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRSurfaceData$XRInternalSurfaceData",
	"sun.java2d.xr.XRSurfaceData",
	nullptr,
	nullptr,
	_XRSurfaceData$XRInternalSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_XRSurfaceData$XRInternalSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRSurfaceData"
};

$Object* allocate$XRSurfaceData$XRInternalSurfaceData($Class* clazz) {
	return $of($alloc(XRSurfaceData$XRInternalSurfaceData));
}

void XRSurfaceData$XRInternalSurfaceData::init$($XRBackend* renderQueue, int32_t pictXid) {
	$XRSurfaceData::init$(renderQueue);
	this->picture = pictXid;
	this->transformInUse = false;
}

bool XRSurfaceData$XRInternalSurfaceData::canSourceSendExposures(int32_t x, int32_t y, int32_t w, int32_t h) {
	return false;
}

$Rectangle* XRSurfaceData$XRInternalSurfaceData::getBounds() {
	return nullptr;
}

$Object* XRSurfaceData$XRInternalSurfaceData::getDestination() {
	return $of(nullptr);
}

$SurfaceData* XRSurfaceData$XRInternalSurfaceData::getReplacement() {
	return nullptr;
}

XRSurfaceData$XRInternalSurfaceData::XRSurfaceData$XRInternalSurfaceData() {
}

$Class* XRSurfaceData$XRInternalSurfaceData::load$($String* name, bool initialize) {
	$loadClass(XRSurfaceData$XRInternalSurfaceData, name, initialize, &_XRSurfaceData$XRInternalSurfaceData_ClassInfo_, allocate$XRSurfaceData$XRInternalSurfaceData);
	return class$;
}

$Class* XRSurfaceData$XRInternalSurfaceData::class$ = nullptr;

		} // xr
	} // java2d
} // sun