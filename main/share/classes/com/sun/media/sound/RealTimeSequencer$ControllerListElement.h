#ifndef _com_sun_media_sound_RealTimeSequencer$ControllerListElement_h_
#define _com_sun_media_sound_RealTimeSequencer$ControllerListElement_h_
//$ class com.sun.media.sound.RealTimeSequencer$ControllerListElement
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class RealTimeSequencer;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class ControllerEventListener;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RealTimeSequencer$ControllerListElement : public ::java::lang::Object {
	$class(RealTimeSequencer$ControllerListElement, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RealTimeSequencer$ControllerListElement();
	void init$(::com::sun::media::sound::RealTimeSequencer* this$0, ::javax::sound::midi::ControllerEventListener* listener, $ints* controllers);
	void addControllers($ints* c);
	$ints* getControllers();
	void removeControllers($ints* c);
	::com::sun::media::sound::RealTimeSequencer* this$0 = nullptr;
	$ints* controllers = nullptr;
	::javax::sound::midi::ControllerEventListener* listener = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RealTimeSequencer$ControllerListElement_h_