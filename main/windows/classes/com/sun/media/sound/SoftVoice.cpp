#include <com/sun/media/sound/SoftVoice.h>

#include <com/sun/media/sound/ModelChannelMixer.h>
#include <com/sun/media/sound/ModelConnectionBlock.h>
#include <com/sun/media/sound/ModelDestination.h>
#include <com/sun/media/sound/ModelIdentifier.h>
#include <com/sun/media/sound/ModelOscillator.h>
#include <com/sun/media/sound/ModelOscillatorStream.h>
#include <com/sun/media/sound/ModelSource.h>
#include <com/sun/media/sound/ModelTransform.h>
#include <com/sun/media/sound/ModelWavetable.h>
#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftChannel.h>
#include <com/sun/media/sound/SoftControl.h>
#include <com/sun/media/sound/SoftEnvelopeGenerator.h>
#include <com/sun/media/sound/SoftFilter.h>
#include <com/sun/media/sound/SoftInstrument.h>
#include <com/sun/media/sound/SoftLowFrequencyOscillator.h>
#include <com/sun/media/sound/SoftMainMixer.h>
#include <com/sun/media/sound/SoftPerformer.h>
#include <com/sun/media/sound/SoftProcess.h>
#include <com/sun/media/sound/SoftResamplerStreamer.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <com/sun/media/sound/SoftTuning.h>
#include <com/sun/media/sound/SoftVoice$1.h>
#include <com/sun/media/sound/SoftVoice$2.h>
#include <com/sun/media/sound/SoftVoice$3.h>
#include <com/sun/media/sound/SoftVoice$4.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/VoiceStatus.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

#undef CHANNEL_DELAY_EFFECT1
#undef CHANNEL_DELAY_EFFECT2
#undef CHANNEL_DELAY_LEFT
#undef CHANNEL_DELAY_MONO
#undef CHANNEL_DELAY_RIGHT
#undef CHANNEL_EFFECT1
#undef CHANNEL_EFFECT2
#undef CHANNEL_LEFT
#undef CHANNEL_LEFT_DRY
#undef CHANNEL_MONO
#undef CHANNEL_RIGHT
#undef CHANNEL_RIGHT_DRY
#undef PI

