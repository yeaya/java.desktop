#include <com/sun/media/sound/ModelStandardTransform.h>

#include <java/lang/Math.h>
#include <jcpp.h>

#undef DIRECTION_MAX2MIN
#undef DIRECTION_MIN2MAX
#undef POLARITY_BIPOLAR
#undef POLARITY_UNIPOLAR
#undef TRANSFORM_ABSOLUTE
#undef TRANSFORM_CONCAVE
#undef TRANSFORM_CONVEX
#undef TRANSFORM_LINEAR
#undef TRANSFORM_SWITCH

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelStandardTransform_FieldInfo_[] = {
	{"DIRECTION_MIN2MAX", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelStandardTransform, DIRECTION_MIN2MAX)},
	{"DIRECTION_MAX2MIN", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelStandardTransform, DIRECTION_MAX2MIN)},
	{"POLARITY_UNIPOLAR", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelStandardTransform, POLARITY_UNIPOLAR)},
	{"POLARITY_BIPOLAR", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelStandardTransform, POLARITY_BIPOLAR)},
	{"TRANSFORM_LINEAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelStandardTransform, TRANSFORM_LINEAR)},
	{"TRANSFORM_CONCAVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelStandardTransform, TRANSFORM_CONCAVE)},
	{"TRANSFORM_CONVEX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelStandardTransform, TRANSFORM_CONVEX)},
	{"TRANSFORM_SWITCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelStandardTransform, TRANSFORM_SWITCH)},
	{"TRANSFORM_ABSOLUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelStandardTransform, TRANSFORM_ABSOLUTE)},
	{"direction", "Z", nullptr, $PRIVATE, $field(ModelStandardTransform, direction)},
	{"polarity", "Z", nullptr, $PRIVATE, $field(ModelStandardTransform, polarity)},
	{"transform", "I", nullptr, $PRIVATE, $field(ModelStandardTransform, transform$)},
	{}
};

$MethodInfo _ModelStandardTransform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModelStandardTransform::*)()>(&ModelStandardTransform::init$))},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(ModelStandardTransform::*)(bool)>(&ModelStandardTransform::init$))},
	{"<init>", "(ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(ModelStandardTransform::*)(bool,bool)>(&ModelStandardTransform::init$))},
	{"<init>", "(ZZI)V", nullptr, $PUBLIC, $method(static_cast<void(ModelStandardTransform::*)(bool,bool,int32_t)>(&ModelStandardTransform::init$))},
	{"getDirection", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ModelStandardTransform::*)()>(&ModelStandardTransform::getDirection))},
	{"getPolarity", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ModelStandardTransform::*)()>(&ModelStandardTransform::getPolarity))},
	{"getTransform", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ModelStandardTransform::*)()>(&ModelStandardTransform::getTransform))},
	{"setDirection", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(ModelStandardTransform::*)(bool)>(&ModelStandardTransform::setDirection))},
	{"setPolarity", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(ModelStandardTransform::*)(bool)>(&ModelStandardTransform::setPolarity))},
	{"setTransform", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ModelStandardTransform::*)(int32_t)>(&ModelStandardTransform::setTransform))},
	{"transform", "(D)D", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModelStandardTransform_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.ModelStandardTransform",
	"java.lang.Object",
	"com.sun.media.sound.ModelTransform",
	_ModelStandardTransform_FieldInfo_,
	_ModelStandardTransform_MethodInfo_
};

$Object* allocate$ModelStandardTransform($Class* clazz) {
	return $of($alloc(ModelStandardTransform));
}

void ModelStandardTransform::init$() {
	this->direction = ModelStandardTransform::DIRECTION_MIN2MAX;
	this->polarity = ModelStandardTransform::POLARITY_UNIPOLAR;
	this->transform$ = ModelStandardTransform::TRANSFORM_LINEAR;
}

void ModelStandardTransform::init$(bool direction) {
	this->direction = ModelStandardTransform::DIRECTION_MIN2MAX;
	this->polarity = ModelStandardTransform::POLARITY_UNIPOLAR;
	this->transform$ = ModelStandardTransform::TRANSFORM_LINEAR;
	this->direction = direction;
}

void ModelStandardTransform::init$(bool direction, bool polarity) {
	this->direction = ModelStandardTransform::DIRECTION_MIN2MAX;
	this->polarity = ModelStandardTransform::POLARITY_UNIPOLAR;
	this->transform$ = ModelStandardTransform::TRANSFORM_LINEAR;
	this->direction = direction;
	this->polarity = polarity;
}

void ModelStandardTransform::init$(bool direction, bool polarity, int32_t transform) {
	this->direction = ModelStandardTransform::DIRECTION_MIN2MAX;
	this->polarity = ModelStandardTransform::POLARITY_UNIPOLAR;
	this->transform$ = ModelStandardTransform::TRANSFORM_LINEAR;
	this->direction = direction;
	this->polarity = polarity;
	this->transform$ = transform;
}

double ModelStandardTransform::transform(double value) {
	double s = 0.0;
	double a = 0.0;
	if (this->direction == ModelStandardTransform::DIRECTION_MAX2MIN) {
		value = 1.0 - value;
	}
	if (this->polarity == ModelStandardTransform::POLARITY_BIPOLAR) {
		value = value * 2.0 - 1.0;
	}
	switch (this->transform$) {
	case ModelStandardTransform::TRANSFORM_CONCAVE:
		{
			s = $Math::signum(value);
			a = $Math::abs(value);
			double var$0 = -((5.0 / 12.0) / $Math::log((double)10));
			a = var$0 * $Math::log(1.0 - a);
			if (a < 0) {
				a = (double)0;
			} else if (a > 1) {
				a = (double)1;
			}
			return s * a;
		}
	case ModelStandardTransform::TRANSFORM_CONVEX:
		{
			s = $Math::signum(value);
			a = $Math::abs(value);
			double var$1 = 1.0;
			double var$3 = ((5.0 / 12.0) / $Math::log((double)10));
			double var$2 = var$3 * $Math::log(a);
			a = var$1 + var$2;
			if (a < 0) {
				a = (double)0;
			} else if (a > 1) {
				a = (double)1;
			}
			return s * a;
		}
	case ModelStandardTransform::TRANSFORM_SWITCH:
		{
			if (this->polarity == ModelStandardTransform::POLARITY_BIPOLAR) {
				return (double)((value > 0) ? 1 : -1);
			} else {
				return (double)((value > 0.5) ? 1 : 0);
			}
		}
	case ModelStandardTransform::TRANSFORM_ABSOLUTE:
		{
			return $Math::abs(value);
		}
	default:
		{
			break;
		}
	}
	return value;
}

bool ModelStandardTransform::getDirection() {
	return this->direction;
}

void ModelStandardTransform::setDirection(bool direction) {
	this->direction = direction;
}

bool ModelStandardTransform::getPolarity() {
	return this->polarity;
}

void ModelStandardTransform::setPolarity(bool polarity) {
	this->polarity = polarity;
}

int32_t ModelStandardTransform::getTransform() {
	return this->transform$;
}

void ModelStandardTransform::setTransform(int32_t transform) {
	this->transform$ = transform;
}

ModelStandardTransform::ModelStandardTransform() {
}

$Class* ModelStandardTransform::load$($String* name, bool initialize) {
	$loadClass(ModelStandardTransform, name, initialize, &_ModelStandardTransform_ClassInfo_, allocate$ModelStandardTransform);
	return class$;
}

$Class* ModelStandardTransform::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com