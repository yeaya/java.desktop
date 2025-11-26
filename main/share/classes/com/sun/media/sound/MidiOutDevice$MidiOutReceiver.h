#ifndef _com_sun_media_sound_MidiOutDevice$MidiOutReceiver_h_
#define _com_sun_media_sound_MidiOutDevice$MidiOutReceiver_h_
//$ class com.sun.media.sound.MidiOutDevice$MidiOutReceiver
//$ extends com.sun.media.sound.AbstractMidiDevice$AbstractReceiver

#include <com/sun/media/sound/AbstractMidiDevice$AbstractReceiver.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class MidiOutDevice;
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

class MidiOutDevice$MidiOutReceiver : public ::com::sun::media::sound::AbstractMidiDevice$AbstractReceiver {
	$class(MidiOutDevice$MidiOutReceiver, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractMidiDevice$AbstractReceiver)
public:
	MidiOutDevice$MidiOutReceiver();
	void init$(::com::sun::media::sound::MidiOutDevice* this$0);
	virtual void implSend(::javax::sound::midi::MidiMessage* message, int64_t timeStamp) override;
	void sendPackedMidiMessage(int32_t packedMsg, int64_t timeStamp);
	::com::sun::media::sound::MidiOutDevice* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_MidiOutDevice$MidiOutReceiver_h_