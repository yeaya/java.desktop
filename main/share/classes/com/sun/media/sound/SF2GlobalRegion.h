#ifndef _com_sun_media_sound_SF2GlobalRegion_h_
#define _com_sun_media_sound_SF2GlobalRegion_h_
//$ class com.sun.media.sound.SF2GlobalRegion
//$ extends com.sun.media.sound.SF2Region

#include <com/sun/media/sound/SF2Region.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SF2GlobalRegion : public ::com::sun::media::sound::SF2Region {
	$class(SF2GlobalRegion, $NO_CLASS_INIT, ::com::sun::media::sound::SF2Region)
public:
	SF2GlobalRegion();
	void init$();
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SF2GlobalRegion_h_