#include <com/sun/media/sound/SoftMainMixer.h>

#include <com/sun/media/sound/ModelChannelMixer.h>
#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftAudioProcessor.h>
#include <com/sun/media/sound/SoftChannel.h>
#include <com/sun/media/sound/SoftChorus.h>
#include <com/sun/media/sound/SoftControl.h>
#include <com/sun/media/sound/SoftLimiter.h>
#include <com/sun/media/sound/SoftMainMixer$1.h>
#include <com/sun/media/sound/SoftMainMixer$2.h>
#include <com/sun/media/sound/SoftMainMixer$SoftChannelMixerContainer.h>
#include <com/sun/media/sound/SoftReverb.h>
#include <com/sun/media/sound/SoftSynthesizer$WeakAudioStream.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <com/sun/media/sound/SoftTuning.h>
#include <com/sun/media/sound/SoftVoice.h>
#include <java/io/InputStream.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/ShortMessage.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef ACTIVE_SENSING
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
#undef CHANNEL_PRESSURE
#undef CHANNEL_RIGHT
#undef CHANNEL_RIGHT_DRY
#undef CHANNEL_SCRATCH1
#undef CHANNEL_SCRATCH2
#undef CONTROL_CHANGE
#undef NOTE_OFF
#undef NOTE_ON
#undef NOT_SPECIFIED
#undef PITCH_BEND
#undef POLY_PRESSURE
#undef PROGRAM_CHANGE

using $SoftAudioBufferArray = $Array<::com::sun::media::sound::SoftAudioBuffer>;
using $SoftChannelArray = $Array<::com::sun::media::sound::SoftChannel>;
using $SoftMainMixer$SoftChannelMixerContainerArray = $Array<::com::sun::media::sound::SoftMainMixer$SoftChannelMixerContainer>;
using $SoftVoiceArray = $Array<::com::sun::media::sound::SoftVoice>;
using $floatArray2 = $Array<float, 2>;
using $ModelChannelMixer = ::com::sun::media::sound::ModelChannelMixer;
using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
using $SoftAudioProcessor = ::com::sun::media::sound::SoftAudioProcessor;
using $SoftChannel = ::com::sun::media::sound::SoftChannel;
using $SoftChorus = ::com::sun::media::sound::SoftChorus;
using $SoftControl = ::com::sun::media::sound::SoftControl;
using $SoftLimiter = ::com::sun::media::sound::SoftLimiter;
using $SoftMainMixer$1 = ::com::sun::media::sound::SoftMainMixer$1;
using $SoftMainMixer$2 = ::com::sun::media::sound::SoftMainMixer$2;
using $SoftMainMixer$SoftChannelMixerContainer = ::com::sun::media::sound::SoftMainMixer$SoftChannelMixerContainer;
using $SoftReverb = ::com::sun::media::sound::SoftReverb;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $SoftSynthesizer$WeakAudioStream = ::com::sun::media::sound::SoftSynthesizer$WeakAudioStream;
using $SoftTuning = ::com::sun::media::sound::SoftTuning;
using $SoftVoice = ::com::sun::media::sound::SoftVoice;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Patch = ::javax::sound::midi::Patch;
using $ShortMessage = ::javax::sound::midi::ShortMessage;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMainMixer_FieldInfo_[] = {
	{"CHANNEL_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_LEFT)},
	{"CHANNEL_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_RIGHT)},
	{"CHANNEL_MONO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_MONO)},
	{"CHANNEL_DELAY_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_DELAY_LEFT)},
	{"CHANNEL_DELAY_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_DELAY_RIGHT)},
	{"CHANNEL_DELAY_MONO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_DELAY_MONO)},
	{"CHANNEL_EFFECT1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_EFFECT1)},
	{"CHANNEL_EFFECT2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_EFFECT2)},
	{"CHANNEL_DELAY_EFFECT1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_DELAY_EFFECT1)},
	{"CHANNEL_DELAY_EFFECT2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_DELAY_EFFECT2)},
	{"CHANNEL_LEFT_DRY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_LEFT_DRY)},
	{"CHANNEL_RIGHT_DRY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_RIGHT_DRY)},
	{"CHANNEL_SCRATCH1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_SCRATCH1)},
	{"CHANNEL_SCRATCH2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_SCRATCH2)},
	{"active_sensing_on", "Z", nullptr, 0, $field(SoftMainMixer, active_sensing_on)},
	{"msec_last_activity", "J", nullptr, $PRIVATE, $field(SoftMainMixer, msec_last_activity)},
	{"pusher_silent", "Z", nullptr, $PRIVATE, $field(SoftMainMixer, pusher_silent)},
	{"pusher_silent_count", "I", nullptr, $PRIVATE, $field(SoftMainMixer, pusher_silent_count)},
	{"sample_pos", "J", nullptr, $PRIVATE, $field(SoftMainMixer, sample_pos)},
	{"readfully", "Z", nullptr, 0, $field(SoftMainMixer, readfully)},
	{"control_mutex", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, control_mutex)},
	{"synth", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, synth)},
	{"samplerate", "F", nullptr, $PRIVATE, $field(SoftMainMixer, samplerate)},
	{"nrofchannels", "I", nullptr, $PRIVATE, $field(SoftMainMixer, nrofchannels)},
	{"voicestatus", "[Lcom/sun/media/sound/SoftVoice;", nullptr, $PRIVATE, $field(SoftMainMixer, voicestatus)},
	{"buffers", "[Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, buffers)},
	{"reverb", "Lcom/sun/media/sound/SoftReverb;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, reverb)},
	{"chorus", "Lcom/sun/media/sound/SoftAudioProcessor;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, chorus)},
	{"agc", "Lcom/sun/media/sound/SoftAudioProcessor;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, agc)},
	{"msec_buffer_len", "J", nullptr, $PRIVATE, $field(SoftMainMixer, msec_buffer_len)},
	{"buffer_len", "I", nullptr, $PRIVATE, $field(SoftMainMixer, buffer_len)},
	{"midimessages", "Ljava/util/TreeMap;", "Ljava/util/TreeMap<Ljava/lang/Long;Ljava/lang/Object;>;", 0, $field(SoftMainMixer, midimessages)},
	{"delay_midievent", "I", nullptr, $PRIVATE, $field(SoftMainMixer, delay_midievent)},
	{"max_delay_midievent", "I", nullptr, $PRIVATE, $field(SoftMainMixer, max_delay_midievent)},
	{"last_volume_left", "D", nullptr, 0, $field(SoftMainMixer, last_volume_left)},
	{"last_volume_right", "D", nullptr, 0, $field(SoftMainMixer, last_volume_right)},
	{"co_master_balance", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, co_master_balance)},
	{"co_master_volume", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, co_master_volume)},
	{"co_master_coarse_tuning", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, co_master_coarse_tuning)},
	{"co_master_fine_tuning", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, co_master_fine_tuning)},
	{"ais", "Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, ais)},
	{"registeredMixers", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/media/sound/SoftMainMixer$SoftChannelMixerContainer;>;", $PRIVATE, $field(SoftMainMixer, registeredMixers)},
	{"stoppedMixers", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/media/sound/ModelChannelMixer;>;", $PRIVATE, $field(SoftMainMixer, stoppedMixers)},
	{"cur_registeredMixers", "[Lcom/sun/media/sound/SoftMainMixer$SoftChannelMixerContainer;", nullptr, $PRIVATE, $field(SoftMainMixer, cur_registeredMixers)},
	{"co_master", "Lcom/sun/media/sound/SoftControl;", nullptr, 0, $field(SoftMainMixer, co_master)},
	{}
};

$MethodInfo _SoftMainMixer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)($SoftSynthesizer*)>(&SoftMainMixer::init$))},
	{"activity", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)()>(&SoftMainMixer::activity))},
	{"close", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)()>(&SoftMainMixer::close))},
	{"getBalance", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SoftMainMixer::*)()>(&SoftMainMixer::getBalance))},
	{"getCoarseTuning", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SoftMainMixer::*)()>(&SoftMainMixer::getCoarseTuning))},
	{"getFineTuning", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SoftMainMixer::*)()>(&SoftMainMixer::getFineTuning))},
	{"getInputStream", "()Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, $method(static_cast<$AudioInputStream*(SoftMainMixer::*)()>(&SoftMainMixer::getInputStream))},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(SoftMainMixer::*)()>(&SoftMainMixer::getMicrosecondPosition))},
	{"getVolume", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SoftMainMixer::*)()>(&SoftMainMixer::getVolume))},
	{"globalParameterControlChange", "([I[J[J)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)($ints*,$longs*,$longs*)>(&SoftMainMixer::globalParameterControlChange))},
	{"processAudioBuffers", "()V", nullptr, 0, $method(static_cast<void(SoftMainMixer::*)()>(&SoftMainMixer::processAudioBuffers))},
	{"processMessage", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)(Object$*)>(&SoftMainMixer::processMessage))},
	{"processMessage", "(Ljavax/sound/midi/MidiMessage;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)($MidiMessage*)>(&SoftMainMixer::processMessage))},
	{"processMessage", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)($bytes*)>(&SoftMainMixer::processMessage))},
	{"processMessage", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)(int32_t,int32_t,int32_t,int32_t)>(&SoftMainMixer::processMessage))},
	{"processMessages", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(SoftMainMixer::*)(int64_t)>(&SoftMainMixer::processMessages))},
	{"processSystemExclusiveMessage", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(SoftMainMixer::*)($bytes*)>(&SoftMainMixer::processSystemExclusiveMessage))},
	{"registerMixer", "(Lcom/sun/media/sound/ModelChannelMixer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)($ModelChannelMixer*)>(&SoftMainMixer::registerMixer))},
	{"reset", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)()>(&SoftMainMixer::reset))},
	{"setBalance", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)(int32_t)>(&SoftMainMixer::setBalance))},
	{"setCoarseTuning", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)(int32_t)>(&SoftMainMixer::setCoarseTuning))},
	{"setFineTuning", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)(int32_t)>(&SoftMainMixer::setFineTuning))},
	{"setVolume", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)(int32_t)>(&SoftMainMixer::setVolume))},
	{"stopMixer", "(Lcom/sun/media/sound/ModelChannelMixer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMainMixer::*)($ModelChannelMixer*)>(&SoftMainMixer::stopMixer))},
	{}
};

