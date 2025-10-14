#ifndef _com_sun_media_sound_ModelDirectedPlayer_h_
#define _com_sun_media_sound_ModelDirectedPlayer_h_
//$ interface com.sun.media.sound.ModelDirectedPlayer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelConnectionBlock;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelDirectedPlayer : public ::java::lang::Object {
	$interface(ModelDirectedPlayer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void play(int32_t performerIndex, $Array<::com::sun::media::sound::ModelConnectionBlock>* connectionBlocks) {}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelDirectedPlayer_h_