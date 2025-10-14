#ifndef _com_sun_media_sound_RIFFWriter$RandomAccessWriter_h_
#define _com_sun_media_sound_RIFFWriter$RandomAccessWriter_h_
//$ interface com.sun.media.sound.RIFFWriter$RandomAccessWriter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RIFFWriter$RandomAccessWriter : public ::java::lang::Object {
	$interface(RIFFWriter$RandomAccessWriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void close() {}
	virtual int64_t getPointer() {return 0;}
	virtual int64_t length() {return 0;}
	virtual void seek(int64_t chunksizepointer) {}
	virtual void setLength(int64_t i) {}
	virtual void write(int32_t b) {}
	virtual void write($bytes* b, int32_t off, int32_t len) {}
	virtual void write($bytes* bytes) {}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RIFFWriter$RandomAccessWriter_h_