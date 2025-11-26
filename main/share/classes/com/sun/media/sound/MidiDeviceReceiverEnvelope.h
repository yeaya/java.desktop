#ifndef _com_sun_media_sound_MidiDeviceReceiverEnvelope_h_
#define _com_sun_media_sound_MidiDeviceReceiverEnvelope_h_
//$ class com.sun.media.sound.MidiDeviceReceiverEnvelope
//$ extends javax.sound.midi.MidiDeviceReceiver

#include <javax/sound/midi/MidiDeviceReceiver.h>

namespace javax {
	namespace sound {
		namespace midi {
			class MidiDevice;
			class MidiMessage;
			class Receiver;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class MidiDeviceReceiverEnvelope : public ::javax::sound::midi::MidiDeviceReceiver {
	$class(MidiDeviceReceiverEnvelope, $NO_CLASS_INIT, ::javax::sound::midi::MidiDeviceReceiver)
public:
	MidiDeviceReceiverEnvelope();
	void init$(::javax::sound::midi::MidiDevice* device, ::javax::sound::midi::Receiver* receiver);
	virtual void close() override;
	virtual ::javax::sound::midi::MidiDevice* getMidiDevice() override;
	::javax::sound::midi::Receiver* getReceiver();
	virtual void send(::javax::sound::midi::MidiMessage* message, int64_t timeStamp) override;
	::javax::sound::midi::MidiDevice* device = nullptr;
	::javax::sound::midi::Receiver* receiver = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_MidiDeviceReceiverEnvelope_h_