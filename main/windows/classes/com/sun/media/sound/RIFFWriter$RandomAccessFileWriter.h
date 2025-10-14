#ifndef _com_sun_media_sound_RIFFWriter$RandomAccessFileWriter_h_
#define _com_sun_media_sound_RIFFWriter$RandomAccessFileWriter_h_
//$ class com.sun.media.sound.RIFFWriter$RandomAccessFileWriter
//$ extends com.sun.media.sound.RIFFWriter$RandomAccessWriter

#include <com/sun/media/sound/RIFFWriter$RandomAccessWriter.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
		class RandomAccessFile;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RIFFWriter$RandomAccessFileWriter : public ::com::sun::media::sound::RIFFWriter$RandomAccessWriter {
	$class(RIFFWriter$RandomAccessFileWriter, $NO_CLASS_INIT, ::com::sun::media::sound::RIFFWriter$RandomAccessWriter)
public:
	RIFFWriter$RandomAccessFileWriter();
	void init$(::java::io::File* file);
	void init$($String* name);
	virtual void close() override;
	virtual int64_t getPointer() override;
	virtual int64_t length() override;
	virtual void seek(int64_t chunksizepointer) override;
	virtual void setLength(int64_t i) override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	virtual void write($bytes* bytes) override;
	::java::io::RandomAccessFile* raf = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RIFFWriter$RandomAccessFileWriter_h_