#ifndef _javax_swing_text_html_HTMLEditorKit$1_h_
#define _javax_swing_text_html_HTMLEditorKit$1_h_
//$ class javax.swing.text.html.HTMLEditorKit$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class HTMLEditorKit$1 : public ::java::security::PrivilegedAction {
	$class(HTMLEditorKit$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	HTMLEditorKit$1();
	void init$($String* val$name);
	virtual $Object* run() override;
	$String* val$name = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$1_h_