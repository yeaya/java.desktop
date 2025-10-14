#ifndef _com_sun_media_sound_SoftSynthesizer_h_
#define _com_sun_media_sound_SoftSynthesizer_h_
//$ class com.sun.media.sound.SoftSynthesizer
//$ extends com.sun.media.sound.AudioSynthesizer
//$ implements com.sun.media.sound.ReferenceCountingDevice

#include <com/sun/media/sound/AudioSynthesizer.h>
#include <com/sun/media/sound/ReferenceCountingDevice.h>
#include <java/lang/Array.h>

#pragma push_macro("INFO_DESCRIPTION")
#undef INFO_DESCRIPTION
#pragma push_macro("INFO_NAME")
#undef INFO_NAME
#pragma push_macro("INFO_VENDOR")
#undef INFO_VENDOR
#pragma push_macro("INFO_VERSION")
#undef INFO_VERSION

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AudioSynthesizerPropertyInfo;
				class ModelInstrument;
				class SoftAudioPusher;
				class SoftChannel;
				class SoftChannelProxy;
				class SoftInstrument;
				class SoftMainMixer;
				class SoftResampler;
				class SoftSynthesizer$WeakAudioStream;
				class SoftTuning;
				class SoftVoice;
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class List;
		class Map;
		class Properties;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Instrument;
			class MidiChannel;
			class MidiDevice$Info;
			class Patch;
			class Receiver;
			class Soundbank;
			class Transmitter;
			class VoiceStatus;
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class AudioInputStream;
			class SourceDataLine;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftSynthesizer : public ::com::sun::media::sound::AudioSynthesizer, public ::com::sun::media::sound::ReferenceCountingDevice {
	$class(SoftSynthesizer, 0, ::com::sun::media::sound::AudioSynthesizer, ::com::sun::media::sound::ReferenceCountingDevice)
public:
	SoftSynthesizer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void close() override;
	::com::sun::media::sound::SoftInstrument* findInstrument(int32_t program, int32_t bank, int32_t channel);
	virtual $Array<::javax::sound::midi::Instrument>* getAvailableInstruments() override;
	void getBuffers(::com::sun::media::sound::ModelInstrument* instrument, ::java::util::List* buffers);
	virtual $Array<::javax::sound::midi::MidiChannel>* getChannels() override;
	float getControlRate();
	virtual ::javax::sound::midi::Soundbank* getDefaultSoundbank() override;
	int32_t getDeviceID();
	virtual ::javax::sound::midi::MidiDevice$Info* getDeviceInfo() override;
	virtual ::javax::sound::sampled::AudioFormat* getFormat() override;
	int32_t getGeneralMidiMode();
	virtual int64_t getLatency() override;
	virtual $Array<::javax::sound::midi::Instrument>* getLoadedInstruments() override;
	::com::sun::media::sound::SoftMainMixer* getMainMixer();
	virtual int32_t getMaxPolyphony() override;
	virtual int32_t getMaxReceivers() override;
	virtual int32_t getMaxTransmitters() override;
	virtual int64_t getMicrosecondPosition() override;
	virtual $Array<::com::sun::media::sound::AudioSynthesizerPropertyInfo>* getPropertyInfo(::java::util::Map* info) override;
	virtual ::javax::sound::midi::Receiver* getReceiver() override;
	virtual ::javax::sound::midi::Receiver* getReceiverReferenceCounting() override;
	virtual ::java::util::List* getReceivers() override;
	::java::util::Properties* getStoredProperties();
	virtual ::javax::sound::midi::Transmitter* getTransmitter() override;
	virtual ::javax::sound::midi::Transmitter* getTransmitterReferenceCounting() override;
	virtual ::java::util::List* getTransmitters() override;
	::com::sun::media::sound::SoftTuning* getTuning(::javax::sound::midi::Patch* patch);
	int32_t getVoiceAllocationMode();
	virtual $Array<::javax::sound::midi::VoiceStatus>* getVoiceStatus() override;
	$Array<::com::sun::media::sound::SoftVoice>* getVoices();
	virtual bool isOpen() override;
	virtual bool isSoundbankSupported(::javax::sound::midi::Soundbank* soundbank) override;
	static ::java::io::OutputStream* lambda$getDefaultSoundbank$0();
	static ::java::util::Properties* lambda$getStoredProperties$1();
	virtual bool loadAllInstruments(::javax::sound::midi::Soundbank* soundbank) override;
	virtual bool loadInstrument(::javax::sound::midi::Instrument* instrument) override;
	bool loadInstruments(::java::util::List* instruments);
	virtual bool loadInstruments(::javax::sound::midi::Soundbank* soundbank, $Array<::javax::sound::midi::Patch>* patchList) override;
	bool loadSamples(::java::util::List* instruments);
	virtual void open() override;
	virtual void open(::javax::sound::sampled::SourceDataLine* line, ::java::util::Map* info) override;
	virtual ::javax::sound::sampled::AudioInputStream* openStream(::javax::sound::sampled::AudioFormat* targetFormat, ::java::util::Map* info) override;
	$String* patchToString(::javax::sound::midi::Patch* patch);
	void processPropertyInfo(::java::util::Map* info);
	virtual bool remapInstrument(::javax::sound::midi::Instrument* from, ::javax::sound::midi::Instrument* to) override;
	void removeReceiver(::javax::sound::midi::Receiver* recv);
	void setFormat(::javax::sound::sampled::AudioFormat* format);
	void setGeneralMidiMode(int32_t gmmode);
	virtual $String* toString() override;
	virtual void unloadAllInstruments(::javax::sound::midi::Soundbank* soundbank) override;
	virtual void unloadInstrument(::javax::sound::midi::Instrument* instrument) override;
	virtual void unloadInstruments(::javax::sound::midi::Soundbank* soundbank, $Array<::javax::sound::midi::Patch>* patchList) override;
	static $String* INFO_NAME;
	static $String* INFO_VENDOR;
	static $String* INFO_DESCRIPTION;
	static $String* INFO_VERSION;
	static ::javax::sound::midi::MidiDevice$Info* info;
	static ::javax::sound::sampled::SourceDataLine* testline;
	static ::javax::sound::midi::Soundbank* defaultSoundBank;
	::com::sun::media::sound::SoftSynthesizer$WeakAudioStream* weakstream = nullptr;
	$Object* control_mutex = nullptr;
	int32_t voiceIDCounter = 0;
	int32_t voice_allocation_mode = 0;
	bool load_default_soundbank = false;
	bool reverb_light = false;
	bool reverb_on = false;
	bool chorus_on = false;
	bool agc_on = false;
	$Array<::com::sun::media::sound::SoftChannel>* channels = nullptr;
	$Array<::com::sun::media::sound::SoftChannelProxy>* external_channels = nullptr;
	bool largemode = false;
	int32_t gmmode = 0;
	int32_t deviceid = 0;
	::javax::sound::sampled::AudioFormat* format = nullptr;
	::javax::sound::sampled::SourceDataLine* sourceDataLine = nullptr;
	::com::sun::media::sound::SoftAudioPusher* pusher = nullptr;
	::javax::sound::sampled::AudioInputStream* pusher_stream = nullptr;
	float controlrate = 0.0;
	bool open$ = false;
	bool implicitOpen = false;
	$String* resamplerType = nullptr;
	::com::sun::media::sound::SoftResampler* resampler = nullptr;
	int32_t number_of_midi_channels = 0;
	int32_t maxpoly = 0;
	int64_t latency = 0;
	bool jitter_correction = false;
	::com::sun::media::sound::SoftMainMixer* mainmixer = nullptr;
	$Array<::com::sun::media::sound::SoftVoice>* voices = nullptr;
	::java::util::Map* tunings = nullptr;
	::java::util::Map* inslist = nullptr;
	::java::util::Map* loadedlist = nullptr;
	::java::util::ArrayList* recvslist = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("INFO_DESCRIPTION")
#pragma pop_macro("INFO_NAME")
#pragma pop_macro("INFO_VENDOR")
#pragma pop_macro("INFO_VERSION")

#endif // _com_sun_media_sound_SoftSynthesizer_h_