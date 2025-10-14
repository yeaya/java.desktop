#include <javax/imageio/ImageTypeSpecifier$Grayscale.h>

#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/SampleModel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

#undef CS_GRAY
#undef OPAQUE
#undef TRANSLUCENT
#undef TYPE_BYTE
#undef TYPE_SHORT
#undef TYPE_USHORT

using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $SampleModel = ::java::awt::image::SampleModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace javax {
	namespace imageio {

$FieldInfo _ImageTypeSpecifier$Grayscale_FieldInfo_[] = {
	{"bits", "I", nullptr, 0, $field(ImageTypeSpecifier$Grayscale, bits)},
	{"dataType", "I", nullptr, 0, $field(ImageTypeSpecifier$Grayscale, dataType)},
	{"isSigned", "Z", nullptr, 0, $field(ImageTypeSpecifier$Grayscale, isSigned)},
	{"hasAlpha", "Z", nullptr, 0, $field(ImageTypeSpecifier$Grayscale, hasAlpha)},
	{"isAlphaPremultiplied", "Z", nullptr, 0, $field(ImageTypeSpecifier$Grayscale, isAlphaPremultiplied)},
	{}
};

$MethodInfo _ImageTypeSpecifier$Grayscale_MethodInfo_[] = {
	{"<init>", "(IIZZZ)V", nullptr, $PUBLIC, $method(static_cast<void(ImageTypeSpecifier$Grayscale::*)(int32_t,int32_t,bool,bool,bool)>(&ImageTypeSpecifier$Grayscale::init$))},
	{}
};

$InnerClassInfo _ImageTypeSpecifier$Grayscale_InnerClassesInfo_[] = {
	{"javax.imageio.ImageTypeSpecifier$Grayscale", "javax.imageio.ImageTypeSpecifier", "Grayscale", $STATIC},
	{}
};

$ClassInfo _ImageTypeSpecifier$Grayscale_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.ImageTypeSpecifier$Grayscale",
	"javax.imageio.ImageTypeSpecifier",
	nullptr,
	_ImageTypeSpecifier$Grayscale_FieldInfo_,
	_ImageTypeSpecifier$Grayscale_MethodInfo_,
	nullptr,
	nullptr,
	_ImageTypeSpecifier$Grayscale_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageTypeSpecifier"
};

$Object* allocate$ImageTypeSpecifier$Grayscale($Class* clazz) {
	return $of($alloc(ImageTypeSpecifier$Grayscale));
}

void ImageTypeSpecifier$Grayscale::init$(int32_t bits, int32_t dataType, bool isSigned, bool hasAlpha, bool isAlphaPremultiplied) {
	$ImageTypeSpecifier::init$();
	if (bits != 1 && bits != 2 && bits != 4 && bits != 8 && bits != 16) {
		$throwNew($IllegalArgumentException, "Bad value for bits!"_s);
	}
	if (dataType != $DataBuffer::TYPE_BYTE && dataType != $DataBuffer::TYPE_SHORT && dataType != $DataBuffer::TYPE_USHORT) {
		$throwNew($IllegalArgumentException, "Bad value for dataType!"_s);
	}
	if (bits > 8 && dataType == $DataBuffer::TYPE_BYTE) {
		$throwNew($IllegalArgumentException, "Too many bits for dataType!"_s);
	}
	this->bits = bits;
	this->dataType = dataType;
	this->isSigned = isSigned;
	this->hasAlpha = hasAlpha;
	this->isAlphaPremultiplied = isAlphaPremultiplied;
	$var($ColorSpace, colorSpace, $ColorSpace::getInstance($ColorSpace::CS_GRAY));
	if ((bits == 8 && dataType == $DataBuffer::TYPE_BYTE) || (bits == 16 && (dataType == $DataBuffer::TYPE_SHORT || dataType == $DataBuffer::TYPE_USHORT))) {
		int32_t numBands = hasAlpha ? 2 : 1;
		int32_t transparency = hasAlpha ? $Transparency::TRANSLUCENT : $Transparency::OPAQUE;
		$var($ints, nBits, $new($ints, numBands));
		nBits->set(0, bits);
		if (numBands == 2) {
			nBits->set(1, bits);
		}
		$set(this, colorModel, $new($ComponentColorModel, colorSpace, nBits, hasAlpha, isAlphaPremultiplied, transparency, dataType));
		$var($ints, bandOffsets, $new($ints, numBands));
		bandOffsets->set(0, 0);
		if (numBands == 2) {
			bandOffsets->set(1, 1);
		}
		int32_t w = 1;
		int32_t h = 1;
		$set(this, sampleModel, $new($PixelInterleavedSampleModel, dataType, w, h, numBands, w * numBands, bandOffsets));
	} else {
		int32_t numEntries = $sl(1, bits);
		$var($bytes, arr, $new($bytes, numEntries));
		for (int32_t i = 0; i < numEntries; ++i) {
			arr->set(i, (int8_t)($div(i * 255, (numEntries - 1))));
		}
		$set(this, colorModel, $new($IndexColorModel, bits, numEntries, arr, arr, arr));
		$set(this, sampleModel, $new($MultiPixelPackedSampleModel, dataType, 1, 1, bits));
	}
}

ImageTypeSpecifier$Grayscale::ImageTypeSpecifier$Grayscale() {
}

$Class* ImageTypeSpecifier$Grayscale::load$($String* name, bool initialize) {
	$loadClass(ImageTypeSpecifier$Grayscale, name, initialize, &_ImageTypeSpecifier$Grayscale_ClassInfo_, allocate$ImageTypeSpecifier$Grayscale);
	return class$;
}

$Class* ImageTypeSpecifier$Grayscale::class$ = nullptr;

	} // imageio
} // javax