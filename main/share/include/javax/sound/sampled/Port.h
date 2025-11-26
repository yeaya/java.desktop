#ifndef _javax_sound_sampled_Port_h_
#define _javax_sound_sampled_Port_h_
//$ interface javax.sound.sampled.Port
//$ extends javax.sound.sampled.Line

#include <javax/sound/sampled/Line.h>

namespace javax {
	namespace sound {
		namespace sampled {

class $import Port : public ::javax::sound::sampled::Line {
	$interface(Port, $NO_CLASS_INIT, ::javax::sound::sampled::Line)
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_Port_h_