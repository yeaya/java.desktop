#ifndef _com_sun_media_sound_RealTimeSequencerProvider_h_
#define _com_sun_media_sound_RealTimeSequencerProvider_h_
//$ class com.sun.media.sound.RealTimeSequencerProvider
//$ extends javax.sound.midi.spi.MidiDeviceProvider

#include <java/lang/Array.h>
#include <javax/sound/midi/spi/MidiDeviceProvider.h>

namespace javax {
	namespace sound {
		namespace midi {
			class MidiDevice;
			class MidiDevice$Info;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RealTimeSequencerProvider : public ::javax::sound::midi::spi::MidiDeviceProvider {
	$class(RealTimeSequencerProvider, $NO_CLASS_INIT, ::javax::sound::midi::spi::MidiDeviceProvider)
public:
	RealTimeSequencerProvider();
	void init$();
	virtual ::javax::sound::midi::MidiDevice* getDevice(::javax::sound::midi::MidiDevice$Info* info) override;
	virtual $Array<::javax::sound::midi::MidiDevice$Info>* getDeviceInfo() override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RealTimeSequencerProvider_h_