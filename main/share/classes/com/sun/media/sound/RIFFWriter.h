#ifndef _com_sun_media_sound_RIFFWriter_h_
#define _com_sun_media_sound_RIFFWriter_h_
//$ class com.sun.media.sound.RIFFWriter
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class RIFFWriter$RandomAccessWriter;
			}
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RIFFWriter : public ::java::io::OutputStream {
	$class(RIFFWriter, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	RIFFWriter();
	void init$($String* name, $String* format);
	void init$(::java::io::File* file, $String* format);
	void init$(::java::io::OutputStream* stream, $String* format);
	void init$(::com::sun::media::sound::RIFFWriter$RandomAccessWriter* raf, $String* format, int32_t chunktype);
	virtual void close() override;
	int64_t getFilePointer();
	bool getWriteOverride();
	void seek(int64_t pos);
	void setWriteOverride(bool writeoverride);
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	void writeByte(int32_t b);
	::com::sun::media::sound::RIFFWriter* writeChunk($String* format);
	void writeInt(int32_t b);
	::com::sun::media::sound::RIFFWriter* writeList($String* format);
	void writeLong(int64_t b);
	void writeShort(int16_t b);
	void writeString($String* string);
	void writeString($String* string, int32_t len);
	void writeUnsignedByte(int32_t b);
	void writeUnsignedInt(int64_t b);
	void writeUnsignedShort(int32_t b);
	int32_t chunktype = 0;
	::com::sun::media::sound::RIFFWriter$RandomAccessWriter* raf = nullptr;
	int64_t chunksizepointer = 0;
	int64_t startpointer = 0;
	::com::sun::media::sound::RIFFWriter* childchunk = nullptr;
	bool open = false;
	bool writeoverride = false;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RIFFWriter_h_