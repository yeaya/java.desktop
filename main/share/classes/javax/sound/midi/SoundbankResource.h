#ifndef _javax_sound_midi_SoundbankResource_h_
#define _javax_sound_midi_SoundbankResource_h_
//$ class javax.sound.midi.SoundbankResource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sound {
		namespace midi {
			class Soundbank;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $export SoundbankResource : public ::java::lang::Object {
	$class(SoundbankResource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoundbankResource();
	void init$(::javax::sound::midi::Soundbank* soundBank, $String* name, $Class* dataClass);
	virtual $Object* getData() {return nullptr;}
	virtual $Class* getDataClass();
	virtual $String* getName();
	virtual ::javax::sound::midi::Soundbank* getSoundbank();
	::javax::sound::midi::Soundbank* soundBank = nullptr;
	$String* name = nullptr;
	$Class* dataClass = nullptr;
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_SoundbankResource_h_