$InnerClassInfo _SoftMainMixer_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMainMixer$SoftChannelMixerContainer", "com.sun.media.sound.SoftMainMixer", "SoftChannelMixerContainer", $PRIVATE},
	{"com.sun.media.sound.SoftMainMixer$2", nullptr, nullptr, 0},
	{"com.sun.media.sound.SoftMainMixer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftMainMixer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMainMixer",
	"java.lang.Object",
	nullptr,
	_SoftMainMixer_FieldInfo_,
	_SoftMainMixer_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMainMixer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMainMixer$SoftChannelMixerContainer,com.sun.media.sound.SoftMainMixer$2,com.sun.media.sound.SoftMainMixer$1"
};

$Object* allocate$SoftMainMixer($Class* clazz) {
	return $of($alloc(SoftMainMixer));
}

void SoftMainMixer::processSystemExclusiveMessage($bytes* data) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(this->synth)->control_mutex) {
		activity();
		if (((int32_t)($nc(data)->get(1) & (uint32_t)255)) == 126) {
			int32_t deviceID = (int32_t)(data->get(2) & (uint32_t)255);
			if (deviceID == 127 || deviceID == $nc(this->synth)->getDeviceID()) {
				int32_t subid1 = (int32_t)(data->get(3) & (uint32_t)255);
				int32_t subid2 = 0;
				switch (subid1) {
				case 8:
					{
						subid2 = (int32_t)(data->get(4) & (uint32_t)255);
						switch (subid2) {
						case 1:
							{
								{
									$var($SoftTuning, tuning, $nc(this->synth)->getTuning($$new($Patch, 0, (int32_t)(data->get(5) & (uint32_t)255))));
									$nc(tuning)->load(data);
									break;
								}
							}
						case 4:
							{}
						case 5:
							{}
						case 6:
							{}
						case 7:
							{
								{
									$var($SoftTuning, tuning, $nc(this->synth)->getTuning($$new($Patch, (int32_t)(data->get(5) & (uint32_t)255), (int32_t)(data->get(6) & (uint32_t)255))));
									$nc(tuning)->load(data);
									break;
								}
							}
						case 8:
							{}
						case 9:
							{
								{
									$var($SoftTuning, tuning, $new($SoftTuning, data));
									int32_t channelmask = ((int32_t)(data->get(5) & (uint32_t)255)) * 16384 + ((int32_t)(data->get(6) & (uint32_t)255)) * 128 + ((int32_t)(data->get(7) & (uint32_t)255));
									$var($SoftChannelArray, channels, $nc(this->synth)->channels);
									for (int32_t i = 0; i < $nc(channels)->length; ++i) {
										if (((int32_t)(channelmask & (uint32_t)($sl(1, i)))) != 0) {
											$set($nc(channels->get(i)), tuning, tuning);
										}
									}
									break;
								}
							}
						default:
							{
								break;
							}
						}
						break;
					}
				case 9:
					{
						subid2 = (int32_t)(data->get(4) & (uint32_t)255);
						switch (subid2) {
						case 1:
							{
								$nc(this->synth)->setGeneralMidiMode(1);
								reset();
								break;
							}
						case 2:
							{
								$nc(this->synth)->setGeneralMidiMode(0);
								reset();
								break;
							}
						case 3:
							{
								$nc(this->synth)->setGeneralMidiMode(2);
								reset();
								break;
							}
						default:
							{
								break;
							}
						}
						break;
					}
				case 10:
					{
						subid2 = (int32_t)(data->get(4) & (uint32_t)255);
						switch (subid2) {
						case 1:
							{
								if ($nc(this->synth)->getGeneralMidiMode() == 0) {
									$nc(this->synth)->setGeneralMidiMode(1);
								}
								$nc(this->synth)->voice_allocation_mode = 1;
								reset();
								break;
							}
						case 2:
							{
								$nc(this->synth)->setGeneralMidiMode(0);
								$nc(this->synth)->voice_allocation_mode = 0;
								reset();
								break;
							}
						case 3:
							{
								$nc(this->synth)->voice_allocation_mode = 0;
								break;
							}
						case 4:
							{
								$nc(this->synth)->voice_allocation_mode = 1;
								break;
							}
						default:
							{
								break;
							}
						}
						break;
					}
				default:
					{
						break;
					}
				}
			}
		}
		if (((int32_t)($nc(data)->get(1) & (uint32_t)255)) == 127) {
			int32_t deviceID = (int32_t)(data->get(2) & (uint32_t)255);
			if (deviceID == 127 || deviceID == $nc(this->synth)->getDeviceID()) {
				int32_t subid1 = (int32_t)(data->get(3) & (uint32_t)255);
				int32_t subid2 = 0;
				switch (subid1) {
				case 4:
					{
						subid2 = (int32_t)(data->get(4) & (uint32_t)255);
						{
							int32_t val = 0;
							int32_t ix = 0;
							int32_t slotPathLen = 0;
							int32_t paramWidth = 0;
							int32_t valueWidth = 0;
							$var($ints, slotPath, nullptr)
							int32_t paramCount = 0;
							$var($longs, params, nullptr)
							$var($longs, values, nullptr)
							switch (subid2) {
							case 1:
								{}
							case 2:
								{}
							case 3:
								{}
							case 4:
								{
									val = ((int32_t)(data->get(5) & (uint32_t)127)) + (((int32_t)(data->get(6) & (uint32_t)127)) * 128);
									if (subid2 == 1) {
										setVolume(val);
									} else if (subid2 == 2) {
										setBalance(val);
									} else if (subid2 == 3) {
										setFineTuning(val);
									} else if (subid2 == 4) {
										setCoarseTuning(val);
									}
									break;
								}
							case 5:
								{
									ix = 5;
									slotPathLen = ((int32_t)(data->get(ix++) & (uint32_t)255));
									paramWidth = ((int32_t)(data->get(ix++) & (uint32_t)255));
									valueWidth = ((int32_t)(data->get(ix++) & (uint32_t)255));
									$assign(slotPath, $new($ints, slotPathLen));
									for (int32_t i = 0; i < slotPathLen; ++i) {
										int32_t msb = ((int32_t)(data->get(ix++) & (uint32_t)255));
										int32_t lsb = ((int32_t)(data->get(ix++) & (uint32_t)255));
										$nc(slotPath)->set(i, msb * 128 + lsb);
									}
									paramCount = $div((data->length - 1 - ix), (paramWidth + valueWidth));
									$assign(params, $new($longs, paramCount));
									$assign(values, $new($longs, paramCount));
									for (int32_t i = 0; i < paramCount; ++i) {
										$nc(values)->set(i, 0);
										for (int32_t j = 0; j < paramWidth; ++j) {
											$nc(params)->set(i, params->get(i) * 128 + ((int32_t)(data->get(ix++) & (uint32_t)255)));
										}
										for (int32_t j = 0; j < valueWidth; ++j) {
											values->set(i, values->get(i) * 128 + ((int32_t)(data->get(ix++) & (uint32_t)255)));
										}
									}
									globalParameterControlChange(slotPath, params, values);
									break;
								}
							default:
								{
									break;
								}
							}
						}
						break;
					}
				case 8:
					{
						subid2 = (int32_t)(data->get(4) & (uint32_t)255);
						switch (subid2) {
						case 2:
							{
								{
									$var($SoftTuning, tuning, $nc(this->synth)->getTuning($$new($Patch, 0, (int32_t)(data->get(5) & (uint32_t)255))));
									$nc(tuning)->load(data);
									$var($SoftVoiceArray, voices, $nc(this->synth)->getVoices());
									for (int32_t i = 0; i < $nc(voices)->length; ++i) {
										if ($nc(voices->get(i))->active) {
											if ($nc(voices->get(i))->tuning == tuning) {
												$nc(voices->get(i))->updateTuning(tuning);
											}
										}
									}
									break;
								}
							}
						case 7:
							{
								{
									$var($SoftTuning, tuning, $nc(this->synth)->getTuning($$new($Patch, (int32_t)(data->get(5) & (uint32_t)255), (int32_t)(data->get(6) & (uint32_t)255))));
									$nc(tuning)->load(data);
									$var($SoftVoiceArray, voices, $nc(this->synth)->getVoices());
									for (int32_t i = 0; i < $nc(voices)->length; ++i) {
										if ($nc(voices->get(i))->active) {
											if ($nc(voices->get(i))->tuning == tuning) {
												$nc(voices->get(i))->updateTuning(tuning);
											}
										}
									}
									break;
								}
							}
						case 8:
							{}
						case 9:
							{
								{
									$var($SoftTuning, tuning, $new($SoftTuning, data));
									int32_t channelmask = ((int32_t)(data->get(5) & (uint32_t)255)) * 16384 + ((int32_t)(data->get(6) & (uint32_t)255)) * 128 + ((int32_t)(data->get(7) & (uint32_t)255));
									$var($SoftChannelArray, channels, $nc(this->synth)->channels);
									for (int32_t i = 0; i < $nc(channels)->length; ++i) {
										if (((int32_t)(channelmask & (uint32_t)($sl(1, i)))) != 0) {
											$set($nc(channels->get(i)), tuning, tuning);
										}
									}
									$var($SoftVoiceArray, voices, $nc(this->synth)->getVoices());
									for (int32_t i = 0; i < $nc(voices)->length; ++i) {
										if ($nc(voices->get(i))->active) {
											if (((int32_t)(channelmask & (uint32_t)($sl(1, $nc(voices->get(i))->channel)))) != 0) {
												$nc(voices->get(i))->updateTuning(tuning);
											}
										}
									}
									break;
								}
							}
						default:
							{
								break;
							}
						}
						break;
					}
				case 9:
					{
						subid2 = (int32_t)(data->get(4) & (uint32_t)255);
						switch (subid2) {
						case 1:
							{
								{
									$var($ints, destinations, $new($ints, (data->length - 7) / 2));
									$var($ints, ranges, $new($ints, (data->length - 7) / 2));
									int32_t ix = 0;
									for (int32_t j = 6; j < data->length - 1; j += 2) {
										destinations->set(ix, (int32_t)(data->get(j) & (uint32_t)255));
										ranges->set(ix, (int32_t)(data->get(j + 1) & (uint32_t)255));
										++ix;
									}
									int32_t channel = (int32_t)(data->get(5) & (uint32_t)255);
									$var($SoftChannel, softchannel, $nc($nc(this->synth)->channels)->get(channel));
									$nc(softchannel)->mapChannelPressureToDestination(destinations, ranges);
									break;
								}
							}
						case 2:
							{
								{
									$var($ints, destinations, $new($ints, (data->length - 7) / 2));
									$var($ints, ranges, $new($ints, (data->length - 7) / 2));
									int32_t ix = 0;
									for (int32_t j = 6; j < data->length - 1; j += 2) {
										destinations->set(ix, (int32_t)(data->get(j) & (uint32_t)255));
										ranges->set(ix, (int32_t)(data->get(j + 1) & (uint32_t)255));
										++ix;
									}
									int32_t channel = (int32_t)(data->get(5) & (uint32_t)255);
									$var($SoftChannel, softchannel, $nc($nc(this->synth)->channels)->get(channel));
									$nc(softchannel)->mapPolyPressureToDestination(destinations, ranges);
									break;
								}
							}
						case 3:
							{
								{
									$var($ints, destinations, $new($ints, (data->length - 7) / 2));
									$var($ints, ranges, $new($ints, (data->length - 7) / 2));
									int32_t ix = 0;
									for (int32_t j = 7; j < data->length - 1; j += 2) {
										destinations->set(ix, (int32_t)(data->get(j) & (uint32_t)255));
										ranges->set(ix, (int32_t)(data->get(j + 1) & (uint32_t)255));
										++ix;
									}
									int32_t channel = (int32_t)(data->get(5) & (uint32_t)255);
									$var($SoftChannel, softchannel, $nc($nc(this->synth)->channels)->get(channel));
									int32_t control = (int32_t)(data->get(6) & (uint32_t)255);
									$nc(softchannel)->mapControlToDestination(control, destinations, ranges);
									break;
								}
							}
						default:
							{
								break;
							}
						}
						break;
					}
				case 10:
					{
						{
							subid2 = (int32_t)(data->get(4) & (uint32_t)255);
							{
								int32_t channel = 0;
								int32_t keynumber = 0;
								$var($SoftChannel, softchannel, nullptr)
								switch (subid2) {
								case 1:
									{
										channel = (int32_t)(data->get(5) & (uint32_t)255);
										keynumber = (int32_t)(data->get(6) & (uint32_t)255);
										$assign(softchannel, $nc($nc(this->synth)->channels)->get(channel));
										for (int32_t j = 7; j < data->length - 1; j += 2) {
											int32_t controlnumber = (int32_t)(data->get(j) & (uint32_t)255);
											int32_t controlvalue = (int32_t)(data->get(j + 1) & (uint32_t)255);
											$nc(softchannel)->controlChangePerNote(keynumber, controlnumber, controlvalue);
										}
										break;
									}
								default:
									{
										break;
									}
								}
							}
							break;
						}
					}
				default:
					{
						break;
					}
				}
			}
		}
	}
}

