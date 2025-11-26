#ifndef _javax_sound_sampled_LineListener_h_
#define _javax_sound_sampled_LineListener_h_
//$ interface javax.sound.sampled.LineListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class LineEvent;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $import LineListener : public ::java::util::EventListener {
	$interface(LineListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void update(::javax::sound::sampled::LineEvent* event) {}
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_LineListener_h_