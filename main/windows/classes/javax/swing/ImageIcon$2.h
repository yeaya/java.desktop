#ifndef _javax_swing_ImageIcon$2_h_
#define _javax_swing_ImageIcon$2_h_
//$ class javax.swing.ImageIcon$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {

class ImageIcon$2 : public ::java::security::PrivilegedAction {
	$class(ImageIcon$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ImageIcon$2();
	void init$();
	virtual $Object* run() override;
};

	} // swing
} // javax

#endif // _javax_swing_ImageIcon$2_h_