#include <com/sun/media/sound/ModelSource.h>

#include <com/sun/media/sound/ModelIdentifier.h>
#include <com/sun/media/sound/ModelStandardTransform.h>
#include <com/sun/media/sound/ModelTransform.h>
#include <jcpp.h>

#undef SOURCE_EG1
#undef SOURCE_EG2
#undef SOURCE_LFO1
#undef SOURCE_LFO2
#undef SOURCE_MIDI_CC_0
#undef SOURCE_MIDI_CHANNEL_PRESSURE
#undef SOURCE_MIDI_PITCH
#undef SOURCE_MIDI_POLY_PRESSURE
#undef SOURCE_MIDI_RPN_0
#undef SOURCE_NONE
#undef SOURCE_NOTEON_KEYNUMBER
#undef SOURCE_NOTEON_VELOCITY

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

$FieldInfo _ModelSource_FieldInfo_[] = {
	{"SOURCE_NONE", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelSource, SOURCE_NONE)},
	{"SOURCE_NOTEON_KEYNUMBER", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelSource, SOURCE_NOTEON_KEYNUMBER)},
	{"SOURCE_NOTEON_VELOCITY", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelSource, SOURCE_NOTEON_VELOCITY)},
	{"SOURCE_EG1", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelSource, SOURCE_EG1)},
	{"SOURCE_EG2", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelSource, SOURCE_EG2)},
	{"SOURCE_LFO1", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelSource, SOURCE_LFO1)},
	{"SOURCE_LFO2", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelSource, SOURCE_LFO2)},
	{"SOURCE_MIDI_PITCH", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelSource, SOURCE_MIDI_PITCH)},
	{"SOURCE_MIDI_CHANNEL_PRESSURE", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelSource, SOURCE_MIDI_CHANNEL_PRESSURE)},
	{"SOURCE_MIDI_POLY_PRESSURE", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelSource, SOURCE_MIDI_POLY_PRESSURE)},
	{"SOURCE_MIDI_CC_0", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelSource, SOURCE_MIDI_CC_0)},
	{"SOURCE_MIDI_RPN_0", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ModelSource, SOURCE_MIDI_RPN_0)},
	{"source", "Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PRIVATE, $field(ModelSource, source)},
	{"transform", "Lcom/sun/media/sound/ModelTransform;", nullptr, $PRIVATE, $field(ModelSource, transform)},
	{}
};

