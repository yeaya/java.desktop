#ifndef _com_sun_media_sound_DLSSampleOptions_h_
#define _com_sun_media_sound_DLSSampleOptions_h_
//$ class com.sun.media.sound.DLSSampleOptions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DLSSampleOptions : public ::java::lang::Object {
	$class(DLSSampleOptions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DLSSampleOptions();
	void init$();
	int32_t getAttenuation();
	int16_t getFinetune();
	::java::util::List* getLoops();
	int64_t getOptions();
	int32_t getUnitynote();
	void setAttenuation(int32_t attenuation);
	void setFinetune(int16_t finetune);
	void setOptions(int64_t options);
	void setUnitynote(int32_t unitynote);
	int32_t unitynote = 0;
	int16_t finetune = 0;
	int32_t attenuation = 0;
	int64_t options = 0;
	::java::util::List* loops = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DLSSampleOptions_h_