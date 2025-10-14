#ifndef _com_sun_media_sound_InvalidFormatException_h_
#define _com_sun_media_sound_InvalidFormatException_h_
//$ class com.sun.media.sound.InvalidFormatException
//$ extends com.sun.media.sound.InvalidDataException

#include <com/sun/media/sound/InvalidDataException.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class InvalidFormatException : public ::com::sun::media::sound::InvalidDataException {
	$class(InvalidFormatException, $NO_CLASS_INIT, ::com::sun::media::sound::InvalidDataException)
public:
	InvalidFormatException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)1;
	InvalidFormatException(const InvalidFormatException& e);
	InvalidFormatException wrapper$();
	virtual void throwWrapper$() override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_InvalidFormatException_h_