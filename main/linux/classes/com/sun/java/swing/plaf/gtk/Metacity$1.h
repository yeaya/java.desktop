#ifndef _com_sun_java_swing_plaf_gtk_Metacity$1_h_
#define _com_sun_java_swing_plaf_gtk_Metacity$1_h_
//$ class com.sun.java.swing.plaf.gtk.Metacity$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class URL;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class Metacity$1 : public ::java::security::PrivilegedAction {
	$class(Metacity$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Metacity$1();
	void init$(::java::net::URL* val$xmlFile);
	virtual $Object* run() override;
	::java::net::URL* val$xmlFile = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_Metacity$1_h_