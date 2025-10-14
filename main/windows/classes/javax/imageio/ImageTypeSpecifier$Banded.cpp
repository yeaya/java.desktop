#include <javax/imageio/ImageTypeSpecifier$Banded.h>

#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BandedSampleModel.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
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

#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $ColorSpace = ::java::awt::color::ColorSpace;
using $BandedSampleModel = ::java::awt::image::BandedSampleModel;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $SampleModel = ::java::awt::image::SampleModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace javax {
	namespace imageio {

$FieldInfo _ImageTypeSpecifier$Banded_FieldInfo_[] = {
	{"colorSpace", "Ljava/awt/color/ColorSpace;", nullptr, 0, $field(ImageTypeSpecifier$Banded, colorSpace)},
	{"bankIndices", "[I", nullptr, 0, $field(ImageTypeSpecifier$Banded, bankIndices)},
	{"bandOffsets", "[I", nullptr, 0, $field(ImageTypeSpecifier$Banded, bandOffsets)},
	{"dataType", "I", nullptr, 0, $field(ImageTypeSpecifier$Banded, dataType)},
	{"hasAlpha", "Z", nullptr, 0, $field(ImageTypeSpecifier$Banded, hasAlpha)},
	{"isAlphaPremultiplied", "Z", nullptr, 0, $field(ImageTypeSpecifier$Banded, isAlphaPremultiplied)},
	{}
};

$MethodInfo _ImageTypeSpecifier$Banded_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/color/ColorSpace;[I[IIZZ)V", nullptr, $PUBLIC, $method(static_cast<void(ImageTypeSpecifier$Banded::*)($ColorSpace*,$ints*,$ints*,int32_t,bool,bool)>(&ImageTypeSpecifier$Banded::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageTypeSpecifier$Banded_InnerClassesInfo_[] = {
	{"javax.imageio.ImageTypeSpecifier$Banded", "javax.imageio.ImageTypeSpecifier", "Banded", $STATIC},
	{}
};

$ClassInfo _ImageTypeSpecifier$Banded_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.ImageTypeSpecifier$Banded",
	"javax.imageio.ImageTypeSpecifier",
	nullptr,
	_ImageTypeSpecifier$Banded_FieldInfo_,
	_ImageTypeSpecifier$Banded_MethodInfo_,
	nullptr,
	nullptr,
	_ImageTypeSpecifier$Banded_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageTypeSpecifier"
};

$Object* allocate$ImageTypeSpecifier$Banded($Class* clazz) {
	return $of($alloc(ImageTypeSpecifier$Banded));
}

void ImageTypeSpecifier$Banded::init$($ColorSpace* colorSpace, $ints* bankIndices, $ints* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied) {
	$ImageTypeSpecifier::init$();
	if (colorSpace == nullptr) {
		$throwNew($IllegalArgumentException, "colorSpace == null!"_s);
	}
	if (bankIndices == nullptr) {
		$throwNew($IllegalArgumentException, "bankIndices == null!"_s);
	}
	if (bandOffsets == nullptr) {
		$throwNew($IllegalArgumentException, "bandOffsets == null!"_s);
	}
	if ($nc(bankIndices)->length != $nc(bandOffsets)->length) {
		$throwNew($IllegalArgumentException, "bankIndices.length != bandOffsets.length!"_s);
	}
	if (dataType != $DataBuffer::TYPE_BYTE && dataType != $DataBuffer::TYPE_SHORT && dataType != $DataBuffer::TYPE_USHORT && dataType != $DataBuffer::TYPE_INT && dataType != $DataBuffer::TYPE_FLOAT && dataType != $DataBuffer::TYPE_DOUBLE) {
		$throwNew($IllegalArgumentException, "Bad value for dataType!"_s);
	}
	int32_t numBands = $nc(colorSpace)->getNumComponents() + (hasAlpha ? 1 : 0);
	if ($nc(bandOffsets)->length != numBands) {
		$throwNew($IllegalArgumentException, "bandOffsets.length is wrong!"_s);
	}
	$set(this, colorSpace, colorSpace);
	$set(this, bankIndices, $cast($ints, $nc(bankIndices)->clone()));
	$set(this, bandOffsets, $cast($ints, $nc(bandOffsets)->clone()));
	this->dataType = dataType;
	this->hasAlpha = hasAlpha;
	this->isAlphaPremultiplied = isAlphaPremultiplied;
	$set(this, colorModel, $ImageTypeSpecifier::createComponentCM(colorSpace, bankIndices->length, dataType, hasAlpha, isAlphaPremultiplied));
	int32_t w = 1;
	int32_t h = 1;
	$set(this, sampleModel, $new($BandedSampleModel, dataType, w, h, w, bankIndices, bandOffsets));
}

bool ImageTypeSpecifier$Banded::equals(Object$* o) {
	if ((o == nullptr) || !($instanceOf(ImageTypeSpecifier$Banded, o))) {
		return false;
	}
	$var(ImageTypeSpecifier$Banded, that, $cast(ImageTypeSpecifier$Banded, o));
	if ((!($nc($of(this->colorSpace))->equals($nc(that)->colorSpace))) || (this->dataType != $nc(that)->dataType) || (this->hasAlpha != $nc(that)->hasAlpha) || (this->isAlphaPremultiplied != $nc(that)->isAlphaPremultiplied) || ($nc(this->bankIndices)->length != $nc($nc(that)->bankIndices)->length) || ($nc(this->bandOffsets)->length != $nc($nc(that)->bandOffsets)->length)) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->bankIndices)->length; ++i) {
		if ($nc(this->bankIndices)->get(i) != $nc($nc(that)->bankIndices)->get(i)) {
			return false;
		}
	}
	for (int32_t i = 0; i < $nc(this->bandOffsets)->length; ++i) {
		if ($nc(this->bandOffsets)->get(i) != $nc($nc(that)->bandOffsets)->get(i)) {
			return false;
		}
	}
	return true;
}

int32_t ImageTypeSpecifier$Banded::hashCode() {
	return ($ImageTypeSpecifier::hashCode() + (3 * $nc(this->bandOffsets)->length) + (7 * $nc(this->bankIndices)->length) + (21 * this->dataType) + (this->hasAlpha ? 19 : 29));
}

ImageTypeSpecifier$Banded::ImageTypeSpecifier$Banded() {
}

$Class* ImageTypeSpecifier$Banded::load$($String* name, bool initialize) {
	$loadClass(ImageTypeSpecifier$Banded, name, initialize, &_ImageTypeSpecifier$Banded_ClassInfo_, allocate$ImageTypeSpecifier$Banded);
	return class$;
}

$Class* ImageTypeSpecifier$Banded::class$ = nullptr;

	} // imageio
} // javax