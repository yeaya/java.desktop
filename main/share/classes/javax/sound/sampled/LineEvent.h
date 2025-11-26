#ifndef _javax_sound_sampled_LineEvent_h_
#define _javax_sound_sampled_LineEvent_h_
//$ class javax.sound.sampled.LineEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class Line;
			class LineEvent$Type;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export LineEvent : public ::java::util::EventObject {
	$class(LineEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	LineEvent();
	void init$(::javax::sound::sampled::Line* line, ::javax::sound::sampled::LineEvent$Type* type, int64_t position);
	int64_t getFramePosition();
	::javax::sound::sampled::Line* getLine();
	::javax::sound::sampled::LineEvent$Type* getType();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xEE50F7B6064F5126;
	::javax::sound::sampled::LineEvent$Type* type = nullptr;
	int64_t position = 0;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_LineEvent_h_