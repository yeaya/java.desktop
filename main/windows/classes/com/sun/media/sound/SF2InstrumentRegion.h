#ifndef _com_sun_media_sound_SF2InstrumentRegion_h_
#define _com_sun_media_sound_SF2InstrumentRegion_h_
//$ class com.sun.media.sound.SF2InstrumentRegion
//$ extends com.sun.media.sound.SF2Region

#include <com/sun/media/sound/SF2Region.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SF2Layer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SF2InstrumentRegion : public ::com::sun::media::sound::SF2Region {
	$class(SF2InstrumentRegion, $NO_CLASS_INIT, ::com::sun::media::sound::SF2Region)
public:
	SF2InstrumentRegion();
	void init$();
	::com::sun::media::sound::SF2Layer* getLayer();
	void setLayer(::com::sun::media::sound::SF2Layer* layer);
	::com::sun::media::sound::SF2Layer* layer = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SF2InstrumentRegion_h_