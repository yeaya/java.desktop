#ifndef _com_sun_media_sound_ModelPatch_h_
#define _com_sun_media_sound_ModelPatch_h_
//$ class com.sun.media.sound.ModelPatch
//$ extends javax.sound.midi.Patch

#include <javax/sound/midi/Patch.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelPatch : public ::javax::sound::midi::Patch {
	$class(ModelPatch, $NO_CLASS_INIT, ::javax::sound::midi::Patch)
public:
	ModelPatch();
	void init$(int32_t bank, int32_t program);
	void init$(int32_t bank, int32_t program, bool percussion);
	bool isPercussion();
	bool percussion = false;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelPatch_h_