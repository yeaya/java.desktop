#ifndef _com_sun_media_sound_AutoClosingClip_h_
#define _com_sun_media_sound_AutoClosingClip_h_
//$ interface com.sun.media.sound.AutoClosingClip
//$ extends javax.sound.sampled.Clip

#include <javax/sound/sampled/Clip.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AutoClosingClip : public ::javax::sound::sampled::Clip {
	$interface(AutoClosingClip, $NO_CLASS_INIT, ::javax::sound::sampled::Clip)
public:
	virtual bool isAutoClosing() {return false;}
	using ::javax::sound::sampled::Clip::open;
	virtual void setAutoClosing(bool value) {}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AutoClosingClip_h_