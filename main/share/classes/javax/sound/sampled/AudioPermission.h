#ifndef _javax_sound_sampled_AudioPermission_h_
#define _javax_sound_sampled_AudioPermission_h_
//$ class javax.sound.sampled.AudioPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace javax {
	namespace sound {
		namespace sampled {

class $export AudioPermission : public ::java::security::BasicPermission {
	$class(AudioPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	AudioPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0xB36BEF9A0DBECB5A;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_AudioPermission_h_