#ifndef _com_sun_media_sound_SoftVoice_h_
#define _com_sun_media_sound_SoftVoice_h_
//$ class com.sun.media.sound.SoftVoice
//$ extends javax.sound.midi.VoiceStatus

#include <java/lang/Array.h>
#include <javax/sound/midi/VoiceStatus.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelChannelMixer;
				class ModelConnectionBlock;
				class ModelDestination;
				class ModelIdentifier;
				class ModelOscillatorStream;
				class ModelSource;
				class SoftAudioBuffer;
				class SoftChannel;
				class SoftControl;
				class SoftFilter;
				class SoftInstrument;
				class SoftPerformer;
				class SoftProcess;
				class SoftResamplerStreamer;
				class SoftSynthesizer;
				class SoftTuning;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftVoice : public ::javax::sound::midi::VoiceStatus {
	$class(SoftVoice, $NO_CLASS_INIT, ::javax::sound::midi::VoiceStatus)
public:
	SoftVoice();
	void init$(::com::sun::media::sound::SoftSynthesizer* synth);
	void controlChange(int32_t controller, int32_t value);
	$doubles* getValue(::com::sun::media::sound::ModelIdentifier* id);
	int32_t getValueKC(::com::sun::media::sound::ModelIdentifier* id);
	void mixAudioStream(::com::sun::media::sound::SoftAudioBuffer* in, ::com::sun::media::sound::SoftAudioBuffer* out, ::com::sun::media::sound::SoftAudioBuffer* dout, float amp_from, float amp_to);
	void noteOff(int32_t velocity);
	void noteOn(int32_t noteNumber, int32_t velocity, int32_t delay);
	void nrpnChange(int32_t controller, int32_t value);
	void processAudioLogic($Array<::com::sun::media::sound::SoftAudioBuffer>* buffer);
	void processConnection(int32_t ix);
	void processControlLogic();
	double processKeyBasedController(double value, int32_t keycontrol);
	void redamp();
	void rpnChange(int32_t controller, int32_t value);
	void setChannelPressure(int32_t pressure);
	void setMute(bool mute);
	void setNote(int32_t noteNumber);
	void setPitchBend(int32_t bend);
	void setPolyPressure(int32_t pressure);
	void setSoloMute(bool mute);
	void shutdown();
	void soundOff();
	double transformValue(double value, ::com::sun::media::sound::ModelSource* src);
	double transformValue(double value, ::com::sun::media::sound::ModelDestination* dst);
	void updateTuning(::com::sun::media::sound::SoftTuning* newtuning);
	int32_t exclusiveClass = 0;
	bool releaseTriggered = false;
	int32_t noteOn_noteNumber = 0;
	int32_t noteOn_velocity = 0;
	int32_t noteOff_velocity = 0;
	int32_t delay = 0;
	::com::sun::media::sound::ModelChannelMixer* channelmixer = nullptr;
	double tunedKey = 0.0;
	::com::sun::media::sound::SoftTuning* tuning = nullptr;
	::com::sun::media::sound::SoftChannel* stealer_channel = nullptr;
	$Array<::com::sun::media::sound::ModelConnectionBlock>* stealer_extendedConnectionBlocks = nullptr;
	::com::sun::media::sound::SoftPerformer* stealer_performer = nullptr;
	::com::sun::media::sound::ModelChannelMixer* stealer_channelmixer = nullptr;
	int32_t stealer_voiceID = 0;
	int32_t stealer_noteNumber = 0;
	int32_t stealer_velocity = 0;
	bool stealer_releaseTriggered = false;
	int32_t voiceID = 0;
	bool sustain = false;
	bool sostenuto = false;
	bool portamento = false;
	::com::sun::media::sound::SoftFilter* filter_left = nullptr;
	::com::sun::media::sound::SoftFilter* filter_right = nullptr;
	::com::sun::media::sound::SoftProcess* eg = nullptr;
	::com::sun::media::sound::SoftProcess* lfo = nullptr;
	::java::util::Map* objects = nullptr;
	::com::sun::media::sound::SoftSynthesizer* synthesizer = nullptr;
	::com::sun::media::sound::SoftInstrument* instrument = nullptr;
	::com::sun::media::sound::SoftPerformer* performer = nullptr;
	::com::sun::media::sound::SoftChannel* softchannel = nullptr;
	bool on = false;
	bool audiostarted = false;
	bool started = false;
	bool stopping = false;
	float osc_attenuation = 0.0;
	::com::sun::media::sound::ModelOscillatorStream* osc_stream = nullptr;
	int32_t osc_stream_nrofchannels = 0;
	$Array<float, 2>* osc_buff = nullptr;
	bool osc_stream_off_transmitted = false;
	bool out_mixer_end = false;
	float out_mixer_left = 0.0;
	float out_mixer_right = 0.0;
	float out_mixer_effect1 = 0.0;
	float out_mixer_effect2 = 0.0;
	float last_out_mixer_left = 0.0;
	float last_out_mixer_right = 0.0;
	float last_out_mixer_effect1 = 0.0;
	float last_out_mixer_effect2 = 0.0;
	$Array<::com::sun::media::sound::ModelConnectionBlock>* extendedConnectionBlocks = nullptr;
	$Array<::com::sun::media::sound::ModelConnectionBlock>* connections = nullptr;
	$doubles* connections_last = nullptr;
	$Array<double, 3>* connections_src = nullptr;
	$Array<int32_t, 2>* connections_src_kc = nullptr;
	$Array<double, 2>* connections_dst = nullptr;
	bool soundoff = false;
	float lastMuteValue = 0.0;
	float lastSoloMuteValue = 0.0;
	$doubles* co_noteon_keynumber = nullptr;
	$doubles* co_noteon_velocity = nullptr;
	$doubles* co_noteon_on = nullptr;
	::com::sun::media::sound::SoftControl* co_noteon = nullptr;
	$doubles* co_mixer_active = nullptr;
	$doubles* co_mixer_gain = nullptr;
	$doubles* co_mixer_pan = nullptr;
	$doubles* co_mixer_balance = nullptr;
	$doubles* co_mixer_reverb = nullptr;
	$doubles* co_mixer_chorus = nullptr;
	::com::sun::media::sound::SoftControl* co_mixer = nullptr;
	$doubles* co_osc_pitch = nullptr;
	::com::sun::media::sound::SoftControl* co_osc = nullptr;
	$doubles* co_filter_freq = nullptr;
	$doubles* co_filter_type = nullptr;
	$doubles* co_filter_q = nullptr;
	::com::sun::media::sound::SoftControl* co_filter = nullptr;
	::com::sun::media::sound::SoftResamplerStreamer* resampler = nullptr;
	int32_t nrofchannels = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftVoice_h_