#ifndef _javax_sound_sampled_AudioInputStream$TargetDataLineInputStream_h_
#define _javax_sound_sampled_AudioInputStream$TargetDataLineInputStream_h_
//$ class javax.sound.sampled.AudioInputStream$TargetDataLineInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class AudioInputStream;
			class TargetDataLine;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class AudioInputStream$TargetDataLineInputStream : public ::java::io::InputStream {
	$class(AudioInputStream$TargetDataLineInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	AudioInputStream$TargetDataLineInputStream();
	void init$(::javax::sound::sampled::AudioInputStream* this$0, ::javax::sound::sampled::TargetDataLine* line);
	virtual int32_t available() override;
	virtual void close() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	::javax::sound::sampled::AudioInputStream* this$0 = nullptr;
	::javax::sound::sampled::TargetDataLine* line = nullptr;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_AudioInputStream$TargetDataLineInputStream_h_