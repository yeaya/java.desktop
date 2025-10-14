#ifndef _com_sun_media_sound_SoftChannel$MidiControlObject_h_
#define _com_sun_media_sound_SoftChannel$MidiControlObject_h_
//$ class com.sun.media.sound.SoftChannel$MidiControlObject
//$ extends com.sun.media.sound.SoftControl

#include <com/sun/media/sound/SoftControl.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftChannel;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftChannel$MidiControlObject : public ::com::sun::media::sound::SoftControl {
	$class(SoftChannel$MidiControlObject, $NO_CLASS_INIT, ::com::sun::media::sound::SoftControl)
public:
	SoftChannel$MidiControlObject();
	void init$(::com::sun::media::sound::SoftChannel* this$0);
	virtual $doubles* get(int32_t instance, $String* name) override;
	::com::sun::media::sound::SoftChannel* this$0 = nullptr;
	$doubles* pitch = nullptr;
	$doubles* channel_pressure = nullptr;
	$doubles* poly_pressure = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftChannel$MidiControlObject_h_