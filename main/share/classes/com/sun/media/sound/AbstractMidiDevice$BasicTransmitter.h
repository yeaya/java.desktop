#ifndef _com_sun_media_sound_AbstractMidiDevice$BasicTransmitter_h_
#define _com_sun_media_sound_AbstractMidiDevice$BasicTransmitter_h_
//$ class com.sun.media.sound.AbstractMidiDevice$BasicTransmitter
//$ extends javax.sound.midi.MidiDeviceTransmitter

#include <javax/sound/midi/MidiDeviceTransmitter.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AbstractMidiDevice;
				class AbstractMidiDevice$TransmitterList;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiDevice;
			class Receiver;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AbstractMidiDevice$BasicTransmitter : public ::javax::sound::midi::MidiDeviceTransmitter {
	$class(AbstractMidiDevice$BasicTransmitter, $NO_CLASS_INIT, ::javax::sound::midi::MidiDeviceTransmitter)
public:
	AbstractMidiDevice$BasicTransmitter();
	void init$(::com::sun::media::sound::AbstractMidiDevice* this$0);
	virtual void close() override;
	virtual ::javax::sound::midi::MidiDevice* getMidiDevice() override;
	virtual ::javax::sound::midi::Receiver* getReceiver() override;
	virtual void setReceiver(::javax::sound::midi::Receiver* receiver) override;
	void setTransmitterList(::com::sun::media::sound::AbstractMidiDevice$TransmitterList* tlist);
	::com::sun::media::sound::AbstractMidiDevice* this$0 = nullptr;
	::javax::sound::midi::Receiver* receiver = nullptr;
	::com::sun::media::sound::AbstractMidiDevice$TransmitterList* tlist = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AbstractMidiDevice$BasicTransmitter_h_