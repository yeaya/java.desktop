#ifndef _com_sun_media_sound_ModelAbstractOscillator_h_
#define _com_sun_media_sound_ModelAbstractOscillator_h_
//$ class com.sun.media.sound.ModelAbstractOscillator
//$ extends com.sun.media.sound.ModelOscillator
//$ implements com.sun.media.sound.ModelOscillatorStream,javax.sound.midi.Soundbank

#include <com/sun/media/sound/ModelOscillator.h>
#include <com/sun/media/sound/ModelOscillatorStream.h>
#include <java/lang/Array.h>
#include <javax/sound/midi/Soundbank.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelInstrument;
				class ModelPerformer;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Instrument;
			class MidiChannel;
			class Patch;
			class SoundbankResource;
			class VoiceStatus;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelAbstractOscillator : public ::com::sun::media::sound::ModelOscillator, public ::com::sun::media::sound::ModelOscillatorStream, public ::javax::sound::midi::Soundbank {
	$class(ModelAbstractOscillator, $NO_CLASS_INIT, ::com::sun::media::sound::ModelOscillator, ::com::sun::media::sound::ModelOscillatorStream, ::javax::sound::midi::Soundbank)
public:
	ModelAbstractOscillator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void close() override;
	virtual float getAttenuation() override;
	virtual ::javax::sound::midi::MidiChannel* getChannel();
	virtual int32_t getChannels() override;
	virtual $String* getDescription() override;
	virtual ::com::sun::media::sound::ModelInstrument* getInstrument();
	virtual ::javax::sound::midi::Instrument* getInstrument(::javax::sound::midi::Patch* patch) override;
	virtual $Array<::javax::sound::midi::Instrument>* getInstruments() override;
	virtual $String* getName() override;
	virtual int32_t getNoteNumber();
	virtual ::javax::sound::midi::Patch* getPatch();
	virtual ::com::sun::media::sound::ModelPerformer* getPerformer();
	virtual float getPitch();
	virtual $Array<::javax::sound::midi::SoundbankResource>* getResources() override;
	virtual float getSampleRate();
	virtual ::javax::sound::midi::Soundbank* getSoundBank();
	virtual int32_t getVelocity();
	virtual $String* getVendor() override;
	virtual $String* getVersion() override;
	virtual ::javax::sound::midi::VoiceStatus* getVoice();
	virtual void init();
	virtual bool isOn();
	virtual void noteOff(int32_t velocity) override;
	virtual void noteOn(::javax::sound::midi::MidiChannel* channel, ::javax::sound::midi::VoiceStatus* voice, int32_t noteNumber, int32_t velocity) override;
	virtual ::com::sun::media::sound::ModelOscillatorStream* open(float samplerate) override;
	virtual int32_t read($Array<float, 2>* buffer, int32_t offset, int32_t len) override;
	virtual void setPitch(float pitch) override;
	virtual void setSampleRate(float samplerate);
	virtual $String* toString() override;
	float pitch = 0.0;
	float samplerate = 0.0;
	::javax::sound::midi::MidiChannel* channel = nullptr;
	::javax::sound::midi::VoiceStatus* voice = nullptr;
	int32_t noteNumber = 0;
	int32_t velocity = 0;
	bool on = false;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelAbstractOscillator_h_