void SoftMainMixer::processMessages(int64_t timeStamp) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, iter, $nc($($nc(this->midimessages)->entrySet()))->iterator());
	while ($nc(iter)->hasNext()) {
		$var($Map$Entry, entry, $cast($Map$Entry, iter->next()));
		if ($nc(($cast($Long, $($nc(entry)->getKey()))))->longValue() >= (timeStamp + this->msec_buffer_len)) {
			return;
		}
		int64_t msec_delay = $nc(($cast($Long, $($nc(entry)->getKey()))))->longValue() - timeStamp;
		this->delay_midievent = $cast(int32_t, (msec_delay * (this->samplerate / 1000000.0) + 0.5));
		if (this->delay_midievent > this->max_delay_midievent) {
			this->delay_midievent = this->max_delay_midievent;
		}
		if (this->delay_midievent < 0) {
			this->delay_midievent = 0;
		}
		processMessage($(entry->getValue()));
		iter->remove();
	}
	this->delay_midievent = 0;
}

void SoftMainMixer::processAudioBuffers() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->synth)->weakstream != nullptr && $nc($nc(this->synth)->weakstream)->silent_samples != 0) {
		this->sample_pos += $nc($nc(this->synth)->weakstream)->silent_samples;
		$nc($nc(this->synth)->weakstream)->silent_samples = 0;
	}
	for (int32_t i = 0; i < $nc(this->buffers)->length; ++i) {
		if (i != SoftMainMixer::CHANNEL_DELAY_LEFT && i != SoftMainMixer::CHANNEL_DELAY_RIGHT && i != SoftMainMixer::CHANNEL_DELAY_MONO && i != SoftMainMixer::CHANNEL_DELAY_EFFECT1 && i != SoftMainMixer::CHANNEL_DELAY_EFFECT2) {
			$nc($nc(this->buffers)->get(i))->clear();
		}
	}
	if (!$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_LEFT))->isSilent()) {
		$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->swap($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_LEFT));
	}
	if (!$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_RIGHT))->isSilent()) {
		$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT))->swap($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_RIGHT));
	}
	if (!$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_MONO))->isSilent()) {
		$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_MONO))->swap($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_MONO));
	}
	if (!$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_EFFECT1))->isSilent()) {
		$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_EFFECT1))->swap($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_EFFECT1));
	}
	if (!$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_EFFECT2))->isSilent()) {
		$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_EFFECT2))->swap($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_EFFECT2));
	}
	double volume_left = 0.0;
	double volume_right = 0.0;
	$var($SoftMainMixer$SoftChannelMixerContainerArray, act_registeredMixers, nullptr);
	$synchronized(this->control_mutex) {
		int64_t msec_pos = $cast(int64_t, (this->sample_pos * (1000000.0 / this->samplerate)));
		processMessages(msec_pos);
		if (this->active_sensing_on) {
			if ((msec_pos - this->msec_last_activity) > 0x000F4240) {
				this->active_sensing_on = false;
				{
					$var($SoftChannelArray, arr$, $nc(this->synth)->channels);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($SoftChannel, c, arr$->get(i$));
						$nc(c)->allSoundOff();
					}
				}
			}
		}
		for (int32_t i = 0; i < $nc(this->voicestatus)->length; ++i) {
			if ($nc($nc(this->voicestatus)->get(i))->active) {
				$nc($nc(this->voicestatus)->get(i))->processControlLogic();
			}
		}
		this->sample_pos += this->buffer_len;
		double volume = $nc(this->co_master_volume)->get(0);
		volume_left = volume;
		volume_right = volume;
		double balance = $nc(this->co_master_balance)->get(0);
		if (balance > 0.5) {
			volume_left *= (1 - balance) * 2;
		} else {
			volume_right *= balance * 2;
		}
		$nc(this->chorus)->processControlLogic();
		$nc(this->reverb)->processControlLogic();
		$nc(this->agc)->processControlLogic();
		if (this->cur_registeredMixers == nullptr) {
			if (this->registeredMixers != nullptr) {
				$set(this, cur_registeredMixers, $new($SoftMainMixer$SoftChannelMixerContainerArray, $nc(this->registeredMixers)->size()));
				$nc(this->registeredMixers)->toArray(this->cur_registeredMixers);
			}
		}
		$assign(act_registeredMixers, this->cur_registeredMixers);
		if (act_registeredMixers != nullptr) {
			if (act_registeredMixers->length == 0) {
				$assign(act_registeredMixers, nullptr);
			}
		}
	}
	if (act_registeredMixers != nullptr) {
		$var($SoftAudioBuffer, leftbak, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT));
		$var($SoftAudioBuffer, rightbak, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT));
		$var($SoftAudioBuffer, monobak, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_MONO));
		$var($SoftAudioBuffer, delayleftbak, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_LEFT));
		$var($SoftAudioBuffer, delayrightbak, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_RIGHT));
		$var($SoftAudioBuffer, delaymonobak, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_MONO));
		int32_t bufferlen = $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->getSize();
		$var($floatArray2, cbuffer, $new($floatArray2, this->nrofchannels));
		$var($floatArray2, obuffer, $new($floatArray2, this->nrofchannels));
		obuffer->set(0, $($nc(leftbak)->array()));
		if (this->nrofchannels != 1) {
			obuffer->set(1, $($nc(rightbak)->array()));
		}
		{
			$var($SoftMainMixer$SoftChannelMixerContainerArray, arr$, act_registeredMixers);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($SoftMainMixer$SoftChannelMixerContainer, cmixer, arr$->get(i$));
				{
					$nc(this->buffers)->set(SoftMainMixer::CHANNEL_LEFT, $nc($nc(cmixer)->buffers)->get(SoftMainMixer::CHANNEL_LEFT));
					$nc(this->buffers)->set(SoftMainMixer::CHANNEL_RIGHT, $nc(cmixer->buffers)->get(SoftMainMixer::CHANNEL_RIGHT));
					$nc(this->buffers)->set(SoftMainMixer::CHANNEL_MONO, $nc(cmixer->buffers)->get(SoftMainMixer::CHANNEL_MONO));
					$nc(this->buffers)->set(SoftMainMixer::CHANNEL_DELAY_LEFT, $nc(cmixer->buffers)->get(SoftMainMixer::CHANNEL_DELAY_LEFT));
					$nc(this->buffers)->set(SoftMainMixer::CHANNEL_DELAY_RIGHT, $nc(cmixer->buffers)->get(SoftMainMixer::CHANNEL_DELAY_RIGHT));
					$nc(this->buffers)->set(SoftMainMixer::CHANNEL_DELAY_MONO, $nc(cmixer->buffers)->get(SoftMainMixer::CHANNEL_DELAY_MONO));
					$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->clear();
					$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT))->clear();
					$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_MONO))->clear();
					if (!$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_LEFT))->isSilent()) {
						$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->swap($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_LEFT));
					}
					if (!$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_RIGHT))->isSilent()) {
						$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT))->swap($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_RIGHT));
					}
					if (!$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_MONO))->isSilent()) {
						$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_MONO))->swap($nc(this->buffers)->get(SoftMainMixer::CHANNEL_DELAY_MONO));
					}
					cbuffer->set(0, $($nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->array()));
					if (this->nrofchannels != 1) {
						cbuffer->set(1, $($nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT))->array()));
					}
					bool hasactivevoices = false;
					for (int32_t i = 0; i < $nc(this->voicestatus)->length; ++i) {
						if ($nc($nc(this->voicestatus)->get(i))->active) {
							if ($nc($nc(this->voicestatus)->get(i))->channelmixer == cmixer->mixer) {
								$nc($nc(this->voicestatus)->get(i))->processAudioLogic(this->buffers);
								hasactivevoices = true;
							}
						}
					}
					if (!$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_MONO))->isSilent()) {
						$var($floats, mono, $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_MONO))->array());
						$var($floats, left, $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->array());
						if (this->nrofchannels != 1) {
							$var($floats, right, $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT))->array());
							for (int32_t i = 0; i < bufferlen; ++i) {
								float v = $nc(mono)->get(i);
								(*$nc(left))[i] += v;
								(*$nc(right))[i] += v;
							}
						} else {
							for (int32_t i = 0; i < bufferlen; ++i) {
								(*$nc(left))[i] += $nc(mono)->get(i);
							}
						}
					}
					if (!$nc(cmixer->mixer)->process(cbuffer, 0, bufferlen)) {
						$synchronized(this->control_mutex) {
							$nc(this->registeredMixers)->remove(cmixer);
							$set(this, cur_registeredMixers, nullptr);
						}
					}
					for (int32_t i = 0; i < cbuffer->length; ++i) {
						$var($floats, cbuff, cbuffer->get(i));
						$var($floats, obuff, obuffer->get(i));
						for (int32_t j = 0; j < bufferlen; ++j) {
							(*$nc(obuff))[j] += $nc(cbuff)->get(j);
						}
					}
					if (!hasactivevoices) {
						$synchronized(this->control_mutex) {
							if (this->stoppedMixers != nullptr) {
								if ($nc(this->stoppedMixers)->contains(cmixer->mixer)) {
									$nc(this->stoppedMixers)->remove(cmixer->mixer);
									$nc(cmixer->mixer)->stop();
								}
							}
						}
					}
				}
			}
		}
		$nc(this->buffers)->set(SoftMainMixer::CHANNEL_LEFT, leftbak);
		$nc(this->buffers)->set(SoftMainMixer::CHANNEL_RIGHT, rightbak);
		$nc(this->buffers)->set(SoftMainMixer::CHANNEL_MONO, monobak);
		$nc(this->buffers)->set(SoftMainMixer::CHANNEL_DELAY_LEFT, delayleftbak);
		$nc(this->buffers)->set(SoftMainMixer::CHANNEL_DELAY_RIGHT, delayrightbak);
		$nc(this->buffers)->set(SoftMainMixer::CHANNEL_DELAY_MONO, delaymonobak);
	}
	for (int32_t i = 0; i < $nc(this->voicestatus)->length; ++i) {
		if ($nc($nc(this->voicestatus)->get(i))->active) {
			if ($nc($nc(this->voicestatus)->get(i))->channelmixer == nullptr) {
				$nc($nc(this->voicestatus)->get(i))->processAudioLogic(this->buffers);
			}
		}
	}
	if (!$nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_MONO))->isSilent()) {
		$var($floats, mono, $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_MONO))->array());
		$var($floats, left, $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->array());
		int32_t bufferlen = $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->getSize();
		if (this->nrofchannels != 1) {
			$var($floats, right, $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT))->array());
			for (int32_t i = 0; i < bufferlen; ++i) {
				float v = $nc(mono)->get(i);
				(*$nc(left))[i] += v;
				(*$nc(right))[i] += v;
			}
		} else {
			for (int32_t i = 0; i < bufferlen; ++i) {
				(*$nc(left))[i] += $nc(mono)->get(i);
			}
		}
	}
	if ($nc(this->synth)->chorus_on) {
		$nc(this->chorus)->processAudio();
	}
	if ($nc(this->synth)->reverb_on) {
		$nc(this->reverb)->processAudio();
	}
	if (this->nrofchannels == 1) {
		volume_left = (volume_left + volume_right) / 2;
	}
	if (this->last_volume_left != volume_left || this->last_volume_right != volume_right) {
		$var($floats, left, $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->array());
		$var($floats, right, $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT))->array());
		int32_t bufferlen = $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->getSize();
		float amp = 0.0;
		float amp_delta = 0.0;
		amp = (float)(this->last_volume_left * this->last_volume_left);
		amp_delta = (float)((volume_left * volume_left - amp) / bufferlen);
		for (int32_t i = 0; i < bufferlen; ++i) {
			amp += amp_delta;
			(*$nc(left))[i] *= amp;
		}
		if (this->nrofchannels != 1) {
			amp = (float)(this->last_volume_right * this->last_volume_right);
			amp_delta = (float)((volume_right * volume_right - amp) / bufferlen);
			for (int32_t i = 0; i < bufferlen; ++i) {
				amp += amp_delta;
				(*$nc(right))[i] *= volume_right;
			}
		}
		this->last_volume_left = volume_left;
		this->last_volume_right = volume_right;
	} else if (volume_left != 1.0 || volume_right != 1.0) {
		$var($floats, left, $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->array());
		$var($floats, right, $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT))->array());
		int32_t bufferlen = $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->getSize();
		float amp = 0.0;
		amp = (float)(volume_left * volume_left);
		for (int32_t i = 0; i < bufferlen; ++i) {
			(*$nc(left))[i] *= amp;
		}
		if (this->nrofchannels != 1) {
			amp = (float)(volume_right * volume_right);
			for (int32_t i = 0; i < bufferlen; ++i) {
				(*$nc(right))[i] *= amp;
			}
		}
	}
	bool var$0 = $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT))->isSilent();
	if (var$0 && $nc($nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT))->isSilent()) {
		int32_t midimessages_size = 0;
		$synchronized(this->control_mutex) {
			midimessages_size = $nc(this->midimessages)->size();
		}
		if (midimessages_size == 0) {
			++this->pusher_silent_count;
			if (this->pusher_silent_count > 5) {
				this->pusher_silent_count = 0;
				$synchronized(this->control_mutex) {
					this->pusher_silent = true;
					if ($nc(this->synth)->weakstream != nullptr) {
						$nc($nc(this->synth)->weakstream)->setInputStream(nullptr);
					}
				}
			}
		}
	} else {
		this->pusher_silent_count = 0;
	}
	if ($nc(this->synth)->agc_on) {
		$nc(this->agc)->processAudio();
	}
}

