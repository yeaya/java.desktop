#ifndef _com_sun_media_sound_AbstractMidiDevice$TransmitterList_h_
#define _com_sun_media_sound_AbstractMidiDevice$TransmitterList_h_
//$ class com.sun.media.sound.AbstractMidiDevice$TransmitterList
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AbstractMidiDevice;
				class AbstractMidiDevice$BasicTransmitter;
				class MidiOutDevice$MidiOutReceiver;
			}
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiMessage;
			class Receiver;
			class Transmitter;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AbstractMidiDevice$TransmitterList : public ::java::lang::Object {
	$class(AbstractMidiDevice$TransmitterList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbstractMidiDevice$TransmitterList();
	void init$(::com::sun::media::sound::AbstractMidiDevice* this$0);
	void add(::javax::sound::midi::Transmitter* t);
	void close();
	void receiverChanged(::com::sun::media::sound::AbstractMidiDevice$BasicTransmitter* t, ::javax::sound::midi::Receiver* oldR, ::javax::sound::midi::Receiver* newR);
	void remove(::javax::sound::midi::Transmitter* t);
	void sendMessage(int32_t packedMessage, int64_t timeStamp);
	void sendMessage($bytes* data, int64_t timeStamp);
	void sendMessage(::javax::sound::midi::MidiMessage* message, int64_t timeStamp);
	::com::sun::media::sound::AbstractMidiDevice* this$0 = nullptr;
	::java::util::ArrayList* transmitters = nullptr;
	::com::sun::media::sound::MidiOutDevice$MidiOutReceiver* midiOutReceiver = nullptr;
	int32_t optimizedReceiverCount = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AbstractMidiDevice$TransmitterList_h_