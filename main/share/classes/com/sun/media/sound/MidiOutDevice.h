#ifndef _com_sun_media_sound_MidiOutDevice_h_
#define _com_sun_media_sound_MidiOutDevice_h_
//$ class com.sun.media.sound.MidiOutDevice
//$ extends com.sun.media.sound.AbstractMidiDevice

#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AbstractMidiDeviceProvider$Info;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Receiver;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class MidiOutDevice : public ::com::sun::media::sound::AbstractMidiDevice {
	$class(MidiOutDevice, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractMidiDevice)
public:
	MidiOutDevice();
	void init$(::com::sun::media::sound::AbstractMidiDeviceProvider$Info* info);
	virtual ::javax::sound::midi::Receiver* createReceiver() override;
	virtual int64_t getMicrosecondPosition() override;
	virtual bool hasReceivers() override;
	virtual void implClose() override;
	virtual void implOpen() override;
	void nClose(int64_t id);
	int64_t nGetTimeStamp(int64_t id);
	int64_t nOpen(int32_t index);
	void nSendLongMessage(int64_t id, $bytes* data, int32_t size, int64_t timeStamp);
	void nSendShortMessage(int64_t id, int32_t packedMsg, int64_t timeStamp);
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_MidiOutDevice_h_