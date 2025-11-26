#ifndef _com_sun_media_sound_AutoConnectSequencer_h_
#define _com_sun_media_sound_AutoConnectSequencer_h_
//$ interface com.sun.media.sound.AutoConnectSequencer
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class AutoConnectSequencer : public ::java::lang::Object {
	$interface(AutoConnectSequencer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void setAutoConnect(::javax::sound::midi::Receiver* autoConnectReceiver) {}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AutoConnectSequencer_h_