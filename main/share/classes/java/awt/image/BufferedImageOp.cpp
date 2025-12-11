#include <java/awt/image/BufferedImageOp.h>

#include <java/awt/RenderingHints.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _BufferedImageOp_MethodInfo_[] = {
	{"createCompatibleDestImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/ColorModel;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $ABSTRACT},
	{"filter", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBounds2D", "(Ljava/awt/image/BufferedImage;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPoint2D", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BufferedImageOp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.image.BufferedImageOp",
	nullptr,
	nullptr,
	nullptr,
	_BufferedImageOp_MethodInfo_
};

$Object* allocate$BufferedImageOp($Class* clazz) {
	return $of($alloc(BufferedImageOp));
}

$Class* BufferedImageOp::load$($String* name, bool initialize) {
	$loadClass(BufferedImageOp, name, initialize, &_BufferedImageOp_ClassInfo_, allocate$BufferedImageOp);
	return class$;
}

$Class* BufferedImageOp::class$ = nullptr;

		} // image
	} // awt
} // java