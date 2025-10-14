#include <com/sun/media/sound/ModelDestination.h>

#include <com/sun/media/sound/ModelIdentifier.h>
#include <com/sun/media/sound/ModelStandardTransform.h>
#include <com/sun/media/sound/ModelTransform.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DESTINATION_CHORUS
#undef DESTINATION_EG1_ATTACK
#undef DESTINATION_EG1_DECAY
#undef DESTINATION_EG1_DELAY
#undef DESTINATION_EG1_HOLD
#undef DESTINATION_EG1_RELEASE
#undef DESTINATION_EG1_SHUTDOWN
#undef DESTINATION_EG1_SUSTAIN
#undef DESTINATION_EG2_ATTACK
#undef DESTINATION_EG2_DECAY
#undef DESTINATION_EG2_DELAY
#undef DESTINATION_EG2_HOLD
#undef DESTINATION_EG2_RELEASE
#undef DESTINATION_EG2_SHUTDOWN
#undef DESTINATION_EG2_SUSTAIN
#undef DESTINATION_FILTER_FREQ
#undef DESTINATION_FILTER_Q
#undef DESTINATION_GAIN
#undef DESTINATION_KEYNUMBER
#undef DESTINATION_LFO1_DELAY
#undef DESTINATION_LFO1_FREQ
#undef DESTINATION_LFO2_DELAY
#undef DESTINATION_LFO2_FREQ
#undef DESTINATION_NONE
#undef DESTINATION_PAN
#undef DESTINATION_PITCH
#undef DESTINATION_REVERB
#undef DESTINATION_VELOCITY

using $ModelIdentifier = ::com::sun::media::sound::ModelIdentifier;
using $ModelStandardTransform = ::com::sun::media::sound::ModelStandardTransform;
using $ModelTransform = ::com::sun::media::sound::ModelTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelDestination_FieldInfo_[] = {
	{"DESTINATION_NONE", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_NONE)},
	{"DESTINATION_KEYNUMBER", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_KEYNUMBER)},
	{"DESTINATION_VELOCITY", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_VELOCITY)},
	{"DESTINATION_PITCH", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_PITCH)},
	{"DESTINATION_GAIN", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_GAIN)},
	{"DESTINATION_PAN", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_PAN)},
	{"DESTINATION_REVERB", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_REVERB)},
	{"DESTINATION_CHORUS", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_CHORUS)},
	{"DESTINATION_LFO1_DELAY", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_LFO1_DELAY)},
	{"DESTINATION_LFO1_FREQ", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_LFO1_FREQ)},
	{"DESTINATION_LFO2_DELAY", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_LFO2_DELAY)},
	{"DESTINATION_LFO2_FREQ", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_LFO2_FREQ)},
	{"DESTINATION_EG1_DELAY", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG1_DELAY)},
	{"DESTINATION_EG1_ATTACK", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG1_ATTACK)},
	{"DESTINATION_EG1_HOLD", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG1_HOLD)},
	{"DESTINATION_EG1_DECAY", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG1_DECAY)},
	{"DESTINATION_EG1_SUSTAIN", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG1_SUSTAIN)},
	{"DESTINATION_EG1_RELEASE", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG1_RELEASE)},
	{"DESTINATION_EG1_SHUTDOWN", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG1_SHUTDOWN)},
	{"DESTINATION_EG2_DELAY", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG2_DELAY)},
	{"DESTINATION_EG2_ATTACK", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG2_ATTACK)},
	{"DESTINATION_EG2_HOLD", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG2_HOLD)},
	{"DESTINATION_EG2_DECAY", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG2_DECAY)},
	{"DESTINATION_EG2_SUSTAIN", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG2_SUSTAIN)},
	{"DESTINATION_EG2_RELEASE", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG2_RELEASE)},
	{"DESTINATION_EG2_SHUTDOWN", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_EG2_SHUTDOWN)},
	{"DESTINATION_FILTER_FREQ", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_FILTER_FREQ)},
	{"DESTINATION_FILTER_Q", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelDestination, DESTINATION_FILTER_Q)},
	{"destination", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PRIVATE, $field(ModelDestination, destination)},
	{"transform", "Lcom/sun/media/sound/ModelTransform;", nullptr, $PRIVATE, $field(ModelDestination, transform)},
	{}
};

