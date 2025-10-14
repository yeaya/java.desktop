#include <sun/java2d/pipe/BufferedRenderPipe$BufferedDrawHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/ProcessPath$DrawHandler.h>
#include <sun/java2d/pipe/BufferedRenderPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $ProcessPath$DrawHandler = ::sun::java2d::loops::ProcessPath$DrawHandler;
using $BufferedRenderPipe = ::sun::java2d::pipe::BufferedRenderPipe;
using $Region = ::sun::java2d::pipe::Region;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _BufferedRenderPipe$BufferedDrawHandler_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/pipe/BufferedRenderPipe;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedRenderPipe$BufferedDrawHandler, this$0)},
	{"scanlineCount", "I", nullptr, $PRIVATE, $field(BufferedRenderPipe$BufferedDrawHandler, scanlineCount)},
	{"scanlineCountIndex", "I", nullptr, $PRIVATE, $field(BufferedRenderPipe$BufferedDrawHandler, scanlineCountIndex)},
	{"remainingScanlines", "I", nullptr, $PRIVATE, $field(BufferedRenderPipe$BufferedDrawHandler, remainingScanlines)},
	{}
};

$MethodInfo _BufferedRenderPipe$BufferedDrawHandler_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/BufferedRenderPipe;)V", nullptr, 0, $method(static_cast<void(BufferedRenderPipe$BufferedDrawHandler::*)($BufferedRenderPipe*)>(&BufferedRenderPipe$BufferedDrawHandler::init$))},
	{"drawLine", "(IIII)V", nullptr, $PUBLIC},
	{"drawPixel", "(II)V", nullptr, $PUBLIC},
	{"drawScanline", "(III)V", nullptr, $PUBLIC},
	{"endFillPath", "()V", nullptr, $PUBLIC},
	{"resetFillPath", "()V", nullptr, $PRIVATE, $method(static_cast<void(BufferedRenderPipe$BufferedDrawHandler::*)()>(&BufferedRenderPipe$BufferedDrawHandler::resetFillPath))},
	{"startFillPath", "()V", nullptr, $PUBLIC},
	{"updateScanlineCount", "()V", nullptr, $PRIVATE, $method(static_cast<void(BufferedRenderPipe$BufferedDrawHandler::*)()>(&BufferedRenderPipe$BufferedDrawHandler::updateScanlineCount))},
	{"validate", "(Lsun/java2d/SunGraphics2D;)V", nullptr, 0},
	{}
};

$InnerClassInfo _BufferedRenderPipe$BufferedDrawHandler_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.BufferedRenderPipe$BufferedDrawHandler", "sun.java2d.pipe.BufferedRenderPipe", "BufferedDrawHandler", $PRIVATE},
	{"sun.java2d.loops.ProcessPath$DrawHandler", "sun.java2d.loops.ProcessPath", "DrawHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _BufferedRenderPipe$BufferedDrawHandler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.pipe.BufferedRenderPipe$BufferedDrawHandler",
	"sun.java2d.loops.ProcessPath$DrawHandler",
	nullptr,
	_BufferedRenderPipe$BufferedDrawHandler_FieldInfo_,
	_BufferedRenderPipe$BufferedDrawHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BufferedRenderPipe$BufferedDrawHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.BufferedRenderPipe"
};

$Object* allocate$BufferedRenderPipe$BufferedDrawHandler($Class* clazz) {
	return $of($alloc(BufferedRenderPipe$BufferedDrawHandler));
}

void BufferedRenderPipe$BufferedDrawHandler::init$($BufferedRenderPipe* this$0) {
	$set(this, this$0, this$0);
	$ProcessPath$DrawHandler::init$(0, 0, 0, 0);
}

void BufferedRenderPipe$BufferedDrawHandler::validate($SunGraphics2D* sg2d) {
	$var($Region, clip, $nc(sg2d)->getCompClip());
	int32_t var$0 = $nc(clip)->getLoX();
	int32_t var$1 = clip->getLoY();
	int32_t var$2 = clip->getHiX();
	setBounds(var$0, var$1, var$2, clip->getHiY(), sg2d->strokeHint);
}

void BufferedRenderPipe$BufferedDrawHandler::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$nc(this->this$0->rq)->ensureCapacity(20);
	$nc(this->this$0->buf)->putInt(10);
	$nc(this->this$0->buf)->putInt(x1);
	$nc(this->this$0->buf)->putInt(y1);
	$nc(this->this$0->buf)->putInt(x2);
	$nc(this->this$0->buf)->putInt(y2);
}

void BufferedRenderPipe$BufferedDrawHandler::drawPixel(int32_t x, int32_t y) {
	$nc(this->this$0->rq)->ensureCapacity(12);
	$nc(this->this$0->buf)->putInt(13);
	$nc(this->this$0->buf)->putInt(x);
	$nc(this->this$0->buf)->putInt(y);
}

void BufferedRenderPipe$BufferedDrawHandler::resetFillPath() {
	$nc(this->this$0->buf)->putInt(14);
	this->scanlineCountIndex = $nc(this->this$0->buf)->position();
	$nc(this->this$0->buf)->putInt(0);
	this->scanlineCount = 0;
	this->remainingScanlines = $nc(this->this$0->buf)->remaining() / 12;
}

void BufferedRenderPipe$BufferedDrawHandler::updateScanlineCount() {
	$nc(this->this$0->buf)->putInt(this->scanlineCountIndex, this->scanlineCount);
}

void BufferedRenderPipe$BufferedDrawHandler::startFillPath() {
	$nc(this->this$0->rq)->ensureCapacity(20);
	resetFillPath();
}

void BufferedRenderPipe$BufferedDrawHandler::drawScanline(int32_t x1, int32_t x2, int32_t y) {
	if (this->remainingScanlines == 0) {
		updateScanlineCount();
		$nc(this->this$0->rq)->flushNow();
		resetFillPath();
	}
	$nc(this->this$0->buf)->putInt(x1);
	$nc(this->this$0->buf)->putInt(x2);
	$nc(this->this$0->buf)->putInt(y);
	++this->scanlineCount;
	--this->remainingScanlines;
}

void BufferedRenderPipe$BufferedDrawHandler::endFillPath() {
	updateScanlineCount();
}

BufferedRenderPipe$BufferedDrawHandler::BufferedRenderPipe$BufferedDrawHandler() {
}

$Class* BufferedRenderPipe$BufferedDrawHandler::load$($String* name, bool initialize) {
	$loadClass(BufferedRenderPipe$BufferedDrawHandler, name, initialize, &_BufferedRenderPipe$BufferedDrawHandler_ClassInfo_, allocate$BufferedRenderPipe$BufferedDrawHandler);
	return class$;
}

$Class* BufferedRenderPipe$BufferedDrawHandler::class$ = nullptr;

		} // pipe
	} // java2d
} // sun