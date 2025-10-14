#ifndef _com_sun_media_sound_JSSecurityManager$1_h_
#define _com_sun_media_sound_JSSecurityManager$1_h_
//$ class com.sun.media.sound.JSSecurityManager$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class JSSecurityManager$1 : public ::java::security::PrivilegedAction {
	$class(JSSecurityManager$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JSSecurityManager$1();
	void init$($Class* val$providerClass);
	virtual $Object* run() override;
	$Class* val$providerClass = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_JSSecurityManager$1_h_