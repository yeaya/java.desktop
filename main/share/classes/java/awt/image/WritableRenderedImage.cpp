#include <java/awt/image/WritableRenderedImage.h>

#include <java/awt/Point.h>
#include <java/awt/image/TileObserver.h>
#include <java/awt/image/WritableRaster.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $TileObserver = ::java::awt::image::TileObserver;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _WritableRenderedImage_MethodInfo_[] = {
	{"addTileObserver", "(Ljava/awt/image/TileObserver;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getWritableTile", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWritableTileIndices", "()[Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT},
	{"hasTileWriters", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isTileWritable", "(II)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"releaseWritableTile", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeTileObserver", "(Ljava/awt/image/TileObserver;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setData", "(Ljava/awt/image/Raster;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _WritableRenderedImage_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.image.WritableRenderedImage",
	nullptr,
	"java.awt.image.RenderedImage",
	nullptr,
	_WritableRenderedImage_MethodInfo_
};

$Object* allocate$WritableRenderedImage($Class* clazz) {
	return $of($alloc(WritableRenderedImage));
}

$Class* WritableRenderedImage::load$($String* name, bool initialize) {
	$loadClass(WritableRenderedImage, name, initialize, &_WritableRenderedImage_ClassInfo_, allocate$WritableRenderedImage);
	return class$;
}

$Class* WritableRenderedImage::class$ = nullptr;

		} // image
	} // awt
} // java