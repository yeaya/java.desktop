#ifndef _com_sun_media_sound_ReferenceCountingDevice_h_
#define _com_sun_media_sound_ReferenceCountingDevice_h_
//$ interface com.sun.media.sound.ReferenceCountingDevice
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sound {
		namespace midi {
			class Receiver;
			class Transmitter;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ReferenceCountingDevice : public ::java::lang::Object {
	$interface(ReferenceCountingDevice, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::sound::midi::Receiver* getReceiverReferenceCounting() {return nullptr;}
	virtual ::javax::sound::midi::Transmitter* getTransmitterReferenceCounting() {return nullptr;}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ReferenceCountingDevice_h_