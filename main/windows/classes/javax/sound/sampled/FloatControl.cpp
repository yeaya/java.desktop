#include <javax/sound/sampled/FloatControl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $FloatControl$Type = ::javax::sound::sampled::FloatControl$Type;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _FloatControl_FieldInfo_[] = {
	{"minimum", "F", nullptr, $PRIVATE | $FINAL, $field(FloatControl, minimum)},
	{"maximum", "F", nullptr, $PRIVATE | $FINAL, $field(FloatControl, maximum)},
	{"precision", "F", nullptr, $PRIVATE | $FINAL, $field(FloatControl, precision)},
	{"updatePeriod", "I", nullptr, $PRIVATE | $FINAL, $field(FloatControl, updatePeriod)},
	{"units", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FloatControl, units)},
	{"minLabel", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FloatControl, minLabel)},
	{"maxLabel", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FloatControl, maxLabel)},
	{"midLabel", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FloatControl, midLabel)},
	{"value", "F", nullptr, $PRIVATE, $field(FloatControl, value)},
	{}
};

$MethodInfo _FloatControl_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/FloatControl$Type;FFFIFLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(FloatControl::*)($FloatControl$Type*,float,float,float,int32_t,float,$String*,$String*,$String*,$String*)>(&FloatControl::init$))},
	{"<init>", "(Ljavax/sound/sampled/FloatControl$Type;FFFIFLjava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(FloatControl::*)($FloatControl$Type*,float,float,float,int32_t,float,$String*)>(&FloatControl::init$))},
	{"getMaxLabel", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMaximum", "()F", nullptr, $PUBLIC},
	{"getMidLabel", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMinLabel", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMinimum", "()F", nullptr, $PUBLIC},
	{"getPrecision", "()F", nullptr, $PUBLIC},
	{"getUnits", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUpdatePeriod", "()I", nullptr, $PUBLIC},
	{"getValue", "()F", nullptr, $PUBLIC},
	{"setValue", "(F)V", nullptr, $PUBLIC},
	{"shift", "(FFI)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FloatControl_InnerClassesInfo_[] = {
	{"javax.sound.sampled.FloatControl$Type", "javax.sound.sampled.FloatControl", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FloatControl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.sampled.FloatControl",
	"javax.sound.sampled.Control",
	nullptr,
	_FloatControl_FieldInfo_,
	_FloatControl_MethodInfo_,
	nullptr,
	nullptr,
	_FloatControl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.sampled.FloatControl$Type"
};

$Object* allocate$FloatControl($Class* clazz) {
	return $of($alloc(FloatControl));
}

void FloatControl::init$($FloatControl$Type* type, float minimum, float maximum, float precision, int32_t updatePeriod, float initialValue, $String* units, $String* minLabel, $String* midLabel, $String* maxLabel) {
	$Control::init$(type);
	if (minimum > maximum) {
		$throwNew($IllegalArgumentException, $$str({"Minimum value "_s, $$str(minimum), " exceeds maximum value "_s, $$str(maximum), "."_s}));
	}
	if (initialValue < minimum) {
		$throwNew($IllegalArgumentException, $$str({"Initial value "_s, $$str(initialValue), " smaller than allowable minimum value "_s, $$str(minimum), "."_s}));
	}
	if (initialValue > maximum) {
		$throwNew($IllegalArgumentException, $$str({"Initial value "_s, $$str(initialValue), " exceeds allowable maximum value "_s, $$str(maximum), "."_s}));
	}
	this->minimum = minimum;
	this->maximum = maximum;
	this->precision = precision;
	this->updatePeriod = updatePeriod;
	this->value = initialValue;
	$set(this, units, units);
	$set(this, minLabel, (minLabel == nullptr) ? ""_s : minLabel);
	$set(this, midLabel, (midLabel == nullptr) ? ""_s : midLabel);
	$set(this, maxLabel, (maxLabel == nullptr) ? ""_s : maxLabel);
}

void FloatControl::init$($FloatControl$Type* type, float minimum, float maximum, float precision, int32_t updatePeriod, float initialValue, $String* units) {
	FloatControl::init$(type, minimum, maximum, precision, updatePeriod, initialValue, units, ""_s, ""_s, ""_s);
}

void FloatControl::setValue(float newValue) {
	if (newValue > this->maximum) {
		$throwNew($IllegalArgumentException, $$str({"Requested value "_s, $$str(newValue), " exceeds allowable maximum value "_s, $$str(this->maximum), "."_s}));
	}
	if (newValue < this->minimum) {
		$throwNew($IllegalArgumentException, $$str({"Requested value "_s, $$str(newValue), " smaller than allowable minimum value "_s, $$str(this->minimum), "."_s}));
	}
	this->value = newValue;
}

float FloatControl::getValue() {
	return this->value;
}

float FloatControl::getMaximum() {
	return this->maximum;
}

float FloatControl::getMinimum() {
	return this->minimum;
}

$String* FloatControl::getUnits() {
	return this->units;
}

$String* FloatControl::getMinLabel() {
	return this->minLabel;
}

$String* FloatControl::getMidLabel() {
	return this->midLabel;
}

$String* FloatControl::getMaxLabel() {
	return this->maxLabel;
}

float FloatControl::getPrecision() {
	return this->precision;
}

int32_t FloatControl::getUpdatePeriod() {
	return this->updatePeriod;
}

void FloatControl::shift(float from, float to, int32_t microseconds) {
	if (from < this->minimum) {
		$throwNew($IllegalArgumentException, $$str({"Requested value "_s, $$str(from), " smaller than allowable minimum value "_s, $$str(this->minimum), "."_s}));
	}
	if (from > this->maximum) {
		$throwNew($IllegalArgumentException, $$str({"Requested value "_s, $$str(from), " exceeds allowable maximum value "_s, $$str(this->maximum), "."_s}));
	}
	setValue(to);
}

$String* FloatControl::toString() {
	return $String::format("%s with current value: %s %s (range: %s - %s)"_s, $$new($ObjectArray, {
		$($of($Control::toString())),
		$($of($Float::valueOf(getValue()))),
		$($of(getUnits())),
		$($of($Float::valueOf(getMinimum()))),
		$($of($Float::valueOf(getMaximum())))
	}));
}

FloatControl::FloatControl() {
}

$Class* FloatControl::load$($String* name, bool initialize) {
	$loadClass(FloatControl, name, initialize, &_FloatControl_ClassInfo_, allocate$FloatControl);
	return class$;
}

$Class* FloatControl::class$ = nullptr;

		} // sampled
	} // sound
} // javax