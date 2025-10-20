#include <javax/imageio/ImageTypeSpecifier.h>

#include <java/awt/Point.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NegativeArraySizeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/imageio/ImageTypeSpecifier$Banded.h>
#include <javax/imageio/ImageTypeSpecifier$Grayscale.h>
#include <javax/imageio/ImageTypeSpecifier$Indexed.h>
#include <javax/imageio/ImageTypeSpecifier$Interleaved.h>
#include <javax/imageio/ImageTypeSpecifier$Packed.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef OPAQUE
#undef TRANSLUCENT
#undef TYPE_3BYTE_BGR
#undef TYPE_4BYTE_ABGR
#undef TYPE_4BYTE_ABGR_PRE
#undef TYPE_BYTE
#undef TYPE_BYTE_BINARY
#undef TYPE_BYTE_GRAY
#undef TYPE_BYTE_INDEXED
#undef TYPE_CUSTOM
#undef TYPE_INT
#undef TYPE_INT_ARGB
#undef TYPE_INT_ARGB_PRE
#undef TYPE_INT_BGR
#undef TYPE_INT_RGB
#undef TYPE_USHORT
#undef TYPE_USHORT_555_RGB
#undef TYPE_USHORT_565_RGB
#undef TYPE_USHORT_GRAY

using $ImageTypeSpecifierArray = $Array<::javax::imageio::ImageTypeSpecifier>;
using $Point = ::java::awt::Point;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NegativeArraySizeException = ::java::lang::NegativeArraySizeException;
using $Hashtable = ::java::util::Hashtable;
using $ImageTypeSpecifier$Banded = ::javax::imageio::ImageTypeSpecifier$Banded;
using $ImageTypeSpecifier$Grayscale = ::javax::imageio::ImageTypeSpecifier$Grayscale;
using $ImageTypeSpecifier$Indexed = ::javax::imageio::ImageTypeSpecifier$Indexed;
using $ImageTypeSpecifier$Interleaved = ::javax::imageio::ImageTypeSpecifier$Interleaved;
using $ImageTypeSpecifier$Packed = ::javax::imageio::ImageTypeSpecifier$Packed;

