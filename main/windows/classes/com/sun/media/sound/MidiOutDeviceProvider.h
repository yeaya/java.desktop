#ifndef _com_sun_media_sound_MidiOutDeviceProvider_h_
#define _com_sun_media_sound_MidiOutDeviceProvider_h_
//$ class com.sun.media.sound.MidiOutDeviceProvider
//$ extends com.sun.media.sound.AbstractMidiDeviceProvider

#include <com/sun/media/sound/AbstractMidiDeviceProvider.h>
#include <java/lang/Array.h>

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
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class MidiOutDeviceProvider : public ::com::sun::media::sound::AbstractMidiDeviceProvider {
	$class(MidiOutDeviceProvider, 0, ::com::sun::media::sound::AbstractMidiDeviceProvider)
public:
	MidiOutDeviceProvider();
	void init$();
	virtual ::javax::sound::midi::MidiDevice* createDevice(::com::sun::media::sound::AbstractMidiDeviceProvider$Info* info) override;
	virtual ::com::sun::media::sound::AbstractMidiDeviceProvider$Info* createInfo(int32_t index) override;
	virtual $Array<::javax::sound::midi::MidiDevice>* getDeviceCache() override;
	virtual $Array<::com::sun::media::sound::AbstractMidiDeviceProvider$Info>* getInfoCache() override;
	virtual int32_t getNumDevices() override;
	static $String* nGetDescription(int32_t index);
	static $String* nGetName(int32_t index);
	static int32_t nGetNumDevices();
	static $String* nGetVendor(int32_t index);
	static $String* nGetVersion(int32_t index);
	virtual void setDeviceCache($Array<::javax::sound::midi::MidiDevice>* devices) override;
	virtual void setInfoCache($Array<::com::sun::media::sound::AbstractMidiDeviceProvider$Info>* infos) override;
	static $Array<::com::sun::media::sound::AbstractMidiDeviceProvider$Info>* infos;
	static $Array<::javax::sound::midi::MidiDevice>* devices;
	static bool enabled;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_MidiOutDeviceProvider_h_