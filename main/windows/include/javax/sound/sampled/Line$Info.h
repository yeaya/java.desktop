#ifndef _javax_sound_sampled_Line$Info_h_
#define _javax_sound_sampled_Line$Info_h_
//$ class javax.sound.sampled.Line$Info
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sound {
		namespace sampled {

class $import Line$Info : public ::java::lang::Object {
	$class(Line$Info, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Line$Info();
	void init$($Class* lineClass);
	virtual $Class* getLineClass();
	virtual bool matches(::javax::sound::sampled::Line$Info* info);
	virtual $String* toString() override;
	$Class* lineClass = nullptr;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_Line$Info_h_