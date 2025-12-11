#include <javax/imageio/IIOParam.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/IllegalStateException.h>
#include <javax/imageio/IIOParamController.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOParamController = ::javax::imageio::IIOParamController;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace javax {
	namespace imageio {

$FieldInfo _IIOParam_FieldInfo_[] = {
	{"sourceRegion", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(IIOParam, sourceRegion)},
	{"sourceXSubsampling", "I", nullptr, $PROTECTED, $field(IIOParam, sourceXSubsampling)},
	{"sourceYSubsampling", "I", nullptr, $PROTECTED, $field(IIOParam, sourceYSubsampling)},
	{"subsamplingXOffset", "I", nullptr, $PROTECTED, $field(IIOParam, subsamplingXOffset)},
	{"subsamplingYOffset", "I", nullptr, $PROTECTED, $field(IIOParam, subsamplingYOffset)},
	{"sourceBands", "[I", nullptr, $PROTECTED, $field(IIOParam, sourceBands)},
	{"destinationType", "Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PROTECTED, $field(IIOParam, destinationType)},
	{"destinationOffset", "Ljava/awt/Point;", nullptr, $PROTECTED, $field(IIOParam, destinationOffset)},
	{"defaultController", "Ljavax/imageio/IIOParamController;", nullptr, $PROTECTED, $field(IIOParam, defaultController)},
	{"controller", "Ljavax/imageio/IIOParamController;", nullptr, $PROTECTED, $field(IIOParam, controller)},
	{}
};

$MethodInfo _IIOParam_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(IIOParam::*)()>(&IIOParam::init$))},
	{"activateController", "()Z", nullptr, $PUBLIC},
	{"getController", "()Ljavax/imageio/IIOParamController;", nullptr, $PUBLIC},
	{"getDefaultController", "()Ljavax/imageio/IIOParamController;", nullptr, $PUBLIC},
	{"getDestinationOffset", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getDestinationType", "()Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC},
	{"getSourceBands", "()[I", nullptr, $PUBLIC},
	{"getSourceRegion", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getSourceXSubsampling", "()I", nullptr, $PUBLIC},
	{"getSourceYSubsampling", "()I", nullptr, $PUBLIC},
	{"getSubsamplingXOffset", "()I", nullptr, $PUBLIC},
	{"getSubsamplingYOffset", "()I", nullptr, $PUBLIC},
	{"hasController", "()Z", nullptr, $PUBLIC},
	{"setController", "(Ljavax/imageio/IIOParamController;)V", nullptr, $PUBLIC},
	{"setDestinationOffset", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"setDestinationType", "(Ljavax/imageio/ImageTypeSpecifier;)V", nullptr, $PUBLIC},
	{"setSourceBands", "([I)V", nullptr, $PUBLIC},
	{"setSourceRegion", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setSourceSubsampling", "(IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IIOParam_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.IIOParam",
	"java.lang.Object",
	nullptr,
	_IIOParam_FieldInfo_,
	_IIOParam_MethodInfo_
};

$Object* allocate$IIOParam($Class* clazz) {
	return $of($alloc(IIOParam));
}

void IIOParam::init$() {
	$set(this, sourceRegion, nullptr);
	this->sourceXSubsampling = 1;
	this->sourceYSubsampling = 1;
	this->subsamplingXOffset = 0;
	this->subsamplingYOffset = 0;
	$set(this, sourceBands, nullptr);
	$set(this, destinationType, nullptr);
	$set(this, destinationOffset, $new($Point, 0, 0));
	$set(this, defaultController, nullptr);
	$set(this, controller, nullptr);
	$set(this, controller, this->defaultController);
}

void IIOParam::setSourceRegion($Rectangle* sourceRegion) {
	if (sourceRegion == nullptr) {
		$set(this, sourceRegion, nullptr);
		return;
	}
	if ($nc(sourceRegion)->x < 0) {
		$throwNew($IllegalArgumentException, "sourceRegion.x < 0!"_s);
	}
	if ($nc(sourceRegion)->y < 0) {
		$throwNew($IllegalArgumentException, "sourceRegion.y < 0!"_s);
	}
	if ($nc(sourceRegion)->width <= 0) {
		$throwNew($IllegalArgumentException, "sourceRegion.width <= 0!"_s);
	}
	if ($nc(sourceRegion)->height <= 0) {
		$throwNew($IllegalArgumentException, "sourceRegion.height <= 0!"_s);
	}
	if ($nc(sourceRegion)->width <= this->subsamplingXOffset) {
		$throwNew($IllegalStateException, "sourceRegion.width <= subsamplingXOffset!"_s);
	}
	if ($nc(sourceRegion)->height <= this->subsamplingYOffset) {
		$throwNew($IllegalStateException, "sourceRegion.height <= subsamplingYOffset!"_s);
	}
	$set(this, sourceRegion, $cast($Rectangle, $nc(sourceRegion)->clone()));
}

$Rectangle* IIOParam::getSourceRegion() {
	if (this->sourceRegion == nullptr) {
		return nullptr;
	}
	return $cast($Rectangle, $nc(this->sourceRegion)->clone());
}

void IIOParam::setSourceSubsampling(int32_t sourceXSubsampling, int32_t sourceYSubsampling, int32_t subsamplingXOffset, int32_t subsamplingYOffset) {
	if (sourceXSubsampling <= 0) {
		$throwNew($IllegalArgumentException, "sourceXSubsampling <= 0!"_s);
	}
	if (sourceYSubsampling <= 0) {
		$throwNew($IllegalArgumentException, "sourceYSubsampling <= 0!"_s);
	}
	if (subsamplingXOffset < 0 || subsamplingXOffset >= sourceXSubsampling) {
		$throwNew($IllegalArgumentException, "subsamplingXOffset out of range!"_s);
	}
	if (subsamplingYOffset < 0 || subsamplingYOffset >= sourceYSubsampling) {
		$throwNew($IllegalArgumentException, "subsamplingYOffset out of range!"_s);
	}
	if (this->sourceRegion != nullptr) {
		if (subsamplingXOffset >= $nc(this->sourceRegion)->width || subsamplingYOffset >= $nc(this->sourceRegion)->height) {
			$throwNew($IllegalStateException, "region contains no pixels!"_s);
		}
	}
	this->sourceXSubsampling = sourceXSubsampling;
	this->sourceYSubsampling = sourceYSubsampling;
	this->subsamplingXOffset = subsamplingXOffset;
	this->subsamplingYOffset = subsamplingYOffset;
}

int32_t IIOParam::getSourceXSubsampling() {
	return this->sourceXSubsampling;
}

int32_t IIOParam::getSourceYSubsampling() {
	return this->sourceYSubsampling;
}

int32_t IIOParam::getSubsamplingXOffset() {
	return this->subsamplingXOffset;
}

int32_t IIOParam::getSubsamplingYOffset() {
	return this->subsamplingYOffset;
}

void IIOParam::setSourceBands($ints* sourceBands) {
	if (sourceBands == nullptr) {
		$set(this, sourceBands, nullptr);
	} else {
		int32_t numBands = $nc(sourceBands)->length;
		for (int32_t i = 0; i < numBands; ++i) {
			int32_t band = sourceBands->get(i);
			if (band < 0) {
				$throwNew($IllegalArgumentException, "Band value < 0!"_s);
			}
			for (int32_t j = i + 1; j < numBands; ++j) {
				if (band == sourceBands->get(j)) {
					$throwNew($IllegalArgumentException, "Duplicate band value!"_s);
				}
			}
		}
		$set(this, sourceBands, $cast($ints, sourceBands->clone()));
	}
}

$ints* IIOParam::getSourceBands() {
	if (this->sourceBands == nullptr) {
		return nullptr;
	}
	return ($cast($ints, $nc(this->sourceBands)->clone()));
}

void IIOParam::setDestinationType($ImageTypeSpecifier* destinationType) {
	$set(this, destinationType, destinationType);
}

$ImageTypeSpecifier* IIOParam::getDestinationType() {
	return this->destinationType;
}

void IIOParam::setDestinationOffset($Point* destinationOffset) {
	if (destinationOffset == nullptr) {
		$throwNew($IllegalArgumentException, "destinationOffset == null!"_s);
	}
	$set(this, destinationOffset, $cast($Point, $nc(destinationOffset)->clone()));
}

$Point* IIOParam::getDestinationOffset() {
	return $cast($Point, $nc(this->destinationOffset)->clone());
}

void IIOParam::setController($IIOParamController* controller) {
	$set(this, controller, controller);
}

$IIOParamController* IIOParam::getController() {
	return this->controller;
}

$IIOParamController* IIOParam::getDefaultController() {
	return this->defaultController;
}

bool IIOParam::hasController() {
	return (this->controller != nullptr);
}

bool IIOParam::activateController() {
	if (!hasController()) {
		$throwNew($IllegalStateException, "hasController() == false!"_s);
	}
	return $nc($(getController()))->activate(this);
}

IIOParam::IIOParam() {
}

$Class* IIOParam::load$($String* name, bool initialize) {
	$loadClass(IIOParam, name, initialize, &_IIOParam_ClassInfo_, allocate$IIOParam);
	return class$;
}

$Class* IIOParam::class$ = nullptr;

	} // imageio
} // javax