void SoftMainMixer::activity() {
	int64_t silent_samples = 0;
	if (this->pusher_silent) {
		this->pusher_silent = false;
		if ($nc(this->synth)->weakstream != nullptr) {
			$nc($nc(this->synth)->weakstream)->setInputStream(this->ais);
			silent_samples = $nc($nc(this->synth)->weakstream)->silent_samples;
		}
	}
	this->msec_last_activity = $cast(int64_t, ((this->sample_pos + silent_samples) * (1000000.0 / this->samplerate)));
}

void SoftMainMixer::stopMixer($ModelChannelMixer* mixer) {
	if (this->stoppedMixers == nullptr) {
		$set(this, stoppedMixers, $new($HashSet));
	}
	$nc(this->stoppedMixers)->add(mixer);
}

void SoftMainMixer::registerMixer($ModelChannelMixer* mixer) {
	$useLocalCurrentObjectStackCache();
	if (this->registeredMixers == nullptr) {
		$set(this, registeredMixers, $new($HashSet));
	}
	$var($SoftMainMixer$SoftChannelMixerContainer, mixercontainer, $new($SoftMainMixer$SoftChannelMixerContainer, this));
	$set(mixercontainer, buffers, $new($SoftAudioBufferArray, 6));
	for (int32_t i = 0; i < $nc(mixercontainer->buffers)->length; ++i) {
		$nc(mixercontainer->buffers)->set(i, $$new($SoftAudioBuffer, this->buffer_len, $($nc(this->synth)->getFormat())));
	}
	$set(mixercontainer, mixer, mixer);
	$nc(this->registeredMixers)->add(mixercontainer);
	$set(this, cur_registeredMixers, nullptr);
}

