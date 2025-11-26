#ifndef _com_sun_media_sound_SoftControl_h_
#define _com_sun_media_sound_SoftControl_h_
//$ interface com.sun.media.sound.SoftControl
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftControl : public ::java::lang::Object {
	$interface(SoftControl, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $doubles* get(int32_t instance, $String* name) {return nullptr;}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftControl_h_