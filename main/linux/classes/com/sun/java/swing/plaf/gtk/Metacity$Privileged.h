#ifndef _com_sun_java_swing_plaf_gtk_Metacity$Privileged_h_
#define _com_sun_java_swing_plaf_gtk_Metacity$Privileged_h_
//$ class com.sun.java.swing.plaf.gtk.Metacity$Privileged
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

#pragma push_macro("GET_IMAGE")
#undef GET_IMAGE
#pragma push_macro("GET_THEME_DIR")
#undef GET_THEME_DIR
#pragma push_macro("GET_USER_THEME")
#undef GET_USER_THEME

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class Metacity$Privileged : public ::java::security::PrivilegedAction {
	$class(Metacity$Privileged, 0, ::java::security::PrivilegedAction)
public:
	Metacity$Privileged();
	void init$();
	virtual $Object* doPrivileged(int32_t type, Object$* arg);
	virtual $Object* run() override;
	static int32_t GET_THEME_DIR;
	static int32_t GET_USER_THEME;
	static int32_t GET_IMAGE;
	int32_t type = 0;
	$Object* arg = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("GET_IMAGE")
#pragma pop_macro("GET_THEME_DIR")
#pragma pop_macro("GET_USER_THEME")

#endif // _com_sun_java_swing_plaf_gtk_Metacity$Privileged_h_