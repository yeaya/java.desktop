#include <com/sun/media/sound/ModelAbstractOscillator.h>

#include <com/sun/media/sound/ModelInstrument.h>
#include <com/sun/media/sound/ModelOscillator.h>
#include <com/sun/media/sound/ModelOscillatorStream.h>
#include <com/sun/media/sound/ModelPatch.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <com/sun/media/sound/SimpleInstrument.h>
#include <com/sun/media/sound/SimpleSoundbank.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <javax/sound/midi/VoiceStatus.h>
#include <jcpp.h>

using $InstrumentArray = $Array<::javax::sound::midi::Instrument>;
using $SoundbankResourceArray = $Array<::javax::sound::midi::SoundbankResource>;
using $floatArray2 = $Array<float, 2>;
using $ModelInstrument = ::com::sun::media::sound::ModelInstrument;
using $ModelOscillator = ::com::sun::media::sound::ModelOscillator;
using $ModelOscillatorStream = ::com::sun::media::sound::ModelOscillatorStream;
using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $SimpleInstrument = ::com::sun::media::sound::SimpleInstrument;
using $SimpleSoundbank = ::com::sun::media::sound::SimpleSoundbank;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $List = ::java::util::List;
using $Instrument = ::javax::sound::midi::Instrument;
using $MidiChannel = ::javax::sound::midi::MidiChannel;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;
using $VoiceStatus = ::javax::sound::midi::VoiceStatus;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelAbstractOscillator_FieldInfo_[] = {
	{"pitch", "F", nullptr, $PROTECTED, $field(ModelAbstractOscillator, pitch)},
	{"samplerate", "F", nullptr, $PROTECTED, $field(ModelAbstractOscillator, samplerate)},
	{"channel", "Ljavax/sound/midi/MidiChannel;", nullptr, $PROTECTED, $field(ModelAbstractOscillator, channel)},
	{"voice", "Ljavax/sound/midi/VoiceStatus;", nullptr, $PROTECTED, $field(ModelAbstractOscillator, voice)},
	{"noteNumber", "I", nullptr, $PROTECTED, $field(ModelAbstractOscillator, noteNumber)},
	{"velocity", "I", nullptr, $PROTECTED, $field(ModelAbstractOscillator, velocity)},
	{"on", "Z", nullptr, $PROTECTED, $field(ModelAbstractOscillator, on)},
	{}
};

