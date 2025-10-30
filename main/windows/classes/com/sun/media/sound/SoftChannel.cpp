#include <com/sun/media/sound/SoftChannel.h>

#include <com/sun/media/sound/ModelChannelMixer.h>
#include <com/sun/media/sound/ModelConnectionBlock.h>
#include <com/sun/media/sound/ModelDestination.h>
#include <com/sun/media/sound/ModelDirectedPlayer.h>
#include <com/sun/media/sound/ModelDirector.h>
#include <com/sun/media/sound/ModelIdentifier.h>
#include <com/sun/media/sound/ModelInstrument.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <com/sun/media/sound/ModelSource.h>
#include <com/sun/media/sound/ModelStandardTransform.h>
#include <com/sun/media/sound/ModelTransform.h>
#include <com/sun/media/sound/SoftChannel$1.h>
#include <com/sun/media/sound/SoftChannel$2.h>
#include <com/sun/media/sound/SoftChannel$3.h>
#include <com/sun/media/sound/SoftChannel$4.h>
#include <com/sun/media/sound/SoftChannel$5.h>
#include <com/sun/media/sound/SoftChannel$MidiControlObject.h>
#include <com/sun/media/sound/SoftControl.h>
#include <com/sun/media/sound/SoftInstrument.h>
#include <com/sun/media/sound/SoftMainMixer.h>
#include <com/sun/media/sound/SoftPerformer.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <com/sun/media/sound/SoftTuning.h>
#include <com/sun/media/sound/SoftVoice.h>
#include <java/lang/Math.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

#undef DESTINATION_FILTER_FREQ
#undef DESTINATION_GAIN
#undef DESTINATION_PITCH
#undef DIRECTION_MAX2MIN
#undef DIRECTION_MIN2MAX
#undef PI
#undef POLARITY_BIPOLAR
#undef POLARITY_UNIPOLAR
#undef RPN_NULL_VALUE
#undef SOURCE_LFO1
#undef TRANSFORM_LINEAR

using $ModelConnectionBlockArray = $Array<::com::sun::media::sound::ModelConnectionBlock>;
using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $ModelSourceArray = $Array<::com::sun::media::sound::ModelSource>;
using $SoftChannelArray = $Array<::com::sun::media::sound::SoftChannel>;
using $SoftControlArray = $Array<::com::sun::media::sound::SoftControl>;
using $SoftVoiceArray = $Array<::com::sun::media::sound::SoftVoice>;
using $doubleArray2 = $Array<double, 2>;
using $booleanArray2 = $Array<bool, 2>;
using $ModelChannelMixer = ::com::sun::media::sound::ModelChannelMixer;
using $ModelConnectionBlock = ::com::sun::media::sound::ModelConnectionBlock;
using $ModelDestination = ::com::sun::media::sound::ModelDestination;
using $ModelDirectedPlayer = ::com::sun::media::sound::ModelDirectedPlayer;
using $ModelDirector = ::com::sun::media::sound::ModelDirector;
using $ModelIdentifier = ::com::sun::media::sound::ModelIdentifier;
using $ModelInstrument = ::com::sun::media::sound::ModelInstrument;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $ModelSource = ::com::sun::media::sound::ModelSource;
using $ModelStandardTransform = ::com::sun::media::sound::ModelStandardTransform;
using $ModelTransform = ::com::sun::media::sound::ModelTransform;
using $SoftChannel$1 = ::com::sun::media::sound::SoftChannel$1;
using $SoftChannel$2 = ::com::sun::media::sound::SoftChannel$2;
using $SoftChannel$3 = ::com::sun::media::sound::SoftChannel$3;
using $SoftChannel$4 = ::com::sun::media::sound::SoftChannel$4;
using $SoftChannel$5 = ::com::sun::media::sound::SoftChannel$5;
using $SoftChannel$MidiControlObject = ::com::sun::media::sound::SoftChannel$MidiControlObject;
using $SoftControl = ::com::sun::media::sound::SoftControl;
using $SoftInstrument = ::com::sun::media::sound::SoftInstrument;
using $SoftMainMixer = ::com::sun::media::sound::SoftMainMixer;
using $SoftPerformer = ::com::sun::media::sound::SoftPerformer;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $SoftTuning = ::com::sun::media::sound::SoftTuning;
using $SoftVoice = ::com::sun::media::sound::SoftVoice;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $MidiChannel = ::javax::sound::midi::MidiChannel;
using $Patch = ::javax::sound::midi::Patch;
using $VoiceStatus = ::javax::sound::midi::VoiceStatus;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftChannel_FieldInfo_[] = {
	{"dontResetControls", "[Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SoftChannel, dontResetControls)},
	{"RPN_NULL_VALUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SoftChannel, RPN_NULL_VALUE)},
	{"rpn_control", "I", nullptr, $PRIVATE, $field(SoftChannel, rpn_control)},
	{"nrpn_control", "I", nullptr, $PRIVATE, $field(SoftChannel, nrpn_control)},
	{"portamento_time", "D", nullptr, 0, $field(SoftChannel, portamento_time)},
	{"portamento_lastnote", "[I", nullptr, 0, $field(SoftChannel, portamento_lastnote)},
	{"portamento_lastnote_ix", "I", nullptr, 0, $field(SoftChannel, portamento_lastnote_ix)},
	{"portamento", "Z", nullptr, $PRIVATE, $field(SoftChannel, portamento)},
	{"mono", "Z", nullptr, $PRIVATE, $field(SoftChannel, mono)},
	{"mute", "Z", nullptr, $PRIVATE, $field(SoftChannel, mute)},
	{"solo", "Z", nullptr, $PRIVATE, $field(SoftChannel, solo)},
	{"solomute", "Z", nullptr, $PRIVATE, $field(SoftChannel, solomute)},
	{"control_mutex", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, control_mutex)},
	{"channel", "I", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, channel)},
	{"voices", "[Lcom/sun/media/sound/SoftVoice;", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, voices)},
	{"bank", "I", nullptr, $PRIVATE, $field(SoftChannel, bank)},
	{"program", "I", nullptr, $PRIVATE, $field(SoftChannel, program)},
	{"synthesizer", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, synthesizer)},
	{"mainmixer", "Lcom/sun/media/sound/SoftMainMixer;", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, mainmixer)},
	{"polypressure", "[I", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, polypressure)},
	{"channelpressure", "I", nullptr, $PRIVATE, $field(SoftChannel, channelpressure)},
	{"controller", "[I", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, controller)},
	{"pitchbend", "I", nullptr, $PRIVATE, $field(SoftChannel, pitchbend)},
	{"co_midi_pitch", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, co_midi_pitch)},
	{"co_midi_channel_pressure", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, co_midi_channel_pressure)},
	{"tuning", "Lcom/sun/media/sound/SoftTuning;", nullptr, 0, $field(SoftChannel, tuning)},
	{"tuning_bank", "I", nullptr, 0, $field(SoftChannel, tuning_bank)},
	{"tuning_program", "I", nullptr, 0, $field(SoftChannel, tuning_program)},
	{"current_instrument", "Lcom/sun/media/sound/SoftInstrument;", nullptr, 0, $field(SoftChannel, current_instrument)},
	{"current_mixer", "Lcom/sun/media/sound/ModelChannelMixer;", nullptr, 0, $field(SoftChannel, current_mixer)},
	{"current_director", "Lcom/sun/media/sound/ModelDirector;", nullptr, 0, $field(SoftChannel, current_director)},
	{"cds_control_number", "I", nullptr, 0, $field(SoftChannel, cds_control_number)},
	{"cds_control_connections", "[Lcom/sun/media/sound/ModelConnectionBlock;", nullptr, 0, $field(SoftChannel, cds_control_connections)},
	{"cds_channelpressure_connections", "[Lcom/sun/media/sound/ModelConnectionBlock;", nullptr, 0, $field(SoftChannel, cds_channelpressure_connections)},
	{"cds_polypressure_connections", "[Lcom/sun/media/sound/ModelConnectionBlock;", nullptr, 0, $field(SoftChannel, cds_polypressure_connections)},
	{"sustain", "Z", nullptr, 0, $field(SoftChannel, sustain)},
	{"keybasedcontroller_active", "[[Z", nullptr, 0, $field(SoftChannel, keybasedcontroller_active)},
	{"keybasedcontroller_value", "[[D", nullptr, 0, $field(SoftChannel, keybasedcontroller_value)},
	{"co_midi", "[Lcom/sun/media/sound/SoftControl;", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, co_midi)},
	{"co_midi_cc_cc", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, co_midi_cc_cc)},
	{"co_midi_cc", "Lcom/sun/media/sound/SoftControl;", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, co_midi_cc)},
	{"co_midi_rpn_rpn_i", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;[I>;", 0, $field(SoftChannel, co_midi_rpn_rpn_i)},
	{"co_midi_rpn_rpn", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;[D>;", 0, $field(SoftChannel, co_midi_rpn_rpn)},
	{"co_midi_rpn", "Lcom/sun/media/sound/SoftControl;", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, co_midi_rpn)},
	{"co_midi_nrpn_nrpn_i", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;[I>;", 0, $field(SoftChannel, co_midi_nrpn_nrpn_i)},
	{"co_midi_nrpn_nrpn", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;[D>;", 0, $field(SoftChannel, co_midi_nrpn_nrpn)},
	{"co_midi_nrpn", "Lcom/sun/media/sound/SoftControl;", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, co_midi_nrpn)},
	{"lastVelocity", "[I", nullptr, $PRIVATE | $FINAL, $field(SoftChannel, lastVelocity)},
	{"prevVoiceID", "I", nullptr, $PRIVATE, $field(SoftChannel, prevVoiceID)},
	{"firstVoice", "Z", nullptr, $PRIVATE, $field(SoftChannel, firstVoice)},
	{"voiceNo", "I", nullptr, $PRIVATE, $field(SoftChannel, voiceNo)},
	{"play_noteNumber", "I", nullptr, $PRIVATE, $field(SoftChannel, play_noteNumber)},
	{"play_velocity", "I", nullptr, $PRIVATE, $field(SoftChannel, play_velocity)},
	{"play_delay", "I", nullptr, $PRIVATE, $field(SoftChannel, play_delay)},
	{"play_releasetriggered", "Z", nullptr, $PRIVATE, $field(SoftChannel, play_releasetriggered)},
	{}
};

$MethodInfo _SoftChannel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftChannel::*)($SoftSynthesizer*,int32_t)>(&SoftChannel::init$))},
	{"allNotesOff", "()V", nullptr, $PUBLIC},
	{"allSoundOff", "()V", nullptr, $PUBLIC},
	{"applyInstrumentCustomization", "()V", nullptr, 0, $method(static_cast<void(SoftChannel::*)()>(&SoftChannel::applyInstrumentCustomization))},
	{"controlChange", "(II)V", nullptr, $PUBLIC},
	{"controlChangePerNote", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(SoftChannel::*)(int32_t,int32_t,int32_t)>(&SoftChannel::controlChangePerNote))},
	{"createModelConnections", "(Lcom/sun/media/sound/ModelIdentifier;[I[I)[Lcom/sun/media/sound/ModelConnectionBlock;", nullptr, $PRIVATE, $method(static_cast<$ModelConnectionBlockArray*(SoftChannel::*)($ModelIdentifier*,$ints*,$ints*)>(&SoftChannel::createModelConnections))},
	{"findFreeVoice", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SoftChannel::*)(int32_t)>(&SoftChannel::findFreeVoice))},
	{"getChannelPressure", "()I", nullptr, $PUBLIC},
	{"getControlPerNote", "(II)I", nullptr, $PUBLIC, $method(static_cast<int32_t(SoftChannel::*)(int32_t,int32_t)>(&SoftChannel::getControlPerNote))},
	{"getController", "(I)I", nullptr, $PUBLIC},
	{"getMono", "()Z", nullptr, $PUBLIC},
	{"getMute", "()Z", nullptr, $PUBLIC},
	{"getOmni", "()Z", nullptr, $PUBLIC},
	{"getPitchBend", "()I", nullptr, $PUBLIC},
	{"getPolyPressure", "(I)I", nullptr, $PUBLIC},
	{"getProgram", "()I", nullptr, $PUBLIC},
	{"getSolo", "()Z", nullptr, $PUBLIC},
	{"initVoice", "(Lcom/sun/media/sound/SoftVoice;Lcom/sun/media/sound/SoftPerformer;IIII[Lcom/sun/media/sound/ModelConnectionBlock;Lcom/sun/media/sound/ModelChannelMixer;Z)V", nullptr, 0, $method(static_cast<void(SoftChannel::*)($SoftVoice*,$SoftPerformer*,int32_t,int32_t,int32_t,int32_t,$ModelConnectionBlockArray*,$ModelChannelMixer*,bool)>(&SoftChannel::initVoice))},
	{"localControl", "(Z)Z", nullptr, $PUBLIC},
	{"mapChannelPressureToDestination", "([I[I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftChannel::*)($ints*,$ints*)>(&SoftChannel::mapChannelPressureToDestination))},
	{"mapControlToDestination", "(I[I[I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftChannel::*)(int32_t,$ints*,$ints*)>(&SoftChannel::mapControlToDestination))},
	{"mapPolyPressureToDestination", "([I[I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftChannel::*)($ints*,$ints*)>(&SoftChannel::mapPolyPressureToDestination))},
	{"noteOff", "(II)V", nullptr, $PUBLIC},
	{"noteOff", "(I)V", nullptr, $PUBLIC},
	{"noteOff_internal", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(SoftChannel::*)(int32_t,int32_t)>(&SoftChannel::noteOff_internal))},
	{"noteOn", "(II)V", nullptr, $PUBLIC},
	{"noteOn", "(III)V", nullptr, 0, $method(static_cast<void(SoftChannel::*)(int32_t,int32_t,int32_t)>(&SoftChannel::noteOn))},
	{"noteOn_internal", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(SoftChannel::*)(int32_t,int32_t,int32_t)>(&SoftChannel::noteOn_internal))},
	{"nrpnChange", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(SoftChannel::*)(int32_t,int32_t)>(&SoftChannel::nrpnChange))},
	{"play", "(I[Lcom/sun/media/sound/ModelConnectionBlock;)V", nullptr, $PUBLIC},
	{"programChange", "(I)V", nullptr, $PUBLIC},
	{"programChange", "(II)V", nullptr, $PUBLIC},
	{"resetAllControllers", "()V", nullptr, $PUBLIC},
	{"resetAllControllers", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(SoftChannel::*)(bool)>(&SoftChannel::resetAllControllers))},
	{"restrict14Bit", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&SoftChannel::restrict14Bit))},
	{"restrict7Bit", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&SoftChannel::restrict7Bit))},
	{"rpnChange", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(SoftChannel::*)(int32_t,int32_t)>(&SoftChannel::rpnChange))},
	{"setChannelPressure", "(I)V", nullptr, $PUBLIC},
	{"setMono", "(Z)V", nullptr, $PUBLIC},
	{"setMute", "(Z)V", nullptr, $PUBLIC},
	{"setOmni", "(Z)V", nullptr, $PUBLIC},
	{"setPitchBend", "(I)V", nullptr, $PUBLIC},
	{"setPolyPressure", "(II)V", nullptr, $PUBLIC},
	{"setSolo", "(Z)V", nullptr, $PUBLIC},
	{"setSoloMute", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SoftChannel::*)(bool)>(&SoftChannel::setSoloMute))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tuningChange", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftChannel::*)(int32_t)>(&SoftChannel::tuningChange))},
	{"tuningChange", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(SoftChannel::*)(int32_t,int32_t)>(&SoftChannel::tuningChange))},
	{}
};

