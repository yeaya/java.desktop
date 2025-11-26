#ifndef _com_sun_media_sound_AbstractMidiDeviceProvider_h_
#define _com_sun_media_sound_AbstractMidiDeviceProvider_h_
//$ class com.sun.media.sound.AbstractMidiDeviceProvider
//$ extends javax.sound.midi.spi.MidiDeviceProvider

#include <java/lang/Array.h>
#include <javax/sound/midi/spi/MidiDeviceProvider.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AbstractMidiDeviceProvider$Info;
			}
		}
	}
}
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

class AbstractMidiDeviceProvider : public ::javax::sound::midi::spi::MidiDeviceProvider {
	$class(AbstractMidiDeviceProvider, 0, ::javax::sound::midi::spi::MidiDeviceProvider)
public:
	AbstractMidiDeviceProvider();
	void init$();
	virtual ::javax::sound::midi::MidiDevice* createDevice(::com::sun::media::sound::AbstractMidiDeviceProvider$Info* info) {return nullptr;}
	virtual ::com::sun::media::sound::AbstractMidiDeviceProvider$Info* createInfo(int32_t index) {return nullptr;}
	virtual ::javax::sound::midi::MidiDevice* getDevice(::javax::sound::midi::MidiDevice$Info* info) override;
	virtual $Array<::javax::sound::midi::MidiDevice>* getDeviceCache() {return nullptr;}
	virtual $Array<::javax::sound::midi::MidiDevice$Info>* getDeviceInfo() override;
	virtual $Array<::com::sun::media::sound::AbstractMidiDeviceProvider$Info>* getInfoCache() {return nullptr;}
	virtual int32_t getNumDevices() {return 0;}
	void readDeviceInfos();
	virtual void setDeviceCache($Array<::javax::sound::midi::MidiDevice>* devices) {}
	virtual void setInfoCache($Array<::com::sun::media::sound::AbstractMidiDeviceProvider$Info>* infos) {}
	static bool enabled;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AbstractMidiDeviceProvider_h_