$MethodInfo _ModelAbstractOscillator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModelAbstractOscillator::*)()>(&ModelAbstractOscillator::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getAttenuation", "()F", nullptr, $PUBLIC},
	{"getChannel", "()Ljavax/sound/midi/MidiChannel;", nullptr, $PUBLIC},
	{"getChannels", "()I", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInstrument", "()Lcom/sun/media/sound/ModelInstrument;", nullptr, $PUBLIC},
	{"getInstrument", "(Ljavax/sound/midi/Patch;)Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC},
	{"getInstruments", "()[Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNoteNumber", "()I", nullptr, $PUBLIC},
	{"getPatch", "()Ljavax/sound/midi/Patch;", nullptr, $PUBLIC},
	{"getPerformer", "()Lcom/sun/media/sound/ModelPerformer;", nullptr, $PUBLIC},
	{"getPitch", "()F", nullptr, $PUBLIC},
	{"getResources", "()[Ljavax/sound/midi/SoundbankResource;", nullptr, $PUBLIC},
	{"getSampleRate", "()F", nullptr, $PUBLIC},
	{"getSoundBank", "()Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC},
	{"getVelocity", "()I", nullptr, $PUBLIC},
	{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVoice", "()Ljavax/sound/midi/VoiceStatus;", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PUBLIC},
	{"isOn", "()Z", nullptr, $PUBLIC},
	{"noteOff", "(I)V", nullptr, $PUBLIC},
	{"noteOn", "(Ljavax/sound/midi/MidiChannel;Ljavax/sound/midi/VoiceStatus;II)V", nullptr, $PUBLIC},
	{"open", "(F)Lcom/sun/media/sound/ModelOscillatorStream;", nullptr, $PUBLIC},
	{"read", "([[FII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setPitch", "(F)V", nullptr, $PUBLIC},
	{"setSampleRate", "(F)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModelAbstractOscillator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.ModelAbstractOscillator",
	"java.lang.Object",
	"com.sun.media.sound.ModelOscillator,com.sun.media.sound.ModelOscillatorStream,javax.sound.midi.Soundbank",
	_ModelAbstractOscillator_FieldInfo_,
	_ModelAbstractOscillator_MethodInfo_
};

$Object* allocate$ModelAbstractOscillator($Class* clazz) {
	return $of($alloc(ModelAbstractOscillator));
}

int32_t ModelAbstractOscillator::hashCode() {
	 return this->$ModelOscillator::hashCode();
}

bool ModelAbstractOscillator::equals(Object$* arg0) {
	 return this->$ModelOscillator::equals(arg0);
}

$Object* ModelAbstractOscillator::clone() {
	 return this->$ModelOscillator::clone();
}

$String* ModelAbstractOscillator::toString() {
	 return this->$ModelOscillator::toString();
}

void ModelAbstractOscillator::finalize() {
	this->$ModelOscillator::finalize();
}

void ModelAbstractOscillator::init$() {
	this->pitch = (float)6000;
	this->on = false;
}

void ModelAbstractOscillator::init() {
}

void ModelAbstractOscillator::close() {
}

void ModelAbstractOscillator::noteOff(int32_t velocity) {
	this->on = false;
}

void ModelAbstractOscillator::noteOn($MidiChannel* channel, $VoiceStatus* voice, int32_t noteNumber, int32_t velocity) {
	$set(this, channel, channel);
	$set(this, voice, voice);
	this->noteNumber = noteNumber;
	this->velocity = velocity;
	this->on = true;
}

int32_t ModelAbstractOscillator::read($floatArray2* buffer, int32_t offset, int32_t len) {
	return -1;
}

$MidiChannel* ModelAbstractOscillator::getChannel() {
	return this->channel;
}

$VoiceStatus* ModelAbstractOscillator::getVoice() {
	return this->voice;
}

int32_t ModelAbstractOscillator::getNoteNumber() {
	return this->noteNumber;
}

int32_t ModelAbstractOscillator::getVelocity() {
	return this->velocity;
}

bool ModelAbstractOscillator::isOn() {
	return this->on;
}

void ModelAbstractOscillator::setPitch(float pitch) {
	this->pitch = pitch;
}

float ModelAbstractOscillator::getPitch() {
	return this->pitch;
}

void ModelAbstractOscillator::setSampleRate(float samplerate) {
	this->samplerate = samplerate;
}

float ModelAbstractOscillator::getSampleRate() {
	return this->samplerate;
}

float ModelAbstractOscillator::getAttenuation() {
	return (float)0;
}

int32_t ModelAbstractOscillator::getChannels() {
	return 1;
}

$String* ModelAbstractOscillator::getName() {
	return $of(this)->getClass()->getName();
}

$Patch* ModelAbstractOscillator::getPatch() {
	return $new($Patch, 0, 0);
}

$ModelOscillatorStream* ModelAbstractOscillator::open(float samplerate) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var(ModelAbstractOscillator, oscs, nullptr);
	try {
		$assign(oscs, $cast(ModelAbstractOscillator, $of(this)->getClass()->newInstance()));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
	$nc(oscs)->setSampleRate(samplerate);
	oscs->init();
	return oscs;
}

$ModelPerformer* ModelAbstractOscillator::getPerformer() {
	$useLocalCurrentObjectStackCache();
	$var($ModelPerformer, performer, $new($ModelPerformer));
	$nc($(performer->getOscillators()))->add(this);
	return performer;
}

$ModelInstrument* ModelAbstractOscillator::getInstrument() {
	$useLocalCurrentObjectStackCache();
	$var($SimpleInstrument, ins, $new($SimpleInstrument));
	ins->setName($(getName()));
	ins->add($(getPerformer()));
	ins->setPatch($(getPatch()));
	return ins;
}

$Soundbank* ModelAbstractOscillator::getSoundBank() {
	$useLocalCurrentObjectStackCache();
	$var($SimpleSoundbank, sbk, $new($SimpleSoundbank));
	sbk->addInstrument($(getInstrument()));
	return sbk;
}

$String* ModelAbstractOscillator::getDescription() {
	return getName();
}

$Instrument* ModelAbstractOscillator::getInstrument($Patch* patch) {
	$useLocalCurrentObjectStackCache();
	$var($Instrument, ins, getInstrument());
	$var($Patch, p, $nc(ins)->getPatch());
	int32_t var$0 = $nc(p)->getBank();
	if (var$0 != $nc(patch)->getBank()) {
		return nullptr;
	}
	int32_t var$1 = $nc(p)->getProgram();
	if (var$1 != $nc(patch)->getProgram()) {
		return nullptr;
	}
	if ($instanceOf($ModelPatch, p) && $instanceOf($ModelPatch, patch)) {
		bool var$2 = $nc(($cast($ModelPatch, p)))->isPercussion();
		if (var$2 != $nc(($cast($ModelPatch, patch)))->isPercussion()) {
			return nullptr;
		}
	}
	return ins;
}

$InstrumentArray* ModelAbstractOscillator::getInstruments() {
	return $new($InstrumentArray, {$(static_cast<$Instrument*>(getInstrument()))});
}

$SoundbankResourceArray* ModelAbstractOscillator::getResources() {
	return $new($SoundbankResourceArray, 0);
}

$String* ModelAbstractOscillator::getVendor() {
	return nullptr;
}

$String* ModelAbstractOscillator::getVersion() {
	return nullptr;
}

ModelAbstractOscillator::ModelAbstractOscillator() {
}

$Class* ModelAbstractOscillator::load$($String* name, bool initialize) {
	$loadClass(ModelAbstractOscillator, name, initialize, &_ModelAbstractOscillator_ClassInfo_, allocate$ModelAbstractOscillator);
	return class$;
}

$Class* ModelAbstractOscillator::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com