void SoftMainMixer::init$($SoftSynthesizer* synth) {
	$useLocalCurrentObjectStackCache();
	this->active_sensing_on = false;
	this->msec_last_activity = -1;
	this->pusher_silent = false;
	this->pusher_silent_count = 0;
	this->sample_pos = 0;
	this->readfully = true;
	this->samplerate = (float)0x0000AC44;
	this->nrofchannels = 2;
	$set(this, voicestatus, nullptr);
	this->msec_buffer_len = 0;
	this->buffer_len = 0;
	$set(this, midimessages, $new($TreeMap));
	this->delay_midievent = 0;
	this->max_delay_midievent = 0;
	this->last_volume_left = 1.0;
	this->last_volume_right = 1.0;
	$set(this, co_master_balance, $new($doubles, 1));
	$set(this, co_master_volume, $new($doubles, 1));
	$set(this, co_master_coarse_tuning, $new($doubles, 1));
	$set(this, co_master_fine_tuning, $new($doubles, 1));
	$set(this, registeredMixers, nullptr);
	$set(this, stoppedMixers, nullptr);
	$set(this, cur_registeredMixers, nullptr);
	$set(this, co_master, $new($SoftMainMixer$1, this));
	$set(this, synth, synth);
	this->sample_pos = 0;
	$nc(this->co_master_balance)->set(0, 0.5);
	$nc(this->co_master_volume)->set(0, (double)1);
	$nc(this->co_master_coarse_tuning)->set(0, 0.5);
	$nc(this->co_master_fine_tuning)->set(0, 0.5);
	this->msec_buffer_len = $cast(int64_t, (1000000.0 / $nc(synth)->getControlRate()));
	this->samplerate = $nc($(synth->getFormat()))->getSampleRate();
	this->nrofchannels = $nc($(synth->getFormat()))->getChannels();
	float var$0 = $nc($(synth->getFormat()))->getSampleRate();
	int32_t buffersize = $cast(int32_t, (var$0 / synth->getControlRate()));
	this->buffer_len = buffersize;
	this->max_delay_midievent = buffersize;
	$set(this, control_mutex, synth->control_mutex);
	$set(this, buffers, $new($SoftAudioBufferArray, 14));
	for (int32_t i = 0; i < $nc(this->buffers)->length; ++i) {
		$nc(this->buffers)->set(i, $$new($SoftAudioBuffer, buffersize, $(synth->getFormat())));
	}
	$set(this, voicestatus, synth->getVoices());
	$set(this, reverb, $new($SoftReverb));
	$set(this, chorus, $new($SoftChorus));
	$set(this, agc, $new($SoftLimiter));
	float samplerate = $nc($(synth->getFormat()))->getSampleRate();
	float controlrate = synth->getControlRate();
	$nc(this->reverb)->init(samplerate, controlrate);
	$nc(this->chorus)->init(samplerate, controlrate);
	$nc(this->agc)->init(samplerate, controlrate);
	$nc(this->reverb)->setLightMode(synth->reverb_light);
	$nc(this->reverb)->setMixMode(true);
	$nc(this->chorus)->setMixMode(true);
	$nc(this->agc)->setMixMode(false);
	$nc(this->chorus)->setInput(0, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_EFFECT2));
	$nc(this->chorus)->setOutput(0, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT));
	if (this->nrofchannels != 1) {
		$nc(this->chorus)->setOutput(1, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT));
	}
	$nc(this->chorus)->setOutput(2, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_EFFECT1));
	$nc(this->reverb)->setInput(0, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_EFFECT1));
	$nc(this->reverb)->setOutput(0, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT));
	if (this->nrofchannels != 1) {
		$nc(this->reverb)->setOutput(1, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT));
	}
	$nc(this->agc)->setInput(0, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT));
	if (this->nrofchannels != 1) {
		$nc(this->agc)->setInput(1, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT));
	}
	$nc(this->agc)->setOutput(0, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_LEFT));
	if (this->nrofchannels != 1) {
		$nc(this->agc)->setOutput(1, $nc(this->buffers)->get(SoftMainMixer::CHANNEL_RIGHT));
	}
	$var($InputStream, in, $new($SoftMainMixer$2, this));
	$set(this, ais, $new($AudioInputStream, in, $(synth->getFormat()), $AudioSystem::NOT_SPECIFIED));
}

