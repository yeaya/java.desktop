#ifndef _javax_sound_sampled_LineEvent$Type_h_
#define _javax_sound_sampled_LineEvent$Type_h_
//$ class javax.sound.sampled.LineEvent$Type
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CLOSE")
#undef CLOSE
#pragma push_macro("OPEN")
#undef OPEN
#pragma push_macro("START")
#undef START
#pragma push_macro("STOP")
#undef STOP

namespace javax {
	namespace sound {
		namespace sampled {

class $import LineEvent$Type : public ::java::lang::Object {
	$class(LineEvent$Type, 0, ::java::lang::Object)
public:
	LineEvent$Type();
	void init$($String* name);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* name = nullptr;
	static ::javax::sound::sampled::LineEvent$Type* OPEN;
	static ::javax::sound::sampled::LineEvent$Type* CLOSE;
	static ::javax::sound::sampled::LineEvent$Type* START;
	static ::javax::sound::sampled::LineEvent$Type* STOP;
};

		} // sampled
	} // sound
} // javax

#pragma pop_macro("CLOSE")
#pragma pop_macro("OPEN")
#pragma pop_macro("START")
#pragma pop_macro("STOP")

#endif // _javax_sound_sampled_LineEvent$Type_h_