#include <com/sun/media/sound/SF2Modulator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef SOURCE_CHANNEL_PRESSURE
#undef SOURCE_DIRECTION_MAX_MIN
#undef SOURCE_DIRECTION_MIN_MAX
#undef SOURCE_MIDI_CONTROL
#undef SOURCE_NONE
#undef SOURCE_NOTE_ON_KEYNUMBER
#undef SOURCE_NOTE_ON_VELOCITY
#undef SOURCE_PITCH_SENSITIVITY
#undef SOURCE_PITCH_WHEEL
#undef SOURCE_POLARITY_BIPOLAR
#undef SOURCE_POLARITY_UNIPOLAR
#undef SOURCE_POLY_PRESSURE
#undef SOURCE_TYPE_CONCAVE
#undef SOURCE_TYPE_CONVEX
#undef SOURCE_TYPE_LINEAR
#undef SOURCE_TYPE_SWITCH
#undef TRANSFORM_ABSOLUTE
#undef TRANSFORM_LINEAR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SF2Modulator_FieldInfo_[] = {
	{"SOURCE_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_NONE)},
	{"SOURCE_NOTE_ON_VELOCITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_NOTE_ON_VELOCITY)},
	{"SOURCE_NOTE_ON_KEYNUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_NOTE_ON_KEYNUMBER)},
	{"SOURCE_POLY_PRESSURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_POLY_PRESSURE)},
	{"SOURCE_CHANNEL_PRESSURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_CHANNEL_PRESSURE)},
	{"SOURCE_PITCH_WHEEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_PITCH_WHEEL)},
	{"SOURCE_PITCH_SENSITIVITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_PITCH_SENSITIVITY)},
	{"SOURCE_MIDI_CONTROL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_MIDI_CONTROL)},
	{"SOURCE_DIRECTION_MIN_MAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_DIRECTION_MIN_MAX)},
	{"SOURCE_DIRECTION_MAX_MIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_DIRECTION_MAX_MIN)},
	{"SOURCE_POLARITY_UNIPOLAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_POLARITY_UNIPOLAR)},
	{"SOURCE_POLARITY_BIPOLAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_POLARITY_BIPOLAR)},
	{"SOURCE_TYPE_LINEAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_TYPE_LINEAR)},
	{"SOURCE_TYPE_CONCAVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_TYPE_CONCAVE)},
	{"SOURCE_TYPE_CONVEX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_TYPE_CONVEX)},
	{"SOURCE_TYPE_SWITCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_TYPE_SWITCH)},
	{"TRANSFORM_LINEAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, TRANSFORM_LINEAR)},
	{"TRANSFORM_ABSOLUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, TRANSFORM_ABSOLUTE)},
	{"sourceOperator", "I", nullptr, 0, $field(SF2Modulator, sourceOperator)},
	{"destinationOperator", "I", nullptr, 0, $field(SF2Modulator, destinationOperator)},
	{"amount", "S", nullptr, 0, $field(SF2Modulator, amount)},
	{"amountSourceOperator", "I", nullptr, 0, $field(SF2Modulator, amountSourceOperator)},
	{"transportOperator", "I", nullptr, 0, $field(SF2Modulator, transportOperator)},
	{}
};

$MethodInfo _SF2Modulator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SF2Modulator::*)()>(&SF2Modulator::init$))},
	{"getAmount", "()S", nullptr, $PUBLIC, $method(static_cast<int16_t(SF2Modulator::*)()>(&SF2Modulator::getAmount))},
	{"getAmountSourceOperator", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SF2Modulator::*)()>(&SF2Modulator::getAmountSourceOperator))},
	{"getDestinationOperator", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SF2Modulator::*)()>(&SF2Modulator::getDestinationOperator))},
	{"getSourceOperator", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SF2Modulator::*)()>(&SF2Modulator::getSourceOperator))},
	{"getTransportOperator", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SF2Modulator::*)()>(&SF2Modulator::getTransportOperator))},
	{"setAmount", "(S)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Modulator::*)(int16_t)>(&SF2Modulator::setAmount))},
	{"setAmountSourceOperator", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Modulator::*)(int32_t)>(&SF2Modulator::setAmountSourceOperator))},
	{"setDestinationOperator", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Modulator::*)(int32_t)>(&SF2Modulator::setDestinationOperator))},
	{"setSourceOperator", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Modulator::*)(int32_t)>(&SF2Modulator::setSourceOperator))},
	{"setTransportOperator", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Modulator::*)(int32_t)>(&SF2Modulator::setTransportOperator))},
	{}
};

$ClassInfo _SF2Modulator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SF2Modulator",
	"java.lang.Object",
	nullptr,
	_SF2Modulator_FieldInfo_,
	_SF2Modulator_MethodInfo_
};

$Object* allocate$SF2Modulator($Class* clazz) {
	return $of($alloc(SF2Modulator));
}

void SF2Modulator::init$() {
}

int16_t SF2Modulator::getAmount() {
	return this->amount;
}

void SF2Modulator::setAmount(int16_t amount) {
	this->amount = amount;
}

int32_t SF2Modulator::getAmountSourceOperator() {
	return this->amountSourceOperator;
}

void SF2Modulator::setAmountSourceOperator(int32_t amountSourceOperator) {
	this->amountSourceOperator = amountSourceOperator;
}

int32_t SF2Modulator::getTransportOperator() {
	return this->transportOperator;
}

void SF2Modulator::setTransportOperator(int32_t transportOperator) {
	this->transportOperator = transportOperator;
}

int32_t SF2Modulator::getDestinationOperator() {
	return this->destinationOperator;
}

void SF2Modulator::setDestinationOperator(int32_t destinationOperator) {
	this->destinationOperator = destinationOperator;
}

int32_t SF2Modulator::getSourceOperator() {
	return this->sourceOperator;
}

void SF2Modulator::setSourceOperator(int32_t sourceOperator) {
	this->sourceOperator = sourceOperator;
}

SF2Modulator::SF2Modulator() {
}

$Class* SF2Modulator::load$($String* name, bool initialize) {
	$loadClass(SF2Modulator, name, initialize, &_SF2Modulator_ClassInfo_, allocate$SF2Modulator);
	return class$;
}

$Class* SF2Modulator::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com