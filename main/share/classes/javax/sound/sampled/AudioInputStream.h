#ifndef _javax_sound_sampled_AudioInputStream_h_
#define _javax_sound_sampled_AudioInputStream_h_
//$ class javax.sound.sampled.AudioInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class TargetDataLine;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export AudioInputStream : public ::java::io::InputStream {
	$class(AudioInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	AudioInputStream();
	void init$(::java::io::InputStream* stream, ::javax::sound::sampled::AudioFormat* format, int64_t length);
	void init$(::javax::sound::sampled::TargetDataLine* line);
	virtual int32_t available() override;
	virtual void close() override;
	virtual ::javax::sound::sampled::AudioFormat* getFormat();
	virtual int64_t getFrameLength();
	virtual void mark(int32_t readlimit) override;
	virtual bool markSupported() override;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	::java::io::InputStream* stream = nullptr;
	::javax::sound::sampled::AudioFormat* format = nullptr;
	int64_t frameLength = 0;
	int32_t frameSize = 0;
	int64_t framePos = 0;
	int64_t markpos = 0;
	$bytes* pushBackBuffer = nullptr;
	int32_t pushBackLen = 0;
	$bytes* markPushBackBuffer = nullptr;
	int32_t markPushBackLen = 0;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_AudioInputStream_h_