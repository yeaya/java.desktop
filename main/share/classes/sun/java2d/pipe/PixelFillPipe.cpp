#include <sun/java2d/pipe/PixelFillPipe.h>

#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _PixelFillPipe_MethodInfo_[] = {
	{"fillArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fillOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fillPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fillRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PixelFillPipe_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.PixelFillPipe",
	nullptr,
	nullptr,
	nullptr,
	_PixelFillPipe_MethodInfo_
};

$Object* allocate$PixelFillPipe($Class* clazz) {
	return $of($alloc(PixelFillPipe));
}

$Class* PixelFillPipe::load$($String* name, bool initialize) {
	$loadClass(PixelFillPipe, name, initialize, &_PixelFillPipe_ClassInfo_, allocate$PixelFillPipe);
	return class$;
}

$Class* PixelFillPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun