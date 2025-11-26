#ifndef _com_sun_media_sound_SoftSynthesizer$WeakAudioStream$1_h_
#define _com_sun_media_sound_SoftSynthesizer$WeakAudioStream$1_h_
//$ class com.sun.media.sound.SoftSynthesizer$WeakAudioStream$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftAudioPusher;
				class SoftSynthesizer$WeakAudioStream;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioInputStream;
			class SourceDataLine;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftSynthesizer$WeakAudioStream$1 : public ::java::lang::Runnable {
	$class(SoftSynthesizer$WeakAudioStream$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SoftSynthesizer$WeakAudioStream$1();
	void init$(::com::sun::media::sound::SoftSynthesizer$WeakAudioStream* this$0);
	virtual void run() override;
	::com::sun::media::sound::SoftSynthesizer$WeakAudioStream* this$0 = nullptr;
	::com::sun::media::sound::SoftAudioPusher* _pusher = nullptr;
	::javax::sound::sampled::AudioInputStream* _jitter_stream = nullptr;
	::javax::sound::sampled::SourceDataLine* _sourceDataLine = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftSynthesizer$WeakAudioStream$1_h_