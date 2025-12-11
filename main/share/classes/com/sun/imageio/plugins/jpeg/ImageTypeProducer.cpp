#include <com/sun/imageio/plugins/jpeg/ImageTypeProducer.h>

#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

#undef JCS_GRAYSCALE
#undef JCS_RGB
#undef NUM_JCS_CODES
#undef TYPE_BYTE
#undef TYPE_BYTE_GRAY

using $ImageTypeProducerArray = $Array<::com::sun::imageio::plugins::jpeg::ImageTypeProducer>;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _ImageTypeProducer_FieldInfo_[] = {
	{"type", "Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PRIVATE, $field(ImageTypeProducer, type)},
	{"failed", "Z", nullptr, 0, $field(ImageTypeProducer, failed)},
	{"csCode", "I", nullptr, $PRIVATE, $field(ImageTypeProducer, csCode)},
	{"defaultTypes", "[Lcom/sun/imageio/plugins/jpeg/ImageTypeProducer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImageTypeProducer, defaultTypes)},
	{}
};

$MethodInfo _ImageTypeProducer_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ImageTypeProducer::*)(int32_t)>(&ImageTypeProducer::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageTypeProducer::*)()>(&ImageTypeProducer::init$))},
	{"getType", "()Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getTypeProducer", "(I)Lcom/sun/imageio/plugins/jpeg/ImageTypeProducer;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<ImageTypeProducer*(*)(int32_t)>(&ImageTypeProducer::getTypeProducer))},
	{"produce", "()Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ImageTypeProducer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.ImageTypeProducer",
	"java.lang.Object",
	nullptr,
	_ImageTypeProducer_FieldInfo_,
	_ImageTypeProducer_MethodInfo_
};

$Object* allocate$ImageTypeProducer($Class* clazz) {
	return $of($alloc(ImageTypeProducer));
}

$ImageTypeProducerArray* ImageTypeProducer::defaultTypes = nullptr;

void ImageTypeProducer::init$(int32_t csCode) {
	$set(this, type, nullptr);
	this->failed = false;
	this->csCode = csCode;
}

void ImageTypeProducer::init$() {
	$set(this, type, nullptr);
	this->failed = false;
	this->csCode = -1;
}

$ImageTypeSpecifier* ImageTypeProducer::getType() {
	$synchronized(this) {
		if (!this->failed && this->type == nullptr) {
			try {
				$set(this, type, produce());
			} catch ($Throwable& e) {
				this->failed = true;
			}
		}
		return this->type;
	}
}

ImageTypeProducer* ImageTypeProducer::getTypeProducer(int32_t csCode) {
	$load(ImageTypeProducer);
	$synchronized(class$) {
		$init(ImageTypeProducer);
		if (csCode < 0 || csCode >= $JPEG::NUM_JCS_CODES) {
			return nullptr;
		}
		if ($nc(ImageTypeProducer::defaultTypes)->get(csCode) == nullptr) {
			$nc(ImageTypeProducer::defaultTypes)->set(csCode, $$new(ImageTypeProducer, csCode));
		}
		return $nc(ImageTypeProducer::defaultTypes)->get(csCode);
	}
}

$ImageTypeSpecifier* ImageTypeProducer::produce() {
	switch (this->csCode) {
	case $JPEG::JCS_GRAYSCALE:
		{
			return $ImageTypeSpecifier::createFromBufferedImageType($BufferedImage::TYPE_BYTE_GRAY);
		}
	case $JPEG::JCS_YCbCr:
		{}
	case $JPEG::JCS_RGB:
		{
			$init($JPEG);
			return $ImageTypeSpecifier::createInterleaved($JPEG::sRGB, $JPEG::bOffsRGB, $DataBuffer::TYPE_BYTE, false, false);
		}
	default:
		{
			return nullptr;
		}
	}
}

void clinit$ImageTypeProducer($Class* class$) {
	$assignStatic(ImageTypeProducer::defaultTypes, $new($ImageTypeProducerArray, $JPEG::NUM_JCS_CODES));
}

ImageTypeProducer::ImageTypeProducer() {
}

$Class* ImageTypeProducer::load$($String* name, bool initialize) {
	$loadClass(ImageTypeProducer, name, initialize, &_ImageTypeProducer_ClassInfo_, clinit$ImageTypeProducer, allocate$ImageTypeProducer);
	return class$;
}

$Class* ImageTypeProducer::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com