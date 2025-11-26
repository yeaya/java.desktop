#ifndef _com_sun_media_sound_WaveFloatFileWriter$NoCloseOutputStream_h_
#define _com_sun_media_sound_WaveFloatFileWriter$NoCloseOutputStream_h_
//$ class com.sun.media.sound.WaveFloatFileWriter$NoCloseOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class WaveFloatFileWriter$NoCloseOutputStream : public ::java::io::OutputStream {
	$class(WaveFloatFileWriter$NoCloseOutputStream, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	WaveFloatFileWriter$NoCloseOutputStream();
	void init$(::java::io::OutputStream* out);
	virtual void flush() override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	virtual void write($bytes* b) override;
	::java::io::OutputStream* out = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_WaveFloatFileWriter$NoCloseOutputStream_h_