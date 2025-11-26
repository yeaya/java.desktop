#ifndef _com_sun_media_sound_RealTimeSequencer$SequencerTransmitter_h_
#define _com_sun_media_sound_RealTimeSequencer$SequencerTransmitter_h_
//$ class com.sun.media.sound.RealTimeSequencer$SequencerTransmitter
//$ extends com.sun.media.sound.AbstractMidiDevice$BasicTransmitter

#include <com/sun/media/sound/AbstractMidiDevice$BasicTransmitter.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class RealTimeSequencer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RealTimeSequencer$SequencerTransmitter : public ::com::sun::media::sound::AbstractMidiDevice$BasicTransmitter {
	$class(RealTimeSequencer$SequencerTransmitter, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractMidiDevice$BasicTransmitter)
public:
	RealTimeSequencer$SequencerTransmitter();
	void init$(::com::sun::media::sound::RealTimeSequencer* this$0);
	::com::sun::media::sound::RealTimeSequencer* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RealTimeSequencer$SequencerTransmitter_h_