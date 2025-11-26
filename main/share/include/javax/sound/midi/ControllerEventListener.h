#ifndef _javax_sound_midi_ControllerEventListener_h_
#define _javax_sound_midi_ControllerEventListener_h_
//$ interface javax.sound.midi.ControllerEventListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace sound {
		namespace midi {
			class ShortMessage;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $import ControllerEventListener : public ::java::util::EventListener {
	$interface(ControllerEventListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void controlChange(::javax::sound::midi::ShortMessage* event) {}
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_ControllerEventListener_h_