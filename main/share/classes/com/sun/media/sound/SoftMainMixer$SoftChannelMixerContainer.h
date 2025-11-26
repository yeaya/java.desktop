#ifndef _com_sun_media_sound_SoftMainMixer$SoftChannelMixerContainer_h_
#define _com_sun_media_sound_SoftMainMixer$SoftChannelMixerContainer_h_
//$ class com.sun.media.sound.SoftMainMixer$SoftChannelMixerContainer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelChannelMixer;
				class SoftAudioBuffer;
				class SoftMainMixer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMainMixer$SoftChannelMixerContainer : public ::java::lang::Object {
	$class(SoftMainMixer$SoftChannelMixerContainer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoftMainMixer$SoftChannelMixerContainer();
	void init$(::com::sun::media::sound::SoftMainMixer* this$0);
	::com::sun::media::sound::SoftMainMixer* this$0 = nullptr;
	::com::sun::media::sound::ModelChannelMixer* mixer = nullptr;
	$Array<::com::sun::media::sound::SoftAudioBuffer>* buffers = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMainMixer$SoftChannelMixerContainer_h_