#ifndef _com_sun_media_sound_PortMixerProvider_h_
#define _com_sun_media_sound_PortMixerProvider_h_
//$ class com.sun.media.sound.PortMixerProvider
//$ extends javax.sound.sampled.spi.MixerProvider

#include <java/lang/Array.h>
#include <javax/sound/sampled/spi/MixerProvider.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class PortMixer;
				class PortMixerProvider$PortMixerInfo;
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

class PortMixerProvider : public ::javax::sound::sampled::spi::MixerProvider {
	$class(PortMixerProvider, 0, ::javax::sound::sampled::spi::MixerProvider)
public:
	PortMixerProvider();
	void init$();
	static ::javax::sound::sampled::Mixer* getDevice(::com::sun::media::sound::PortMixerProvider$PortMixerInfo* info);
	virtual ::javax::sound::sampled::Mixer* getMixer(::javax::sound::sampled::Mixer$Info* info) override;
	virtual $Array<::javax::sound::sampled::Mixer$Info>* getMixerInfo() override;
	static void init();
	static int32_t nGetNumDevices();
	static ::com::sun::media::sound::PortMixerProvider$PortMixerInfo* nNewPortMixerInfo(int32_t mixerIndex);
	static $Array<::com::sun::media::sound::PortMixerProvider$PortMixerInfo>* infos;
	static $Array<::com::sun::media::sound::PortMixer>* devices;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_PortMixerProvider_h_