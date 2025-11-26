#ifndef _javax_sound_sampled_Control$Type_h_
#define _javax_sound_sampled_Control$Type_h_
//$ class javax.sound.sampled.Control$Type
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sound {
		namespace sampled {

class $export Control$Type : public ::java::lang::Object {
	$class(Control$Type, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Control$Type();
	void init$($String* name);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* name = nullptr;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_Control$Type_h_