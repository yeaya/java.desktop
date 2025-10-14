#ifndef _com_sun_media_sound_ModelTransform_h_
#define _com_sun_media_sound_ModelTransform_h_
//$ interface com.sun.media.sound.ModelTransform
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelTransform : public ::java::lang::Object {
	$interface(ModelTransform, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual double transform(double value) {return 0.0;}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelTransform_h_