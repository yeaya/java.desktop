#include <sun/java2d/pipe/BufferedRenderPipe$AAParallelogramPipe.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/BufferedRenderPipe.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $BufferedRenderPipe = ::sun::java2d::pipe::BufferedRenderPipe;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _BufferedRenderPipe$AAParallelogramPipe_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/pipe/BufferedRenderPipe;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedRenderPipe$AAParallelogramPipe, this$0)},
	{}
};

$MethodInfo _BufferedRenderPipe$AAParallelogramPipe_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/BufferedRenderPipe;)V", nullptr, $PRIVATE, $method(static_cast<void(BufferedRenderPipe$AAParallelogramPipe::*)($BufferedRenderPipe*)>(&BufferedRenderPipe$AAParallelogramPipe::init$))},
	{"drawParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDDDD)V", nullptr, $PUBLIC},
	{"fillParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDD)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BufferedRenderPipe$AAParallelogramPipe_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.BufferedRenderPipe$AAParallelogramPipe", "sun.java2d.pipe.BufferedRenderPipe", "AAParallelogramPipe", $PRIVATE},
	{}
};

$ClassInfo _BufferedRenderPipe$AAParallelogramPipe_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.pipe.BufferedRenderPipe$AAParallelogramPipe",
	"java.lang.Object",
	"sun.java2d.pipe.ParallelogramPipe",
	_BufferedRenderPipe$AAParallelogramPipe_FieldInfo_,
	_BufferedRenderPipe$AAParallelogramPipe_MethodInfo_,
	nullptr,
	nullptr,
	_BufferedRenderPipe$AAParallelogramPipe_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.BufferedRenderPipe"
};

$Object* allocate$BufferedRenderPipe$AAParallelogramPipe($Class* clazz) {
	return $of($alloc(BufferedRenderPipe$AAParallelogramPipe));
}

void BufferedRenderPipe$AAParallelogramPipe::init$($BufferedRenderPipe* this$0) {
	$set(this, this$0, this$0);
}

void BufferedRenderPipe$AAParallelogramPipe::fillParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	$nc(this->this$0->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->this$0->validateContextAA(sg2d);
			$nc(this->this$0->rq)->ensureCapacity(28);
			$nc(this->this$0->buf)->putInt(23);
			$nc(this->this$0->buf)->putFloat((float)x);
			$nc(this->this$0->buf)->putFloat((float)y);
			$nc(this->this$0->buf)->putFloat((float)dx1);
			$nc(this->this$0->buf)->putFloat((float)dy1);
			$nc(this->this$0->buf)->putFloat((float)dx2);
			$nc(this->this$0->buf)->putFloat((float)dy2);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->this$0->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void BufferedRenderPipe$AAParallelogramPipe::drawParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$nc(this->this$0->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->this$0->validateContextAA(sg2d);
			$nc(this->this$0->rq)->ensureCapacity(36);
			$nc(this->this$0->buf)->putInt(16);
			$nc(this->this$0->buf)->putFloat((float)x);
			$nc(this->this$0->buf)->putFloat((float)y);
			$nc(this->this$0->buf)->putFloat((float)dx1);
			$nc(this->this$0->buf)->putFloat((float)dy1);
			$nc(this->this$0->buf)->putFloat((float)dx2);
			$nc(this->this$0->buf)->putFloat((float)dy2);
			$nc(this->this$0->buf)->putFloat((float)lw1);
			$nc(this->this$0->buf)->putFloat((float)lw2);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->this$0->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

BufferedRenderPipe$AAParallelogramPipe::BufferedRenderPipe$AAParallelogramPipe() {
}

$Class* BufferedRenderPipe$AAParallelogramPipe::load$($String* name, bool initialize) {
	$loadClass(BufferedRenderPipe$AAParallelogramPipe, name, initialize, &_BufferedRenderPipe$AAParallelogramPipe_ClassInfo_, allocate$BufferedRenderPipe$AAParallelogramPipe);
	return class$;
}

$Class* BufferedRenderPipe$AAParallelogramPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun