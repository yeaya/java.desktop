#ifndef _com_sun_media_sound_SF2LayerRegion_h_
#define _com_sun_media_sound_SF2LayerRegion_h_
//$ class com.sun.media.sound.SF2LayerRegion
//$ extends com.sun.media.sound.SF2Region

#include <com/sun/media/sound/SF2Region.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SF2Sample;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SF2LayerRegion : public ::com::sun::media::sound::SF2Region {
	$class(SF2LayerRegion, $NO_CLASS_INIT, ::com::sun::media::sound::SF2Region)
public:
	SF2LayerRegion();
	void init$();
	::com::sun::media::sound::SF2Sample* getSample();
	void setSample(::com::sun::media::sound::SF2Sample* sample);
	::com::sun::media::sound::SF2Sample* sample = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SF2LayerRegion_h_