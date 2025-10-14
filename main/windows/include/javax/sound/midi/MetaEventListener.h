#ifndef _javax_sound_midi_MetaEventListener_h_
#define _javax_sound_midi_MetaEventListener_h_
//$ interface javax.sound.midi.MetaEventListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace sound {
		namespace midi {
			class MetaMessage;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $import MetaEventListener : public ::java::util::EventListener {
	$interface(MetaEventListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void meta(::javax::sound::midi::MetaMessage* meta) {}
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_MetaEventListener_h_