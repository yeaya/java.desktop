#ifndef _com_sun_media_sound_SunFileWriter$NoCloseInputStream_h_
#define _com_sun_media_sound_SunFileWriter$NoCloseInputStream_h_
//$ class com.sun.media.sound.SunFileWriter$NoCloseInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SunFileWriter;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SunFileWriter$NoCloseInputStream : public ::java::io::InputStream {
	$class(SunFileWriter$NoCloseInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	SunFileWriter$NoCloseInputStream();
	void init$(::com::sun::media::sound::SunFileWriter* this$0, ::java::io::InputStream* in);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void mark(int32_t readlimit) override;
	virtual bool markSupported() override;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	::com::sun::media::sound::SunFileWriter* this$0 = nullptr;
	::java::io::InputStream* in = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SunFileWriter$NoCloseInputStream_h_