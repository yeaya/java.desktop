#ifndef _javax_swing_text_html_AccessibleHTML$TextElementInfo_h_
#define _javax_swing_text_html_AccessibleHTML$TextElementInfo_h_
//$ class javax.swing.text.html.AccessibleHTML$TextElementInfo
//$ extends javax.swing.text.html.AccessibleHTML$ElementInfo
//$ implements javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>

namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class AccessibleHTML;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$TextElementInfo : public ::javax::swing::text::html::AccessibleHTML$ElementInfo, public ::javax::accessibility::Accessible {
	$class(AccessibleHTML$TextElementInfo, $NO_CLASS_INIT, ::javax::swing::text::html::AccessibleHTML$ElementInfo, ::javax::accessibility::Accessible)
public:
	AccessibleHTML$TextElementInfo();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::html::AccessibleHTML* this$0, ::javax::swing::text::Element* element, ::javax::swing::text::html::AccessibleHTML$ElementInfo* parent);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* toString() override;
	::javax::swing::text::html::AccessibleHTML* this$0 = nullptr;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$TextElementInfo_h_