$AudioInputStream* SoftMainMixer::getInputStream() {
	return this->ais;
}

void SoftMainMixer::reset() {
	$useLocalCurrentObjectStackCache();
	$var($SoftChannelArray, channels, $nc(this->synth)->channels);
	for (int32_t i = 0; i < $nc(channels)->length; ++i) {
		$nc(channels->get(i))->allSoundOff();
		$nc(channels->get(i))->resetAllControllers(true);
		if ($nc(this->synth)->getGeneralMidiMode() == 2) {
			if (i == 9) {
				$nc(channels->get(i))->programChange(0, 120 * 128);
			} else {
				$nc(channels->get(i))->programChange(0, 121 * 128);
			}
		} else {
			$nc(channels->get(i))->programChange(0, 0);
		}
	}
	setVolume(127 * 128 + 127);
	setBalance(64 * 128 + 0);
	setCoarseTuning(64 * 128 + 0);
	setFineTuning(64 * 128 + 0);
	globalParameterControlChange($$new($ints, {1 * 128 + 1}), $$new($longs, {(int64_t)0}), $$new($longs, {(int64_t)4}));
	globalParameterControlChange($$new($ints, {1 * 128 + 2}), $$new($longs, {(int64_t)0}), $$new($longs, {(int64_t)2}));
}

