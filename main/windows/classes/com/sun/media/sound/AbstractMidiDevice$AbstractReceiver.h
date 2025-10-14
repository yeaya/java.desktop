#ifndef _com_sun_media_sound_AbstractMidiDevice$AbstractReceiver_h_
#define _com_sun_media_sound_AbstractMidiDevice$AbstractReceiver_h_
//$ class com.sun.media.sound.AbstractMidiDevice$AbstractReceiver
//$ extends javax.sound.midi.MidiDeviceReceiver

#include <javax/sound/midi/MidiDeviceReceiver.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AbstractMidiDevice;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiDevice;
			class MidiMessage;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AbstractMidiDevice$AbstractReceiver : public ::javax::sound::midi::MidiDeviceReceiver {
	$class(AbstractMidiDevice$AbstractReceiver, $NO_CLASS_INIT, ::javax::sound::midi::MidiDeviceReceiver)
public:
	AbstractMidiDevice$AbstractReceiver();
	void init$(::com::sun::media::sound::AbstractMidiDevice* this$0);
	virtual void close() override;
	virtual ::javax::sound::midi::MidiDevice* getMidiDevice() override;
	virtual void implSend(::javax::sound::midi::MidiMessage* message, int64_t timeStamp) {}
	bool isOpen();
	virtual void send(::javax::sound::midi::MidiMessage* message, int64_t timeStamp) override;
	::com::sun::media::sound::AbstractMidiDevice* this$0 = nullptr;
	$volatile(bool) open = false;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AbstractMidiDevice$AbstractReceiver_h_