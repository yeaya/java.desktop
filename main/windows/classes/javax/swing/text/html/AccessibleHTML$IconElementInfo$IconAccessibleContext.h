#ifndef _javax_swing_text_html_AccessibleHTML$IconElementInfo$IconAccessibleContext_h_
#define _javax_swing_text_html_AccessibleHTML$IconElementInfo$IconAccessibleContext_h_
//$ class javax.swing.text.html.AccessibleHTML$IconElementInfo$IconAccessibleContext
//$ extends javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext
//$ implements javax.accessibility.AccessibleIcon

#include <java/lang/Array.h>
#include <javax/accessibility/AccessibleIcon.h>
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
				class AccessibleHTML$ElementInfo;
				class AccessibleHTML$IconElementInfo;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$IconElementInfo$IconAccessibleContext : public ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext, public ::javax::accessibility::AccessibleIcon {
	$class(AccessibleHTML$IconElementInfo$IconAccessibleContext, $NO_CLASS_INIT, ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext, ::javax::accessibility::AccessibleIcon)
public:
	AccessibleHTML$IconElementInfo$IconAccessibleContext();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::html::AccessibleHTML$IconElementInfo* this$1, ::javax::swing::text::html::AccessibleHTML$ElementInfo* elementInfo);
	virtual $String* getAccessibleDescription() override;
	virtual $Array<::javax::accessibility::AccessibleIcon>* getAccessibleIcon() override;
	virtual $String* getAccessibleIconDescription() override;
	virtual int32_t getAccessibleIconHeight() override;
	virtual int32_t getAccessibleIconWidth() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual void setAccessibleIconDescription($String* description) override;
	virtual $String* toString() override;
	::javax::swing::text::html::AccessibleHTML$IconElementInfo* this$1 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$IconElementInfo$IconAccessibleContext_h_