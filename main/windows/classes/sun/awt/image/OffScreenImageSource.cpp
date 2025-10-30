#include <sun/awt/image/OffScreenImageSource.h>

#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/ByteComponentRaster.h>
#include <sun/awt/image/BytePackedRaster.h>
#include <jcpp.h>

#undef IMAGEERROR
#undef SINGLEFRAMEDONE
#undef STATICIMAGEDONE
#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Hashtable = ::java::util::Hashtable;
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;
using $BytePackedRaster = ::sun::awt::image::BytePackedRaster;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _OffScreenImageSource_FieldInfo_[] = {
	{"image", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(OffScreenImageSource, image)},
	{"width", "I", nullptr, 0, $field(OffScreenImageSource, width)},
	{"height", "I", nullptr, 0, $field(OffScreenImageSource, height)},
	{"properties", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<**>;", 0, $field(OffScreenImageSource, properties)},
	{"theConsumer", "Ljava/awt/image/ImageConsumer;", nullptr, $PRIVATE, $field(OffScreenImageSource, theConsumer)},
	{}
};

$MethodInfo _OffScreenImageSource_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/BufferedImage;Ljava/util/Hashtable;)V", "(Ljava/awt/image/BufferedImage;Ljava/util/Hashtable<**>;)V", $PUBLIC, $method(static_cast<void(OffScreenImageSource::*)($BufferedImage*,$Hashtable*)>(&OffScreenImageSource::init$))},
	{"<init>", "(Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC, $method(static_cast<void(OffScreenImageSource::*)($BufferedImage*)>(&OffScreenImageSource::init$))},
	{"addConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isConsumer", "(Ljava/awt/image/ImageConsumer;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"produce", "()V", nullptr, $PRIVATE, $method(static_cast<void(OffScreenImageSource::*)()>(&OffScreenImageSource::produce))},
	{"removeConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"requestTopDownLeftRightResend", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC},
	{"sendPixels", "()V", nullptr, $PRIVATE, $method(static_cast<void(OffScreenImageSource::*)()>(&OffScreenImageSource::sendPixels))},
	{"startProduction", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OffScreenImageSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.OffScreenImageSource",
	"java.lang.Object",
	"java.awt.image.ImageProducer",
	_OffScreenImageSource_FieldInfo_,
	_OffScreenImageSource_MethodInfo_
};

$Object* allocate$OffScreenImageSource($Class* clazz) {
	return $of($alloc(OffScreenImageSource));
}

void OffScreenImageSource::init$($BufferedImage* image, $Hashtable* properties) {
	$set(this, image, image);
	if (properties != nullptr) {
		$set(this, properties, properties);
	} else {
		$set(this, properties, $new($Hashtable));
	}
	this->width = $nc(image)->getWidth();
	this->height = image->getHeight();
}

void OffScreenImageSource::init$($BufferedImage* image) {
	OffScreenImageSource::init$(image, nullptr);
}

void OffScreenImageSource::addConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		$set(this, theConsumer, ic);
		produce();
	}
}

bool OffScreenImageSource::isConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		return (ic == this->theConsumer);
	}
}

void OffScreenImageSource::removeConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		if (this->theConsumer == ic) {
			$set(this, theConsumer, nullptr);
		}
	}
}

void OffScreenImageSource::startProduction($ImageConsumer* ic) {
	addConsumer(ic);
}

void OffScreenImageSource::requestTopDownLeftRightResend($ImageConsumer* ic) {
}

