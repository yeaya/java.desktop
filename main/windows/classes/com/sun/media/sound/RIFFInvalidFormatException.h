#ifndef _com_sun_media_sound_RIFFInvalidFormatException_h_
#define _com_sun_media_sound_RIFFInvalidFormatException_h_
//$ class com.sun.media.sound.RIFFInvalidFormatException
//$ extends com.sun.media.sound.InvalidFormatException

#include <com/sun/media/sound/InvalidFormatException.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RIFFInvalidFormatException : public ::com::sun::media::sound::InvalidFormatException {
	$class(RIFFInvalidFormatException, $NO_CLASS_INIT, ::com::sun::media::sound::InvalidFormatException)
public:
	RIFFInvalidFormatException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)1;
	RIFFInvalidFormatException(const RIFFInvalidFormatException& e);
	RIFFInvalidFormatException wrapper$();
	virtual void throwWrapper$() override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RIFFInvalidFormatException_h_