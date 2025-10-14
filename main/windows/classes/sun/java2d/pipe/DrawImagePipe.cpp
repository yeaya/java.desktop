#include <sun/java2d/pipe/DrawImagePipe.h>

#include <java/awt/Color.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Image = ::java::awt::Image;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _DrawImagePipe_MethodInfo_[] = {
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DrawImagePipe_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.DrawImagePipe",
	nullptr,
	nullptr,
	nullptr,
	_DrawImagePipe_MethodInfo_
};

$Object* allocate$DrawImagePipe($Class* clazz) {
	return $of($alloc(DrawImagePipe));
}

$Class* DrawImagePipe::load$($String* name, bool initialize) {
	$loadClass(DrawImagePipe, name, initialize, &_DrawImagePipe_ClassInfo_, allocate$DrawImagePipe);
	return class$;
}

$Class* DrawImagePipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun