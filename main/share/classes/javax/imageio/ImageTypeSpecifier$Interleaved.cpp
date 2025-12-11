#include <javax/imageio/ImageTypeSpecifier$Interleaved.h>

#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/SampleModel.h>
#include <java/lang/Math.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $ColorSpace = ::java::awt::color::ColorSpace;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $SampleModel = ::java::awt::image::SampleModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace javax {
	namespace imageio {

$FieldInfo _ImageTypeSpecifier$Interleaved_FieldInfo_[] = {
	{"colorSpace", "Ljava/awt/color/ColorSpace;", nullptr, 0, $field(ImageTypeSpecifier$Interleaved, colorSpace)},
	{"bandOffsets", "[I", nullptr, 0, $field(ImageTypeSpecifier$Interleaved, bandOffsets)},
	{"dataType", "I", nullptr, 0, $field(ImageTypeSpecifier$Interleaved, dataType)},
	{"hasAlpha", "Z", nullptr, 0, $field(ImageTypeSpecifier$Interleaved, hasAlpha)},
	{"isAlphaPremultiplied", "Z", nullptr, 0, $field(ImageTypeSpecifier$Interleaved, isAlphaPremultiplied)},
	{}
};

$MethodInfo _ImageTypeSpecifier$Interleaved_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/color/ColorSpace;[IIZZ)V", nullptr, $PUBLIC, $method(static_cast<void(ImageTypeSpecifier$Interleaved::*)($ColorSpace*,$ints*,int32_t,bool,bool)>(&ImageTypeSpecifier$Interleaved::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageTypeSpecifier$Interleaved_InnerClassesInfo_[] = {
	{"javax.imageio.ImageTypeSpecifier$Interleaved", "javax.imageio.ImageTypeSpecifier", "Interleaved", $STATIC},
	{}
};

$ClassInfo _ImageTypeSpecifier$Interleaved_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.ImageTypeSpecifier$Interleaved",
	"javax.imageio.ImageTypeSpecifier",
	nullptr,
	_ImageTypeSpecifier$Interleaved_FieldInfo_,
	_ImageTypeSpecifier$Interleaved_MethodInfo_,
	nullptr,
	nullptr,
	_ImageTypeSpecifier$Interleaved_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageTypeSpecifier"
};

$Object* allocate$ImageTypeSpecifier$Interleaved($Class* clazz) {
	return $of($alloc(ImageTypeSpecifier$Interleaved));
}

void ImageTypeSpecifier$Interleaved::init$($ColorSpace* colorSpace, $ints* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied) {
	$ImageTypeSpecifier::init$();
	if (colorSpace == nullptr) {
		$throwNew($IllegalArgumentException, "colorSpace == null!"_s);
	}
	if (bandOffsets == nullptr) {
		$throwNew($IllegalArgumentException, "bandOffsets == null!"_s);
	}
	int32_t numBands = $nc(colorSpace)->getNumComponents() + (hasAlpha ? 1 : 0);
	if ($nc(bandOffsets)->length != numBands) {
		$throwNew($IllegalArgumentException, "bandOffsets.length is wrong!"_s);
	}
	if (dataType != $DataBuffer::TYPE_BYTE && dataType != $DataBuffer::TYPE_SHORT && dataType != $DataBuffer::TYPE_USHORT && dataType != $DataBuffer::TYPE_INT && dataType != $DataBuffer::TYPE_FLOAT && dataType != $DataBuffer::TYPE_DOUBLE) {
		$throwNew($IllegalArgumentException, "Bad value for dataType!"_s);
	}
	$set(this, colorSpace, colorSpace);
	$set(this, bandOffsets, $cast($ints, $nc(bandOffsets)->clone()));
	this->dataType = dataType;
	this->hasAlpha = hasAlpha;
	this->isAlphaPremultiplied = isAlphaPremultiplied;
	$set(this, colorModel, $ImageTypeSpecifier::createComponentCM(colorSpace, bandOffsets->length, dataType, hasAlpha, isAlphaPremultiplied));
	int32_t minBandOffset = bandOffsets->get(0);
	int32_t maxBandOffset = minBandOffset;
	for (int32_t i = 0; i < bandOffsets->length; ++i) {
		int32_t offset = bandOffsets->get(i);
		minBandOffset = $Math::min(offset, minBandOffset);
		maxBandOffset = $Math::max(offset, maxBandOffset);
	}
	int32_t pixelStride = maxBandOffset - minBandOffset + 1;
	int32_t w = 1;
	int32_t h = 1;
	$set(this, sampleModel, $new($PixelInterleavedSampleModel, dataType, w, h, pixelStride, w * pixelStride, bandOffsets));
}

bool ImageTypeSpecifier$Interleaved::equals(Object$* o) {
	if ((o == nullptr) || !($instanceOf(ImageTypeSpecifier$Interleaved, o))) {
		return false;
	}
	$var(ImageTypeSpecifier$Interleaved, that, $cast(ImageTypeSpecifier$Interleaved, o));
	if ((!($nc($of(this->colorSpace))->equals($nc(that)->colorSpace))) || (this->dataType != $nc(that)->dataType) || (this->hasAlpha != $nc(that)->hasAlpha) || (this->isAlphaPremultiplied != $nc(that)->isAlphaPremultiplied) || ($nc(this->bandOffsets)->length != $nc($nc(that)->bandOffsets)->length)) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->bandOffsets)->length; ++i) {
		if ($nc(this->bandOffsets)->get(i) != $nc($nc(that)->bandOffsets)->get(i)) {
			return false;
		}
	}
	return true;
}

int32_t ImageTypeSpecifier$Interleaved::hashCode() {
	return ($ImageTypeSpecifier::hashCode() + (4 * $nc(this->bandOffsets)->length) + (25 * this->dataType) + (this->hasAlpha ? 17 : 18));
}

ImageTypeSpecifier$Interleaved::ImageTypeSpecifier$Interleaved() {
}

$Class* ImageTypeSpecifier$Interleaved::load$($String* name, bool initialize) {
	$loadClass(ImageTypeSpecifier$Interleaved, name, initialize, &_ImageTypeSpecifier$Interleaved_ClassInfo_, allocate$ImageTypeSpecifier$Interleaved);
	return class$;
}

$Class* ImageTypeSpecifier$Interleaved::class$ = nullptr;

	} // imageio
} // javax