namespace javax {
	namespace imageio {

$FieldInfo _ImageTypeSpecifier_FieldInfo_[] = {
	{"colorModel", "Ljava/awt/image/ColorModel;", nullptr, $PROTECTED, $field(ImageTypeSpecifier, colorModel)},
	{"sampleModel", "Ljava/awt/image/SampleModel;", nullptr, $PROTECTED, $field(ImageTypeSpecifier, sampleModel)},
	{"BISpecifier", "[Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PRIVATE | $STATIC, $staticField(ImageTypeSpecifier, BISpecifier)},
	{"sRGB", "Ljava/awt/color/ColorSpace;", nullptr, $PRIVATE | $STATIC, $staticField(ImageTypeSpecifier, sRGB)},
	{}
};

$MethodInfo _ImageTypeSpecifier_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageTypeSpecifier::*)()>(&ImageTypeSpecifier::init$))},
	{"<init>", "(Ljava/awt/image/ColorModel;Ljava/awt/image/SampleModel;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageTypeSpecifier::*)($ColorModel*,$SampleModel*)>(&ImageTypeSpecifier::init$))},
	{"<init>", "(Ljava/awt/image/RenderedImage;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageTypeSpecifier::*)($RenderedImage*)>(&ImageTypeSpecifier::init$))},
	{"createBanded", "(Ljava/awt/color/ColorSpace;[I[IIZZ)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ImageTypeSpecifier*(*)($ColorSpace*,$ints*,$ints*,int32_t,bool,bool)>(&ImageTypeSpecifier::createBanded))},
	{"createBufferedImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createComponentCM", "(Ljava/awt/color/ColorSpace;IIZZ)Ljava/awt/image/ColorModel;", nullptr, $STATIC, $method(static_cast<$ColorModel*(*)($ColorSpace*,int32_t,int32_t,bool,bool)>(&ImageTypeSpecifier::createComponentCM))},
	{"createFromBufferedImageType", "(I)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ImageTypeSpecifier*(*)(int32_t)>(&ImageTypeSpecifier::createFromBufferedImageType))},
	{"createFromRenderedImage", "(Ljava/awt/image/RenderedImage;)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ImageTypeSpecifier*(*)($RenderedImage*)>(&ImageTypeSpecifier::createFromRenderedImage))},
	{"createGrayscale", "(IIZ)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ImageTypeSpecifier*(*)(int32_t,int32_t,bool)>(&ImageTypeSpecifier::createGrayscale))},
	{"createGrayscale", "(IIZZ)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ImageTypeSpecifier*(*)(int32_t,int32_t,bool,bool)>(&ImageTypeSpecifier::createGrayscale))},
	{"createIndexed", "([B[B[B[BII)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ImageTypeSpecifier*(*)($bytes*,$bytes*,$bytes*,$bytes*,int32_t,int32_t)>(&ImageTypeSpecifier::createIndexed))},
	{"createInterleaved", "(Ljava/awt/color/ColorSpace;[IIZZ)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ImageTypeSpecifier*(*)($ColorSpace*,$ints*,int32_t,bool,bool)>(&ImageTypeSpecifier::createInterleaved))},
	{"createPacked", "(Ljava/awt/color/ColorSpace;IIIIIZ)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ImageTypeSpecifier*(*)($ColorSpace*,int32_t,int32_t,int32_t,int32_t,int32_t,bool)>(&ImageTypeSpecifier::createPacked))},
	{"createSpecifier", "(I)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PRIVATE | $STATIC, $method(static_cast<ImageTypeSpecifier*(*)(int32_t)>(&ImageTypeSpecifier::createSpecifier))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBitsPerBand", "(I)I", nullptr, $PUBLIC},
	{"getBufferedImageType", "()I", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getNumBands", "()I", nullptr, $PUBLIC},
	{"getNumComponents", "()I", nullptr, $PUBLIC},
	{"getSampleModel", "()Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"getSampleModel", "(II)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"getSpecifier", "(I)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PRIVATE | $STATIC, $method(static_cast<ImageTypeSpecifier*(*)(int32_t)>(&ImageTypeSpecifier::getSpecifier))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageTypeSpecifier_InnerClassesInfo_[] = {
	{"javax.imageio.ImageTypeSpecifier$Indexed", "javax.imageio.ImageTypeSpecifier", "Indexed", $STATIC},
	{"javax.imageio.ImageTypeSpecifier$Grayscale", "javax.imageio.ImageTypeSpecifier", "Grayscale", $STATIC},
	{"javax.imageio.ImageTypeSpecifier$Banded", "javax.imageio.ImageTypeSpecifier", "Banded", $STATIC},
	{"javax.imageio.ImageTypeSpecifier$Interleaved", "javax.imageio.ImageTypeSpecifier", "Interleaved", $STATIC},
	{"javax.imageio.ImageTypeSpecifier$Packed", "javax.imageio.ImageTypeSpecifier", "Packed", $STATIC},
	{}
};

$ClassInfo _ImageTypeSpecifier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.ImageTypeSpecifier",
	"java.lang.Object",
	nullptr,
	_ImageTypeSpecifier_FieldInfo_,
	_ImageTypeSpecifier_MethodInfo_,
	nullptr,
	nullptr,
	_ImageTypeSpecifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.ImageTypeSpecifier$Indexed,javax.imageio.ImageTypeSpecifier$Grayscale,javax.imageio.ImageTypeSpecifier$Banded,javax.imageio.ImageTypeSpecifier$Interleaved,javax.imageio.ImageTypeSpecifier$Packed"
};

$Object* allocate$ImageTypeSpecifier($Class* clazz) {
	return $of($alloc(ImageTypeSpecifier));
}


$ImageTypeSpecifierArray* ImageTypeSpecifier::BISpecifier = nullptr;
$ColorSpace* ImageTypeSpecifier::sRGB = nullptr;

void ImageTypeSpecifier::init$() {
}

void ImageTypeSpecifier::init$($ColorModel* colorModel, $SampleModel* sampleModel) {
	if (colorModel == nullptr) {
		$throwNew($IllegalArgumentException, "colorModel == null!"_s);
	}
	if (sampleModel == nullptr) {
		$throwNew($IllegalArgumentException, "sampleModel == null!"_s);
	}
	if (!$nc(colorModel)->isCompatibleSampleModel(sampleModel)) {
		$throwNew($IllegalArgumentException, "sampleModel is incompatible with colorModel!"_s);
	}
	$set(this, colorModel, colorModel);
	$set(this, sampleModel, sampleModel);
}

void ImageTypeSpecifier::init$($RenderedImage* image) {
	if (image == nullptr) {
		$throwNew($IllegalArgumentException, "image == null!"_s);
	}
	$set(this, colorModel, $nc(image)->getColorModel());
	$set(this, sampleModel, image->getSampleModel());
}

ImageTypeSpecifier* ImageTypeSpecifier::createPacked($ColorSpace* colorSpace, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t alphaMask, int32_t transferType, bool isAlphaPremultiplied) {
	$init(ImageTypeSpecifier);
	return $new($ImageTypeSpecifier$Packed, colorSpace, redMask, greenMask, blueMask, alphaMask, transferType, isAlphaPremultiplied);
}

$ColorModel* ImageTypeSpecifier::createComponentCM($ColorSpace* colorSpace, int32_t numBands, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied) {
	$init(ImageTypeSpecifier);
	int32_t transparency = hasAlpha ? $Transparency::TRANSLUCENT : $Transparency::OPAQUE;
	$var($ints, numBits, $new($ints, numBands));
	int32_t bits = $DataBuffer::getDataTypeSize(dataType);
	for (int32_t i = 0; i < numBands; ++i) {
		numBits->set(i, bits);
	}
	return $new($ComponentColorModel, colorSpace, numBits, hasAlpha, isAlphaPremultiplied, transparency, dataType);
}

ImageTypeSpecifier* ImageTypeSpecifier::createInterleaved($ColorSpace* colorSpace, $ints* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied) {
	$init(ImageTypeSpecifier);
	return $new($ImageTypeSpecifier$Interleaved, colorSpace, bandOffsets, dataType, hasAlpha, isAlphaPremultiplied);
}

ImageTypeSpecifier* ImageTypeSpecifier::createBanded($ColorSpace* colorSpace, $ints* bankIndices, $ints* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied) {
	$init(ImageTypeSpecifier);
	return $new($ImageTypeSpecifier$Banded, colorSpace, bankIndices, bandOffsets, dataType, hasAlpha, isAlphaPremultiplied);
}

ImageTypeSpecifier* ImageTypeSpecifier::createGrayscale(int32_t bits, int32_t dataType, bool isSigned) {
	$init(ImageTypeSpecifier);
	return $new($ImageTypeSpecifier$Grayscale, bits, dataType, isSigned, false, false);
}

ImageTypeSpecifier* ImageTypeSpecifier::createGrayscale(int32_t bits, int32_t dataType, bool isSigned, bool isAlphaPremultiplied) {
	$init(ImageTypeSpecifier);
	return $new($ImageTypeSpecifier$Grayscale, bits, dataType, isSigned, true, isAlphaPremultiplied);
}

ImageTypeSpecifier* ImageTypeSpecifier::createIndexed($bytes* redLUT, $bytes* greenLUT, $bytes* blueLUT, $bytes* alphaLUT, int32_t bits, int32_t dataType) {
	$init(ImageTypeSpecifier);
	return $new($ImageTypeSpecifier$Indexed, redLUT, greenLUT, blueLUT, alphaLUT, bits, dataType);
}

ImageTypeSpecifier* ImageTypeSpecifier::createFromBufferedImageType(int32_t bufferedImageType) {
	$init(ImageTypeSpecifier);
	if (bufferedImageType >= $BufferedImage::TYPE_INT_RGB && bufferedImageType <= $BufferedImage::TYPE_BYTE_INDEXED) {
		return getSpecifier(bufferedImageType);
	} else if (bufferedImageType == $BufferedImage::TYPE_CUSTOM) {
		$throwNew($IllegalArgumentException, "Cannot create from TYPE_CUSTOM!"_s);
	} else {
		$throwNew($IllegalArgumentException, "Invalid BufferedImage type!"_s);
	}
}

ImageTypeSpecifier* ImageTypeSpecifier::createFromRenderedImage($RenderedImage* image) {
	$init(ImageTypeSpecifier);
	if (image == nullptr) {
		$throwNew($IllegalArgumentException, "image == null!"_s);
	}
	if ($instanceOf($BufferedImage, image)) {
		int32_t bufferedImageType = $nc(($cast($BufferedImage, image)))->getType();
		if (bufferedImageType != $BufferedImage::TYPE_CUSTOM) {
			return getSpecifier(bufferedImageType);
		}
	}
	return $new(ImageTypeSpecifier, image);
}

int32_t ImageTypeSpecifier::getBufferedImageType() {
	$var($BufferedImage, bi, createBufferedImage(1, 1));
	return $nc(bi)->getType();
}

int32_t ImageTypeSpecifier::getNumComponents() {
	return $nc(this->colorModel)->getNumComponents();
}

int32_t ImageTypeSpecifier::getNumBands() {
	return $nc(this->sampleModel)->getNumBands();
}

int32_t ImageTypeSpecifier::getBitsPerBand(int32_t band) {
	if (band < 0 || band >= getNumBands()) {
		$throwNew($IllegalArgumentException, "band out of range!"_s);
	}
	return $nc(this->sampleModel)->getSampleSize(band);
}

$SampleModel* ImageTypeSpecifier::getSampleModel() {
	return this->sampleModel;
}

$SampleModel* ImageTypeSpecifier::getSampleModel(int32_t width, int32_t height) {
	if ((int64_t)width * height > $Integer::MAX_VALUE) {
		$throwNew($IllegalArgumentException, "width*height > Integer.MAX_VALUE!"_s);
	}
	return $nc(this->sampleModel)->createCompatibleSampleModel(width, height);
}

$ColorModel* ImageTypeSpecifier::getColorModel() {
	return this->colorModel;
}

$BufferedImage* ImageTypeSpecifier::createBufferedImage(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($SampleModel, sampleModel, getSampleModel(width, height));
		$var($WritableRaster, raster, $Raster::createWritableRaster(sampleModel, $$new($Point, 0, 0)));
		$var($ColorModel, var$0, this->colorModel);
		$var($WritableRaster, var$1, raster);
		bool var$2 = $nc(this->colorModel)->isAlphaPremultiplied();
		return $new($BufferedImage, var$0, var$1, var$2, $$new($Hashtable));
	} catch ($NegativeArraySizeException&) {
		$var($NegativeArraySizeException, e, $catch());
		$throwNew($IllegalArgumentException, "Array size > Integer.MAX_VALUE!"_s);
	}
	$shouldNotReachHere();
}

bool ImageTypeSpecifier::equals(Object$* o) {
	if ((o == nullptr) || !($instanceOf(ImageTypeSpecifier, o))) {
		return false;
	}
	$var(ImageTypeSpecifier, that, $cast(ImageTypeSpecifier, o));
	bool var$0 = ($nc(this->colorModel)->equals($nc(that)->colorModel));
	return var$0 && ($nc($of(this->sampleModel))->equals($nc(that)->sampleModel));
}

int32_t ImageTypeSpecifier::hashCode() {
	int32_t var$0 = (9 * $nc(this->colorModel)->hashCode());
	return var$0 + (14 * $nc($of(this->sampleModel))->hashCode());
}

ImageTypeSpecifier* ImageTypeSpecifier::getSpecifier(int32_t type) {
	$init(ImageTypeSpecifier);
	if ($nc(ImageTypeSpecifier::BISpecifier)->get(type) == nullptr) {
		$nc(ImageTypeSpecifier::BISpecifier)->set(type, $(createSpecifier(type)));
	}
	return $nc(ImageTypeSpecifier::BISpecifier)->get(type);
}

ImageTypeSpecifier* ImageTypeSpecifier::createSpecifier(int32_t type) {
	$init(ImageTypeSpecifier);
	$useLocalCurrentObjectStackCache();
	switch (type) {
	case $BufferedImage::TYPE_INT_RGB:
		{
			return createPacked(ImageTypeSpecifier::sRGB, 0x00FF0000, 0x0000FF00, 255, 0, $DataBuffer::TYPE_INT, false);
		}
	case $BufferedImage::TYPE_INT_ARGB:
		{
			return createPacked(ImageTypeSpecifier::sRGB, 0x00FF0000, 0x0000FF00, 255, (int32_t)0xFF000000, $DataBuffer::TYPE_INT, false);
		}
	case $BufferedImage::TYPE_INT_ARGB_PRE:
		{
			return createPacked(ImageTypeSpecifier::sRGB, 0x00FF0000, 0x0000FF00, 255, (int32_t)0xFF000000, $DataBuffer::TYPE_INT, true);
		}
	case $BufferedImage::TYPE_INT_BGR:
		{
			return createPacked(ImageTypeSpecifier::sRGB, 255, 0x0000FF00, 0x00FF0000, 0, $DataBuffer::TYPE_INT, false);
		}
	case $BufferedImage::TYPE_3BYTE_BGR:
		{
			return createInterleaved(ImageTypeSpecifier::sRGB, $$new($ints, {
				2,
				1,
				0
			}), $DataBuffer::TYPE_BYTE, false, false);
		}
	case $BufferedImage::TYPE_4BYTE_ABGR:
		{
			return createInterleaved(ImageTypeSpecifier::sRGB, $$new($ints, {
				3,
				2,
				1,
				0
			}), $DataBuffer::TYPE_BYTE, true, false);
		}
	case $BufferedImage::TYPE_4BYTE_ABGR_PRE:
		{
			return createInterleaved(ImageTypeSpecifier::sRGB, $$new($ints, {
				3,
				2,
				1,
				0
			}), $DataBuffer::TYPE_BYTE, true, true);
		}
	case $BufferedImage::TYPE_USHORT_565_RGB:
		{
			return createPacked(ImageTypeSpecifier::sRGB, 0x0000F800, 2016, 31, 0, $DataBuffer::TYPE_USHORT, false);
		}
	case $BufferedImage::TYPE_USHORT_555_RGB:
		{
			return createPacked(ImageTypeSpecifier::sRGB, 31744, 992, 31, 0, $DataBuffer::TYPE_USHORT, false);
		}
	case $BufferedImage::TYPE_BYTE_GRAY:
		{
			return createGrayscale(8, $DataBuffer::TYPE_BYTE, false);
		}
	case $BufferedImage::TYPE_USHORT_GRAY:
		{
			return createGrayscale(16, $DataBuffer::TYPE_USHORT, false);
		}
	case $BufferedImage::TYPE_BYTE_BINARY:
		{
			return createGrayscale(1, $DataBuffer::TYPE_BYTE, false);
		}
	case $BufferedImage::TYPE_BYTE_INDEXED:
		{
			{
				$var($BufferedImage, bi, $new($BufferedImage, 1, 1, $BufferedImage::TYPE_BYTE_INDEXED));
				$var($IndexColorModel, icm, $cast($IndexColorModel, bi->getColorModel()));
				int32_t mapSize = $nc(icm)->getMapSize();
				$var($bytes, redLUT, $new($bytes, mapSize));
				$var($bytes, greenLUT, $new($bytes, mapSize));
				$var($bytes, blueLUT, $new($bytes, mapSize));
				$var($bytes, alphaLUT, $new($bytes, mapSize));
				icm->getReds(redLUT);
				icm->getGreens(greenLUT);
				icm->getBlues(blueLUT);
				icm->getAlphas(alphaLUT);
				return createIndexed(redLUT, greenLUT, blueLUT, alphaLUT, 8, $DataBuffer::TYPE_BYTE);
			}
		}
	default:
		{
			$throwNew($IllegalArgumentException, "Invalid BufferedImage type!"_s);
		}
	}
}

void clinit$ImageTypeSpecifier($Class* class$) {
	{
		$assignStatic(ImageTypeSpecifier::sRGB, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
		$assignStatic(ImageTypeSpecifier::BISpecifier, $new($ImageTypeSpecifierArray, $BufferedImage::TYPE_BYTE_INDEXED + 1));
	}
}

ImageTypeSpecifier::ImageTypeSpecifier() {
}

$Class* ImageTypeSpecifier::load$($String* name, bool initialize) {
	$loadClass(ImageTypeSpecifier, name, initialize, &_ImageTypeSpecifier_ClassInfo_, clinit$ImageTypeSpecifier, allocate$ImageTypeSpecifier);
	return class$;
}

$Class* ImageTypeSpecifier::class$ = nullptr;

	} // imageio
} // javax