void SoftMainMixer::setVolume(int32_t value) {
	$synchronized(this->control_mutex) {
		$nc(this->co_master_volume)->set(0, value / 16384.0);
	}
}

void SoftMainMixer::setBalance(int32_t value) {
	$synchronized(this->control_mutex) {
		$nc(this->co_master_balance)->set(0, value / 16384.0);
	}
}

void SoftMainMixer::setFineTuning(int32_t value) {
	$synchronized(this->control_mutex) {
		$nc(this->co_master_fine_tuning)->set(0, value / 16384.0);
	}
}

void SoftMainMixer::setCoarseTuning(int32_t value) {
	$synchronized(this->control_mutex) {
		$nc(this->co_master_coarse_tuning)->set(0, value / 16384.0);
	}
}

int32_t SoftMainMixer::getVolume() {
	$synchronized(this->control_mutex) {
		return $cast(int32_t, ($nc(this->co_master_volume)->get(0) * 16384.0));
	}
}

int32_t SoftMainMixer::getBalance() {
	$synchronized(this->control_mutex) {
		return $cast(int32_t, ($nc(this->co_master_balance)->get(0) * 16384.0));
	}
}

int32_t SoftMainMixer::getFineTuning() {
	$synchronized(this->control_mutex) {
		return $cast(int32_t, ($nc(this->co_master_fine_tuning)->get(0) * 16384.0));
	}
}

