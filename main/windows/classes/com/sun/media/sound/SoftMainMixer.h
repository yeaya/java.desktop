#ifndef _com_sun_media_sound_SoftMainMixer_h_
#define _com_sun_media_sound_SoftMainMixer_h_
//$ class com.sun.media.sound.SoftMainMixer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHANNEL_DELAY_EFFECT1")
#undef CHANNEL_DELAY_EFFECT1
#pragma push_macro("CHANNEL_DELAY_EFFECT2")
#undef CHANNEL_DELAY_EFFECT2
#pragma push_macro("CHANNEL_DELAY_LEFT")
#undef CHANNEL_DELAY_LEFT
#pragma push_macro("CHANNEL_DELAY_MONO")
#undef CHANNEL_DELAY_MONO
#pragma push_macro("CHANNEL_DELAY_RIGHT")
#undef CHANNEL_DELAY_RIGHT
#pragma push_macro("CHANNEL_EFFECT1")
#undef CHANNEL_EFFECT1
#pragma push_macro("CHANNEL_EFFECT2")
#undef CHANNEL_EFFECT2
#pragma push_macro("CHANNEL_LEFT")
#undef CHANNEL_LEFT
#pragma push_macro("CHANNEL_LEFT_DRY")
#undef CHANNEL_LEFT_DRY
#pragma push_macro("CHANNEL_MONO")
#undef CHANNEL_MONO
#pragma push_macro("CHANNEL_RIGHT")
#undef CHANNEL_RIGHT
#pragma push_macro("CHANNEL_RIGHT_DRY")
#undef CHANNEL_RIGHT_DRY
#pragma push_macro("CHANNEL_SCRATCH1")
#undef CHANNEL_SCRATCH1
#pragma push_macro("CHANNEL_SCRATCH2")
#undef CHANNEL_SCRATCH2

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelChannelMixer;
				class SoftAudioBuffer;
				class SoftAudioProcessor;
				class SoftControl;
				class SoftMainMixer$SoftChannelMixerContainer;
				class SoftReverb;
				class SoftSynthesizer;
				class SoftVoice;
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
		class TreeMap;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiMessage;
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMainMixer : public ::java::lang::Object {
	$class(SoftMainMixer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoftMainMixer();
	void init$(::com::sun::media::sound::SoftSynthesizer* synth);
	void activity();
	void close();
	int32_t getBalance();
	int32_t getCoarseTuning();
	int32_t getFineTuning();
	::javax::sound::sampled::AudioInputStream* getInputStream();
	int64_t getMicrosecondPosition();
	int32_t getVolume();
	void globalParameterControlChange($ints* slothpath, $longs* params, $longs* paramsvalue);
	void processAudioBuffers();
	void processMessage(Object$* object);
	void processMessage(::javax::sound::midi::MidiMessage* message);
	void processMessage($bytes* data);
	void processMessage(int32_t ch, int32_t cmd, int32_t data1, int32_t data2);
	void processMessages(int64_t timeStamp);
	void processSystemExclusiveMessage($bytes* data);
	void registerMixer(::com::sun::media::sound::ModelChannelMixer* mixer);
	void reset();
	void setBalance(int32_t value);
	void setCoarseTuning(int32_t value);
	void setFineTuning(int32_t value);
	void setVolume(int32_t value);
	void stopMixer(::com::sun::media::sound::ModelChannelMixer* mixer);
	static const int32_t CHANNEL_LEFT = 0;
	static const int32_t CHANNEL_RIGHT = 1;
	static const int32_t CHANNEL_MONO = 2;
	static const int32_t CHANNEL_DELAY_LEFT = 3;
	static const int32_t CHANNEL_DELAY_RIGHT = 4;
	static const int32_t CHANNEL_DELAY_MONO = 5;
	static const int32_t CHANNEL_EFFECT1 = 6;
	static const int32_t CHANNEL_EFFECT2 = 7;
	static const int32_t CHANNEL_DELAY_EFFECT1 = 8;
	static const int32_t CHANNEL_DELAY_EFFECT2 = 9;
	static const int32_t CHANNEL_LEFT_DRY = 10;
	static const int32_t CHANNEL_RIGHT_DRY = 11;
	static const int32_t CHANNEL_SCRATCH1 = 12;
	static const int32_t CHANNEL_SCRATCH2 = 13;
	bool active_sensing_on = false;
	int64_t msec_last_activity = 0;
	bool pusher_silent = false;
	int32_t pusher_silent_count = 0;
	int64_t sample_pos = 0;
	bool readfully = false;
	$Object* control_mutex = nullptr;
	::com::sun::media::sound::SoftSynthesizer* synth = nullptr;
	float samplerate = 0.0;
	int32_t nrofchannels = 0;
	$Array<::com::sun::media::sound::SoftVoice>* voicestatus = nullptr;
	$Array<::com::sun::media::sound::SoftAudioBuffer>* buffers = nullptr;
	::com::sun::media::sound::SoftReverb* reverb = nullptr;
	::com::sun::media::sound::SoftAudioProcessor* chorus = nullptr;
	::com::sun::media::sound::SoftAudioProcessor* agc = nullptr;
	int64_t msec_buffer_len = 0;
	int32_t buffer_len = 0;
	::java::util::TreeMap* midimessages = nullptr;
	int32_t delay_midievent = 0;
	int32_t max_delay_midievent = 0;
	double last_volume_left = 0.0;
	double last_volume_right = 0.0;
	$doubles* co_master_balance = nullptr;
	$doubles* co_master_volume = nullptr;
	$doubles* co_master_coarse_tuning = nullptr;
	$doubles* co_master_fine_tuning = nullptr;
	::javax::sound::sampled::AudioInputStream* ais = nullptr;
	::java::util::Set* registeredMixers = nullptr;
	::java::util::Set* stoppedMixers = nullptr;
	$Array<::com::sun::media::sound::SoftMainMixer$SoftChannelMixerContainer>* cur_registeredMixers = nullptr;
	::com::sun::media::sound::SoftControl* co_master = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("CHANNEL_DELAY_EFFECT1")
#pragma pop_macro("CHANNEL_DELAY_EFFECT2")
#pragma pop_macro("CHANNEL_DELAY_LEFT")
#pragma pop_macro("CHANNEL_DELAY_MONO")
#pragma pop_macro("CHANNEL_DELAY_RIGHT")
#pragma pop_macro("CHANNEL_EFFECT1")
#pragma pop_macro("CHANNEL_EFFECT2")
#pragma pop_macro("CHANNEL_LEFT")
#pragma pop_macro("CHANNEL_LEFT_DRY")
#pragma pop_macro("CHANNEL_MONO")
#pragma pop_macro("CHANNEL_RIGHT")
#pragma pop_macro("CHANNEL_RIGHT_DRY")
#pragma pop_macro("CHANNEL_SCRATCH1")
#pragma pop_macro("CHANNEL_SCRATCH2")

#endif // _com_sun_media_sound_SoftMainMixer_h_