#include <javax/imageio/ImageTypeSpecifier$Indexed.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/SampleModel.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $ColorModel = ::java::awt::image::ColorModel;
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

$FieldInfo _ImageTypeSpecifier$Indexed_FieldInfo_[] = {
	{"redLUT", "[B", nullptr, 0, $field(ImageTypeSpecifier$Indexed, redLUT)},
	{"greenLUT", "[B", nullptr, 0, $field(ImageTypeSpecifier$Indexed, greenLUT)},
	{"blueLUT", "[B", nullptr, 0, $field(ImageTypeSpecifier$Indexed, blueLUT)},
	{"alphaLUT", "[B", nullptr, 0, $field(ImageTypeSpecifier$Indexed, alphaLUT)},
	{"bits", "I", nullptr, 0, $field(ImageTypeSpecifier$Indexed, bits)},
	{"dataType", "I", nullptr, 0, $field(ImageTypeSpecifier$Indexed, dataType)},
	{}
};

$MethodInfo _ImageTypeSpecifier$Indexed_MethodInfo_[] = {
	{"<init>", "([B[B[B[BII)V", nullptr, $PUBLIC, $method(static_cast<void(ImageTypeSpecifier$Indexed::*)($bytes*,$bytes*,$bytes*,$bytes*,int32_t,int32_t)>(&ImageTypeSpecifier$Indexed::init$))},
	{}
};

$InnerClassInfo _ImageTypeSpecifier$Indexed_InnerClassesInfo_[] = {
	{"javax.imageio.ImageTypeSpecifier$Indexed", "javax.imageio.ImageTypeSpecifier", "Indexed", $STATIC},
	{}
};

$ClassInfo _ImageTypeSpecifier$Indexed_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.ImageTypeSpecifier$Indexed",
	"javax.imageio.ImageTypeSpecifier",
	nullptr,
	_ImageTypeSpecifier$Indexed_FieldInfo_,
	_ImageTypeSpecifier$Indexed_MethodInfo_,
	nullptr,
	nullptr,
	_ImageTypeSpecifier$Indexed_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageTypeSpecifier"
};

$Object* allocate$ImageTypeSpecifier$Indexed($Class* clazz) {
	return $of($alloc(ImageTypeSpecifier$Indexed));
}

void ImageTypeSpecifier$Indexed::init$($bytes* redLUT, $bytes* greenLUT, $bytes* blueLUT, $bytes* alphaLUT, int32_t bits, int32_t dataType) {
	$ImageTypeSpecifier::init$();
	$set(this, alphaLUT, nullptr);
	if (redLUT == nullptr || greenLUT == nullptr || blueLUT == nullptr) {
		$throwNew($IllegalArgumentException, "LUT is null!"_s);
	}
	if (bits != 1 && bits != 2 && bits != 4 && bits != 8 && bits != 16) {
		$throwNew($IllegalArgumentException, "Bad value for bits!"_s);
	}
	if (dataType != $DataBuffer::TYPE_BYTE && dataType != $DataBuffer::TYPE_SHORT && dataType != $DataBuffer::TYPE_USHORT && dataType != $DataBuffer::TYPE_INT) {
		$throwNew($IllegalArgumentException, "Bad value for dataType!"_s);
	}
	if ((bits > 8 && dataType == $DataBuffer::TYPE_BYTE) || (bits > 16 && dataType != $DataBuffer::TYPE_INT)) {
		$throwNew($IllegalArgumentException, "Too many bits for dataType!"_s);
	}
	int32_t len = $sl(1, bits);
	if ($nc(redLUT)->length != len || $nc(greenLUT)->length != len || $nc(blueLUT)->length != len || (alphaLUT != nullptr && alphaLUT->length != len)) {
		$throwNew($IllegalArgumentException, "LUT has improper length!"_s);
	}
	$set(this, redLUT, $cast($bytes, $nc(redLUT)->clone()));
	$set(this, greenLUT, $cast($bytes, $nc(greenLUT)->clone()));
	$set(this, blueLUT, $cast($bytes, $nc(blueLUT)->clone()));
	if (alphaLUT != nullptr) {
		$set(this, alphaLUT, $cast($bytes, alphaLUT->clone()));
	}
	this->bits = bits;
	this->dataType = dataType;
	if (alphaLUT == nullptr) {
		$set(this, colorModel, $new($IndexColorModel, bits, redLUT->length, redLUT, greenLUT, blueLUT));
	} else {
		$set(this, colorModel, $new($IndexColorModel, bits, redLUT->length, redLUT, greenLUT, blueLUT, alphaLUT));
	}
	if ((bits == 8 && dataType == $DataBuffer::TYPE_BYTE) || (bits == 16 && (dataType == $DataBuffer::TYPE_SHORT || dataType == $DataBuffer::TYPE_USHORT))) {
		$var($ints, bandOffsets, $new($ints, {0}));
		$set(this, sampleModel, $new($PixelInterleavedSampleModel, dataType, 1, 1, 1, 1, bandOffsets));
	} else {
		$set(this, sampleModel, $new($MultiPixelPackedSampleModel, dataType, 1, 1, bits));
	}
}

ImageTypeSpecifier$Indexed::ImageTypeSpecifier$Indexed() {
}

$Class* ImageTypeSpecifier$Indexed::load$($String* name, bool initialize) {
	$loadClass(ImageTypeSpecifier$Indexed, name, initialize, &_ImageTypeSpecifier$Indexed_ClassInfo_, allocate$ImageTypeSpecifier$Indexed);
	return class$;
}

$Class* ImageTypeSpecifier$Indexed::class$ = nullptr;

	} // imageio
} // javax