#include <java/awt/image/RasterOp.h>

#include <java/awt/RenderingHints.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/WritableRaster.h>
#include <jcpp.h>

using $RenderingHints = ::java::awt::RenderingHints;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _RasterOp_MethodInfo_[] = {
	{"createCompatibleDestRaster", "(Ljava/awt/image/Raster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $ABSTRACT},
	{"filter", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBounds2D", "(Ljava/awt/image/Raster;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPoint2D", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RasterOp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.image.RasterOp",
	nullptr,
	nullptr,
	nullptr,
	_RasterOp_MethodInfo_
};

$Object* allocate$RasterOp($Class* clazz) {
	return $of($alloc(RasterOp));
}

$Class* RasterOp::load$($String* name, bool initialize) {
	$loadClass(RasterOp, name, initialize, &_RasterOp_ClassInfo_, allocate$RasterOp);
	return class$;
}

$Class* RasterOp::class$ = nullptr;

		} // image
	} // awt
} // java