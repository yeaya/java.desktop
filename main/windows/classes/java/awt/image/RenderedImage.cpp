#include <java/awt/image/RenderedImage.h>

#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _RenderedImage_MethodInfo_[] = {
	{"copyData", "(Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $ABSTRACT},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $ABSTRACT},
	{"getData", "()Ljava/awt/image/Raster;", nullptr, $PUBLIC | $ABSTRACT},
	{"getData", "(Ljava/awt/Rectangle;)Ljava/awt/image/Raster;", nullptr, $PUBLIC | $ABSTRACT},
	{"getHeight", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinTileX", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinTileY", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinX", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinY", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNumXTiles", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNumYTiles", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPropertyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSampleModel", "()Ljava/awt/image/SampleModel;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSources", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/awt/image/RenderedImage;>;", $PUBLIC | $ABSTRACT},
	{"getTile", "(II)Ljava/awt/image/Raster;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTileGridXOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTileGridYOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTileHeight", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTileWidth", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getWidth", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RenderedImage_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.image.RenderedImage",
	nullptr,
	nullptr,
	nullptr,
	_RenderedImage_MethodInfo_
};

$Object* allocate$RenderedImage($Class* clazz) {
	return $of($alloc(RenderedImage));
}

$Class* RenderedImage::load$($String* name, bool initialize) {
	$loadClass(RenderedImage, name, initialize, &_RenderedImage_ClassInfo_, allocate$RenderedImage);
	return class$;
}

$Class* RenderedImage::class$ = nullptr;

		} // image
	} // awt
} // java