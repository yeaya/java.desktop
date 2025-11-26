#ifndef _com_sun_media_sound_SoftMixingMixerProvider_h_
#define _com_sun_media_sound_SoftMixingMixerProvider_h_
//$ class com.sun.media.sound.SoftMixingMixerProvider
//$ extends javax.sound.sampled.spi.MixerProvider

#include <java/lang/Array.h>
#include <javax/sound/sampled/spi/MixerProvider.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftMixingMixer;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Thread;
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

class SoftMixingMixerProvider : public ::javax::sound::sampled::spi::MixerProvider {
	$class(SoftMixingMixerProvider, 0, ::javax::sound::sampled::spi::MixerProvider)
public:
	SoftMixingMixerProvider();
	void init$();
	virtual ::javax::sound::sampled::Mixer* getMixer(::javax::sound::sampled::Mixer$Info* info) override;
	virtual $Array<::javax::sound::sampled::Mixer$Info>* getMixerInfo() override;
	static ::com::sun::media::sound::SoftMixingMixer* globalmixer;
	static $Thread* lockthread;
	static $Object* mutex;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMixingMixerProvider_h_