using $ModelConnectionBlockArray = $Array<::com::sun::media::sound::ModelConnectionBlock>;
using $ModelOscillatorArray = $Array<::com::sun::media::sound::ModelOscillator>;
using $ModelSourceArray = $Array<::com::sun::media::sound::ModelSource>;
using $SoftAudioBufferArray = $Array<::com::sun::media::sound::SoftAudioBuffer>;
using $doubleArray2 = $Array<double, 2>;
using $floatArray2 = $Array<float, 2>;
using $intArray2 = $Array<int32_t, 2>;
using $booleanArray2 = $Array<bool, 2>;
using $doubleArray3 = $Array<double, 3>;
using $ModelChannelMixer = ::com::sun::media::sound::ModelChannelMixer;
using $ModelConnectionBlock = ::com::sun::media::sound::ModelConnectionBlock;
using $ModelDestination = ::com::sun::media::sound::ModelDestination;
using $ModelIdentifier = ::com::sun::media::sound::ModelIdentifier;
using $ModelOscillator = ::com::sun::media::sound::ModelOscillator;
using $ModelOscillatorStream = ::com::sun::media::sound::ModelOscillatorStream;
using $ModelSource = ::com::sun::media::sound::ModelSource;
using $ModelTransform = ::com::sun::media::sound::ModelTransform;
using $ModelWavetable = ::com::sun::media::sound::ModelWavetable;
using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
using $SoftChannel = ::com::sun::media::sound::SoftChannel;
using $SoftControl = ::com::sun::media::sound::SoftControl;
using $SoftEnvelopeGenerator = ::com::sun::media::sound::SoftEnvelopeGenerator;
using $SoftFilter = ::com::sun::media::sound::SoftFilter;
using $SoftInstrument = ::com::sun::media::sound::SoftInstrument;
using $SoftLowFrequencyOscillator = ::com::sun::media::sound::SoftLowFrequencyOscillator;
using $SoftMainMixer = ::com::sun::media::sound::SoftMainMixer;
using $SoftPerformer = ::com::sun::media::sound::SoftPerformer;
using $SoftProcess = ::com::sun::media::sound::SoftProcess;
using $SoftResamplerStreamer = ::com::sun::media::sound::SoftResamplerStreamer;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $SoftTuning = ::com::sun::media::sound::SoftTuning;
using $SoftVoice$1 = ::com::sun::media::sound::SoftVoice$1;
using $SoftVoice$2 = ::com::sun::media::sound::SoftVoice$2;
using $SoftVoice$3 = ::com::sun::media::sound::SoftVoice$3;
using $SoftVoice$4 = ::com::sun::media::sound::SoftVoice$4;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $MidiChannel = ::javax::sound::midi::MidiChannel;
using $VoiceStatus = ::javax::sound::midi::VoiceStatus;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftVoice_FieldInfo_[] = {
	{"exclusiveClass", "I", nullptr, $PUBLIC, $field(SoftVoice, exclusiveClass)},
	{"releaseTriggered", "Z", nullptr, $PUBLIC, $field(SoftVoice, releaseTriggered)},
	{"noteOn_noteNumber", "I", nullptr, $PRIVATE, $field(SoftVoice, noteOn_noteNumber)},
	{"noteOn_velocity", "I", nullptr, $PRIVATE, $field(SoftVoice, noteOn_velocity)},
	{"noteOff_velocity", "I", nullptr, $PRIVATE, $field(SoftVoice, noteOff_velocity)},
	{"delay", "I", nullptr, $PRIVATE, $field(SoftVoice, delay)},
	{"channelmixer", "Lcom/sun/media/sound/ModelChannelMixer;", nullptr, 0, $field(SoftVoice, channelmixer)},
	{"tunedKey", "D", nullptr, 0, $field(SoftVoice, tunedKey)},
	{"tuning", "Lcom/sun/media/sound/SoftTuning;", nullptr, 0, $field(SoftVoice, tuning)},
	{"stealer_channel", "Lcom/sun/media/sound/SoftChannel;", nullptr, 0, $field(SoftVoice, stealer_channel)},
	{"stealer_extendedConnectionBlocks", "[Lcom/sun/media/sound/ModelConnectionBlock;", nullptr, 0, $field(SoftVoice, stealer_extendedConnectionBlocks)},
	{"stealer_performer", "Lcom/sun/media/sound/SoftPerformer;", nullptr, 0, $field(SoftVoice, stealer_performer)},
	{"stealer_channelmixer", "Lcom/sun/media/sound/ModelChannelMixer;", nullptr, 0, $field(SoftVoice, stealer_channelmixer)},
	{"stealer_voiceID", "I", nullptr, 0, $field(SoftVoice, stealer_voiceID)},
	{"stealer_noteNumber", "I", nullptr, 0, $field(SoftVoice, stealer_noteNumber)},
	{"stealer_velocity", "I", nullptr, 0, $field(SoftVoice, stealer_velocity)},
	{"stealer_releaseTriggered", "Z", nullptr, 0, $field(SoftVoice, stealer_releaseTriggered)},
	{"voiceID", "I", nullptr, 0, $field(SoftVoice, voiceID)},
	{"sustain", "Z", nullptr, 0, $field(SoftVoice, sustain)},
	{"sostenuto", "Z", nullptr, 0, $field(SoftVoice, sostenuto)},
	{"portamento", "Z", nullptr, 0, $field(SoftVoice, portamento)},
	{"filter_left", "Lcom/sun/media/sound/SoftFilter;", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, filter_left)},
	{"filter_right", "Lcom/sun/media/sound/SoftFilter;", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, filter_right)},
	{"eg", "Lcom/sun/media/sound/SoftProcess;", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, eg)},
	{"lfo", "Lcom/sun/media/sound/SoftProcess;", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, lfo)},
	{"objects", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/media/sound/SoftControl;>;", $FINAL, $field(SoftVoice, objects)},
	{"synthesizer", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, 0, $field(SoftVoice, synthesizer)},
	{"instrument", "Lcom/sun/media/sound/SoftInstrument;", nullptr, 0, $field(SoftVoice, instrument)},
	{"performer", "Lcom/sun/media/sound/SoftPerformer;", nullptr, 0, $field(SoftVoice, performer)},
	{"softchannel", "Lcom/sun/media/sound/SoftChannel;", nullptr, 0, $field(SoftVoice, softchannel)},
	{"on", "Z", nullptr, 0, $field(SoftVoice, on)},
	{"audiostarted", "Z", nullptr, $PRIVATE, $field(SoftVoice, audiostarted)},
	{"started", "Z", nullptr, $PRIVATE, $field(SoftVoice, started)},
	{"stopping", "Z", nullptr, $PRIVATE, $field(SoftVoice, stopping)},
	{"osc_attenuation", "F", nullptr, $PRIVATE, $field(SoftVoice, osc_attenuation)},
	{"osc_stream", "Lcom/sun/media/sound/ModelOscillatorStream;", nullptr, $PRIVATE, $field(SoftVoice, osc_stream)},
	{"osc_stream_nrofchannels", "I", nullptr, $PRIVATE, $field(SoftVoice, osc_stream_nrofchannels)},
	{"osc_buff", "[[F", nullptr, $PRIVATE, $field(SoftVoice, osc_buff)},
	{"osc_stream_off_transmitted", "Z", nullptr, $PRIVATE, $field(SoftVoice, osc_stream_off_transmitted)},
	{"out_mixer_end", "Z", nullptr, $PRIVATE, $field(SoftVoice, out_mixer_end)},
	{"out_mixer_left", "F", nullptr, $PRIVATE, $field(SoftVoice, out_mixer_left)},
	{"out_mixer_right", "F", nullptr, $PRIVATE, $field(SoftVoice, out_mixer_right)},
	{"out_mixer_effect1", "F", nullptr, $PRIVATE, $field(SoftVoice, out_mixer_effect1)},
	{"out_mixer_effect2", "F", nullptr, $PRIVATE, $field(SoftVoice, out_mixer_effect2)},
	{"last_out_mixer_left", "F", nullptr, $PRIVATE, $field(SoftVoice, last_out_mixer_left)},
	{"last_out_mixer_right", "F", nullptr, $PRIVATE, $field(SoftVoice, last_out_mixer_right)},
	{"last_out_mixer_effect1", "F", nullptr, $PRIVATE, $field(SoftVoice, last_out_mixer_effect1)},
	{"last_out_mixer_effect2", "F", nullptr, $PRIVATE, $field(SoftVoice, last_out_mixer_effect2)},
	{"extendedConnectionBlocks", "[Lcom/sun/media/sound/ModelConnectionBlock;", nullptr, 0, $field(SoftVoice, extendedConnectionBlocks)},
	{"connections", "[Lcom/sun/media/sound/ModelConnectionBlock;", nullptr, $PRIVATE, $field(SoftVoice, connections)},
	{"connections_last", "[D", nullptr, $PRIVATE, $field(SoftVoice, connections_last)},
	{"connections_src", "[[[D", nullptr, $PRIVATE, $field(SoftVoice, connections_src)},
	{"connections_src_kc", "[[I", nullptr, $PRIVATE, $field(SoftVoice, connections_src_kc)},
	{"connections_dst", "[[D", nullptr, $PRIVATE, $field(SoftVoice, connections_dst)},
	{"soundoff", "Z", nullptr, $PRIVATE, $field(SoftVoice, soundoff)},
	{"lastMuteValue", "F", nullptr, $PRIVATE, $field(SoftVoice, lastMuteValue)},
	{"lastSoloMuteValue", "F", nullptr, $PRIVATE, $field(SoftVoice, lastSoloMuteValue)},
	{"co_noteon_keynumber", "[D", nullptr, 0, $field(SoftVoice, co_noteon_keynumber)},
	{"co_noteon_velocity", "[D", nullptr, 0, $field(SoftVoice, co_noteon_velocity)},
	{"co_noteon_on", "[D", nullptr, 0, $field(SoftVoice, co_noteon_on)},
	{"co_noteon", "Lcom/sun/media/sound/SoftControl;", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_noteon)},
	{"co_mixer_active", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_mixer_active)},
	{"co_mixer_gain", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_mixer_gain)},
	{"co_mixer_pan", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_mixer_pan)},
	{"co_mixer_balance", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_mixer_balance)},
	{"co_mixer_reverb", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_mixer_reverb)},
	{"co_mixer_chorus", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_mixer_chorus)},
	{"co_mixer", "Lcom/sun/media/sound/SoftControl;", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_mixer)},
	{"co_osc_pitch", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_osc_pitch)},
	{"co_osc", "Lcom/sun/media/sound/SoftControl;", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_osc)},
	{"co_filter_freq", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_filter_freq)},
	{"co_filter_type", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_filter_type)},
	{"co_filter_q", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_filter_q)},
	{"co_filter", "Lcom/sun/media/sound/SoftControl;", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, co_filter)},
	{"resampler", "Lcom/sun/media/sound/SoftResamplerStreamer;", nullptr, 0, $field(SoftVoice, resampler)},
	{"nrofchannels", "I", nullptr, $PRIVATE | $FINAL, $field(SoftVoice, nrofchannels)},
	{}
};

