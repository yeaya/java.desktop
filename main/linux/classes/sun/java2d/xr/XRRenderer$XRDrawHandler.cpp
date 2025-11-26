#include <sun/java2d/xr/XRRenderer$XRDrawHandler.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/ProcessPath$DrawHandler.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/DirtyRegion.h>
#include <sun/java2d/xr/GrowableRectArray.h>
#include <sun/java2d/xr/XRDrawLine.h>
#include <sun/java2d/xr/XRRenderer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $ProcessPath$DrawHandler = ::sun::java2d::loops::ProcessPath$DrawHandler;
using $Region = ::sun::java2d::pipe::Region;
using $DirtyRegion = ::sun::java2d::xr::DirtyRegion;
using $GrowableRectArray = ::sun::java2d::xr::GrowableRectArray;
using $XRDrawLine = ::sun::java2d::xr::XRDrawLine;
using $XRRenderer = ::sun::java2d::xr::XRRenderer;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRRenderer$XRDrawHandler_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/xr/XRRenderer;", nullptr, $FINAL | $SYNTHETIC, $field(XRRenderer$XRDrawHandler, this$0)},
	{"region", "Lsun/java2d/xr/DirtyRegion;", nullptr, 0, $field(XRRenderer$XRDrawHandler, region)},
	{}
};

$MethodInfo _XRRenderer$XRDrawHandler_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/xr/XRRenderer;)V", nullptr, 0, $method(static_cast<void(XRRenderer$XRDrawHandler::*)($XRRenderer*)>(&XRRenderer$XRDrawHandler::init$))},
	{"drawLine", "(IIII)V", nullptr, $PUBLIC},
	{"drawPixel", "(II)V", nullptr, $PUBLIC},
	{"drawScanline", "(III)V", nullptr, $PUBLIC},
	{"validate", "(Lsun/java2d/SunGraphics2D;)V", nullptr, 0},
	{}
};

$InnerClassInfo _XRRenderer$XRDrawHandler_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRRenderer$XRDrawHandler", "sun.java2d.xr.XRRenderer", "XRDrawHandler", $PRIVATE},
	{"sun.java2d.loops.ProcessPath$DrawHandler", "sun.java2d.loops.ProcessPath", "DrawHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _XRRenderer$XRDrawHandler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.xr.XRRenderer$XRDrawHandler",
	"sun.java2d.loops.ProcessPath$DrawHandler",
	nullptr,
	_XRRenderer$XRDrawHandler_FieldInfo_,
	_XRRenderer$XRDrawHandler_MethodInfo_,
	nullptr,
	nullptr,
	_XRRenderer$XRDrawHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRRenderer"
};

$Object* allocate$XRRenderer$XRDrawHandler($Class* clazz) {
	return $of($alloc(XRRenderer$XRDrawHandler));
}

void XRRenderer$XRDrawHandler::init$($XRRenderer* this$0) {
	$set(this, this$0, this$0);
	$ProcessPath$DrawHandler::init$(0, 0, 0, 0);
	$set(this, region, $new($DirtyRegion));
}

void XRRenderer$XRDrawHandler::validate($SunGraphics2D* sg2d) {
	$var($Region, clip, $nc(sg2d)->getCompClip());
	int32_t var$0 = $nc(clip)->getLoX();
	int32_t var$1 = clip->getLoY();
	int32_t var$2 = clip->getHiX();
	setBounds(var$0, var$1, var$2, clip->getHiY(), sg2d->strokeHint);
	this->this$0->validateSurface(sg2d);
}

void XRRenderer$XRDrawHandler::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$nc(this->region)->setDirtyLineRegion(x1, y1, x2, y2);
	int32_t xDiff = $nc(this->region)->x2 - $nc(this->region)->x;
	int32_t yDiff = $nc(this->region)->y2 - $nc(this->region)->y;
	if (xDiff == 0 || yDiff == 0) {
		$nc(this->this$0->rectBuffer)->pushRectValues($nc(this->region)->x, $nc(this->region)->y, $nc(this->region)->x2 - $nc(this->region)->x + 1, $nc(this->region)->y2 - $nc(this->region)->y + 1);
	} else if (xDiff == 1 && yDiff == 1) {
		$nc(this->this$0->rectBuffer)->pushRectValues(x1, y1, 1, 1);
		$nc(this->this$0->rectBuffer)->pushRectValues(x2, y2, 1, 1);
	} else {
		$nc(this->this$0->lineGen)->rasterizeLine(this->this$0->rectBuffer, x1, y1, x2, y2, 0, 0, 0, 0, false, false);
	}
}

void XRRenderer$XRDrawHandler::drawPixel(int32_t x, int32_t y) {
	$nc(this->this$0->rectBuffer)->pushRectValues(x, y, 1, 1);
}

void XRRenderer$XRDrawHandler::drawScanline(int32_t x1, int32_t x2, int32_t y) {
	$nc(this->this$0->rectBuffer)->pushRectValues(x1, y, x2 - x1 + 1, 1);
}

XRRenderer$XRDrawHandler::XRRenderer$XRDrawHandler() {
}

$Class* XRRenderer$XRDrawHandler::load$($String* name, bool initialize) {
	$loadClass(XRRenderer$XRDrawHandler, name, initialize, &_XRRenderer$XRDrawHandler_ClassInfo_, allocate$XRRenderer$XRDrawHandler);
	return class$;
}

$Class* XRRenderer$XRDrawHandler::class$ = nullptr;

		} // xr
	} // java2d
} // sun