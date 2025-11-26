#ifndef _com_sun_media_sound_RIFFWriter$RandomAccessByteWriter_h_
#define _com_sun_media_sound_RIFFWriter$RandomAccessByteWriter_h_
//$ class com.sun.media.sound.RIFFWriter$RandomAccessByteWriter
//$ extends com.sun.media.sound.RIFFWriter$RandomAccessWriter

#include <com/sun/media/sound/RIFFWriter$RandomAccessWriter.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RIFFWriter$RandomAccessByteWriter : public ::com::sun::media::sound::RIFFWriter$RandomAccessWriter {
	$class(RIFFWriter$RandomAccessByteWriter, $NO_CLASS_INIT, ::com::sun::media::sound::RIFFWriter$RandomAccessWriter)
public:
	RIFFWriter$RandomAccessByteWriter();
	void init$(::java::io::OutputStream* stream);
	virtual void close() override;
	virtual int64_t getPointer() override;
	virtual int64_t length() override;
	virtual void seek(int64_t chunksizepointer) override;
	virtual void setLength(int64_t i) override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	virtual void write($bytes* bytes) override;
	$bytes* buff = nullptr;
	int32_t length$ = 0;
	int32_t pos = 0;
	$bytes* s = nullptr;
	::java::io::OutputStream* stream = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RIFFWriter$RandomAccessByteWriter_h_