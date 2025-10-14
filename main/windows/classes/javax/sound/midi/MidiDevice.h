#ifndef _javax_sound_midi_MidiDevice_h_
#define _javax_sound_midi_MidiDevice_h_
//$ interface javax.sound.midi.MidiDevice
//$ extends java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiDevice$Info;
			class Receiver;
			class Transmitter;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $export MidiDevice : public ::java::lang::AutoCloseable {
	$interface(MidiDevice, $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	virtual void close() override {}
	virtual ::javax::sound::midi::MidiDevice$Info* getDeviceInfo() {return nullptr;}
	virtual int32_t getMaxReceivers() {return 0;}
	virtual int32_t getMaxTransmitters() {return 0;}
	virtual int64_t getMicrosecondPosition() {return 0;}
	virtual ::javax::sound::midi::Receiver* getReceiver() {return nullptr;}
	virtual ::java::util::List* getReceivers() {return nullptr;}
	virtual ::javax::sound::midi::Transmitter* getTransmitter() {return nullptr;}
	virtual ::java::util::List* getTransmitters() {return nullptr;}
	virtual bool isOpen() {return false;}
	virtual void open() {}
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_MidiDevice_h_