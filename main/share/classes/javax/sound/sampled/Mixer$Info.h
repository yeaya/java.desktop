#ifndef _javax_sound_sampled_Mixer$Info_h_
#define _javax_sound_sampled_Mixer$Info_h_
//$ class javax.sound.sampled.Mixer$Info
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sound {
		namespace sampled {

class $export Mixer$Info : public ::java::lang::Object {
	$class(Mixer$Info, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Mixer$Info();
	void init$($String* name, $String* vendor, $String* description, $String* version);
	virtual bool equals(Object$* obj) override;
	$String* getDescription();
	$String* getName();
	$String* getVendor();
	$String* getVersion();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* vendor = nullptr;
	$String* description = nullptr;
	$String* version = nullptr;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_Mixer$Info_h_