$InnerClassInfo _SoftChannel_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftChannel$MidiControlObject", "com.sun.media.sound.SoftChannel", "MidiControlObject", $PRIVATE},
	{"com.sun.media.sound.SoftChannel$5", nullptr, nullptr, 0},
	{"com.sun.media.sound.SoftChannel$4", nullptr, nullptr, 0},
	{"com.sun.media.sound.SoftChannel$3", nullptr, nullptr, 0},
	{"com.sun.media.sound.SoftChannel$2", nullptr, nullptr, 0},
	{"com.sun.media.sound.SoftChannel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftChannel_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftChannel",
	"java.lang.Object",
	"javax.sound.midi.MidiChannel,com.sun.media.sound.ModelDirectedPlayer",
	_SoftChannel_FieldInfo_,
	_SoftChannel_MethodInfo_,
	nullptr,
	nullptr,
	_SoftChannel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftChannel$MidiControlObject,com.sun.media.sound.SoftChannel$5,com.sun.media.sound.SoftChannel$4,com.sun.media.sound.SoftChannel$3,com.sun.media.sound.SoftChannel$2,com.sun.media.sound.SoftChannel$1"
};

$Object* allocate$SoftChannel($Class* clazz) {
	return $of($alloc(SoftChannel));
}

int32_t SoftChannel::hashCode() {
	 return this->$MidiChannel::hashCode();
}

bool SoftChannel::equals(Object$* arg0) {
	 return this->$MidiChannel::equals(arg0);
}

$Object* SoftChannel::clone() {
	 return this->$MidiChannel::clone();
}

$String* SoftChannel::toString() {
	 return this->$MidiChannel::toString();
}

void SoftChannel::finalize() {
	this->$MidiChannel::finalize();
}

$booleans* SoftChannel::dontResetControls = nullptr;

int32_t SoftChannel::restrict7Bit(int32_t value) {
	$init(SoftChannel);
	if (value < 0) {
		return 0;
	}
	if (value > 127) {
		return 127;
	}
	return value;
}

int32_t SoftChannel::restrict14Bit(int32_t value) {
	$init(SoftChannel);
	if (value < 0) {
		return 0;
	}
	if (value > 16256) {
		return 16256;
	}
	return value;
}

void SoftChannel::init$($SoftSynthesizer* synth, int32_t channel) {
	$useLocalCurrentObjectStackCache();
	this->rpn_control = SoftChannel::RPN_NULL_VALUE;
	this->nrpn_control = SoftChannel::RPN_NULL_VALUE;
	this->portamento_time = (double)1;
	$set(this, portamento_lastnote, $new($ints, 128));
	this->portamento_lastnote_ix = 0;
	this->portamento = false;
	this->mono = false;
	this->mute = false;
	this->solo = false;
	this->solomute = false;
	$set(this, polypressure, $new($ints, 128));
	this->channelpressure = 0;
	$set(this, controller, $new($ints, 128));
	$set(this, co_midi_pitch, $new($doubles, 1));
	$set(this, co_midi_channel_pressure, $new($doubles, 1));
	$set(this, tuning, $new($SoftTuning));
	this->tuning_bank = 0;
	this->tuning_program = 0;
	$set(this, current_instrument, nullptr);
	$set(this, current_mixer, nullptr);
	$set(this, current_director, nullptr);
	this->cds_control_number = -1;
	$set(this, cds_control_connections, nullptr);
	$set(this, cds_channelpressure_connections, nullptr);
	$set(this, cds_polypressure_connections, nullptr);
	this->sustain = false;
	$set(this, keybasedcontroller_active, nullptr);
	$set(this, keybasedcontroller_value, nullptr);
	$set(this, co_midi, $new($SoftControlArray, 128));
	{
		for (int32_t i = 0; i < $nc(this->co_midi)->length; ++i) {
			$nc(this->co_midi)->set(i, $$new($SoftChannel$MidiControlObject, this));
		}
	}
	$set(this, co_midi_cc_cc, $new($doubleArray2, 128, 1));
	$set(this, co_midi_cc, $new($SoftChannel$1, this));
	$set(this, co_midi_rpn_rpn_i, $new($HashMap));
	$set(this, co_midi_rpn_rpn, $new($HashMap));
	$set(this, co_midi_rpn, $new($SoftChannel$2, this));
	$set(this, co_midi_nrpn_nrpn_i, $new($HashMap));
	$set(this, co_midi_nrpn_nrpn, $new($HashMap));
	$set(this, co_midi_nrpn, $new($SoftChannel$3, this));
	$set(this, lastVelocity, $new($ints, 128));
	this->firstVoice = true;
	this->voiceNo = 0;
	this->play_noteNumber = 0;
	this->play_velocity = 0;
	this->play_delay = 0;
	this->play_releasetriggered = false;
	this->channel = channel;
	$set(this, voices, $nc(synth)->getVoices());
	$set(this, synthesizer, synth);
	$set(this, mainmixer, synth->getMainMixer());
	$set(this, control_mutex, synth->control_mutex);
	resetAllControllers(true);
}

int32_t SoftChannel::findFreeVoice(int32_t x) {
	$useLocalCurrentObjectStackCache();
	if (x == -1) {
		return -1;
	}
	for (int32_t i = x; i < $nc(this->voices)->length; ++i) {
		if (!$nc($nc(this->voices)->get(i))->active) {
			return i;
		}
	}
	int32_t vmode = $nc(this->synthesizer)->getVoiceAllocationMode();
	if (vmode == 1) {
		int32_t steal_channel = this->channel;
		for (int32_t j = 0; j < $nc(this->voices)->length; ++j) {
			if ($nc($nc(this->voices)->get(j))->stealer_channel == nullptr) {
				if (steal_channel == 9) {
					steal_channel = $nc($nc(this->voices)->get(j))->channel;
				} else if ($nc($nc(this->voices)->get(j))->channel != 9) {
					if ($nc($nc(this->voices)->get(j))->channel > steal_channel) {
						steal_channel = $nc($nc(this->voices)->get(j))->channel;
					}
				}
			}
		}
		int32_t voiceNo = -1;
		$var($SoftVoice, v, nullptr);
		for (int32_t j = 0; j < $nc(this->voices)->length; ++j) {
			if ($nc($nc(this->voices)->get(j))->channel == steal_channel) {
				if ($nc($nc(this->voices)->get(j))->stealer_channel == nullptr && !$nc($nc(this->voices)->get(j))->on) {
					if (v == nullptr) {
						$assign(v, $nc(this->voices)->get(j));
						voiceNo = j;
					}
					if ($nc($nc(this->voices)->get(j))->voiceID < $nc(v)->voiceID) {
						$assign(v, $nc(this->voices)->get(j));
						voiceNo = j;
					}
				}
			}
		}
		if (voiceNo == -1) {
			for (int32_t j = 0; j < $nc(this->voices)->length; ++j) {
				if ($nc($nc(this->voices)->get(j))->channel == steal_channel) {
					if ($nc($nc(this->voices)->get(j))->stealer_channel == nullptr) {
						if (v == nullptr) {
							$assign(v, $nc(this->voices)->get(j));
							voiceNo = j;
						}
						if ($nc($nc(this->voices)->get(j))->voiceID < $nc(v)->voiceID) {
							$assign(v, $nc(this->voices)->get(j));
							voiceNo = j;
						}
					}
				}
			}
		}
		return voiceNo;
	} else {
		int32_t voiceNo = -1;
		$var($SoftVoice, v, nullptr);
		for (int32_t j = 0; j < $nc(this->voices)->length; ++j) {
			if ($nc($nc(this->voices)->get(j))->stealer_channel == nullptr && !$nc($nc(this->voices)->get(j))->on) {
				if (v == nullptr) {
					$assign(v, $nc(this->voices)->get(j));
					voiceNo = j;
				}
				if ($nc($nc(this->voices)->get(j))->voiceID < $nc(v)->voiceID) {
					$assign(v, $nc(this->voices)->get(j));
					voiceNo = j;
				}
			}
		}
		if (voiceNo == -1) {
			for (int32_t j = 0; j < $nc(this->voices)->length; ++j) {
				if ($nc($nc(this->voices)->get(j))->stealer_channel == nullptr) {
					if (v == nullptr) {
						$assign(v, $nc(this->voices)->get(j));
						voiceNo = j;
					}
					if ($nc($nc(this->voices)->get(j))->voiceID < $nc(v)->voiceID) {
						$assign(v, $nc(this->voices)->get(j));
						voiceNo = j;
					}
				}
			}
		}
		return voiceNo;
	}
}

void SoftChannel::initVoice($SoftVoice* voice, $SoftPerformer* p, int32_t voiceID, int32_t noteNumber, int32_t velocity, int32_t delay, $ModelConnectionBlockArray* connectionBlocks, $ModelChannelMixer* channelmixer, bool releaseTriggered) {
	if ($nc(voice)->active) {
		$set(voice, stealer_channel, this);
		$set(voice, stealer_performer, p);
		voice->stealer_voiceID = voiceID;
		voice->stealer_noteNumber = noteNumber;
		voice->stealer_velocity = velocity;
		$set(voice, stealer_extendedConnectionBlocks, connectionBlocks);
		$set(voice, stealer_channelmixer, channelmixer);
		voice->stealer_releaseTriggered = releaseTriggered;
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->active && $nc($nc(this->voices)->get(i))->voiceID == voice->voiceID) {
				$nc($nc(this->voices)->get(i))->soundOff();
			}
		}
		return;
	}
	$set($nc(voice), extendedConnectionBlocks, connectionBlocks);
	$set(voice, channelmixer, channelmixer);
	voice->releaseTriggered = releaseTriggered;
	voice->voiceID = voiceID;
	$set(voice, tuning, this->tuning);
	voice->exclusiveClass = $nc(p)->exclusiveClass;
	$set(voice, softchannel, this);
	voice->channel = this->channel;
	voice->bank = this->bank;
	voice->program = this->program;
	$set(voice, instrument, this->current_instrument);
	$set(voice, performer, p);
	$nc(voice->objects)->clear();
	$nc(voice->objects)->put("midi"_s, $nc(this->co_midi)->get(noteNumber));
	$nc(voice->objects)->put("midi_cc"_s, this->co_midi_cc);
	$nc(voice->objects)->put("midi_rpn"_s, this->co_midi_rpn);
	$nc(voice->objects)->put("midi_nrpn"_s, this->co_midi_nrpn);
	voice->noteOn(noteNumber, velocity, delay);
	voice->setMute(this->mute);
	voice->setSoloMute(this->solomute);
	if (releaseTriggered) {
		return;
	}
	if ($nc(this->controller)->get(84) != 0) {
		$nc(voice->co_noteon_keynumber)->set(0, ($nc(this->tuning)->getTuning($nc(this->controller)->get(84)) / 100.0) * (1.0f / 128.0f));
		voice->portamento = true;
		controlChange(84, 0);
	} else if (this->portamento) {
		if (this->mono) {
			if ($nc(this->portamento_lastnote)->get(0) != -1) {
				$nc(voice->co_noteon_keynumber)->set(0, ($nc(this->tuning)->getTuning($nc(this->portamento_lastnote)->get(0)) / 100.0) * (1.0f / 128.0f));
				voice->portamento = true;
				controlChange(84, 0);
			}
			$nc(this->portamento_lastnote)->set(0, noteNumber);
		} else if (this->portamento_lastnote_ix != 0) {
			--this->portamento_lastnote_ix;
			$nc(voice->co_noteon_keynumber)->set(0, ($nc(this->tuning)->getTuning($nc(this->portamento_lastnote)->get(this->portamento_lastnote_ix)) / 100.0) * (1.0f / 128.0f));
			voice->portamento = true;
		}
	}
}

void SoftChannel::noteOn(int32_t noteNumber, int32_t velocity) {
	noteOn(noteNumber, velocity, 0);
}

void SoftChannel::noteOn(int32_t noteNumber, int32_t velocity, int32_t delay) {
	noteNumber = restrict7Bit(noteNumber);
	velocity = restrict7Bit(velocity);
	noteOn_internal(noteNumber, velocity, delay);
	if (this->current_mixer != nullptr) {
		$nc(this->current_mixer)->noteOn(noteNumber, velocity);
	}
}

void SoftChannel::noteOn_internal(int32_t noteNumber, int32_t velocity, int32_t delay) {
	$useLocalCurrentObjectStackCache();
	if (velocity == 0) {
		noteOff_internal(noteNumber, 64);
		return;
	}
	$synchronized(this->control_mutex) {
		if (this->sustain) {
			this->sustain = false;
			for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
				if (($nc($nc(this->voices)->get(i))->sustain || $nc($nc(this->voices)->get(i))->on) && $nc($nc(this->voices)->get(i))->channel == this->channel && $nc($nc(this->voices)->get(i))->active && $nc($nc(this->voices)->get(i))->note == noteNumber) {
					$nc($nc(this->voices)->get(i))->sustain = false;
					$nc($nc(this->voices)->get(i))->on = true;
					$nc($nc(this->voices)->get(i))->noteOff(0);
				}
			}
			this->sustain = true;
		}
		$nc(this->mainmixer)->activity();
		if (this->mono) {
			if (this->portamento) {
				bool n_found = false;
				for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
					if ($nc($nc(this->voices)->get(i))->on && $nc($nc(this->voices)->get(i))->channel == this->channel && $nc($nc(this->voices)->get(i))->active && $nc($nc(this->voices)->get(i))->releaseTriggered == false) {
						$nc($nc(this->voices)->get(i))->portamento = true;
						$nc($nc(this->voices)->get(i))->setNote(noteNumber);
						n_found = true;
					}
				}
				if (n_found) {
					$nc(this->portamento_lastnote)->set(0, noteNumber);
					return;
				}
			}
			if ($nc(this->controller)->get(84) != 0) {
				bool n_found = false;
				for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
					if ($nc($nc(this->voices)->get(i))->on && $nc($nc(this->voices)->get(i))->channel == this->channel && $nc($nc(this->voices)->get(i))->active && $nc($nc(this->voices)->get(i))->note == $nc(this->controller)->get(84) && $nc($nc(this->voices)->get(i))->releaseTriggered == false) {
						$nc($nc(this->voices)->get(i))->portamento = true;
						$nc($nc(this->voices)->get(i))->setNote(noteNumber);
						n_found = true;
					}
				}
				controlChange(84, 0);
				if (n_found) {
					return;
				}
			}
		}
		if (this->mono) {
			allNotesOff();
		}
		if (this->current_instrument == nullptr) {
			$set(this, current_instrument, $nc(this->synthesizer)->findInstrument(this->program, this->bank, this->channel));
			if (this->current_instrument == nullptr) {
				return;
			}
			if (this->current_mixer != nullptr) {
				$nc(this->mainmixer)->stopMixer(this->current_mixer);
			}
			$set(this, current_mixer, $nc($($nc(this->current_instrument)->getSourceInstrument()))->getChannelMixer(this, $($nc(this->synthesizer)->getFormat())));
			if (this->current_mixer != nullptr) {
				$nc(this->mainmixer)->registerMixer(this->current_mixer);
			}
			$set(this, current_director, $nc(this->current_instrument)->getDirector(this, this));
			applyInstrumentCustomization();
		}
		this->prevVoiceID = $nc(this->synthesizer)->voiceIDCounter++;
		this->firstVoice = true;
		this->voiceNo = 0;
		int32_t tunedKey = (int32_t)($Math::round($nc(this->tuning)->getTuning(noteNumber) / 100.0));
		this->play_noteNumber = noteNumber;
		this->play_velocity = velocity;
		this->play_delay = delay;
		this->play_releasetriggered = false;
		$nc(this->lastVelocity)->set(noteNumber, velocity);
		$nc(this->current_director)->noteOn(tunedKey, velocity);
	}
}

void SoftChannel::noteOff(int32_t noteNumber, int32_t velocity) {
	noteNumber = restrict7Bit(noteNumber);
	velocity = restrict7Bit(velocity);
	noteOff_internal(noteNumber, velocity);
	if (this->current_mixer != nullptr) {
		$nc(this->current_mixer)->noteOff(noteNumber, velocity);
	}
}

void SoftChannel::noteOff_internal(int32_t noteNumber, int32_t velocity) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->control_mutex) {
		if (!this->mono) {
			if (this->portamento) {
				if (this->portamento_lastnote_ix != 127) {
					$nc(this->portamento_lastnote)->set(this->portamento_lastnote_ix, noteNumber);
					++this->portamento_lastnote_ix;
				}
			}
		}
		$nc(this->mainmixer)->activity();
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->on && $nc($nc(this->voices)->get(i))->channel == this->channel && $nc($nc(this->voices)->get(i))->note == noteNumber && $nc($nc(this->voices)->get(i))->releaseTriggered == false) {
				$nc($nc(this->voices)->get(i))->noteOff(velocity);
			}
			if ($nc($nc(this->voices)->get(i))->stealer_channel == this && $nc($nc(this->voices)->get(i))->stealer_noteNumber == noteNumber) {
				$var($SoftVoice, v, $nc(this->voices)->get(i));
				$nc(v)->stealer_releaseTriggered = false;
				$set(v, stealer_channel, nullptr);
				$set(v, stealer_performer, nullptr);
				v->stealer_voiceID = -1;
				v->stealer_noteNumber = 0;
				v->stealer_velocity = 0;
				$set(v, stealer_extendedConnectionBlocks, nullptr);
				$set(v, stealer_channelmixer, nullptr);
			}
		}
		if (this->current_instrument == nullptr) {
			$set(this, current_instrument, $nc(this->synthesizer)->findInstrument(this->program, this->bank, this->channel));
			if (this->current_instrument == nullptr) {
				return;
			}
			if (this->current_mixer != nullptr) {
				$nc(this->mainmixer)->stopMixer(this->current_mixer);
			}
			$set(this, current_mixer, $nc($($nc(this->current_instrument)->getSourceInstrument()))->getChannelMixer(this, $($nc(this->synthesizer)->getFormat())));
			if (this->current_mixer != nullptr) {
				$nc(this->mainmixer)->registerMixer(this->current_mixer);
			}
			$set(this, current_director, $nc(this->current_instrument)->getDirector(this, this));
			applyInstrumentCustomization();
		}
		this->prevVoiceID = $nc(this->synthesizer)->voiceIDCounter++;
		this->firstVoice = true;
		this->voiceNo = 0;
		int32_t tunedKey = (int32_t)($Math::round($nc(this->tuning)->getTuning(noteNumber) / 100.0));
		this->play_noteNumber = noteNumber;
		this->play_velocity = $nc(this->lastVelocity)->get(noteNumber);
		this->play_releasetriggered = true;
		this->play_delay = 0;
		$nc(this->current_director)->noteOff(tunedKey, velocity);
	}
}

void SoftChannel::play(int32_t performerIndex, $ModelConnectionBlockArray* connectionBlocks) {
	int32_t noteNumber = this->play_noteNumber;
	int32_t velocity = this->play_velocity;
	int32_t delay = this->play_delay;
	bool releasetriggered = this->play_releasetriggered;
	$var($SoftPerformer, p, $nc(this->current_instrument)->getPerformer(performerIndex));
	if (this->firstVoice) {
		this->firstVoice = false;
		if ($nc(p)->exclusiveClass != 0) {
			int32_t x = p->exclusiveClass;
			for (int32_t j = 0; j < $nc(this->voices)->length; ++j) {
				if ($nc($nc(this->voices)->get(j))->active && $nc($nc(this->voices)->get(j))->channel == this->channel && $nc($nc(this->voices)->get(j))->exclusiveClass == x) {
					if (!(p->selfNonExclusive && $nc($nc(this->voices)->get(j))->note == noteNumber)) {
						$nc($nc(this->voices)->get(j))->shutdown();
					}
				}
			}
		}
	}
	this->voiceNo = findFreeVoice(this->voiceNo);
	if (this->voiceNo == -1) {
		return;
	}
	initVoice($nc(this->voices)->get(this->voiceNo), p, this->prevVoiceID, noteNumber, velocity, delay, connectionBlocks, this->current_mixer, releasetriggered);
}

void SoftChannel::noteOff(int32_t noteNumber) {
	if (noteNumber < 0 || noteNumber > 127) {
		return;
	}
	noteOff_internal(noteNumber, 64);
}

void SoftChannel::setPolyPressure(int32_t noteNumber, int32_t pressure) {
	noteNumber = restrict7Bit(noteNumber);
	pressure = restrict7Bit(pressure);
	if (this->current_mixer != nullptr) {
		$nc(this->current_mixer)->setPolyPressure(noteNumber, pressure);
	}
	$synchronized(this->control_mutex) {
		$nc(this->mainmixer)->activity();
		$nc($($nc($nc(this->co_midi)->get(noteNumber))->get(0, "poly_pressure"_s)))->set(0, pressure * (1.0 / 128.0));
		$nc(this->polypressure)->set(noteNumber, pressure);
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->active && $nc($nc(this->voices)->get(i))->note == noteNumber) {
				$nc($nc(this->voices)->get(i))->setPolyPressure(pressure);
			}
		}
	}
}

int32_t SoftChannel::getPolyPressure(int32_t noteNumber) {
	$synchronized(this->control_mutex) {
		return $nc(this->polypressure)->get(noteNumber);
	}
}

void SoftChannel::setChannelPressure(int32_t pressure) {
	pressure = restrict7Bit(pressure);
	if (this->current_mixer != nullptr) {
		$nc(this->current_mixer)->setChannelPressure(pressure);
	}
	$synchronized(this->control_mutex) {
		$nc(this->mainmixer)->activity();
		$nc(this->co_midi_channel_pressure)->set(0, pressure * (1.0 / 128.0));
		this->channelpressure = pressure;
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->active) {
				$nc($nc(this->voices)->get(i))->setChannelPressure(pressure);
			}
		}
	}
}

int32_t SoftChannel::getChannelPressure() {
	$synchronized(this->control_mutex) {
		return this->channelpressure;
	}
}

void SoftChannel::applyInstrumentCustomization() {
	$useLocalCurrentObjectStackCache();
	if (this->cds_control_connections == nullptr && this->cds_channelpressure_connections == nullptr && this->cds_polypressure_connections == nullptr) {
		return;
	}
	$var($ModelInstrument, src_instrument, $nc(this->current_instrument)->getSourceInstrument());
	$var($ModelPerformerArray, performers, $nc(src_instrument)->getPerformers());
	$var($ModelPerformerArray, new_performers, $new($ModelPerformerArray, $nc(performers)->length));
	for (int32_t i = 0; i < new_performers->length; ++i) {
		$var($ModelPerformer, performer, performers->get(i));
		$var($ModelPerformer, new_performer, $new($ModelPerformer));
		new_performer->setName($($nc(performer)->getName()));
		new_performer->setExclusiveClass($nc(performer)->getExclusiveClass());
		new_performer->setKeyFrom($nc(performer)->getKeyFrom());
		new_performer->setKeyTo($nc(performer)->getKeyTo());
		new_performer->setVelFrom($nc(performer)->getVelFrom());
		new_performer->setVelTo($nc(performer)->getVelTo());
		$nc($(new_performer->getOscillators()))->addAll($($nc(performer)->getOscillators()));
		$nc($(new_performer->getConnectionBlocks()))->addAll($($nc(performer)->getConnectionBlocks()));
		new_performers->set(i, new_performer);
		$var($List, connblocks, new_performer->getConnectionBlocks());
		if (this->cds_control_connections != nullptr) {
			$var($String, cc, $Integer::toString(this->cds_control_number));
			$var($Iterator, iter, $nc(connblocks)->iterator());
			while ($nc(iter)->hasNext()) {
				$var($ModelConnectionBlock, conn, $cast($ModelConnectionBlock, iter->next()));
				$var($ModelSourceArray, sources, $nc(conn)->getSources());
				bool removeok = false;
				if (sources != nullptr) {
					for (int32_t j = 0; j < sources->length; ++j) {
						$var($ModelSource, src, sources->get(j));
						bool var$0 = "midi_cc"_s->equals($($nc($($nc(src)->getIdentifier()))->getObject()));
						if (var$0 && $nc(cc)->equals($($nc($($nc(src)->getIdentifier()))->getVariable()))) {
							removeok = true;
						}
					}
				}
				if (removeok) {
					iter->remove();
				}
			}
			for (int32_t j = 0; j < $nc(this->cds_control_connections)->length; ++j) {
				connblocks->add($nc(this->cds_control_connections)->get(j));
			}
		}
		if (this->cds_polypressure_connections != nullptr) {
			$var($Iterator, iter, $nc(connblocks)->iterator());
			while ($nc(iter)->hasNext()) {
				$var($ModelConnectionBlock, conn, $cast($ModelConnectionBlock, iter->next()));
				$var($ModelSourceArray, sources, $nc(conn)->getSources());
				bool removeok = false;
				if (sources != nullptr) {
					for (int32_t j = 0; j < sources->length; ++j) {
						$var($ModelSource, src, sources->get(j));
						bool var$1 = "midi"_s->equals($($nc($($nc(src)->getIdentifier()))->getObject()));
						if (var$1 && "poly_pressure"_s->equals($($nc($($nc(src)->getIdentifier()))->getVariable()))) {
							removeok = true;
						}
					}
				}
				if (removeok) {
					iter->remove();
				}
			}
			for (int32_t j = 0; j < $nc(this->cds_polypressure_connections)->length; ++j) {
				connblocks->add($nc(this->cds_polypressure_connections)->get(j));
			}
		}
		if (this->cds_channelpressure_connections != nullptr) {
			$var($Iterator, iter, $nc(connblocks)->iterator());
			while ($nc(iter)->hasNext()) {
				$var($ModelConnectionBlock, conn, $cast($ModelConnectionBlock, iter->next()));
				$var($ModelSourceArray, sources, $nc(conn)->getSources());
				bool removeok = false;
				if (sources != nullptr) {
					for (int32_t j = 0; j < sources->length; ++j) {
						$var($ModelIdentifier, srcid, $nc(sources->get(j))->getIdentifier());
						bool var$2 = "midi"_s->equals($($nc(srcid)->getObject()));
						if (var$2 && "channel_pressure"_s->equals($($nc(srcid)->getVariable()))) {
							removeok = true;
						}
					}
				}
				if (removeok) {
					iter->remove();
				}
			}
			for (int32_t j = 0; j < $nc(this->cds_channelpressure_connections)->length; ++j) {
				connblocks->add($nc(this->cds_channelpressure_connections)->get(j));
			}
		}
	}
	$set(this, current_instrument, $new($SoftInstrument, src_instrument, new_performers));
}

$ModelConnectionBlockArray* SoftChannel::createModelConnections($ModelIdentifier* sid, $ints* destination, $ints* range) {
	$useLocalCurrentObjectStackCache();
	$var($List, conns, $new($ArrayList));
	for (int32_t i = 0; i < $nc(destination)->length; ++i) {
		int32_t d = destination->get(i);
		int32_t r = $nc(range)->get(i);
		if (d == 0) {
			double scale = (double)((r - 64) * 100);
			$var($ModelSource, var$0, $new($ModelSource, sid, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
			double var$1 = scale;
			$var($ModelConnectionBlock, conn, $new($ModelConnectionBlock, var$0, var$1, $$new($ModelDestination, $$new($ModelIdentifier, "osc"_s, "pitch"_s))));
			conns->add(conn);
		}
		if (d == 1) {
			double scale = (r / 64.0 - 1.0) * 9600.0;
			$var($ModelConnectionBlock, conn, nullptr);
			if (scale > 0) {
				$var($ModelSource, var$2, $new($ModelSource, sid, $ModelStandardTransform::DIRECTION_MAX2MIN, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
				double var$3 = -scale;
				$init($ModelDestination);
				$assign(conn, $new($ModelConnectionBlock, var$2, var$3, $$new($ModelDestination, $ModelDestination::DESTINATION_FILTER_FREQ)));
			} else {
				$var($ModelSource, var$4, $new($ModelSource, sid, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
				double var$5 = scale;
				$init($ModelDestination);
				$assign(conn, $new($ModelConnectionBlock, var$4, var$5, $$new($ModelDestination, $ModelDestination::DESTINATION_FILTER_FREQ)));
			}
			conns->add(conn);
		}
		if (d == 2) {
			double scale = (r / 64.0);
			$var($ModelTransform, mt, $new($SoftChannel$4, this, scale));
			$var($ModelSource, var$6, $new($ModelSource, sid, mt));
			$init($ModelDestination);
			$var($ModelConnectionBlock, conn, $new($ModelConnectionBlock, var$6, (double)-960, $$new($ModelDestination, $ModelDestination::DESTINATION_GAIN)));
			conns->add(conn);
		}
		if (d == 3) {
			double scale = (r / 64.0 - 1.0) * 9600.0;
			$init($ModelSource);
			$var($ModelSource, var$7, $new($ModelSource, $ModelSource::SOURCE_LFO1, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
			$var($ModelSource, var$8, $new($ModelSource, sid, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
			double var$9 = scale;
			$init($ModelDestination);
			$var($ModelConnectionBlock, conn, $new($ModelConnectionBlock, var$7, var$8, var$9, $$new($ModelDestination, $ModelDestination::DESTINATION_PITCH)));
			conns->add(conn);
		}
		if (d == 4) {
			double scale = (r / 128.0) * 2400.0;
			$init($ModelSource);
			$var($ModelSource, var$10, $new($ModelSource, $ModelSource::SOURCE_LFO1, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
			$var($ModelSource, var$11, $new($ModelSource, sid, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
			double var$12 = scale;
			$init($ModelDestination);
			$var($ModelConnectionBlock, conn, $new($ModelConnectionBlock, var$10, var$11, var$12, $$new($ModelDestination, $ModelDestination::DESTINATION_FILTER_FREQ)));
			conns->add(conn);
		}
		if (d == 5) {
			double scale = (r / 127.0);
			$var($ModelTransform, mt, $new($SoftChannel$5, this, scale));
			$init($ModelSource);
			$var($ModelSource, var$13, $new($ModelSource, $ModelSource::SOURCE_LFO1, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
			$var($ModelSource, var$14, $new($ModelSource, sid, mt));
			$init($ModelDestination);
			$var($ModelConnectionBlock, conn, $new($ModelConnectionBlock, var$13, var$14, (double)-960, $$new($ModelDestination, $ModelDestination::DESTINATION_GAIN)));
			conns->add(conn);
		}
	}
	return $fcast($ModelConnectionBlockArray, conns->toArray($$new($ModelConnectionBlockArray, conns->size())));
}

void SoftChannel::mapPolyPressureToDestination($ints* destination, $ints* range) {
	$set(this, current_instrument, nullptr);
	if ($nc(destination)->length == 0) {
		$set(this, cds_polypressure_connections, nullptr);
		return;
	}
	$set(this, cds_polypressure_connections, createModelConnections($$new($ModelIdentifier, "midi"_s, "poly_pressure"_s), destination, range));
}

void SoftChannel::mapChannelPressureToDestination($ints* destination, $ints* range) {
	$set(this, current_instrument, nullptr);
	if ($nc(destination)->length == 0) {
		$set(this, cds_channelpressure_connections, nullptr);
		return;
	}
	$set(this, cds_channelpressure_connections, createModelConnections($$new($ModelIdentifier, "midi"_s, "channel_pressure"_s), destination, range));
}

void SoftChannel::mapControlToDestination(int32_t control, $ints* destination, $ints* range) {
	$useLocalCurrentObjectStackCache();
	if (!((control >= 1 && control <= 31) || (control >= 64 && control <= 95))) {
		$set(this, cds_control_connections, nullptr);
		return;
	}
	$set(this, current_instrument, nullptr);
	this->cds_control_number = control;
	if ($nc(destination)->length == 0) {
		$set(this, cds_control_connections, nullptr);
		return;
	}
	$set(this, cds_control_connections, createModelConnections($$new($ModelIdentifier, "midi_cc"_s, $($Integer::toString(control))), destination, range));
}

void SoftChannel::controlChangePerNote(int32_t noteNumber, int32_t controller, int32_t value) {
	$useLocalCurrentObjectStackCache();
	if (this->keybasedcontroller_active == nullptr) {
		$set(this, keybasedcontroller_active, $new($booleanArray2, 128));
		$set(this, keybasedcontroller_value, $new($doubleArray2, 128));
	}
	if ($nc(this->keybasedcontroller_active)->get(noteNumber) == nullptr) {
		$nc(this->keybasedcontroller_active)->set(noteNumber, $$new($booleans, 128));
		$Arrays::fill($nc(this->keybasedcontroller_active)->get(noteNumber), false);
		$nc(this->keybasedcontroller_value)->set(noteNumber, $$new($doubles, 128));
		$Arrays::fill($nc(this->keybasedcontroller_value)->get(noteNumber), (double)0);
	}
	if (value == -1) {
		$nc($nc(this->keybasedcontroller_active)->get(noteNumber))->set(controller, false);
	} else {
		$nc($nc(this->keybasedcontroller_active)->get(noteNumber))->set(controller, true);
		$nc($nc(this->keybasedcontroller_value)->get(noteNumber))->set(controller, value / 128.0);
	}
	if (controller < 120) {
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->active) {
				$nc($nc(this->voices)->get(i))->controlChange(controller, -1);
			}
		}
	} else if (controller == 120) {
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->active) {
				$nc($nc(this->voices)->get(i))->rpnChange(1, -1);
			}
		}
	} else if (controller == 121) {
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->active) {
				$nc($nc(this->voices)->get(i))->rpnChange(2, -1);
			}
		}
	}
}

int32_t SoftChannel::getControlPerNote(int32_t noteNumber, int32_t controller) {
	if (this->keybasedcontroller_active == nullptr) {
		return -1;
	}
	if ($nc(this->keybasedcontroller_active)->get(noteNumber) == nullptr) {
		return -1;
	}
	if (!$nc($nc(this->keybasedcontroller_active)->get(noteNumber))->get(controller)) {
		return -1;
	}
	return $cast(int32_t, ($nc($nc(this->keybasedcontroller_value)->get(noteNumber))->get(controller) * 128));
}

void SoftChannel::controlChange(int32_t controller, int32_t value) {
	$useLocalCurrentObjectStackCache();
	controller = restrict7Bit(controller);
	value = restrict7Bit(value);
	if (this->current_mixer != nullptr) {
		$nc(this->current_mixer)->controlChange(controller, value);
	}
	$synchronized(this->control_mutex) {
		{
			double x = 0;
			int32_t val = 0;
			bool on = false;
			switch (controller) {
			case 5:
				{
					$init($Math);
					x = $div(-$Math::asin((value / 128.0) * 2 - 1), $Math::PI) + 0.5;
					x = $Math::pow(100000.0, x) / 100.0;
					x = x / 100.0;
					x = x * 1000.0;
					x = x / $nc(this->synthesizer)->getControlRate();
					this->portamento_time = x;
					break;
				}
			case 6:
				{}
			case 38:
				{}
			case 96:
				{}
			case 97:
				{
					val = 0;
					if (this->nrpn_control != SoftChannel::RPN_NULL_VALUE) {
						$var($ints, val_i, $cast($ints, $nc(this->co_midi_nrpn_nrpn_i)->get($($Integer::valueOf(this->nrpn_control)))));
						if (val_i != nullptr) {
							val = val_i->get(0);
						}
					}
					if (this->rpn_control != SoftChannel::RPN_NULL_VALUE) {
						$var($ints, val_i, $cast($ints, $nc(this->co_midi_rpn_rpn_i)->get($($Integer::valueOf(this->rpn_control)))));
						if (val_i != nullptr) {
							val = val_i->get(0);
						}
					}
					if (controller == 6) {
						val = ((int32_t)(val & (uint32_t)127)) + (value << 7);
					} else if (controller == 38) {
						val = ((int32_t)(val & (uint32_t)(127 << 7))) + value;
					} else if (controller == 96 || controller == 97) {
						int32_t step = 1;
						if (this->rpn_control == 2 || this->rpn_control == 3 || this->rpn_control == 4) {
							step = 128;
						}
						if (controller == 96) {
							val += step;
						}
						if (controller == 97) {
							val -= step;
						}
					}
					if (this->nrpn_control != SoftChannel::RPN_NULL_VALUE) {
						nrpnChange(this->nrpn_control, val);
					}
					if (this->rpn_control != SoftChannel::RPN_NULL_VALUE) {
						rpnChange(this->rpn_control, val);
					}
					break;
				}
			case 64:
				{
					on = value >= 64;
					if (this->sustain != on) {
						this->sustain = on;
						if (!on) {
							for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
								if ($nc($nc(this->voices)->get(i))->active && $nc($nc(this->voices)->get(i))->sustain && $nc($nc(this->voices)->get(i))->channel == this->channel) {
									$nc($nc(this->voices)->get(i))->sustain = false;
									if (!$nc($nc(this->voices)->get(i))->on) {
										$nc($nc(this->voices)->get(i))->on = true;
										$nc($nc(this->voices)->get(i))->noteOff(0);
									}
								}
							}
						} else {
							for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
								if ($nc($nc(this->voices)->get(i))->active && $nc($nc(this->voices)->get(i))->channel == this->channel) {
									$nc($nc(this->voices)->get(i))->redamp();
								}
							}
						}
					}
					break;
				}
			case 65:
				{
					this->portamento = value >= 64;
					$nc(this->portamento_lastnote)->set(0, -1);
					this->portamento_lastnote_ix = 0;
					break;
				}
			case 66:
				{
					on = value >= 64;
					if (on) {
						for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
							if ($nc($nc(this->voices)->get(i))->active && $nc($nc(this->voices)->get(i))->on && $nc($nc(this->voices)->get(i))->channel == this->channel) {
								$nc($nc(this->voices)->get(i))->sostenuto = true;
							}
						}
					}
					if (!on) {
						for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
							if ($nc($nc(this->voices)->get(i))->active && $nc($nc(this->voices)->get(i))->sostenuto && $nc($nc(this->voices)->get(i))->channel == this->channel) {
								$nc($nc(this->voices)->get(i))->sostenuto = false;
								if (!$nc($nc(this->voices)->get(i))->on) {
									$nc($nc(this->voices)->get(i))->on = true;
									$nc($nc(this->voices)->get(i))->noteOff(0);
								}
							}
						}
					}
					break;
				}
			case 98:
				{
					this->nrpn_control = ((int32_t)(this->nrpn_control & (uint32_t)(127 << 7))) + value;
					this->rpn_control = SoftChannel::RPN_NULL_VALUE;
					break;
				}
			case 99:
				{
					this->nrpn_control = ((int32_t)(this->nrpn_control & (uint32_t)127)) + (value << 7);
					this->rpn_control = SoftChannel::RPN_NULL_VALUE;
					break;
				}
			case 100:
				{
					this->rpn_control = ((int32_t)(this->rpn_control & (uint32_t)(127 << 7))) + value;
					this->nrpn_control = SoftChannel::RPN_NULL_VALUE;
					break;
				}
			case 101:
				{
					this->rpn_control = ((int32_t)(this->rpn_control & (uint32_t)127)) + (value << 7);
					this->nrpn_control = SoftChannel::RPN_NULL_VALUE;
					break;
				}
			case 120:
				{
					allSoundOff();
					break;
				}
			case 121:
				{
					resetAllControllers(value == 127);
					break;
				}
			case 122:
				{
					localControl(value >= 64);
					break;
				}
			case 123:
				{
					allNotesOff();
					break;
				}
			case 124:
				{
					setOmni(false);
					break;
				}
			case 125:
				{
					setOmni(true);
					break;
				}
			case 126:
				{
					if (value == 1) {
						setMono(true);
					}
					break;
				}
			case 127:
				{
					setMono(false);
					break;
				}
			default:
				{
					break;
				}
			}
		}
		$nc($nc(this->co_midi_cc_cc)->get(controller))->set(0, value * (1.0 / 128.0));
		if (controller == 0) {
			this->bank = (value << 7);
			return;
		}
		if (controller == 32) {
			this->bank = ((int32_t)(this->bank & (uint32_t)(127 << 7))) + value;
			return;
		}
		$nc(this->controller)->set(controller, value);
		if (controller < 32) {
			$nc(this->controller)->set(controller + 32, 0);
		}
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->active) {
				$nc($nc(this->voices)->get(i))->controlChange(controller, value);
			}
		}
	}
}

int32_t SoftChannel::getController(int32_t controller) {
	$synchronized(this->control_mutex) {
		return (int32_t)($nc(this->controller)->get(controller) & (uint32_t)127);
	}
}

void SoftChannel::tuningChange(int32_t program) {
	tuningChange(0, program);
}

void SoftChannel::tuningChange(int32_t bank, int32_t program) {
	$synchronized(this->control_mutex) {
		$set(this, tuning, $nc(this->synthesizer)->getTuning($$new($Patch, bank, program)));
	}
}

void SoftChannel::programChange(int32_t program) {
	programChange(this->bank, program);
}

void SoftChannel::programChange(int32_t bank, int32_t program) {
	bank = restrict14Bit(bank);
	program = restrict7Bit(program);
	$synchronized(this->control_mutex) {
		$nc(this->mainmixer)->activity();
		if (this->bank != bank || this->program != program) {
			this->bank = bank;
			this->program = program;
			$set(this, current_instrument, nullptr);
		}
	}
}

int32_t SoftChannel::getProgram() {
	$synchronized(this->control_mutex) {
		return this->program;
	}
}

void SoftChannel::setPitchBend(int32_t bend) {
	bend = restrict14Bit(bend);
	if (this->current_mixer != nullptr) {
		$nc(this->current_mixer)->setPitchBend(bend);
	}
	$synchronized(this->control_mutex) {
		$nc(this->mainmixer)->activity();
		$nc(this->co_midi_pitch)->set(0, bend * (1.0 / 16384.0));
		this->pitchbend = bend;
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->active) {
				$nc($nc(this->voices)->get(i))->setPitchBend(bend);
			}
		}
	}
}

int32_t SoftChannel::getPitchBend() {
	$synchronized(this->control_mutex) {
		return this->pitchbend;
	}
}

void SoftChannel::nrpnChange(int32_t controller, int32_t value) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->synthesizer)->getGeneralMidiMode() == 0) {
		if (controller == (1 << 7) + (8)) {
			controlChange(76, value >> 7);
		}
		if (controller == (1 << 7) + (9)) {
			controlChange(77, value >> 7);
		}
		if (controller == (1 << 7) + (10)) {
			controlChange(78, value >> 7);
		}
		if (controller == (1 << 7) + (32)) {
			controlChange(74, value >> 7);
		}
		if (controller == (1 << 7) + (33)) {
			controlChange(71, value >> 7);
		}
		if (controller == (1 << 7) + (99)) {
			controlChange(73, value >> 7);
		}
		if (controller == (1 << 7) + (100)) {
			controlChange(75, value >> 7);
		}
		if (controller == (1 << 7) + (102)) {
			controlChange(72, value >> 7);
		}
		if (controller >> 7 == 24) {
			controlChangePerNote(controller % 128, 120, value >> 7);
		}
		if (controller >> 7 == 26) {
			controlChangePerNote(controller % 128, 7, value >> 7);
		}
		if (controller >> 7 == 28) {
			controlChangePerNote(controller % 128, 10, value >> 7);
		}
		if (controller >> 7 == 29) {
			controlChangePerNote(controller % 128, 91, value >> 7);
		}
		if (controller >> 7 == 30) {
			controlChangePerNote(controller % 128, 93, value >> 7);
		}
	}
	$var($ints, val_i, $cast($ints, $nc(this->co_midi_nrpn_nrpn_i)->get($($Integer::valueOf(controller)))));
	$var($doubles, val_d, $cast($doubles, $nc(this->co_midi_nrpn_nrpn)->get($($Integer::valueOf(controller)))));
	if (val_i == nullptr) {
		$assign(val_i, $new($ints, 1));
		$nc(this->co_midi_nrpn_nrpn_i)->put($($Integer::valueOf(controller)), val_i);
	}
	if (val_d == nullptr) {
		$assign(val_d, $new($doubles, 1));
		$nc(this->co_midi_nrpn_nrpn)->put($($Integer::valueOf(controller)), val_d);
	}
	$nc(val_i)->set(0, value);
	$nc(val_d)->set(0, val_i->get(0) * (1.0 / 16384.0));
	for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
		if ($nc($nc(this->voices)->get(i))->active) {
			$nc($nc(this->voices)->get(i))->nrpnChange(controller, val_i->get(0));
		}
	}
}

void SoftChannel::rpnChange(int32_t controller, int32_t value) {
	$useLocalCurrentObjectStackCache();
	if (controller == 3) {
		this->tuning_program = (int32_t)((value >> 7) & (uint32_t)127);
		tuningChange(this->tuning_bank, this->tuning_program);
	}
	if (controller == 4) {
		this->tuning_bank = (int32_t)((value >> 7) & (uint32_t)127);
	}
	$var($ints, val_i, $cast($ints, $nc(this->co_midi_rpn_rpn_i)->get($($Integer::valueOf(controller)))));
	$var($doubles, val_d, $cast($doubles, $nc(this->co_midi_rpn_rpn)->get($($Integer::valueOf(controller)))));
	if (val_i == nullptr) {
		$assign(val_i, $new($ints, 1));
		$nc(this->co_midi_rpn_rpn_i)->put($($Integer::valueOf(controller)), val_i);
	}
	if (val_d == nullptr) {
		$assign(val_d, $new($doubles, 1));
		$nc(this->co_midi_rpn_rpn)->put($($Integer::valueOf(controller)), val_d);
	}
	$nc(val_i)->set(0, value);
	$nc(val_d)->set(0, val_i->get(0) * (1.0 / 16384.0));
	for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
		if ($nc($nc(this->voices)->get(i))->active) {
			$nc($nc(this->voices)->get(i))->rpnChange(controller, val_i->get(0));
		}
	}
}

void SoftChannel::resetAllControllers() {
	resetAllControllers(false);
}

void SoftChannel::resetAllControllers(bool allControls) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->control_mutex) {
		$nc(this->mainmixer)->activity();
		for (int32_t i = 0; i < 128; ++i) {
			setPolyPressure(i, 0);
		}
		setChannelPressure(0);
		setPitchBend(8192);
		for (int32_t i = 0; i < 128; ++i) {
			if (!$nc(SoftChannel::dontResetControls)->get(i)) {
				controlChange(i, 0);
			}
		}
		controlChange(71, 64);
		controlChange(72, 64);
		controlChange(73, 64);
		controlChange(74, 64);
		controlChange(75, 64);
		controlChange(76, 64);
		controlChange(77, 64);
		controlChange(78, 64);
		controlChange(8, 64);
		controlChange(11, 127);
		controlChange(98, 127);
		controlChange(99, 127);
		controlChange(100, 127);
		controlChange(101, 127);
		if (allControls) {
			$set(this, keybasedcontroller_active, nullptr);
			$set(this, keybasedcontroller_value, nullptr);
			controlChange(7, 100);
			controlChange(10, 64);
			controlChange(91, 40);
			{
				$var($Iterator, i$, $nc($($nc(this->co_midi_rpn_rpn)->keySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					int32_t controller = $nc(($cast($Integer, $(i$->next()))))->intValue();
					{
						if (controller != 3 && controller != 4) {
							rpnChange(controller, 0);
						}
					}
				}
			}
			{
				$var($Iterator, i$, $nc($($nc(this->co_midi_nrpn_nrpn)->keySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					int32_t controller = $nc(($cast($Integer, $(i$->next()))))->intValue();
					nrpnChange(controller, 0);
				}
			}
			rpnChange(0, 2 << 7);
			rpnChange(1, 64 << 7);
			rpnChange(2, 64 << 7);
			rpnChange(5, 64);
			this->tuning_bank = 0;
			this->tuning_program = 0;
			$set(this, tuning, $new($SoftTuning));
		}
	}
}

void SoftChannel::allNotesOff() {
	if (this->current_mixer != nullptr) {
		$nc(this->current_mixer)->allNotesOff();
	}
	$synchronized(this->control_mutex) {
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->on && $nc($nc(this->voices)->get(i))->channel == this->channel && $nc($nc(this->voices)->get(i))->releaseTriggered == false) {
				$nc($nc(this->voices)->get(i))->noteOff(0);
			}
		}
	}
}

void SoftChannel::allSoundOff() {
	if (this->current_mixer != nullptr) {
		$nc(this->current_mixer)->allSoundOff();
	}
	$synchronized(this->control_mutex) {
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->on && $nc($nc(this->voices)->get(i))->channel == this->channel) {
				$nc($nc(this->voices)->get(i))->soundOff();
			}
		}
	}
}

bool SoftChannel::localControl(bool on) {
	return false;
}

void SoftChannel::setMono(bool on) {
	if (this->current_mixer != nullptr) {
		$nc(this->current_mixer)->setMono(on);
	}
	$synchronized(this->control_mutex) {
		allNotesOff();
		this->mono = on;
	}
}

bool SoftChannel::getMono() {
	$synchronized(this->control_mutex) {
		return this->mono;
	}
}

void SoftChannel::setOmni(bool on) {
	if (this->current_mixer != nullptr) {
		$nc(this->current_mixer)->setOmni(on);
	}
	allNotesOff();
}

bool SoftChannel::getOmni() {
	return false;
}

void SoftChannel::setMute(bool mute) {
	if (this->current_mixer != nullptr) {
		$nc(this->current_mixer)->setMute(mute);
	}
	$synchronized(this->control_mutex) {
		this->mute = mute;
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->active && $nc($nc(this->voices)->get(i))->channel == this->channel) {
				$nc($nc(this->voices)->get(i))->setMute(mute);
			}
		}
	}
}

bool SoftChannel::getMute() {
	$synchronized(this->control_mutex) {
		return this->mute;
	}
}

void SoftChannel::setSolo(bool soloState) {
	$useLocalCurrentObjectStackCache();
	if (this->current_mixer != nullptr) {
		$nc(this->current_mixer)->setSolo(soloState);
	}
	$synchronized(this->control_mutex) {
		this->solo = soloState;
		bool soloinuse = false;
		{
			$var($SoftChannelArray, arr$, $nc(this->synthesizer)->channels);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var(SoftChannel, c, arr$->get(i$));
				{
					if ($nc(c)->solo) {
						soloinuse = true;
						break;
					}
				}
			}
		}
		if (!soloinuse) {
			{
				$var($SoftChannelArray, arr$, $nc(this->synthesizer)->channels);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var(SoftChannel, c, arr$->get(i$));
					$nc(c)->setSoloMute(false);
				}
			}
			return;
		}
		{
			$var($SoftChannelArray, arr$, $nc(this->synthesizer)->channels);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var(SoftChannel, c, arr$->get(i$));
				$nc(c)->setSoloMute(!c->solo);
			}
		}
	}
}

void SoftChannel::setSoloMute(bool mute) {
	$synchronized(this->control_mutex) {
		if (this->solomute == mute) {
			return;
		}
		this->solomute = mute;
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			if ($nc($nc(this->voices)->get(i))->active && $nc($nc(this->voices)->get(i))->channel == this->channel) {
				$nc($nc(this->voices)->get(i))->setSoloMute(this->solomute);
			}
		}
	}
}

bool SoftChannel::getSolo() {
	$synchronized(this->control_mutex) {
		return this->solo;
	}
}

void clinit$SoftChannel($Class* class$) {
	$assignStatic(SoftChannel::dontResetControls, $new($booleans, 128));
	{
		for (int32_t i = 0; i < $nc(SoftChannel::dontResetControls)->length; ++i) {
			$nc(SoftChannel::dontResetControls)->set(i, false);
		}
		$nc(SoftChannel::dontResetControls)->set(0, true);
		$nc(SoftChannel::dontResetControls)->set(32, true);
		$nc(SoftChannel::dontResetControls)->set(7, true);
		$nc(SoftChannel::dontResetControls)->set(8, true);
		$nc(SoftChannel::dontResetControls)->set(10, true);
		$nc(SoftChannel::dontResetControls)->set(11, true);
		$nc(SoftChannel::dontResetControls)->set(91, true);
		$nc(SoftChannel::dontResetControls)->set(92, true);
		$nc(SoftChannel::dontResetControls)->set(93, true);
		$nc(SoftChannel::dontResetControls)->set(94, true);
		$nc(SoftChannel::dontResetControls)->set(95, true);
		$nc(SoftChannel::dontResetControls)->set(70, true);
		$nc(SoftChannel::dontResetControls)->set(71, true);
		$nc(SoftChannel::dontResetControls)->set(72, true);
		$nc(SoftChannel::dontResetControls)->set(73, true);
		$nc(SoftChannel::dontResetControls)->set(74, true);
		$nc(SoftChannel::dontResetControls)->set(75, true);
		$nc(SoftChannel::dontResetControls)->set(76, true);
		$nc(SoftChannel::dontResetControls)->set(77, true);
		$nc(SoftChannel::dontResetControls)->set(78, true);
		$nc(SoftChannel::dontResetControls)->set(79, true);
		$nc(SoftChannel::dontResetControls)->set(120, true);
		$nc(SoftChannel::dontResetControls)->set(121, true);
		$nc(SoftChannel::dontResetControls)->set(122, true);
		$nc(SoftChannel::dontResetControls)->set(123, true);
		$nc(SoftChannel::dontResetControls)->set(124, true);
		$nc(SoftChannel::dontResetControls)->set(125, true);
		$nc(SoftChannel::dontResetControls)->set(126, true);
		$nc(SoftChannel::dontResetControls)->set(127, true);
		$nc(SoftChannel::dontResetControls)->set(6, true);
		$nc(SoftChannel::dontResetControls)->set(38, true);
		$nc(SoftChannel::dontResetControls)->set(96, true);
		$nc(SoftChannel::dontResetControls)->set(97, true);
		$nc(SoftChannel::dontResetControls)->set(98, true);
		$nc(SoftChannel::dontResetControls)->set(99, true);
		$nc(SoftChannel::dontResetControls)->set(100, true);
		$nc(SoftChannel::dontResetControls)->set(101, true);
	}
}

SoftChannel::SoftChannel() {
}

$Class* SoftChannel::load$($String* name, bool initialize) {
	$loadClass(SoftChannel, name, initialize, &_SoftChannel_ClassInfo_, clinit$SoftChannel, allocate$SoftChannel);
	return class$;
}

$Class* SoftChannel::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com