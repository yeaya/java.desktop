#ifndef _com_sun_media_sound_InvalidDataException_h_
#define _com_sun_media_sound_InvalidDataException_h_
//$ class com.sun.media.sound.InvalidDataException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class InvalidDataException : public ::java::io::IOException {
	$class(InvalidDataException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	InvalidDataException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)1;
	InvalidDataException(const InvalidDataException& e);
	InvalidDataException wrapper$();
	virtual void throwWrapper$() override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_InvalidDataException_h_