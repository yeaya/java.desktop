#ifndef _com_sun_media_sound_ModelByteBuffer$RandomFileInputStream_h_
#define _com_sun_media_sound_ModelByteBuffer$RandomFileInputStream_h_
//$ class com.sun.media.sound.ModelByteBuffer$RandomFileInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelByteBuffer;
			}
		}
	}
}
namespace java {
	namespace io {
		class RandomAccessFile;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelByteBuffer$RandomFileInputStream : public ::java::io::InputStream {
	$class(ModelByteBuffer$RandomFileInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	ModelByteBuffer$RandomFileInputStream();
	void init$(::com::sun::media::sound::ModelByteBuffer* this$0);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void mark(int32_t readlimit) override;
	virtual bool markSupported() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	::com::sun::media::sound::ModelByteBuffer* this$0 = nullptr;
	::java::io::RandomAccessFile* raf = nullptr;
	int64_t left = 0;
	int64_t mark$ = 0;
	int64_t markleft = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelByteBuffer$RandomFileInputStream_h_