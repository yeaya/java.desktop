#ifndef _com_sun_media_sound_AudioFloatInputStream_h_
#define _com_sun_media_sound_AudioFloatInputStream_h_
//$ class com.sun.media.sound.AudioFloatInputStream
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AudioFloatInputStream : public ::java::lang::Object {
	$class(AudioFloatInputStream, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AudioFloatInputStream();
	void init$();
	virtual int32_t available() {return 0;}
	virtual void close() {}
	virtual ::javax::sound::sampled::AudioFormat* getFormat() {return nullptr;}
	virtual int64_t getFrameLength() {return 0;}
	static ::com::sun::media::sound::AudioFloatInputStream* getInputStream(::java::net::URL* url);
	static ::com::sun::media::sound::AudioFloatInputStream* getInputStream(::java::io::File* file);
	static ::com::sun::media::sound::AudioFloatInputStream* getInputStream(::java::io::InputStream* stream);
	static ::com::sun::media::sound::AudioFloatInputStream* getInputStream(::javax::sound::sampled::AudioInputStream* stream);
	static ::com::sun::media::sound::AudioFloatInputStream* getInputStream(::javax::sound::sampled::AudioFormat* format, $bytes* buffer, int32_t offset, int32_t len);
	virtual void mark(int32_t readlimit) {}
	virtual bool markSupported() {return false;}
	virtual int32_t read($floats* b, int32_t off, int32_t len) {return 0;}
	int32_t read($floats* b);
	float read();
	virtual void reset() {}
	virtual int64_t skip(int64_t len) {return 0;}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AudioFloatInputStream_h_