$MethodInfo _SoftVoice_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftVoice::*)($SoftSynthesizer*)>(&SoftVoice::init$))},
	{"controlChange", "(II)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)(int32_t,int32_t)>(&SoftVoice::controlChange))},
	{"getValue", "(Lcom/sun/media/sound/ModelIdentifier;)[D", nullptr, $PRIVATE, $method(static_cast<$doubles*(SoftVoice::*)($ModelIdentifier*)>(&SoftVoice::getValue))},
	{"getValueKC", "(Lcom/sun/media/sound/ModelIdentifier;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SoftVoice::*)($ModelIdentifier*)>(&SoftVoice::getValueKC))},
	{"mixAudioStream", "(Lcom/sun/media/sound/SoftAudioBuffer;Lcom/sun/media/sound/SoftAudioBuffer;Lcom/sun/media/sound/SoftAudioBuffer;FF)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)($SoftAudioBuffer*,$SoftAudioBuffer*,$SoftAudioBuffer*,float,float)>(&SoftVoice::mixAudioStream))},
	{"noteOff", "(I)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)(int32_t)>(&SoftVoice::noteOff))},
	{"noteOn", "(III)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)(int32_t,int32_t,int32_t)>(&SoftVoice::noteOn))},
	{"nrpnChange", "(II)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)(int32_t,int32_t)>(&SoftVoice::nrpnChange))},
	{"processAudioLogic", "([Lcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)($SoftAudioBufferArray*)>(&SoftVoice::processAudioLogic))},
	{"processConnection", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(SoftVoice::*)(int32_t)>(&SoftVoice::processConnection))},
	{"processControlLogic", "()V", nullptr, 0, $method(static_cast<void(SoftVoice::*)()>(&SoftVoice::processControlLogic))},
	{"processKeyBasedController", "(DI)D", nullptr, $PRIVATE, $method(static_cast<double(SoftVoice::*)(double,int32_t)>(&SoftVoice::processKeyBasedController))},
	{"redamp", "()V", nullptr, 0, $method(static_cast<void(SoftVoice::*)()>(&SoftVoice::redamp))},
	{"rpnChange", "(II)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)(int32_t,int32_t)>(&SoftVoice::rpnChange))},
	{"setChannelPressure", "(I)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)(int32_t)>(&SoftVoice::setChannelPressure))},
	{"setMute", "(Z)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)(bool)>(&SoftVoice::setMute))},
	{"setNote", "(I)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)(int32_t)>(&SoftVoice::setNote))},
	{"setPitchBend", "(I)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)(int32_t)>(&SoftVoice::setPitchBend))},
	{"setPolyPressure", "(I)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)(int32_t)>(&SoftVoice::setPolyPressure))},
	{"setSoloMute", "(Z)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)(bool)>(&SoftVoice::setSoloMute))},
	{"shutdown", "()V", nullptr, 0, $method(static_cast<void(SoftVoice::*)()>(&SoftVoice::shutdown))},
	{"soundOff", "()V", nullptr, 0, $method(static_cast<void(SoftVoice::*)()>(&SoftVoice::soundOff))},
	{"transformValue", "(DLcom/sun/media/sound/ModelSource;)D", nullptr, $PRIVATE, $method(static_cast<double(SoftVoice::*)(double,$ModelSource*)>(&SoftVoice::transformValue))},
	{"transformValue", "(DLcom/sun/media/sound/ModelDestination;)D", nullptr, $PRIVATE, $method(static_cast<double(SoftVoice::*)(double,$ModelDestination*)>(&SoftVoice::transformValue))},
	{"updateTuning", "(Lcom/sun/media/sound/SoftTuning;)V", nullptr, 0, $method(static_cast<void(SoftVoice::*)($SoftTuning*)>(&SoftVoice::updateTuning))},
	{}
};

$InnerClassInfo _SoftVoice_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftVoice$4", nullptr, nullptr, 0},
	{"com.sun.media.sound.SoftVoice$3", nullptr, nullptr, 0},
	{"com.sun.media.sound.SoftVoice$2", nullptr, nullptr, 0},
	{"com.sun.media.sound.SoftVoice$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftVoice_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftVoice",
	"javax.sound.midi.VoiceStatus",
	nullptr,
	_SoftVoice_FieldInfo_,
	_SoftVoice_MethodInfo_,
	nullptr,
	nullptr,
	_SoftVoice_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftVoice$4,com.sun.media.sound.SoftVoice$3,com.sun.media.sound.SoftVoice$2,com.sun.media.sound.SoftVoice$1"
};

$Object* allocate$SoftVoice($Class* clazz) {
	return $of($alloc(SoftVoice));
}

void SoftVoice::init$($SoftSynthesizer* synth) {
	$useLocalCurrentObjectStackCache();
	$VoiceStatus::init$();
	this->exclusiveClass = 0;
	this->releaseTriggered = false;
	this->noteOn_noteNumber = 0;
	this->noteOn_velocity = 0;
	this->noteOff_velocity = 0;
	this->delay = 0;
	$set(this, channelmixer, nullptr);
	this->tunedKey = (double)0;
	$set(this, tuning, nullptr);
	$set(this, stealer_channel, nullptr);
	$set(this, stealer_extendedConnectionBlocks, nullptr);
	$set(this, stealer_performer, nullptr);
	$set(this, stealer_channelmixer, nullptr);
	this->stealer_voiceID = -1;
	this->stealer_noteNumber = 0;
	this->stealer_velocity = 0;
	this->stealer_releaseTriggered = false;
	this->voiceID = -1;
	this->sustain = false;
	this->sostenuto = false;
	this->portamento = false;
	$set(this, eg, $new($SoftEnvelopeGenerator));
	$set(this, lfo, $new($SoftLowFrequencyOscillator));
	$set(this, objects, $new($HashMap));
	$set(this, softchannel, nullptr);
	this->on = false;
	this->audiostarted = false;
	this->started = false;
	this->stopping = false;
	this->osc_attenuation = 0.0f;
	$set(this, osc_buff, $new($floatArray2, 2));
	this->osc_stream_off_transmitted = false;
	this->out_mixer_end = false;
	this->out_mixer_left = (float)0;
	this->out_mixer_right = (float)0;
	this->out_mixer_effect1 = (float)0;
	this->out_mixer_effect2 = (float)0;
	this->last_out_mixer_left = (float)0;
	this->last_out_mixer_right = (float)0;
	this->last_out_mixer_effect1 = (float)0;
	this->last_out_mixer_effect2 = (float)0;
	$set(this, extendedConnectionBlocks, nullptr);
	$set(this, connections_last, $new($doubles, 50));
	$set(this, connections_src, $new($doubleArray3, 50, 3));
	$set(this, connections_src_kc, $new($intArray2, 50, 3));
	$set(this, connections_dst, $new($doubleArray2, 50));
	this->soundoff = false;
	this->lastMuteValue = (float)0;
	this->lastSoloMuteValue = (float)0;
	$set(this, co_noteon_keynumber, $new($doubles, 1));
	$set(this, co_noteon_velocity, $new($doubles, 1));
	$set(this, co_noteon_on, $new($doubles, 1));
	$set(this, co_noteon, $new($SoftVoice$1, this));
	$set(this, co_mixer_active, $new($doubles, 1));
	$set(this, co_mixer_gain, $new($doubles, 1));
	$set(this, co_mixer_pan, $new($doubles, 1));
	$set(this, co_mixer_balance, $new($doubles, 1));
	$set(this, co_mixer_reverb, $new($doubles, 1));
	$set(this, co_mixer_chorus, $new($doubles, 1));
	$set(this, co_mixer, $new($SoftVoice$2, this));
	$set(this, co_osc_pitch, $new($doubles, 1));
	$set(this, co_osc, $new($SoftVoice$3, this));
	$set(this, co_filter_freq, $new($doubles, 1));
	$set(this, co_filter_type, $new($doubles, 1));
	$set(this, co_filter_q, $new($doubles, 1));
	$set(this, co_filter, $new($SoftVoice$4, this));
	$set(this, synthesizer, synth);
	$set(this, filter_left, $new($SoftFilter, $nc($($nc(synth)->getFormat()))->getSampleRate()));
	$set(this, filter_right, $new($SoftFilter, $nc($($nc(synth)->getFormat()))->getSampleRate()));
	this->nrofchannels = $nc($($nc(synth)->getFormat()))->getChannels();
}

int32_t SoftVoice::getValueKC($ModelIdentifier* id) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(id)->getObject()))->equals("midi_cc"_s)) {
		int32_t ic = $Integer::parseInt($(id->getVariable()));
		if (ic != 0 && ic != 32) {
			if (ic < 120) {
				return ic;
			}
		}
	} else if ($nc($(id->getObject()))->equals("midi_rpn"_s)) {
		if ($nc($(id->getVariable()))->equals("1"_s)) {
			return 120;
		}
		if ($nc($(id->getVariable()))->equals("2"_s)) {
			return 121;
		}
	}
	return -1;
}

$doubles* SoftVoice::getValue($ModelIdentifier* id) {
	$useLocalCurrentObjectStackCache();
	$var($SoftControl, o, $cast($SoftControl, $nc(this->objects)->get($($nc(id)->getObject()))));
	if (o == nullptr) {
		return nullptr;
	}
	int32_t var$0 = $nc(id)->getInstance();
	return $nc(o)->get(var$0, $(id->getVariable()));
}

double SoftVoice::transformValue(double value, $ModelSource* src) {
	if ($nc(src)->getTransform() != nullptr) {
		return $nc($(src->getTransform()))->transform(value);
	} else {
		return value;
	}
}

double SoftVoice::transformValue(double value, $ModelDestination* dst) {
	if ($nc(dst)->getTransform() != nullptr) {
		return $nc($(dst->getTransform()))->transform(value);
	} else {
		return value;
	}
}

double SoftVoice::processKeyBasedController(double value, int32_t keycontrol) {
	if (keycontrol == -1) {
		return value;
	}
	if ($nc(this->softchannel)->keybasedcontroller_active != nullptr) {
		if ($nc($nc(this->softchannel)->keybasedcontroller_active)->get(this->note) != nullptr) {
			if ($nc($nc($nc(this->softchannel)->keybasedcontroller_active)->get(this->note))->get(keycontrol)) {
				double key_controlvalue = $nc($nc($nc(this->softchannel)->keybasedcontroller_value)->get(this->note))->get(keycontrol);
				if (keycontrol == 10 || keycontrol == 91 || keycontrol == 93) {
					return key_controlvalue;
				}
				value += key_controlvalue * 2.0 - 1.0;
				if (value > 1) {
					value = (double)1;
				} else if (value < 0) {
					value = (double)0;
				}
			}
		}
	}
	return value;
}

void SoftVoice::processConnection(int32_t ix) {
	$useLocalCurrentObjectStackCache();
	$var($ModelConnectionBlock, conn, $nc(this->connections)->get(ix));
	$var($doubleArray2, src, $nc(this->connections_src)->get(ix));
	$var($doubles, dst, $nc(this->connections_dst)->get(ix));
	if (dst == nullptr || $Double::isInfinite($nc(dst)->get(0))) {
		return;
	}
	double value = $nc(conn)->getScale();
	if ($nc(this->softchannel)->keybasedcontroller_active == nullptr) {
		$var($ModelSourceArray, srcs, conn->getSources());
		for (int32_t i = 0; i < $nc(srcs)->length; ++i) {
			value *= transformValue($nc($nc(src)->get(i))->get(0), srcs->get(i));
			if (value == 0) {
				break;
			}
		}
	} else {
		$var($ModelSourceArray, srcs, conn->getSources());
		$var($ints, src_kc, $nc(this->connections_src_kc)->get(ix));
		for (int32_t i = 0; i < $nc(srcs)->length; ++i) {
			value *= transformValue(processKeyBasedController($nc($nc(src)->get(i))->get(0), $nc(src_kc)->get(i)), srcs->get(i));
			if (value == 0) {
				break;
			}
		}
	}
	value = transformValue(value, $(conn->getDestination()));
	$nc(dst)->set(0, dst->get(0) - $nc(this->connections_last)->get(ix) + value);
	$nc(this->connections_last)->set(ix, value);
}

void SoftVoice::updateTuning($SoftTuning* newtuning) {
	$set(this, tuning, newtuning);
	this->tunedKey = $nc(this->tuning)->getTuning(this->note) / 100.0;
	if (!this->portamento) {
		$nc(this->co_noteon_keynumber)->set(0, this->tunedKey * (1.0 / 128.0));
		if (this->performer == nullptr) {
			return;
		}
		$var($ints, c, $nc($nc(this->performer)->midi_connections)->get(4));
		if (c == nullptr) {
			return;
		}
		for (int32_t i = 0; i < $nc(c)->length; ++i) {
			processConnection(c->get(i));
		}
	}
}

void SoftVoice::setNote(int32_t noteNumber) {
	this->note = noteNumber;
	this->tunedKey = $nc(this->tuning)->getTuning(noteNumber) / 100.0;
}

void SoftVoice::noteOn(int32_t noteNumber, int32_t velocity, int32_t delay) {
	$useLocalCurrentObjectStackCache();
	this->sustain = false;
	this->sostenuto = false;
	this->portamento = false;
	this->soundoff = false;
	this->on = true;
	this->active = true;
	this->started = true;
	this->noteOn_noteNumber = noteNumber;
	this->noteOn_velocity = velocity;
	this->delay = delay;
	this->lastMuteValue = (float)0;
	this->lastSoloMuteValue = (float)0;
	setNote(noteNumber);
	if ($nc(this->performer)->forcedKeynumber) {
		$nc(this->co_noteon_keynumber)->set(0, (double)0);
	} else {
		$nc(this->co_noteon_keynumber)->set(0, this->tunedKey * (1.0f / 128.0f));
	}
	if ($nc(this->performer)->forcedVelocity) {
		$nc(this->co_noteon_velocity)->set(0, (double)0);
	} else {
		$nc(this->co_noteon_velocity)->set(0, velocity * (1.0f / 128.0f));
	}
	$nc(this->co_mixer_active)->set(0, (double)0);
	$nc(this->co_mixer_gain)->set(0, (double)0);
	$nc(this->co_mixer_pan)->set(0, (double)0);
	$nc(this->co_mixer_balance)->set(0, (double)0);
	$nc(this->co_mixer_reverb)->set(0, (double)0);
	$nc(this->co_mixer_chorus)->set(0, (double)0);
	$nc(this->co_osc_pitch)->set(0, (double)0);
	$nc(this->co_filter_freq)->set(0, (double)0);
	$nc(this->co_filter_q)->set(0, (double)0);
	$nc(this->co_filter_type)->set(0, (double)0);
	$nc(this->co_noteon_on)->set(0, (double)1);
	$nc(this->eg)->reset();
	$nc(this->lfo)->reset();
	$nc(this->filter_left)->reset();
	$nc(this->filter_right)->reset();
	$nc(this->objects)->put("master"_s, $nc($($nc(this->synthesizer)->getMainMixer()))->co_master);
	$nc(this->objects)->put("eg"_s, this->eg);
	$nc(this->objects)->put("lfo"_s, this->lfo);
	$nc(this->objects)->put("noteon"_s, this->co_noteon);
	$nc(this->objects)->put("osc"_s, this->co_osc);
	$nc(this->objects)->put("mixer"_s, this->co_mixer);
	$nc(this->objects)->put("filter"_s, this->co_filter);
	$set(this, connections, $nc(this->performer)->connections);
	if (this->connections_last == nullptr || $nc(this->connections_last)->length < $nc(this->connections)->length) {
		$set(this, connections_last, $new($doubles, $nc(this->connections)->length));
	}
	if (this->connections_src == nullptr || $nc(this->connections_src)->length < $nc(this->connections)->length) {
		$set(this, connections_src, $new($doubleArray3, $nc(this->connections)->length));
		$set(this, connections_src_kc, $new($intArray2, $nc(this->connections)->length));
	}
	if (this->connections_dst == nullptr || $nc(this->connections_dst)->length < $nc(this->connections)->length) {
		$set(this, connections_dst, $new($doubleArray2, $nc(this->connections)->length));
	}
	for (int32_t i = 0; i < $nc(this->connections)->length; ++i) {
		$var($ModelConnectionBlock, conn, $nc(this->connections)->get(i));
		$nc(this->connections_last)->set(i, (double)0);
		if ($nc(conn)->getSources() != nullptr) {
			$var($ModelSourceArray, srcs, conn->getSources());
			if ($nc(this->connections_src)->get(i) == nullptr || $nc($nc(this->connections_src)->get(i))->length < $nc(srcs)->length) {
				$nc(this->connections_src)->set(i, $$new($doubleArray2, srcs->length));
				$nc(this->connections_src_kc)->set(i, $$new($ints, srcs->length));
			}
			$var($doubleArray2, src, $nc(this->connections_src)->get(i));
			$var($ints, src_kc, $nc(this->connections_src_kc)->get(i));
			$nc(this->connections_src)->set(i, src);
			for (int32_t j = 0; j < $nc(srcs)->length; ++j) {
				$nc(src_kc)->set(j, getValueKC($($nc(srcs->get(j))->getIdentifier())));
				$nc(src)->set(j, $(getValue($($nc(srcs->get(j))->getIdentifier()))));
			}
		}
		if ($nc(conn)->getDestination() != nullptr) {
			$nc(this->connections_dst)->set(i, $(getValue($($nc($(conn->getDestination()))->getIdentifier()))));
		} else {
			$nc(this->connections_dst)->set(i, nullptr);
		}
	}
	for (int32_t i = 0; i < $nc(this->connections)->length; ++i) {
		processConnection(i);
	}
	if (this->extendedConnectionBlocks != nullptr) {
		{
			$var($ModelConnectionBlockArray, arr$, this->extendedConnectionBlocks);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($ModelConnectionBlock, connection, arr$->get(i$));
				{
					double value = (double)0;
					if ($nc(this->softchannel)->keybasedcontroller_active == nullptr) {
						{
							$var($ModelSourceArray, arr$, $nc(connection)->getSources());
							int32_t len$ = arr$->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($ModelSource, src, arr$->get(i$));
								{
									double x = $nc($(getValue($($nc(src)->getIdentifier()))))->get(0);
									$var($ModelTransform, t, $nc(src)->getTransform());
									if (t == nullptr) {
										value += x;
									} else {
										value += $nc(t)->transform(x);
									}
								}
							}
						}
					} else {
						{
							$var($ModelSourceArray, arr$, $nc(connection)->getSources());
							int32_t len$ = arr$->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($ModelSource, src, arr$->get(i$));
								{
									double x = $nc($(getValue($($nc(src)->getIdentifier()))))->get(0);
									x = processKeyBasedController(x, getValueKC($($nc(src)->getIdentifier())));
									$var($ModelTransform, t, $nc(src)->getTransform());
									if (t == nullptr) {
										value += x;
									} else {
										value += $nc(t)->transform(x);
									}
								}
							}
						}
					}
					$var($ModelDestination, dest, $nc(connection)->getDestination());
					$var($ModelTransform, t, $nc(dest)->getTransform());
					if (t != nullptr) {
						value = t->transform(value);
					}
					(*$nc($(getValue($(dest->getIdentifier())))))[0] += value;
				}
			}
		}
	}
	$nc(this->eg)->init(this->synthesizer);
	$nc(this->lfo)->init(this->synthesizer);
}

void SoftVoice::setPolyPressure(int32_t pressure) {
	if (this->performer == nullptr) {
		return;
	}
	$var($ints, c, $nc($nc(this->performer)->midi_connections)->get(2));
	if (c == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $nc(c)->length; ++i) {
		processConnection(c->get(i));
	}
}

void SoftVoice::setChannelPressure(int32_t pressure) {
	if (this->performer == nullptr) {
		return;
	}
	$var($ints, c, $nc($nc(this->performer)->midi_connections)->get(1));
	if (c == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $nc(c)->length; ++i) {
		processConnection(c->get(i));
	}
}

void SoftVoice::controlChange(int32_t controller, int32_t value) {
	if (this->performer == nullptr) {
		return;
	}
	$var($ints, c, $nc($nc(this->performer)->midi_ctrl_connections)->get(controller));
	if (c == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $nc(c)->length; ++i) {
		processConnection(c->get(i));
	}
}

void SoftVoice::nrpnChange(int32_t controller, int32_t value) {
	$useLocalCurrentObjectStackCache();
	if (this->performer == nullptr) {
		return;
	}
	$var($ints, c, $cast($ints, $nc($nc(this->performer)->midi_nrpn_connections)->get($($Integer::valueOf(controller)))));
	if (c == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $nc(c)->length; ++i) {
		processConnection(c->get(i));
	}
}

void SoftVoice::rpnChange(int32_t controller, int32_t value) {
	$useLocalCurrentObjectStackCache();
	if (this->performer == nullptr) {
		return;
	}
	$var($ints, c, $cast($ints, $nc($nc(this->performer)->midi_rpn_connections)->get($($Integer::valueOf(controller)))));
	if (c == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $nc(c)->length; ++i) {
		processConnection(c->get(i));
	}
}

void SoftVoice::setPitchBend(int32_t bend) {
	if (this->performer == nullptr) {
		return;
	}
	$var($ints, c, $nc($nc(this->performer)->midi_connections)->get(0));
	if (c == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $nc(c)->length; ++i) {
		processConnection(c->get(i));
	}
}

void SoftVoice::setMute(bool mute) {
	(*$nc(this->co_mixer_gain))[0] -= this->lastMuteValue;
	this->lastMuteValue = (float)(mute ? -960 : 0);
	(*$nc(this->co_mixer_gain))[0] += this->lastMuteValue;
}

void SoftVoice::setSoloMute(bool mute) {
	(*$nc(this->co_mixer_gain))[0] -= this->lastSoloMuteValue;
	this->lastSoloMuteValue = (float)(mute ? -960 : 0);
	(*$nc(this->co_mixer_gain))[0] += this->lastSoloMuteValue;
}

void SoftVoice::shutdown() {
	if ($nc(this->co_noteon_on)->get(0) < -0.5) {
		return;
	}
	this->on = false;
	$nc(this->co_noteon_on)->set(0, (double)-1);
	if (this->performer == nullptr) {
		return;
	}
	$var($ints, c, $nc($nc(this->performer)->midi_connections)->get(3));
	if (c == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $nc(c)->length; ++i) {
		processConnection(c->get(i));
	}
}

void SoftVoice::soundOff() {
	this->on = false;
	this->soundoff = true;
}

void SoftVoice::noteOff(int32_t velocity) {
	if (!this->on) {
		return;
	}
	this->on = false;
	this->noteOff_velocity = velocity;
	if ($nc(this->softchannel)->sustain) {
		this->sustain = true;
		return;
	}
	if (this->sostenuto) {
		return;
	}
	$nc(this->co_noteon_on)->set(0, (double)0);
	if (this->performer == nullptr) {
		return;
	}
	$var($ints, c, $nc($nc(this->performer)->midi_connections)->get(3));
	if (c == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $nc(c)->length; ++i) {
		processConnection(c->get(i));
	}
}

void SoftVoice::redamp() {
	if ($nc(this->co_noteon_on)->get(0) > 0.5) {
		return;
	}
	if ($nc(this->co_noteon_on)->get(0) < -0.5) {
		return;
	}
	this->sustain = true;
	$nc(this->co_noteon_on)->set(0, (double)1);
	if (this->performer == nullptr) {
		return;
	}
	$var($ints, c, $nc($nc(this->performer)->midi_connections)->get(3));
	if (c == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $nc(c)->length; ++i) {
		processConnection(c->get(i));
	}
}

void SoftVoice::processControlLogic() {
	$useLocalCurrentObjectStackCache();
	if (this->stopping) {
		this->active = false;
		this->stopping = false;
		this->audiostarted = false;
		$set(this, instrument, nullptr);
		$set(this, performer, nullptr);
		$set(this, connections, nullptr);
		$set(this, extendedConnectionBlocks, nullptr);
		$set(this, channelmixer, nullptr);
		if (this->osc_stream != nullptr) {
			try {
				$nc(this->osc_stream)->close();
			} catch ($IOException&) {
				$catch();
			}
		}
		if (this->stealer_channel != nullptr) {
			$nc(this->stealer_channel)->initVoice(this, this->stealer_performer, this->stealer_voiceID, this->stealer_noteNumber, this->stealer_velocity, 0, this->stealer_extendedConnectionBlocks, this->stealer_channelmixer, this->stealer_releaseTriggered);
			this->stealer_releaseTriggered = false;
			$set(this, stealer_channel, nullptr);
			$set(this, stealer_performer, nullptr);
			this->stealer_voiceID = -1;
			this->stealer_noteNumber = 0;
			this->stealer_velocity = 0;
			$set(this, stealer_extendedConnectionBlocks, nullptr);
			$set(this, stealer_channelmixer, nullptr);
		}
	}
	if (this->started) {
		this->audiostarted = true;
		$var($ModelOscillator, osc, $nc($nc(this->performer)->oscillators)->get(0));
		this->osc_stream_off_transmitted = false;
		if ($instanceOf($ModelWavetable, osc)) {
			try {
				$nc(this->resampler)->open($cast($ModelWavetable, osc), $nc($($nc(this->synthesizer)->getFormat()))->getSampleRate());
				$set(this, osc_stream, this->resampler);
			} catch ($IOException&) {
				$catch();
			}
		} else {
			$set(this, osc_stream, $nc(osc)->open($nc($($nc(this->synthesizer)->getFormat()))->getSampleRate()));
		}
		this->osc_attenuation = $nc(osc)->getAttenuation();
		this->osc_stream_nrofchannels = osc->getChannels();
		if (this->osc_buff == nullptr || $nc(this->osc_buff)->length < this->osc_stream_nrofchannels) {
			$set(this, osc_buff, $new($floatArray2, this->osc_stream_nrofchannels));
		}
		if (this->osc_stream != nullptr) {
			$nc(this->osc_stream)->noteOn(this->softchannel, this, this->noteOn_noteNumber, this->noteOn_velocity);
		}
	}
	if (this->audiostarted) {
		if (this->portamento) {
			double note_delta = this->tunedKey - ($nc(this->co_noteon_keynumber)->get(0) * 128);
			double note_delta_a = $Math::abs(note_delta);
			if (note_delta_a < 1.0E-10) {
				$nc(this->co_noteon_keynumber)->set(0, this->tunedKey * (1.0 / 128.0));
				this->portamento = false;
			} else {
				if (note_delta_a > $nc(this->softchannel)->portamento_time) {
					note_delta = $Math::signum(note_delta) * $nc(this->softchannel)->portamento_time;
				}
				(*$nc(this->co_noteon_keynumber))[0] += note_delta * (1.0 / 128.0);
			}
			$var($ints, c, $nc($nc(this->performer)->midi_connections)->get(4));
			if (c == nullptr) {
				return;
			}
			for (int32_t i = 0; i < $nc(c)->length; ++i) {
				processConnection(c->get(i));
			}
		}
		$nc(this->eg)->processControlLogic();
		$nc(this->lfo)->processControlLogic();
		for (int32_t i = 0; i < $nc($nc(this->performer)->ctrl_connections)->length; ++i) {
			processConnection($nc($nc(this->performer)->ctrl_connections)->get(i));
		}
		$nc(this->osc_stream)->setPitch((float)$nc(this->co_osc_pitch)->get(0));
		int32_t filter_type = $cast(int32_t, $nc(this->co_filter_type)->get(0));
		double filter_freq = 0.0;
		if ($nc(this->co_filter_freq)->get(0) == 13500.0) {
			filter_freq = 19912.126958213175;
		} else {
			filter_freq = 440.0 * $Math::exp((($nc(this->co_filter_freq)->get(0)) - 6900.0) * ($Math::log(2.0) / 1200.0));
		}
		double q = $nc(this->co_filter_q)->get(0) / 10.0;
		$nc(this->filter_left)->setFilterType(filter_type);
		$nc(this->filter_left)->setFrequency(filter_freq);
		$nc(this->filter_left)->setResonance(q);
		$nc(this->filter_right)->setFilterType(filter_type);
		$nc(this->filter_right)->setFrequency(filter_freq);
		$nc(this->filter_right)->setResonance(q);
		float gain = (float)$Math::exp((-this->osc_attenuation + $nc(this->co_mixer_gain)->get(0)) * ($Math::log((double)10) / 200.0));
		if ($nc(this->co_mixer_gain)->get(0) <= -960) {
			gain = (float)0;
		}
		if (this->soundoff) {
			this->stopping = true;
			gain = (float)0;
		}
		this->volume = $cast(int32_t, ($Math::sqrt(gain) * 128));
		double pan = $nc(this->co_mixer_pan)->get(0) * (1.0 / 1000.0);
		if (pan < 0) {
			pan = (double)0;
		} else if (pan > 1) {
			pan = (double)1;
		}
		if (pan == 0.5) {
			this->out_mixer_left = gain * 0.70710677f;
			this->out_mixer_right = this->out_mixer_left;
		} else {
			this->out_mixer_left = gain * (float)$Math::cos(pan * $Math::PI * 0.5);
			this->out_mixer_right = gain * (float)$Math::sin(pan * $Math::PI * 0.5);
		}
		double balance = $nc(this->co_mixer_balance)->get(0) * (1.0 / 1000.0);
		if (balance != 0.5) {
			if (balance > 0.5) {
				this->out_mixer_left *= (1 - balance) * 2;
			} else {
				this->out_mixer_right *= balance * 2;
			}
		}
		if ($nc(this->synthesizer)->reverb_on) {
			this->out_mixer_effect1 = (float)($nc(this->co_mixer_reverb)->get(0) * (1.0 / 1000.0));
			this->out_mixer_effect1 *= gain;
		} else {
			this->out_mixer_effect1 = (float)0;
		}
		if ($nc(this->synthesizer)->chorus_on) {
			this->out_mixer_effect2 = (float)($nc(this->co_mixer_chorus)->get(0) * (1.0 / 1000.0));
			this->out_mixer_effect2 *= gain;
		} else {
			this->out_mixer_effect2 = (float)0;
		}
		this->out_mixer_end = $nc(this->co_mixer_active)->get(0) < 0.5;
		if (!this->on) {
			if (!this->osc_stream_off_transmitted) {
				this->osc_stream_off_transmitted = true;
				if (this->osc_stream != nullptr) {
					$nc(this->osc_stream)->noteOff(this->noteOff_velocity);
				}
			}
		}
	}
	if (this->started) {
		this->last_out_mixer_left = this->out_mixer_left;
		this->last_out_mixer_right = this->out_mixer_right;
		this->last_out_mixer_effect1 = this->out_mixer_effect1;
		this->last_out_mixer_effect2 = this->out_mixer_effect2;
		this->started = false;
	}
}

void SoftVoice::mixAudioStream($SoftAudioBuffer* in, $SoftAudioBuffer* out, $SoftAudioBuffer* dout, float amp_from, float amp_to) {
	$useLocalCurrentObjectStackCache();
	int32_t bufferlen = $nc(in)->getSize();
	if (amp_from < 1.0E-9 && amp_to < 1.0E-9) {
		return;
	}
	if (dout != nullptr && this->delay != 0) {
		if (amp_from == amp_to) {
			$var($floats, fout, $nc(out)->array());
			$var($floats, fin, in->array());
			int32_t j = 0;
			for (int32_t i = this->delay; i < bufferlen; ++i) {
				(*$nc(fout))[i] += $nc(fin)->get(j++) * amp_to;
			}
			$assign(fout, dout->array());
			for (int32_t i = 0; i < this->delay; ++i) {
				(*$nc(fout))[i] += $nc(fin)->get(j++) * amp_to;
			}
		} else {
			float amp = amp_from;
			float amp_delta = (amp_to - amp_from) / bufferlen;
			$var($floats, fout, $nc(out)->array());
			$var($floats, fin, in->array());
			int32_t j = 0;
			for (int32_t i = this->delay; i < bufferlen; ++i) {
				amp += amp_delta;
				(*$nc(fout))[i] += $nc(fin)->get(j++) * amp;
			}
			$assign(fout, dout->array());
			for (int32_t i = 0; i < this->delay; ++i) {
				amp += amp_delta;
				(*$nc(fout))[i] += $nc(fin)->get(j++) * amp;
			}
		}
	} else if (amp_from == amp_to) {
		$var($floats, fout, $nc(out)->array());
		$var($floats, fin, in->array());
		for (int32_t i = 0; i < bufferlen; ++i) {
			(*$nc(fout))[i] += $nc(fin)->get(i) * amp_to;
		}
	} else {
		float amp = amp_from;
		float amp_delta = (amp_to - amp_from) / bufferlen;
		$var($floats, fout, $nc(out)->array());
		$var($floats, fin, in->array());
		for (int32_t i = 0; i < bufferlen; ++i) {
			amp += amp_delta;
			(*$nc(fout))[i] += $nc(fin)->get(i) * amp;
		}
	}
}

void SoftVoice::processAudioLogic($SoftAudioBufferArray* buffer) {
	$useLocalCurrentObjectStackCache();
	if (!this->audiostarted) {
		return;
	}
	int32_t bufferlen = $nc($nc(buffer)->get(0))->getSize();
	try {
		$nc(this->osc_buff)->set(0, $($nc(buffer->get($SoftMainMixer::CHANNEL_LEFT_DRY))->array()));
		if (this->nrofchannels != 1) {
			$nc(this->osc_buff)->set(1, $($nc(buffer->get($SoftMainMixer::CHANNEL_RIGHT_DRY))->array()));
		}
		int32_t ret = $nc(this->osc_stream)->read(this->osc_buff, 0, bufferlen);
		if (ret == -1) {
			this->stopping = true;
			return;
		}
		if (ret != bufferlen) {
			$Arrays::fill($nc(this->osc_buff)->get(0), ret, bufferlen, 0.0f);
			if (this->nrofchannels != 1) {
				$Arrays::fill($nc(this->osc_buff)->get(1), ret, bufferlen, 0.0f);
			}
		}
	} catch ($IOException&) {
		$catch();
	}
	$var($SoftAudioBuffer, left, buffer->get($SoftMainMixer::CHANNEL_LEFT));
	$var($SoftAudioBuffer, right, buffer->get($SoftMainMixer::CHANNEL_RIGHT));
	$var($SoftAudioBuffer, mono, buffer->get($SoftMainMixer::CHANNEL_MONO));
	$var($SoftAudioBuffer, eff1, buffer->get($SoftMainMixer::CHANNEL_EFFECT1));
	$var($SoftAudioBuffer, eff2, buffer->get($SoftMainMixer::CHANNEL_EFFECT2));
	$var($SoftAudioBuffer, dleft, buffer->get($SoftMainMixer::CHANNEL_DELAY_LEFT));
	$var($SoftAudioBuffer, dright, buffer->get($SoftMainMixer::CHANNEL_DELAY_RIGHT));
	$var($SoftAudioBuffer, dmono, buffer->get($SoftMainMixer::CHANNEL_DELAY_MONO));
	$var($SoftAudioBuffer, deff1, buffer->get($SoftMainMixer::CHANNEL_DELAY_EFFECT1));
	$var($SoftAudioBuffer, deff2, buffer->get($SoftMainMixer::CHANNEL_DELAY_EFFECT2));
	$var($SoftAudioBuffer, leftdry, buffer->get($SoftMainMixer::CHANNEL_LEFT_DRY));
	$var($SoftAudioBuffer, rightdry, buffer->get($SoftMainMixer::CHANNEL_RIGHT_DRY));
	if (this->osc_stream_nrofchannels == 1) {
		$assign(rightdry, nullptr);
	}
	if (!$Double::isInfinite($nc(this->co_filter_freq)->get(0))) {
		$nc(this->filter_left)->processAudio(leftdry);
		if (rightdry != nullptr) {
			$nc(this->filter_right)->processAudio(rightdry);
		}
	}
	if (this->nrofchannels == 1) {
		this->out_mixer_left = (this->out_mixer_left + this->out_mixer_right) / 2;
		mixAudioStream(leftdry, left, dleft, this->last_out_mixer_left, this->out_mixer_left);
		if (rightdry != nullptr) {
			mixAudioStream(rightdry, left, dleft, this->last_out_mixer_left, this->out_mixer_left);
		}
	} else if (rightdry == nullptr && this->last_out_mixer_left == this->last_out_mixer_right && this->out_mixer_left == this->out_mixer_right) {
		mixAudioStream(leftdry, mono, dmono, this->last_out_mixer_left, this->out_mixer_left);
	} else {
		mixAudioStream(leftdry, left, dleft, this->last_out_mixer_left, this->out_mixer_left);
		if (rightdry != nullptr) {
			mixAudioStream(rightdry, right, dright, this->last_out_mixer_right, this->out_mixer_right);
		} else {
			mixAudioStream(leftdry, right, dright, this->last_out_mixer_right, this->out_mixer_right);
		}
	}
	if (rightdry == nullptr) {
		mixAudioStream(leftdry, eff1, deff1, this->last_out_mixer_effect1, this->out_mixer_effect1);
		mixAudioStream(leftdry, eff2, deff2, this->last_out_mixer_effect2, this->out_mixer_effect2);
	} else {
		mixAudioStream(leftdry, eff1, deff1, this->last_out_mixer_effect1 * 0.5f, this->out_mixer_effect1 * 0.5f);
		mixAudioStream(leftdry, eff2, deff2, this->last_out_mixer_effect2 * 0.5f, this->out_mixer_effect2 * 0.5f);
		mixAudioStream(rightdry, eff1, deff1, this->last_out_mixer_effect1 * 0.5f, this->out_mixer_effect1 * 0.5f);
		mixAudioStream(rightdry, eff2, deff2, this->last_out_mixer_effect2 * 0.5f, this->out_mixer_effect2 * 0.5f);
	}
	this->last_out_mixer_left = this->out_mixer_left;
	this->last_out_mixer_right = this->out_mixer_right;
	this->last_out_mixer_effect1 = this->out_mixer_effect1;
	this->last_out_mixer_effect2 = this->out_mixer_effect2;
	if (this->out_mixer_end) {
		this->stopping = true;
	}
}

SoftVoice::SoftVoice() {
}

$Class* SoftVoice::load$($String* name, bool initialize) {
	$loadClass(SoftVoice, name, initialize, &_SoftVoice_ClassInfo_, allocate$SoftVoice);
	return class$;
}

$Class* SoftVoice::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com