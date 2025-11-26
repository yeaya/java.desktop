#include <sun/java2d/pipe/ShapeDrawPipe.h>

#include <java/awt/Shape.h>
#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _ShapeDrawPipe_MethodInfo_[] = {
	{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ShapeDrawPipe_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.ShapeDrawPipe",
	nullptr,
	nullptr,
	nullptr,
	_ShapeDrawPipe_MethodInfo_
};

$Object* allocate$ShapeDrawPipe($Class* clazz) {
	return $of($alloc(ShapeDrawPipe));
}

$Class* ShapeDrawPipe::load$($String* name, bool initialize) {
	$loadClass(ShapeDrawPipe, name, initialize, &_ShapeDrawPipe_ClassInfo_, allocate$ShapeDrawPipe);
	return class$;
}

$Class* ShapeDrawPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun