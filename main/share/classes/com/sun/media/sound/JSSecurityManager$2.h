#ifndef _com_sun_media_sound_JSSecurityManager$2_h_
#define _com_sun_media_sound_JSSecurityManager$2_h_
//$ class com.sun.media.sound.JSSecurityManager$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class JSSecurityManager$2 : public ::java::security::PrivilegedAction {
	$class(JSSecurityManager$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JSSecurityManager$2();
	void init$(::java::util::Iterator* val$ps);
	virtual $Object* run() override;
	::java::util::Iterator* val$ps = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_JSSecurityManager$2_h_