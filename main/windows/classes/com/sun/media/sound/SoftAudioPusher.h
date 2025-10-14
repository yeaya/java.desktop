#ifndef _com_sun_media_sound_SoftAudioPusher_h_
#define _com_sun_media_sound_SoftAudioPusher_h_
//$ class com.sun.media.sound.SoftAudioPusher
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Thread;
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

class SoftAudioPusher : public ::java::lang::Runnable {
	$class(SoftAudioPusher, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SoftAudioPusher();
	void init$(::javax::sound::sampled::SourceDataLine* sourceDataLine, ::javax::sound::sampled::AudioInputStream* ais, int32_t workbuffersizer);
	virtual void run() override;
	void start();
	void stop();
	$volatile(bool) active = false;
	::javax::sound::sampled::SourceDataLine* sourceDataLine = nullptr;
	$Thread* audiothread = nullptr;
	::javax::sound::sampled::AudioInputStream* ais = nullptr;
	$bytes* buffer = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftAudioPusher_h_