#ifndef _javax_swing_text_html_AccessibleHTML$IconElementInfo_h_
#define _javax_swing_text_html_AccessibleHTML$IconElementInfo_h_
//$ class javax.swing.text.html.AccessibleHTML$IconElementInfo
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

class AccessibleHTML$IconElementInfo : public ::javax::swing::text::html::AccessibleHTML$ElementInfo, public ::javax::accessibility::Accessible {
	$class(AccessibleHTML$IconElementInfo, $NO_CLASS_INIT, ::javax::swing::text::html::AccessibleHTML$ElementInfo, ::javax::accessibility::Accessible)
public:
	AccessibleHTML$IconElementInfo();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::html::AccessibleHTML* this$0, ::javax::swing::text::Element* element, ::javax::swing::text::html::AccessibleHTML$ElementInfo* parent);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	int32_t getImageSize(Object$* key);
	virtual void invalidate(bool first) override;
	virtual $String* toString() override;
	::javax::swing::text::html::AccessibleHTML* this$0 = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$IconElementInfo_h_