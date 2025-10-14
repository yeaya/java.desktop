#ifndef _com_sun_media_sound_SimpleInstrument$SimpleInstrumentPart_h_
#define _com_sun_media_sound_SimpleInstrument$SimpleInstrumentPart_h_
//$ class com.sun.media.sound.SimpleInstrument$SimpleInstrumentPart
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelPerformer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SimpleInstrument$SimpleInstrumentPart : public ::java::lang::Object {
	$class(SimpleInstrument$SimpleInstrumentPart, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SimpleInstrument$SimpleInstrumentPart();
	void init$();
	$Array<::com::sun::media::sound::ModelPerformer>* performers = nullptr;
	int32_t keyFrom = 0;
	int32_t keyTo = 0;
	int32_t velFrom = 0;
	int32_t velTo = 0;
	int32_t exclusiveClass = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SimpleInstrument$SimpleInstrumentPart_h_