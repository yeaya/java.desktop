#ifndef _com_sun_media_sound_SoftReceiver_h_
#define _com_sun_media_sound_SoftReceiver_h_
//$ class com.sun.media.sound.SoftReceiver
//$ extends javax.sound.midi.MidiDeviceReceiver

#include <javax/sound/midi/MidiDeviceReceiver.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftMainMixer;
				class SoftSynthesizer;
			}
		}
	}
}
namespace java {
	namespace util {
		class TreeMap;
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

class SoftReceiver : public ::javax::sound::midi::MidiDeviceReceiver {
	$class(SoftReceiver, $NO_CLASS_INIT, ::javax::sound::midi::MidiDeviceReceiver)
public:
	SoftReceiver();
	void init$(::com::sun::media::sound::SoftSynthesizer* synth);
	virtual void close() override;
	virtual ::javax::sound::midi::MidiDevice* getMidiDevice() override;
	virtual void send(::javax::sound::midi::MidiMessage* message, int64_t timeStamp) override;
	bool open = false;
	$Object* control_mutex = nullptr;
	::com::sun::media::sound::SoftSynthesizer* synth = nullptr;
	::java::util::TreeMap* midimessages = nullptr;
	::com::sun::media::sound::SoftMainMixer* mainmixer = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftReceiver_h_