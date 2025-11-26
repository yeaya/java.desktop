#ifndef _com_sun_media_sound_AudioFloatFormatConverter$AudioFloatFormatConverterInputStream_h_
#define _com_sun_media_sound_AudioFloatFormatConverter$AudioFloatFormatConverterInputStream_h_
//$ class com.sun.media.sound.AudioFloatFormatConverter$AudioFloatFormatConverterInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AudioFloatConverter;
				class AudioFloatInputStream;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AudioFloatFormatConverter$AudioFloatFormatConverterInputStream : public ::java::io::InputStream {
	$class(AudioFloatFormatConverter$AudioFloatFormatConverterInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	AudioFloatFormatConverter$AudioFloatFormatConverterInputStream();
	void init$(::javax::sound::sampled::AudioFormat* targetFormat, ::com::sun::media::sound::AudioFloatInputStream* stream);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void mark(int32_t readlimit) override;
	virtual bool markSupported() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	::com::sun::media::sound::AudioFloatConverter* converter = nullptr;
	::com::sun::media::sound::AudioFloatInputStream* stream = nullptr;
	$floats* readfloatbuffer = nullptr;
	int32_t fsize = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AudioFloatFormatConverter$AudioFloatFormatConverterInputStream_h_