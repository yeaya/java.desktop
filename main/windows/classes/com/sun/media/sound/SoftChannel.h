#ifndef _com_sun_media_sound_SoftChannel_h_
#define _com_sun_media_sound_SoftChannel_h_
//$ class com.sun.media.sound.SoftChannel
//$ extends javax.sound.midi.MidiChannel
//$ implements com.sun.media.sound.ModelDirectedPlayer

#include <com/sun/media/sound/ModelDirectedPlayer.h>
#include <java/lang/Array.h>
#include <javax/sound/midi/MidiChannel.h>

#pragma push_macro("RPN_NULL_VALUE")
#undef RPN_NULL_VALUE

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelChannelMixer;
				class ModelConnectionBlock;
				class ModelDirector;
				class ModelIdentifier;
				class SoftControl;
				class SoftInstrument;
				class SoftMainMixer;
				class SoftPerformer;
				class SoftSynthesizer;
				class SoftTuning;
				class SoftVoice;
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

class SoftChannel : public ::javax::sound::midi::MidiChannel, public ::com::sun::media::sound::ModelDirectedPlayer {
	$class(SoftChannel, 0, ::javax::sound::midi::MidiChannel, ::com::sun::media::sound::ModelDirectedPlayer)
public:
	SoftChannel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::media::sound::SoftSynthesizer* synth, int32_t channel);
	virtual void allNotesOff() override;
	virtual void allSoundOff() override;
	void applyInstrumentCustomization();
	virtual void controlChange(int32_t controller, int32_t value) override;
	void controlChangePerNote(int32_t noteNumber, int32_t controller, int32_t value);
	$Array<::com::sun::media::sound::ModelConnectionBlock>* createModelConnections(::com::sun::media::sound::ModelIdentifier* sid, $ints* destination, $ints* range);
	int32_t findFreeVoice(int32_t x);
	virtual int32_t getChannelPressure() override;
	int32_t getControlPerNote(int32_t noteNumber, int32_t controller);
	virtual int32_t getController(int32_t controller) override;
	virtual bool getMono() override;
	virtual bool getMute() override;
	virtual bool getOmni() override;
	virtual int32_t getPitchBend() override;
	virtual int32_t getPolyPressure(int32_t noteNumber) override;
	virtual int32_t getProgram() override;
	virtual bool getSolo() override;
	void initVoice(::com::sun::media::sound::SoftVoice* voice, ::com::sun::media::sound::SoftPerformer* p, int32_t voiceID, int32_t noteNumber, int32_t velocity, int32_t delay, $Array<::com::sun::media::sound::ModelConnectionBlock>* connectionBlocks, ::com::sun::media::sound::ModelChannelMixer* channelmixer, bool releaseTriggered);
	virtual bool localControl(bool on) override;
	void mapChannelPressureToDestination($ints* destination, $ints* range);
	void mapControlToDestination(int32_t control, $ints* destination, $ints* range);
	void mapPolyPressureToDestination($ints* destination, $ints* range);
	virtual void noteOff(int32_t noteNumber, int32_t velocity) override;
	virtual void noteOff(int32_t noteNumber) override;
	void noteOff_internal(int32_t noteNumber, int32_t velocity);
	virtual void noteOn(int32_t noteNumber, int32_t velocity) override;
	void noteOn(int32_t noteNumber, int32_t velocity, int32_t delay);
	void noteOn_internal(int32_t noteNumber, int32_t velocity, int32_t delay);
	void nrpnChange(int32_t controller, int32_t value);
	virtual void play(int32_t performerIndex, $Array<::com::sun::media::sound::ModelConnectionBlock>* connectionBlocks) override;
	virtual void programChange(int32_t program) override;
	virtual void programChange(int32_t bank, int32_t program) override;
	virtual void resetAllControllers() override;
	void resetAllControllers(bool allControls);
	static int32_t restrict14Bit(int32_t value);
	static int32_t restrict7Bit(int32_t value);
	void rpnChange(int32_t controller, int32_t value);
	virtual void setChannelPressure(int32_t pressure) override;
	virtual void setMono(bool on) override;
	virtual void setMute(bool mute) override;
	virtual void setOmni(bool on) override;
	virtual void setPitchBend(int32_t bend) override;
	virtual void setPolyPressure(int32_t noteNumber, int32_t pressure) override;
	virtual void setSolo(bool soloState) override;
	void setSoloMute(bool mute);
	virtual $String* toString() override;
	void tuningChange(int32_t program);
	void tuningChange(int32_t bank, int32_t program);
	static $booleans* dontResetControls;
	static const int32_t RPN_NULL_VALUE = 16383; // (127 << 7) + 127
	int32_t rpn_control = 0;
	int32_t nrpn_control = 0;
	double portamento_time = 0.0;
	$ints* portamento_lastnote = nullptr;
	int32_t portamento_lastnote_ix = 0;
	bool portamento = false;
	bool mono = false;
	bool mute = false;
	bool solo = false;
	bool solomute = false;
	$Object* control_mutex = nullptr;
	int32_t channel = 0;
	$Array<::com::sun::media::sound::SoftVoice>* voices = nullptr;
	int32_t bank = 0;
	int32_t program = 0;
	::com::sun::media::sound::SoftSynthesizer* synthesizer = nullptr;
	::com::sun::media::sound::SoftMainMixer* mainmixer = nullptr;
	$ints* polypressure = nullptr;
	int32_t channelpressure = 0;
	$ints* controller = nullptr;
	int32_t pitchbend = 0;
	$doubles* co_midi_pitch = nullptr;
	$doubles* co_midi_channel_pressure = nullptr;
	::com::sun::media::sound::SoftTuning* tuning = nullptr;
	int32_t tuning_bank = 0;
	int32_t tuning_program = 0;
	::com::sun::media::sound::SoftInstrument* current_instrument = nullptr;
	::com::sun::media::sound::ModelChannelMixer* current_mixer = nullptr;
	::com::sun::media::sound::ModelDirector* current_director = nullptr;
	int32_t cds_control_number = 0;
	$Array<::com::sun::media::sound::ModelConnectionBlock>* cds_control_connections = nullptr;
	$Array<::com::sun::media::sound::ModelConnectionBlock>* cds_channelpressure_connections = nullptr;
	$Array<::com::sun::media::sound::ModelConnectionBlock>* cds_polypressure_connections = nullptr;
	bool sustain = false;
	$Array<bool, 2>* keybasedcontroller_active = nullptr;
	$Array<double, 2>* keybasedcontroller_value = nullptr;
	$Array<::com::sun::media::sound::SoftControl>* co_midi = nullptr;
	$Array<double, 2>* co_midi_cc_cc = nullptr;
	::com::sun::media::sound::SoftControl* co_midi_cc = nullptr;
	::java::util::Map* co_midi_rpn_rpn_i = nullptr;
	::java::util::Map* co_midi_rpn_rpn = nullptr;
	::com::sun::media::sound::SoftControl* co_midi_rpn = nullptr;
	::java::util::Map* co_midi_nrpn_nrpn_i = nullptr;
	::java::util::Map* co_midi_nrpn_nrpn = nullptr;
	::com::sun::media::sound::SoftControl* co_midi_nrpn = nullptr;
	$ints* lastVelocity = nullptr;
	int32_t prevVoiceID = 0;
	bool firstVoice = false;
	int32_t voiceNo = 0;
	int32_t play_noteNumber = 0;
	int32_t play_velocity = 0;
	int32_t play_delay = 0;
	bool play_releasetriggered = false;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("RPN_NULL_VALUE")

#endif // _com_sun_media_sound_SoftChannel_h_