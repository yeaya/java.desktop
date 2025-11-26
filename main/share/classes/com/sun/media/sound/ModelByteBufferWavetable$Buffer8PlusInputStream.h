#ifndef _com_sun_media_sound_ModelByteBufferWavetable$Buffer8PlusInputStream_h_
#define _com_sun_media_sound_ModelByteBufferWavetable$Buffer8PlusInputStream_h_
//$ class com.sun.media.sound.ModelByteBufferWavetable$Buffer8PlusInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelByteBufferWavetable;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelByteBufferWavetable$Buffer8PlusInputStream : public ::java::io::InputStream {
	$class(ModelByteBufferWavetable$Buffer8PlusInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	ModelByteBufferWavetable$Buffer8PlusInputStream();
	void init$(::com::sun::media::sound::ModelByteBufferWavetable* this$0);
	virtual int32_t available() override;
	virtual void mark(int32_t readlimit) override;
	virtual bool markSupported() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	::com::sun::media::sound::ModelByteBufferWavetable* this$0 = nullptr;
	bool bigendian = false;
	int32_t framesize_pc = 0;
	int32_t pos = 0;
	int32_t pos2 = 0;
	int32_t markpos = 0;
	int32_t markpos2 = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelByteBufferWavetable$Buffer8PlusInputStream_h_