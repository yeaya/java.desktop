#include <sun/java2d/pipe/CompositePipe.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _CompositePipe_MethodInfo_[] = {
	{"endSequence", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"needTile", "(Ljava/lang/Object;IIII)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"renderPathTile", "(Ljava/lang/Object;[BIIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"skipTile", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"startSequence", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Ljava/awt/Rectangle;[I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CompositePipe_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.CompositePipe",
	nullptr,
	nullptr,
	nullptr,
	_CompositePipe_MethodInfo_
};

$Object* allocate$CompositePipe($Class* clazz) {
	return $of($alloc(CompositePipe));
}

$Class* CompositePipe::load$($String* name, bool initialize) {
	$loadClass(CompositePipe, name, initialize, &_CompositePipe_ClassInfo_, allocate$CompositePipe);
	return class$;
}

$Class* CompositePipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun