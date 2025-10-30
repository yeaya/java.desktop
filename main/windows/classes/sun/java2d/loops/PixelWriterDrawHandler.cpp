#include <sun/java2d/loops/PixelWriterDrawHandler.h>

#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/GeneralRenderer.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/ProcessPath$DrawHandler.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $ProcessPath$DrawHandler = ::sun::java2d::loops::ProcessPath$DrawHandler;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _PixelWriterDrawHandler_FieldInfo_[] = {
	{"pw", "Lsun/java2d/loops/PixelWriter;", nullptr, 0, $field(PixelWriterDrawHandler, pw)},
	{"sData", "Lsun/java2d/SurfaceData;", nullptr, 0, $field(PixelWriterDrawHandler, sData)},
	{"clip", "Lsun/java2d/pipe/Region;", nullptr, 0, $field(PixelWriterDrawHandler, clip)},
	{}
};

$MethodInfo _PixelWriterDrawHandler_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/SurfaceData;Lsun/java2d/loops/PixelWriter;Lsun/java2d/pipe/Region;I)V", nullptr, $PUBLIC, $method(static_cast<void(PixelWriterDrawHandler::*)($SurfaceData*,$PixelWriter*,$Region*,int32_t)>(&PixelWriterDrawHandler::init$))},
	{"drawLine", "(IIII)V", nullptr, $PUBLIC},
	{"drawPixel", "(II)V", nullptr, $PUBLIC},
	{"drawScanline", "(III)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelWriterDrawHandler_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ProcessPath$DrawHandler", "sun.java2d.loops.ProcessPath", "DrawHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _PixelWriterDrawHandler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.PixelWriterDrawHandler",
	"sun.java2d.loops.ProcessPath$DrawHandler",
	nullptr,
	_PixelWriterDrawHandler_FieldInfo_,
	_PixelWriterDrawHandler_MethodInfo_,
	nullptr,
	nullptr,
	_PixelWriterDrawHandler_InnerClassesInfo_
};

$Object* allocate$PixelWriterDrawHandler($Class* clazz) {
	return $of($alloc(PixelWriterDrawHandler));
}

void PixelWriterDrawHandler::init$($SurfaceData* sData, $PixelWriter* pw, $Region* clip, int32_t strokeHint) {
	int32_t var$0 = $nc(clip)->getLoX();
	int32_t var$1 = clip->getLoY();
	int32_t var$2 = clip->getHiX();
	$ProcessPath$DrawHandler::init$(var$0, var$1, var$2, clip->getHiY(), strokeHint);
	$set(this, sData, sData);
	$set(this, pw, pw);
	$set(this, clip, clip);
}

void PixelWriterDrawHandler::drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1) {
	$GeneralRenderer::doDrawLine(this->sData, this->pw, nullptr, this->clip, x0, y0, x1, y1);
}

void PixelWriterDrawHandler::drawPixel(int32_t x0, int32_t y0) {
	$GeneralRenderer::doSetRect(this->sData, this->pw, x0, y0, x0 + 1, y0 + 1);
}

void PixelWriterDrawHandler::drawScanline(int32_t x0, int32_t x1, int32_t y0) {
	$GeneralRenderer::doSetRect(this->sData, this->pw, x0, y0, x1 + 1, y0 + 1);
}

PixelWriterDrawHandler::PixelWriterDrawHandler() {
}

$Class* PixelWriterDrawHandler::load$($String* name, bool initialize) {
	$loadClass(PixelWriterDrawHandler, name, initialize, &_PixelWriterDrawHandler_ClassInfo_, allocate$PixelWriterDrawHandler);
	return class$;
}

$Class* PixelWriterDrawHandler::class$ = nullptr;

		} // loops
	} // java2d
} // sun