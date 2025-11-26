#ifndef _javax_sound_sampled_spi_MixerProvider_h_
#define _javax_sound_sampled_spi_MixerProvider_h_
//$ class javax.sound.sampled.spi.MixerProvider
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class Mixer;
			class Mixer$Info;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {
			namespace spi {

class $import MixerProvider : public ::java::lang::Object {
	$class(MixerProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MixerProvider();
	void init$();
	virtual ::javax::sound::sampled::Mixer* getMixer(::javax::sound::sampled::Mixer$Info* info) {return nullptr;}
	virtual $Array<::javax::sound::sampled::Mixer$Info>* getMixerInfo() {return nullptr;}
	virtual bool isMixerSupported(::javax::sound::sampled::Mixer$Info* info);
};

			} // spi
		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_spi_MixerProvider_h_