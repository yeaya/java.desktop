#ifndef _com_sun_media_sound_SoftTuning_h_
#define _com_sun_media_sound_SoftTuning_h_
//$ class com.sun.media.sound.SoftTuning
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace sound {
		namespace midi {
			class Patch;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftTuning : public ::java::lang::Object {
	$class(SoftTuning, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoftTuning();
	void init$();
	void init$($bytes* data);
	void init$(::javax::sound::midi::Patch* patch);
	void init$(::javax::sound::midi::Patch* patch, $bytes* data);
	bool checksumOK($bytes* data);
	$String* getName();
	::javax::sound::midi::Patch* getPatch();
	$doubles* getTuning();
	double getTuning(int32_t noteNumber);
	void load($bytes* data);
	void setName($String* name);
	$String* name = nullptr;
	$doubles* tuning = nullptr;
	::javax::sound::midi::Patch* patch = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftTuning_h_