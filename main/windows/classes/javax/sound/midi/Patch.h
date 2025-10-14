#ifndef _javax_sound_midi_Patch_h_
#define _javax_sound_midi_Patch_h_
//$ class javax.sound.midi.Patch
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sound {
		namespace midi {

class $export Patch : public ::java::lang::Object {
	$class(Patch, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Patch();
	void init$(int32_t bank, int32_t program);
	virtual int32_t getBank();
	virtual int32_t getProgram();
	int32_t bank = 0;
	int32_t program = 0;
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_Patch_h_