#include <sun/java2d/x11/X11SurfaceData$X11WindowSurfaceData.h>

#include <java/awt/GraphicsDevice.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/x11/X11SurfaceData.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $X11SurfaceData = ::sun::java2d::x11::X11SurfaceData;

namespace sun {
	namespace java2d {
		namespace x11 {

$FieldInfo _X11SurfaceData$X11WindowSurfaceData_FieldInfo_[] = {
	{"scale", "I", nullptr, $PRIVATE | $FINAL, $field(X11SurfaceData$X11WindowSurfaceData, scale)},
	{}
};

$MethodInfo _X11SurfaceData$X11WindowSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11ComponentPeer;Lsun/awt/X11GraphicsConfig;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(X11SurfaceData$X11WindowSurfaceData::*)($X11ComponentPeer*,$X11GraphicsConfig*,$SurfaceType*)>(&X11SurfaceData$X11WindowSurfaceData::init$))},
	{"canSourceSendExposures", "(IIII)Z", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11SurfaceData$X11WindowSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.x11.X11SurfaceData$X11WindowSurfaceData", "sun.java2d.x11.X11SurfaceData", "X11WindowSurfaceData", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _X11SurfaceData$X11WindowSurfaceData_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.x11.X11SurfaceData$X11WindowSurfaceData",
	"sun.java2d.x11.X11SurfaceData",
	nullptr,
	_X11SurfaceData$X11WindowSurfaceData_FieldInfo_,
	_X11SurfaceData$X11WindowSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_X11SurfaceData$X11WindowSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.x11.X11SurfaceData"
};

$Object* allocate$X11SurfaceData$X11WindowSurfaceData($Class* clazz) {
	return $of($alloc(X11SurfaceData$X11WindowSurfaceData));
}

void X11SurfaceData$X11WindowSurfaceData::init$($X11ComponentPeer* peer, $X11GraphicsConfig* gc, $SurfaceType* sType) {
	$useLocalCurrentObjectStackCache();
	$X11SurfaceData::init$(peer, gc, sType, $($nc(peer)->getColorModel()));
	this->scale = $nc($($cast($X11GraphicsDevice, $nc(gc)->getDevice())))->getScaleFactor();
	if (isDrawableValid()) {
		makePipes();
	}
}

$SurfaceData* X11SurfaceData$X11WindowSurfaceData::getReplacement() {
	return $nc(this->peer)->getSurfaceData();
}

$Rectangle* X11SurfaceData$X11WindowSurfaceData::getBounds() {
	$var($Rectangle, r, $nc(this->peer)->getBounds());
	$nc(r)->x = (r->y = 0);
	r->width *= this->scale;
	r->height *= this->scale;
	return r;
}

bool X11SurfaceData$X11WindowSurfaceData::canSourceSendExposures(int32_t x, int32_t y, int32_t w, int32_t h) {
	return true;
}

$Object* X11SurfaceData$X11WindowSurfaceData::getDestination() {
	return $of($nc(this->peer)->getTarget());
}

double X11SurfaceData$X11WindowSurfaceData::getDefaultScaleX() {
	return (double)this->scale;
}

double X11SurfaceData$X11WindowSurfaceData::getDefaultScaleY() {
	return (double)this->scale;
}

X11SurfaceData$X11WindowSurfaceData::X11SurfaceData$X11WindowSurfaceData() {
}

$Class* X11SurfaceData$X11WindowSurfaceData::load$($String* name, bool initialize) {
	$loadClass(X11SurfaceData$X11WindowSurfaceData, name, initialize, &_X11SurfaceData$X11WindowSurfaceData_ClassInfo_, allocate$X11SurfaceData$X11WindowSurfaceData);
	return class$;
}

$Class* X11SurfaceData$X11WindowSurfaceData::class$ = nullptr;

		} // x11
	} // java2d
} // sun