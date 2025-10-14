#include <sun/java2d/pipe/PixelDrawPipe.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _PixelDrawPipe_MethodInfo_[] = {
	{"drawArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawPolyline", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PixelDrawPipe_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.PixelDrawPipe",
	nullptr,
	nullptr,
	nullptr,
	_PixelDrawPipe_MethodInfo_
};

$Object* allocate$PixelDrawPipe($Class* clazz) {
	return $of($alloc(PixelDrawPipe));
}

$Class* PixelDrawPipe::load$($String* name, bool initialize) {
	$loadClass(PixelDrawPipe, name, initialize, &_PixelDrawPipe_ClassInfo_, allocate$PixelDrawPipe);
	return class$;
}

$Class* PixelDrawPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun