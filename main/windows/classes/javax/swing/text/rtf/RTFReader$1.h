#ifndef _javax_swing_text_rtf_RTFReader$1_h_
#define _javax_swing_text_rtf_RTFReader$1_h_
//$ class javax.swing.text.rtf.RTFReader$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

class RTFReader$1 : public ::java::security::PrivilegedAction {
	$class(RTFReader$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	RTFReader$1();
	void init$($String* val$name);
	virtual $Object* run() override;
	$String* val$name = nullptr;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFReader$1_h_