$MethodInfo _ModelDestination_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModelDestination::*)()>(&ModelDestination::init$))},
	{"<init>", "(Lcom/sun/media/sound/ModelIdentifier;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelDestination::*)($ModelIdentifier*)>(&ModelDestination::init$))},
	{"getIdentifier", "()Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC, $method(static_cast<$ModelIdentifier*(ModelDestination::*)()>(&ModelDestination::getIdentifier))},
	{"getTransform", "()Lcom/sun/media/sound/ModelTransform;", nullptr, $PUBLIC, $method(static_cast<$ModelTransform*(ModelDestination::*)()>(&ModelDestination::getTransform))},
	{"setIdentifier", "(Lcom/sun/media/sound/ModelIdentifier;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelDestination::*)($ModelIdentifier*)>(&ModelDestination::setIdentifier))},
	{"setTransform", "(Lcom/sun/media/sound/ModelTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelDestination::*)($ModelTransform*)>(&ModelDestination::setTransform))},
	{}
};

$ClassInfo _ModelDestination_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.ModelDestination",
	"java.lang.Object",
	nullptr,
	_ModelDestination_FieldInfo_,
	_ModelDestination_MethodInfo_
};

$Object* allocate$ModelDestination($Class* clazz) {
	return $of($alloc(ModelDestination));
}

$ModelIdentifier* ModelDestination::DESTINATION_NONE = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_KEYNUMBER = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_VELOCITY = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_PITCH = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_GAIN = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_PAN = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_REVERB = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_CHORUS = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_LFO1_DELAY = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_LFO1_FREQ = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_LFO2_DELAY = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_LFO2_FREQ = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG1_DELAY = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG1_ATTACK = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG1_HOLD = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG1_DECAY = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG1_SUSTAIN = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG1_RELEASE = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG1_SHUTDOWN = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG2_DELAY = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG2_ATTACK = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG2_HOLD = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG2_DECAY = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG2_SUSTAIN = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG2_RELEASE = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_EG2_SHUTDOWN = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_FILTER_FREQ = nullptr;
$ModelIdentifier* ModelDestination::DESTINATION_FILTER_Q = nullptr;

void ModelDestination::init$() {
	$set(this, destination, ModelDestination::DESTINATION_NONE);
	$set(this, transform, $new($ModelStandardTransform));
}

void ModelDestination::init$($ModelIdentifier* id) {
	$set(this, destination, ModelDestination::DESTINATION_NONE);
	$set(this, transform, $new($ModelStandardTransform));
	$set(this, destination, id);
}

$ModelIdentifier* ModelDestination::getIdentifier() {
	return this->destination;
}

void ModelDestination::setIdentifier($ModelIdentifier* destination) {
	$set(this, destination, destination);
}

$ModelTransform* ModelDestination::getTransform() {
	return this->transform;
}

void ModelDestination::setTransform($ModelTransform* transform) {
	$set(this, transform, transform);
}

void clinit$ModelDestination($Class* class$) {
	$assignStatic(ModelDestination::DESTINATION_NONE, nullptr);
	$assignStatic(ModelDestination::DESTINATION_KEYNUMBER, $new($ModelIdentifier, "noteon"_s, "keynumber"_s));
	$assignStatic(ModelDestination::DESTINATION_VELOCITY, $new($ModelIdentifier, "noteon"_s, "velocity"_s));
	$assignStatic(ModelDestination::DESTINATION_PITCH, $new($ModelIdentifier, "osc"_s, "pitch"_s));
	$assignStatic(ModelDestination::DESTINATION_GAIN, $new($ModelIdentifier, "mixer"_s, "gain"_s));
	$assignStatic(ModelDestination::DESTINATION_PAN, $new($ModelIdentifier, "mixer"_s, "pan"_s));
	$assignStatic(ModelDestination::DESTINATION_REVERB, $new($ModelIdentifier, "mixer"_s, "reverb"_s));
	$assignStatic(ModelDestination::DESTINATION_CHORUS, $new($ModelIdentifier, "mixer"_s, "chorus"_s));
	$assignStatic(ModelDestination::DESTINATION_LFO1_DELAY, $new($ModelIdentifier, "lfo"_s, "delay"_s, 0));
	$assignStatic(ModelDestination::DESTINATION_LFO1_FREQ, $new($ModelIdentifier, "lfo"_s, "freq"_s, 0));
	$assignStatic(ModelDestination::DESTINATION_LFO2_DELAY, $new($ModelIdentifier, "lfo"_s, "delay"_s, 1));
	$assignStatic(ModelDestination::DESTINATION_LFO2_FREQ, $new($ModelIdentifier, "lfo"_s, "freq"_s, 1));
	$assignStatic(ModelDestination::DESTINATION_EG1_DELAY, $new($ModelIdentifier, "eg"_s, "delay"_s, 0));
	$assignStatic(ModelDestination::DESTINATION_EG1_ATTACK, $new($ModelIdentifier, "eg"_s, "attack"_s, 0));
	$assignStatic(ModelDestination::DESTINATION_EG1_HOLD, $new($ModelIdentifier, "eg"_s, "hold"_s, 0));
	$assignStatic(ModelDestination::DESTINATION_EG1_DECAY, $new($ModelIdentifier, "eg"_s, "decay"_s, 0));
	$assignStatic(ModelDestination::DESTINATION_EG1_SUSTAIN, $new($ModelIdentifier, "eg"_s, "sustain"_s, 0));
	$assignStatic(ModelDestination::DESTINATION_EG1_RELEASE, $new($ModelIdentifier, "eg"_s, "release"_s, 0));
	$assignStatic(ModelDestination::DESTINATION_EG1_SHUTDOWN, $new($ModelIdentifier, "eg"_s, "shutdown"_s, 0));
	$assignStatic(ModelDestination::DESTINATION_EG2_DELAY, $new($ModelIdentifier, "eg"_s, "delay"_s, 1));
	$assignStatic(ModelDestination::DESTINATION_EG2_ATTACK, $new($ModelIdentifier, "eg"_s, "attack"_s, 1));
	$assignStatic(ModelDestination::DESTINATION_EG2_HOLD, $new($ModelIdentifier, "eg"_s, "hold"_s, 1));
	$assignStatic(ModelDestination::DESTINATION_EG2_DECAY, $new($ModelIdentifier, "eg"_s, "decay"_s, 1));
	$assignStatic(ModelDestination::DESTINATION_EG2_SUSTAIN, $new($ModelIdentifier, "eg"_s, "sustain"_s, 1));
	$assignStatic(ModelDestination::DESTINATION_EG2_RELEASE, $new($ModelIdentifier, "eg"_s, "release"_s, 1));
	$assignStatic(ModelDestination::DESTINATION_EG2_SHUTDOWN, $new($ModelIdentifier, "eg"_s, "shutdown"_s, 1));
	$assignStatic(ModelDestination::DESTINATION_FILTER_FREQ, $new($ModelIdentifier, "filter"_s, "freq"_s, 0));
	$assignStatic(ModelDestination::DESTINATION_FILTER_Q, $new($ModelIdentifier, "filter"_s, "q"_s, 0));
}

ModelDestination::ModelDestination() {
}

$Class* ModelDestination::load$($String* name, bool initialize) {
	$loadClass(ModelDestination, name, initialize, &_ModelDestination_ClassInfo_, clinit$ModelDestination, allocate$ModelDestination);
	return class$;
}

$Class* ModelDestination::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com