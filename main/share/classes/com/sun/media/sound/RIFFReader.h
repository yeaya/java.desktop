#ifndef _com_sun_media_sound_RIFFReader_h_
#define _com_sun_media_sound_RIFFReader_h_
//$ class com.sun.media.sound.RIFFReader
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RIFFReader : public ::java::io::InputStream {
	$class(RIFFReader, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	RIFFReader();
	void init$(::java::io::InputStream* stream);
	virtual int32_t available() override;
	virtual void close() override;
	void finish();
	int64_t getFilePointer();
	$String* getFormat();
	int64_t getSize();
	$String* getType();
	bool hasNextChunk();
	::com::sun::media::sound::RIFFReader* nextChunk();
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t offset, int32_t len) override;
	int8_t readByte();
	void readFully($bytes* b);
	void readFully($bytes* b, int32_t off, int32_t len);
	int32_t readInt();
	int64_t readLong();
	int16_t readShort();
	$String* readString(int32_t len);
	int32_t readUnsignedByte();
	int64_t readUnsignedInt();
	int32_t readUnsignedShort();
	virtual int64_t skip(int64_t n) override;
	::com::sun::media::sound::RIFFReader* root = nullptr;
	int64_t filepointer = 0;
	$String* fourcc = nullptr;
	$String* riff_type = nullptr;
	int64_t ckSize = 0;
	::java::io::InputStream* stream = nullptr;
	int64_t avail = 0;
	::com::sun::media::sound::RIFFReader* lastiterator = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RIFFReader_h_