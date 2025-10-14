#ifndef _com_sun_media_sound_ModelDirector_h_
#define _com_sun_media_sound_ModelDirector_h_
//$ interface com.sun.media.sound.ModelDirector
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelDirector : public ::java::lang::Object {
	$interface(ModelDirector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void close() {}
	virtual void noteOff(int32_t noteNumber, int32_t velocity) {}
	virtual void noteOn(int32_t noteNumber, int32_t velocity) {}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelDirector_h_