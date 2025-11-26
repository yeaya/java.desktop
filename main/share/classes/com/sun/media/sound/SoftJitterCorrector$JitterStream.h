#ifndef _com_sun_media_sound_SoftJitterCorrector$JitterStream_h_
#define _com_sun_media_sound_SoftJitterCorrector$JitterStream_h_
//$ class com.sun.media.sound.SoftJitterCorrector$JitterStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("MAX_BUFFER_SIZE")
#undef MAX_BUFFER_SIZE

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftJitterCorrector$JitterStream : public ::java::io::InputStream {
	$class(SoftJitterCorrector$JitterStream, 0, ::java::io::InputStream)
public:
	SoftJitterCorrector$JitterStream();
	void init$(::javax::sound::sampled::AudioInputStream* s, int32_t buffersize, int32_t smallbuffersize);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void commit();
	virtual void fillBuffer();
	virtual $bytes* nextReadBuffer();
	virtual $bytes* nextWriteBuffer();
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	static int32_t MAX_BUFFER_SIZE;
	bool active = false;
	$Thread* thread = nullptr;
	::javax::sound::sampled::AudioInputStream* stream = nullptr;
	int32_t writepos = 0;
	int32_t readpos = 0;
	$Array<int8_t, 2>* buffers = nullptr;
	$Object* buffers_mutex = nullptr;
	int32_t w_count = 0;
	int32_t w_min_tol = 0;
	int32_t w_max_tol = 0;
	int32_t w = 0;
	int32_t w_min = 0;
	int32_t bbuffer_pos = 0;
	int32_t bbuffer_max = 0;
	$bytes* bbuffer = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("MAX_BUFFER_SIZE")

#endif // _com_sun_media_sound_SoftJitterCorrector$JitterStream_h_