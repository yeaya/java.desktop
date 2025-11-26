#ifndef _javax_sound_midi_VoiceStatus_h_
#define _javax_sound_midi_VoiceStatus_h_
//$ class javax.sound.midi.VoiceStatus
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sound {
		namespace midi {

class $import VoiceStatus : public ::java::lang::Object {
	$class(VoiceStatus, $NO_CLASS_INIT, ::java::lang::Object)
public:
	VoiceStatus();
	void init$();
	bool active = false;
	int32_t channel = 0;
	int32_t bank = 0;
	int32_t program = 0;
	int32_t note = 0;
	int32_t volume = 0;
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_VoiceStatus_h_