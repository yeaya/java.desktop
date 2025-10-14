#ifndef _javax_sound_sampled_Port$Info_h_
#define _javax_sound_sampled_Port$Info_h_
//$ class javax.sound.sampled.Port$Info
//$ extends javax.sound.sampled.Line$Info

#include <javax/sound/sampled/Line$Info.h>

#pragma push_macro("COMPACT_DISC")
#undef COMPACT_DISC
#pragma push_macro("HEADPHONE")
#undef HEADPHONE
#pragma push_macro("LINE_IN")
#undef LINE_IN
#pragma push_macro("LINE_OUT")
#undef LINE_OUT
#pragma push_macro("MICROPHONE")
#undef MICROPHONE
#pragma push_macro("SPEAKER")
#undef SPEAKER

namespace javax {
	namespace sound {
		namespace sampled {

class $export Port$Info : public ::javax::sound::sampled::Line$Info {
	$class(Port$Info, 0, ::javax::sound::sampled::Line$Info)
public:
	Port$Info();
	void init$($Class* lineClass, $String* name, bool isSource);
	virtual bool equals(Object$* obj) override;
	virtual $String* getName();
	virtual int32_t hashCode() override;
	virtual bool isSource();
	virtual bool matches(::javax::sound::sampled::Line$Info* info) override;
	virtual $String* toString() override;
	static ::javax::sound::sampled::Port$Info* MICROPHONE;
	static ::javax::sound::sampled::Port$Info* LINE_IN;
	static ::javax::sound::sampled::Port$Info* COMPACT_DISC;
	static ::javax::sound::sampled::Port$Info* SPEAKER;
	static ::javax::sound::sampled::Port$Info* HEADPHONE;
	static ::javax::sound::sampled::Port$Info* LINE_OUT;
	$String* name = nullptr;
	bool isSource$ = false;
};

		} // sampled
	} // sound
} // javax

#pragma pop_macro("COMPACT_DISC")
#pragma pop_macro("HEADPHONE")
#pragma pop_macro("LINE_IN")
#pragma pop_macro("LINE_OUT")
#pragma pop_macro("MICROPHONE")
#pragma pop_macro("SPEAKER")

#endif // _javax_sound_sampled_Port$Info_h_