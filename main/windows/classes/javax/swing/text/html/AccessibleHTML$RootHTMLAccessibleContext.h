#ifndef _javax_swing_text_html_AccessibleHTML$RootHTMLAccessibleContext_h_
#define _javax_swing_text_html_AccessibleHTML$RootHTMLAccessibleContext_h_
//$ class javax.swing.text.html.AccessibleHTML$RootHTMLAccessibleContext
//$ extends javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext

#include <javax/swing/text/html/AccessibleHTML$HTMLAccessibleContext.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class AccessibleHTML;
				class AccessibleHTML$ElementInfo;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$RootHTMLAccessibleContext : public ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext {
	$class(AccessibleHTML$RootHTMLAccessibleContext, $NO_CLASS_INIT, ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext)
public:
	AccessibleHTML$RootHTMLAccessibleContext();
	void init$(::javax::swing::text::html::AccessibleHTML* this$0, ::javax::swing::text::html::AccessibleHTML$ElementInfo* elementInfo);
	virtual $String* getAccessibleDescription() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::text::html::AccessibleHTML* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$RootHTMLAccessibleContext_h_