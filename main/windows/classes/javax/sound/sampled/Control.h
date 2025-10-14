#ifndef _javax_sound_sampled_Control_h_
#define _javax_sound_sampled_Control_h_
//$ class javax.sound.sampled.Control
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class Control$Type;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export Control : public ::java::lang::Object {
	$class(Control, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Control();
	void init$(::javax::sound::sampled::Control$Type* type);
	virtual ::javax::sound::sampled::Control$Type* getType();
	virtual $String* toString() override;
	::javax::sound::sampled::Control$Type* type = nullptr;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_Control_h_