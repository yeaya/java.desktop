#ifndef _com_sun_media_sound_MidiDeviceTransmitterEnvelope_h_
#define _com_sun_media_sound_MidiDeviceTransmitterEnvelope_h_
//$ class com.sun.media.sound.MidiDeviceTransmitterEnvelope
//$ extends javax.sound.midi.MidiDeviceTransmitter

#include <javax/sound/midi/MidiDeviceTransmitter.h>

namespace javax {
	namespace sound {
		namespace midi {
			class MidiDevice;
			class Receiver;
			class Transmitter;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class MidiDeviceTransmitterEnvelope : public ::javax::sound::midi::MidiDeviceTransmitter {
	$class(MidiDeviceTransmitterEnvelope, $NO_CLASS_INIT, ::javax::sound::midi::MidiDeviceTransmitter)
public:
	MidiDeviceTransmitterEnvelope();
	void init$(::javax::sound::midi::MidiDevice* device, ::javax::sound::midi::Transmitter* transmitter);
	virtual void close() override;
	virtual ::javax::sound::midi::MidiDevice* getMidiDevice() override;
	virtual ::javax::sound::midi::Receiver* getReceiver() override;
	::javax::sound::midi::Transmitter* getTransmitter();
	virtual void setReceiver(::javax::sound::midi::Receiver* receiver) override;
	::javax::sound::midi::MidiDevice* device = nullptr;
	::javax::sound::midi::Transmitter* transmitter = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_MidiDeviceTransmitterEnvelope_h_