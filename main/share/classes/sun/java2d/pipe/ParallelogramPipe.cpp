#include <sun/java2d/pipe/ParallelogramPipe.h>

#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _ParallelogramPipe_MethodInfo_[] = {
	{"drawParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDDDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fillParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ParallelogramPipe_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.ParallelogramPipe",
	nullptr,
	nullptr,
	nullptr,
	_ParallelogramPipe_MethodInfo_
};

$Object* allocate$ParallelogramPipe($Class* clazz) {
	return $of($alloc(ParallelogramPipe));
}

$Class* ParallelogramPipe::load$($String* name, bool initialize) {
	$loadClass(ParallelogramPipe, name, initialize, &_ParallelogramPipe_ClassInfo_, allocate$ParallelogramPipe);
	return class$;
}

$Class* ParallelogramPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun