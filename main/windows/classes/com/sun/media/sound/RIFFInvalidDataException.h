#ifndef _com_sun_media_sound_RIFFInvalidDataException_h_
#define _com_sun_media_sound_RIFFInvalidDataException_h_
//$ class com.sun.media.sound.RIFFInvalidDataException
//$ extends com.sun.media.sound.InvalidDataException

#include <com/sun/media/sound/InvalidDataException.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RIFFInvalidDataException : public ::com::sun::media::sound::InvalidDataException {
	$class(RIFFInvalidDataException, $NO_CLASS_INIT, ::com::sun::media::sound::InvalidDataException)
public:
	RIFFInvalidDataException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)1;
	RIFFInvalidDataException(const RIFFInvalidDataException& e);
	virtual void throw$() override;
	inline RIFFInvalidDataException* operator ->() {
		return (RIFFInvalidDataException*)throwing$;
	}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RIFFInvalidDataException_h_