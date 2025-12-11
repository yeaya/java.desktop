#include <sun/java2d/pipe/BufferedRenderPipe$1.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/BufferedRenderPipe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $BufferedRenderPipe = ::sun::java2d::pipe::BufferedRenderPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _BufferedRenderPipe$1_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/pipe/BufferedRenderPipe;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedRenderPipe$1, this$0)},
	{"val$sg2d", "Lsun/java2d/SunGraphics2D;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedRenderPipe$1, val$sg2d)},
	{"val$isClosed", "Z", nullptr, $FINAL | $SYNTHETIC, $field(BufferedRenderPipe$1, val$isClosed)},
	{"val$nPoints", "I", nullptr, $FINAL | $SYNTHETIC, $field(BufferedRenderPipe$1, val$nPoints)},
	{"val$yPoints", "[I", nullptr, $FINAL | $SYNTHETIC, $field(BufferedRenderPipe$1, val$yPoints)},
	{"val$xPoints", "[I", nullptr, $FINAL | $SYNTHETIC, $field(BufferedRenderPipe$1, val$xPoints)},
	{}
};

$MethodInfo _BufferedRenderPipe$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/BufferedRenderPipe;[I[IIZLsun/java2d/SunGraphics2D;)V", "()V", 0, $method(static_cast<void(BufferedRenderPipe$1::*)($BufferedRenderPipe*,$ints*,$ints*,int32_t,bool,$SunGraphics2D*)>(&BufferedRenderPipe$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BufferedRenderPipe$1_EnclosingMethodInfo_ = {
	"sun.java2d.pipe.BufferedRenderPipe",
	"drawPoly",
	"(Lsun/java2d/SunGraphics2D;[I[IIZ)V"
};

$InnerClassInfo _BufferedRenderPipe$1_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.BufferedRenderPipe$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BufferedRenderPipe$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.pipe.BufferedRenderPipe$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_BufferedRenderPipe$1_FieldInfo_,
	_BufferedRenderPipe$1_MethodInfo_,
	nullptr,
	&_BufferedRenderPipe$1_EnclosingMethodInfo_,
	_BufferedRenderPipe$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.BufferedRenderPipe"
};

$Object* allocate$BufferedRenderPipe$1($Class* clazz) {
	return $of($alloc(BufferedRenderPipe$1));
}

void BufferedRenderPipe$1::init$($BufferedRenderPipe* this$0, $ints* val$xPoints, $ints* val$yPoints, int32_t val$nPoints, bool val$isClosed, $SunGraphics2D* val$sg2d) {
	$set(this, this$0, this$0);
	$set(this, val$xPoints, val$xPoints);
	$set(this, val$yPoints, val$yPoints);
	this->val$nPoints = val$nPoints;
	this->val$isClosed = val$isClosed;
	$set(this, val$sg2d, val$sg2d);
}

void BufferedRenderPipe$1::run() {
	this->this$0->drawPoly(this->val$xPoints, this->val$yPoints, this->val$nPoints, this->val$isClosed, $nc(this->val$sg2d)->transX, $nc(this->val$sg2d)->transY);
}

BufferedRenderPipe$1::BufferedRenderPipe$1() {
}

$Class* BufferedRenderPipe$1::load$($String* name, bool initialize) {
	$loadClass(BufferedRenderPipe$1, name, initialize, &_BufferedRenderPipe$1_ClassInfo_, allocate$BufferedRenderPipe$1);
	return class$;
}

$Class* BufferedRenderPipe$1::class$ = nullptr;

		} // pipe
	} // java2d
} // sun