int32_t SoftMainMixer::getCoarseTuning() {
	$synchronized(this->control_mutex) {
		return $cast(int32_t, ($nc(this->co_master_coarse_tuning)->get(0) * 16384.0));
	}
}

void SoftMainMixer::globalParameterControlChange($ints* slothpath, $longs* params, $longs* paramsvalue) {
	if ($nc(slothpath)->length == 0) {
		return;
	}
	$synchronized(this->control_mutex) {
		if ($nc(slothpath)->get(0) == 1 * 128 + 1) {
			for (int32_t i = 0; i < $nc(paramsvalue)->length; ++i) {
				$nc(this->reverb)->globalParameterControlChange(slothpath, $nc(params)->get(i), paramsvalue->get(i));
			}
		}
		if ($nc(slothpath)->get(0) == 1 * 128 + 2) {
			for (int32_t i = 0; i < $nc(paramsvalue)->length; ++i) {
				$nc(this->chorus)->globalParameterControlChange(slothpath, $nc(params)->get(i), paramsvalue->get(i));
			}
		}
	}
}

void SoftMainMixer::processMessage(Object$* object) {
	if ($instanceOf($bytes, object)) {
		processMessage($cast($bytes, object));
	}
	if ($instanceOf($MidiMessage, object)) {
		processMessage($cast($MidiMessage, object));
	}
}

void SoftMainMixer::processMessage($MidiMessage* message) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ShortMessage, message)) {
		$var($ShortMessage, sms, $cast($ShortMessage, message));
		int32_t var$0 = $nc(sms)->getChannel();
		int32_t var$1 = sms->getCommand();
		int32_t var$2 = sms->getData1();
		processMessage(var$0, var$1, var$2, sms->getData2());
		return;
	}
	processMessage($($nc(message)->getMessage()));
}

void SoftMainMixer::processMessage($bytes* data) {
	int32_t status = 0;
	if ($nc(data)->length > 0) {
		status = (int32_t)(data->get(0) & (uint32_t)255);
	}
	if (status == 240) {
		processSystemExclusiveMessage(data);
		return;
	}
	int32_t cmd = ((int32_t)(status & (uint32_t)240));
	int32_t ch = ((int32_t)(status & (uint32_t)15));
	int32_t data1 = 0;
	int32_t data2 = 0;
	if ($nc(data)->length > 1) {
		data1 = (int32_t)(data->get(1) & (uint32_t)255);
	} else {
		data1 = 0;
	}
	if ($nc(data)->length > 2) {
		data2 = (int32_t)(data->get(2) & (uint32_t)255);
	} else {
		data2 = 0;
	}
	processMessage(ch, cmd, data1, data2);
}

void SoftMainMixer::processMessage(int32_t ch, int32_t cmd, int32_t data1, int32_t data2) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(this->synth)->control_mutex) {
		activity();
	}
	if (cmd == 240) {
		int32_t status = cmd | ch;
		switch (status) {
		case $ShortMessage::ACTIVE_SENSING:
			{
				$synchronized($nc(this->synth)->control_mutex) {
					this->active_sensing_on = true;
				}
				break;
			}
		default:
			{
				break;
			}
		}
		return;
	}
	$var($SoftChannelArray, channels, $nc(this->synth)->channels);
	if (ch >= $nc(channels)->length) {
		return;
	}
	$var($SoftChannel, softchannel, $nc(channels)->get(ch));
	switch (cmd) {
	case $ShortMessage::NOTE_ON:
		{
			if (this->delay_midievent != 0) {
				$nc(softchannel)->noteOn(data1, data2, this->delay_midievent);
			} else {
				$nc(softchannel)->noteOn(data1, data2);
			}
			break;
		}
	case $ShortMessage::NOTE_OFF:
		{
			$nc(softchannel)->noteOff(data1, data2);
			break;
		}
	case $ShortMessage::POLY_PRESSURE:
		{
			$nc(softchannel)->setPolyPressure(data1, data2);
			break;
		}
	case $ShortMessage::CONTROL_CHANGE:
		{
			$nc(softchannel)->controlChange(data1, data2);
			break;
		}
	case $ShortMessage::PROGRAM_CHANGE:
		{
			$nc(softchannel)->programChange(data1);
			break;
		}
	case $ShortMessage::CHANNEL_PRESSURE:
		{
			$nc(softchannel)->setChannelPressure(data1);
			break;
		}
	case $ShortMessage::PITCH_BEND:
		{
			$nc(softchannel)->setPitchBend(data1 + data2 * 128);
			break;
		}
	default:
		{
			break;
		}
	}
}

int64_t SoftMainMixer::getMicrosecondPosition() {
	if (this->pusher_silent) {
		if ($nc(this->synth)->weakstream != nullptr) {
			return $cast(int64_t, ((this->sample_pos + $nc($nc(this->synth)->weakstream)->silent_samples) * (1000000.0 / this->samplerate)));
		}
	}
	return $cast(int64_t, (this->sample_pos * (1000000.0 / this->samplerate)));
}

void SoftMainMixer::close() {
}

SoftMainMixer::SoftMainMixer() {
}

$Class* SoftMainMixer::load$($String* name, bool initialize) {
	$loadClass(SoftMainMixer, name, initialize, &_SoftMainMixer_ClassInfo_, allocate$SoftMainMixer);
	return class$;
}

$Class* SoftMainMixer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com