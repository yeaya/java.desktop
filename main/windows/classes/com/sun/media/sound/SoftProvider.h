#ifndef _com_sun_media_sound_SoftProvider_h_
#define _com_sun_media_sound_SoftProvider_h_
//$ class com.sun.media.sound.SoftProvider
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

class SoftProvider : public ::javax::sound::midi::spi::MidiDeviceProvider {
	$class(SoftProvider, $NO_CLASS_INIT, ::javax::sound::midi::spi::MidiDeviceProvider)
public:
	SoftProvider();
	void init$();
	virtual ::javax::sound::midi::MidiDevice* getDevice(::javax::sound::midi::MidiDevice$Info* info) override;
	virtual $Array<::javax::sound::midi::MidiDevice$Info>* getDeviceInfo() override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftProvider_h_