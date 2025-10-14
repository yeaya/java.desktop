#ifndef _com_sun_media_sound_ModelInstrumentComparator_h_
#define _com_sun_media_sound_ModelInstrumentComparator_h_
//$ class com.sun.media.sound.ModelInstrumentComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace javax {
	namespace sound {
		namespace midi {
			class Instrument;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelInstrumentComparator : public ::java::util::Comparator {
	$class(ModelInstrumentComparator, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	ModelInstrumentComparator();
	void init$();
	int32_t compare(::javax::sound::midi::Instrument* arg0, ::javax::sound::midi::Instrument* arg1);
	virtual int32_t compare(Object$* arg0, Object$* arg1) override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelInstrumentComparator_h_