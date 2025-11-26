#ifndef _com_sun_media_sound_MidiInDevice$MidiInTransmitter_h_
#define _com_sun_media_sound_MidiInDevice$MidiInTransmitter_h_
//$ class com.sun.media.sound.MidiInDevice$MidiInTransmitter
//$ extends com.sun.media.sound.AbstractMidiDevice$BasicTransmitter

#include <com/sun/media/sound/AbstractMidiDevice$BasicTransmitter.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class MidiInDevice;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class MidiInDevice$MidiInTransmitter : public ::com::sun::media::sound::AbstractMidiDevice$BasicTransmitter {
	$class(MidiInDevice$MidiInTransmitter, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractMidiDevice$BasicTransmitter)
public:
	MidiInDevice$MidiInTransmitter();
	void init$(::com::sun::media::sound::MidiInDevice* this$0);
	::com::sun::media::sound::MidiInDevice* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_MidiInDevice$MidiInTransmitter_h_