void OffScreenImageSource::sendPixels() {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, cm, $nc(this->image)->getColorModel());
	$var($WritableRaster, raster, $nc(this->image)->getRaster());
	int32_t numDataElements = $nc(raster)->getNumDataElements();
	int32_t dataType = $nc($(raster->getDataBuffer()))->getDataType();
	$var($ints, scanline, $new($ints, this->width * numDataElements));
	bool needToCvt = true;
	if ($instanceOf($IndexColorModel, cm)) {
		$var($bytes, pixels, $new($bytes, this->width));
		$nc(this->theConsumer)->setColorModel(cm);
		if ($instanceOf($ByteComponentRaster, raster)) {
			needToCvt = false;
			for (int32_t y = 0; y < this->height; ++y) {
				raster->getDataElements(0, y, this->width, 1, pixels);
				$nc(this->theConsumer)->setPixels(0, y, this->width, 1, cm, pixels, 0, this->width);
			}
		} else if ($instanceOf($BytePackedRaster, raster)) {
			needToCvt = false;
			for (int32_t y = 0; y < this->height; ++y) {
				raster->getPixels(0, y, this->width, 1, scanline);
				for (int32_t x = 0; x < this->width; ++x) {
					pixels->set(x, (int8_t)scanline->get(x));
				}
				$nc(this->theConsumer)->setPixels(0, y, this->width, 1, cm, pixels, 0, this->width);
			}
		} else if (dataType == $DataBuffer::TYPE_SHORT || dataType == $DataBuffer::TYPE_INT) {
			needToCvt = false;
			for (int32_t y = 0; y < this->height; ++y) {
				raster->getPixels(0, y, this->width, 1, scanline);
				$nc(this->theConsumer)->setPixels(0, y, this->width, 1, cm, scanline, 0, this->width);
			}
		}
	} else if ($instanceOf($DirectColorModel, cm)) {
		$nc(this->theConsumer)->setColorModel(cm);
		needToCvt = false;
		{
			$var($bytes, bscanline, nullptr)
			$var($shorts, sscanline, nullptr)
			switch (dataType) {
			case $DataBuffer::TYPE_INT:
				{
					for (int32_t y = 0; y < this->height; ++y) {
						raster->getDataElements(0, y, this->width, 1, scanline);
						$nc(this->theConsumer)->setPixels(0, y, this->width, 1, cm, scanline, 0, this->width);
					}
					break;
				}
			case $DataBuffer::TYPE_BYTE:
				{
					$assign(bscanline, $new($bytes, this->width));
					for (int32_t y = 0; y < this->height; ++y) {
						raster->getDataElements(0, y, this->width, 1, bscanline);
						for (int32_t x = 0; x < this->width; ++x) {
							scanline->set(x, (int32_t)($nc(bscanline)->get(x) & (uint32_t)255));
						}
						$nc(this->theConsumer)->setPixels(0, y, this->width, 1, cm, scanline, 0, this->width);
					}
					break;
				}
			case $DataBuffer::TYPE_USHORT:
				{
					$assign(sscanline, $new($shorts, this->width));
					for (int32_t y = 0; y < this->height; ++y) {
						raster->getDataElements(0, y, this->width, 1, sscanline);
						for (int32_t x = 0; x < this->width; ++x) {
							scanline->set(x, (int32_t)($nc(sscanline)->get(x) & (uint32_t)0x0000FFFF));
						}
						$nc(this->theConsumer)->setPixels(0, y, this->width, 1, cm, scanline, 0, this->width);
					}
					break;
				}
			default:
				{
					needToCvt = true;
				}
			}
		}
	}
	if (needToCvt) {
		$var($ColorModel, newcm, $ColorModel::getRGBdefault());
		$nc(this->theConsumer)->setColorModel(newcm);
		for (int32_t y = 0; y < this->height; ++y) {
			for (int32_t x = 0; x < this->width; ++x) {
				scanline->set(x, $nc(this->image)->getRGB(x, y));
			}
			$nc(this->theConsumer)->setPixels(0, y, this->width, 1, newcm, scanline, 0, this->width);
		}
	}
}

void OffScreenImageSource::produce() {
	try {
		int32_t var$0 = $nc(this->image)->getWidth();
		$nc(this->theConsumer)->setDimensions(var$0, $nc(this->image)->getHeight());
		$nc(this->theConsumer)->setProperties(this->properties);
		sendPixels();
		$nc(this->theConsumer)->imageComplete($ImageConsumer::SINGLEFRAMEDONE);
		if (this->theConsumer != nullptr) {
			try {
				$nc(this->theConsumer)->imageComplete($ImageConsumer::STATICIMAGEDONE);
			} catch ($RuntimeException& e) {
				e->printStackTrace();
			}
		}
	} catch ($NullPointerException& e) {
		e->printStackTrace();
		if (this->theConsumer != nullptr) {
			$nc(this->theConsumer)->imageComplete($ImageConsumer::IMAGEERROR);
		}
	}
}

OffScreenImageSource::OffScreenImageSource() {
}

$Class* OffScreenImageSource::load$($String* name, bool initialize) {
	$loadClass(OffScreenImageSource, name, initialize, &_OffScreenImageSource_ClassInfo_, allocate$OffScreenImageSource);
	return class$;
}

$Class* OffScreenImageSource::class$ = nullptr;

		} // image
	} // awt
} // sun