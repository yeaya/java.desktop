#ifndef _javax_sound_midi_Track_h_
#define _javax_sound_midi_Track_h_
//$ class javax.sound.midi.Track
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class ArrayList;
		class HashSet;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiEvent;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $export Track : public ::java::lang::Object {
	$class(Track, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Track();
	void init$();
	virtual bool add(::javax::sound::midi::MidiEvent* event);
	virtual ::javax::sound::midi::MidiEvent* get(int32_t index);
	virtual bool remove(::javax::sound::midi::MidiEvent* event);
	virtual int32_t size();
	virtual int64_t ticks();
	::java::util::ArrayList* eventsList = nullptr;
	::java::util::HashSet* set = nullptr;
	::javax::sound::midi::MidiEvent* eotEvent = nullptr;
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_Track_h_