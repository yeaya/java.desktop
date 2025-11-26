#ifndef _com_sun_media_sound_DirectAudioDeviceProvider_h_
#define _com_sun_media_sound_DirectAudioDeviceProvider_h_
//$ class com.sun.media.sound.DirectAudioDeviceProvider
//$ extends javax.sound.sampled.spi.MixerProvider

#include <java/lang/Array.h>
#include <javax/sound/sampled/spi/MixerProvider.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class DirectAudioDevice;
				class DirectAudioDeviceProvider$DirectAudioDeviceInfo;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class Mixer;
			class Mixer$Info;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DirectAudioDeviceProvider : public ::javax::sound::sampled::spi::MixerProvider {
	$class(DirectAudioDeviceProvider, 0, ::javax::sound::sampled::spi::MixerProvider)
public:
	DirectAudioDeviceProvider();
	void init$();
	static ::javax::sound::sampled::Mixer* getDevice(::com::sun::media::sound::DirectAudioDeviceProvider$DirectAudioDeviceInfo* info);
	virtual ::javax::sound::sampled::Mixer* getMixer(::javax::sound::sampled::Mixer$Info* info) override;
	virtual $Array<::javax::sound::sampled::Mixer$Info>* getMixerInfo() override;
	static void init();
	static int32_t nGetNumDevices();
	static ::com::sun::media::sound::DirectAudioDeviceProvider$DirectAudioDeviceInfo* nNewDirectAudioDeviceInfo(int32_t deviceIndex);
	static $Array<::com::sun::media::sound::DirectAudioDeviceProvider$DirectAudioDeviceInfo>* infos;
	static $Array<::com::sun::media::sound::DirectAudioDevice>* devices;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DirectAudioDeviceProvider_h_