$MethodInfo _ModelSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModelSource::*)()>(&ModelSource::init$))},
	{"<init>", "(Lcom/sun/media/sound/ModelIdentifier;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelSource::*)($ModelIdentifier*)>(&ModelSource::init$))},
	{"<init>", "(Lcom/sun/media/sound/ModelIdentifier;Z)V", nullptr, $PUBLIC, $method(static_cast<void(ModelSource::*)($ModelIdentifier*,bool)>(&ModelSource::init$))},
	{"<init>", "(Lcom/sun/media/sound/ModelIdentifier;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(ModelSource::*)($ModelIdentifier*,bool,bool)>(&ModelSource::init$))},
	{"<init>", "(Lcom/sun/media/sound/ModelIdentifier;ZZI)V", nullptr, $PUBLIC, $method(static_cast<void(ModelSource::*)($ModelIdentifier*,bool,bool,int32_t)>(&ModelSource::init$))},
	{"<init>", "(Lcom/sun/media/sound/ModelIdentifier;Lcom/sun/media/sound/ModelTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelSource::*)($ModelIdentifier*,$ModelTransform*)>(&ModelSource::init$))},
	{"getIdentifier", "()Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PUBLIC, $method(static_cast<$ModelIdentifier*(ModelSource::*)()>(&ModelSource::getIdentifier))},
	{"getTransform", "()Lcom/sun/media/sound/ModelTransform;", nullptr, $PUBLIC, $method(static_cast<$ModelTransform*(ModelSource::*)()>(&ModelSource::getTransform))},
	{"setIdentifier", "(Lcom/sun/media/sound/ModelIdentifier;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelSource::*)($ModelIdentifier*)>(&ModelSource::setIdentifier))},
	{"setTransform", "(Lcom/sun/media/sound/ModelTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelSource::*)($ModelTransform*)>(&ModelSource::setTransform))},
	{}
};

$ClassInfo _ModelSource_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.ModelSource",
	"java.lang.Object",
	nullptr,
	_ModelSource_FieldInfo_,
	_ModelSource_MethodInfo_
};

$Object* allocate$ModelSource($Class* clazz) {
	return $of($alloc(ModelSource));
}

$ModelIdentifier* ModelSource::SOURCE_NONE = nullptr;
$ModelIdentifier* ModelSource::SOURCE_NOTEON_KEYNUMBER = nullptr;
$ModelIdentifier* ModelSource::SOURCE_NOTEON_VELOCITY = nullptr;
$ModelIdentifier* ModelSource::SOURCE_EG1 = nullptr;
$ModelIdentifier* ModelSource::SOURCE_EG2 = nullptr;
$ModelIdentifier* ModelSource::SOURCE_LFO1 = nullptr;
$ModelIdentifier* ModelSource::SOURCE_LFO2 = nullptr;
$ModelIdentifier* ModelSource::SOURCE_MIDI_PITCH = nullptr;
$ModelIdentifier* ModelSource::SOURCE_MIDI_CHANNEL_PRESSURE = nullptr;
$ModelIdentifier* ModelSource::SOURCE_MIDI_POLY_PRESSURE = nullptr;
$ModelIdentifier* ModelSource::SOURCE_MIDI_CC_0 = nullptr;
$ModelIdentifier* ModelSource::SOURCE_MIDI_RPN_0 = nullptr;

void ModelSource::init$() {
	$set(this, source, ModelSource::SOURCE_NONE);
	$set(this, transform, $new($ModelStandardTransform));
}

void ModelSource::init$($ModelIdentifier* id) {
	$set(this, source, ModelSource::SOURCE_NONE);
	$set(this, source, id);
	$set(this, transform, $new($ModelStandardTransform));
}

void ModelSource::init$($ModelIdentifier* id, bool direction) {
	$set(this, source, ModelSource::SOURCE_NONE);
	$set(this, source, id);
	$set(this, transform, $new($ModelStandardTransform, direction));
}

void ModelSource::init$($ModelIdentifier* id, bool direction, bool polarity) {
	$set(this, source, ModelSource::SOURCE_NONE);
	$set(this, source, id);
	$set(this, transform, $new($ModelStandardTransform, direction, polarity));
}

void ModelSource::init$($ModelIdentifier* id, bool direction, bool polarity, int32_t transform) {
	$set(this, source, ModelSource::SOURCE_NONE);
	$set(this, source, id);
	$set(this, transform, $new($ModelStandardTransform, direction, polarity, transform));
}

void ModelSource::init$($ModelIdentifier* id, $ModelTransform* transform) {
	$set(this, source, ModelSource::SOURCE_NONE);
	$set(this, source, id);
	$set(this, transform, transform);
}

$ModelIdentifier* ModelSource::getIdentifier() {
	return this->source;
}

void ModelSource::setIdentifier($ModelIdentifier* source) {
	$set(this, source, source);
}

$ModelTransform* ModelSource::getTransform() {
	return this->transform;
}

void ModelSource::setTransform($ModelTransform* transform) {
	$set(this, transform, transform);
}

void clinit$ModelSource($Class* class$) {
	$assignStatic(ModelSource::SOURCE_NONE, nullptr);
	$assignStatic(ModelSource::SOURCE_NOTEON_KEYNUMBER, $new($ModelIdentifier, "noteon"_s, "keynumber"_s));
	$assignStatic(ModelSource::SOURCE_NOTEON_VELOCITY, $new($ModelIdentifier, "noteon"_s, "velocity"_s));
	$assignStatic(ModelSource::SOURCE_EG1, $new($ModelIdentifier, "eg"_s, nullptr, 0));
	$assignStatic(ModelSource::SOURCE_EG2, $new($ModelIdentifier, "eg"_s, nullptr, 1));
	$assignStatic(ModelSource::SOURCE_LFO1, $new($ModelIdentifier, "lfo"_s, nullptr, 0));
	$assignStatic(ModelSource::SOURCE_LFO2, $new($ModelIdentifier, "lfo"_s, nullptr, 1));
	$assignStatic(ModelSource::SOURCE_MIDI_PITCH, $new($ModelIdentifier, "midi"_s, "pitch"_s, 0));
	$assignStatic(ModelSource::SOURCE_MIDI_CHANNEL_PRESSURE, $new($ModelIdentifier, "midi"_s, "channel_pressure"_s, 0));
	$assignStatic(ModelSource::SOURCE_MIDI_POLY_PRESSURE, $new($ModelIdentifier, "midi"_s, "poly_pressure"_s, 0));
	$assignStatic(ModelSource::SOURCE_MIDI_CC_0, $new($ModelIdentifier, "midi_cc"_s, "0"_s, 0));
	$assignStatic(ModelSource::SOURCE_MIDI_RPN_0, $new($ModelIdentifier, "midi_rpn"_s, "0"_s, 0));
}

ModelSource::ModelSource() {
}

$Class* ModelSource::load$($String* name, bool initialize) {
	$loadClass(ModelSource, name, initialize, &_ModelSource_ClassInfo_, clinit$ModelSource, allocate$ModelSource);
	return class$;
}

$Class* ModelSource::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com