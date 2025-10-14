#include <javax/imageio/ImageReadParam.h>

#include <java/awt/Dimension.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/IIOParam.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Dimension = ::java::awt::Dimension;
using $Dimension2D = ::java::awt::geom::Dimension2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $IIOParam = ::javax::imageio::IIOParam;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace javax {
	namespace imageio {

$FieldInfo _ImageReadParam_FieldInfo_[] = {
	{"canSetSourceRenderSize", "Z", nullptr, $PROTECTED, $field(ImageReadParam, canSetSourceRenderSize$)},
	{"sourceRenderSize", "Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(ImageReadParam, sourceRenderSize)},
	{"destination", "Ljava/awt/image/BufferedImage;", nullptr, $PROTECTED, $field(ImageReadParam, destination)},
	{"destinationBands", "[I", nullptr, $PROTECTED, $field(ImageReadParam, destinationBands)},
	{"minProgressivePass", "I", nullptr, $PROTECTED, $field(ImageReadParam, minProgressivePass)},
	{"numProgressivePasses", "I", nullptr, $PROTECTED, $field(ImageReadParam, numProgressivePasses)},
	{}
};

$MethodInfo _ImageReadParam_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageReadParam::*)()>(&ImageReadParam::init$))},
	{"canSetSourceRenderSize", "()Z", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getDestinationBands", "()[I", nullptr, $PUBLIC},
	{"getSourceMaxProgressivePass", "()I", nullptr, $PUBLIC},
	{"getSourceMinProgressivePass", "()I", nullptr, $PUBLIC},
	{"getSourceNumProgressivePasses", "()I", nullptr, $PUBLIC},
	{"getSourceRenderSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"setDestination", "(Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC},
	{"setDestinationBands", "([I)V", nullptr, $PUBLIC},
	{"setDestinationType", "(Ljavax/imageio/ImageTypeSpecifier;)V", nullptr, $PUBLIC},
	{"setSourceProgressivePasses", "(II)V", nullptr, $PUBLIC},
	{"setSourceRenderSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{}
};

$ClassInfo _ImageReadParam_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.ImageReadParam",
	"javax.imageio.IIOParam",
	nullptr,
	_ImageReadParam_FieldInfo_,
	_ImageReadParam_MethodInfo_
};

$Object* allocate$ImageReadParam($Class* clazz) {
	return $of($alloc(ImageReadParam));
}

void ImageReadParam::init$() {
	$IIOParam::init$();
	this->canSetSourceRenderSize$ = false;
	$set(this, sourceRenderSize, nullptr);
	$set(this, destination, nullptr);
	$set(this, destinationBands, nullptr);
	this->minProgressivePass = 0;
	this->numProgressivePasses = $Integer::MAX_VALUE;
}

void ImageReadParam::setDestinationType($ImageTypeSpecifier* destinationType) {
	$IIOParam::setDestinationType(destinationType);
	setDestination(nullptr);
}

void ImageReadParam::setDestination($BufferedImage* destination) {
	$set(this, destination, destination);
}

$BufferedImage* ImageReadParam::getDestination() {
	return this->destination;
}

void ImageReadParam::setDestinationBands($ints* destinationBands) {
	if (destinationBands == nullptr) {
		$set(this, destinationBands, nullptr);
	} else {
		int32_t numBands = $nc(destinationBands)->length;
		for (int32_t i = 0; i < numBands; ++i) {
			int32_t band = destinationBands->get(i);
			if (band < 0) {
				$throwNew($IllegalArgumentException, "Band value < 0!"_s);
			}
			for (int32_t j = i + 1; j < numBands; ++j) {
				if (band == destinationBands->get(j)) {
					$throwNew($IllegalArgumentException, "Duplicate band value!"_s);
				}
			}
		}
		$set(this, destinationBands, $cast($ints, destinationBands->clone()));
	}
}

$ints* ImageReadParam::getDestinationBands() {
	if (this->destinationBands == nullptr) {
		return nullptr;
	} else {
		return $cast($ints, $nc(this->destinationBands)->clone());
	}
}

bool ImageReadParam::canSetSourceRenderSize() {
	return this->canSetSourceRenderSize$;
}

void ImageReadParam::setSourceRenderSize($Dimension* size) {
	if (!canSetSourceRenderSize()) {
		$throwNew($UnsupportedOperationException, "Can\'t set source render size!"_s);
	}
	if (size == nullptr) {
		$set(this, sourceRenderSize, nullptr);
	} else {
		if ($nc(size)->width <= 0 || $nc(size)->height <= 0) {
			$throwNew($IllegalArgumentException, "width or height <= 0!"_s);
		}
		$set(this, sourceRenderSize, $cast($Dimension, $nc(size)->clone()));
	}
}

$Dimension* ImageReadParam::getSourceRenderSize() {
	return (this->sourceRenderSize == nullptr) ? ($Dimension*)nullptr : $cast($Dimension, $nc(this->sourceRenderSize)->clone());
}

void ImageReadParam::setSourceProgressivePasses(int32_t minPass, int32_t numPasses) {
	if (minPass < 0) {
		$throwNew($IllegalArgumentException, "minPass < 0!"_s);
	}
	if (numPasses <= 0) {
		$throwNew($IllegalArgumentException, "numPasses <= 0!"_s);
	}
	if ((numPasses != $Integer::MAX_VALUE) && (((int32_t)((minPass + numPasses - 1) & (uint32_t)(int32_t)0x80000000)) != 0)) {
		$throwNew($IllegalArgumentException, "minPass + numPasses - 1 > INTEGER.MAX_VALUE!"_s);
	}
	this->minProgressivePass = minPass;
	this->numProgressivePasses = numPasses;
}

int32_t ImageReadParam::getSourceMinProgressivePass() {
	return this->minProgressivePass;
}

int32_t ImageReadParam::getSourceMaxProgressivePass() {
	if (this->numProgressivePasses == $Integer::MAX_VALUE) {
		return $Integer::MAX_VALUE;
	} else {
		return this->minProgressivePass + this->numProgressivePasses - 1;
	}
}

int32_t ImageReadParam::getSourceNumProgressivePasses() {
	return this->numProgressivePasses;
}

ImageReadParam::ImageReadParam() {
}

$Class* ImageReadParam::load$($String* name, bool initialize) {
	$loadClass(ImageReadParam, name, initialize, &_ImageReadParam_ClassInfo_, allocate$ImageReadParam);
	return class$;
}

$Class* ImageReadParam::class$ = nullptr;

	} // imageio
} // javax