#ifndef _com_sun_media_sound_RealTimeSequencer$SequencerReceiver_h_
#define _com_sun_media_sound_RealTimeSequencer$SequencerReceiver_h_
//$ class com.sun.media.sound.RealTimeSequencer$SequencerReceiver
//$ extends com.sun.media.sound.AbstractMidiDevice$AbstractReceiver

#include <com/sun/media/sound/AbstractMidiDevice$AbstractReceiver.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class RealTimeSequencer;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiMessage;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RealTimeSequencer$SequencerReceiver : public ::com::sun::media::sound::AbstractMidiDevice$AbstractReceiver {
	$class(RealTimeSequencer$SequencerReceiver, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractMidiDevice$AbstractReceiver)
public:
	RealTimeSequencer$SequencerReceiver();
	void init$(::com::sun::media::sound::RealTimeSequencer* this$0);
	virtual void implSend(::javax::sound::midi::MidiMessage* message, int64_t timeStamp) override;
	::com::sun::media::sound::RealTimeSequencer* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RealTimeSequencer$SequencerReceiver_h_