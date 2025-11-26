#ifndef _javax_swing_text_html_StyleSheet$ResolvedStyle_h_
#define _javax_swing_text_html_StyleSheet$ResolvedStyle_h_
//$ class javax.swing.text.html.StyleSheet$ResolvedStyle
//$ extends javax.swing.text.html.MuxingAttributeSet
//$ implements javax.swing.text.Style

#include <java/lang/Array.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/html/MuxingAttributeSet.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import StyleSheet$ResolvedStyle : public ::javax::swing::text::html::MuxingAttributeSet, public ::javax::swing::text::Style {
	$class(StyleSheet$ResolvedStyle, $NO_CLASS_INIT, ::javax::swing::text::html::MuxingAttributeSet, ::javax::swing::text::Style)
public:
	StyleSheet$ResolvedStyle();
	virtual $Object* clone() override;
	virtual bool containsAttribute(Object$* name, Object$* value) override;
	virtual bool containsAttributes(::javax::swing::text::AttributeSet* attrs) override;
	virtual ::javax::swing::text::AttributeSet* copyAttributes() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $Object* getAttribute(Object$* key) override;
	virtual int32_t getAttributeCount() override;
	virtual ::java::util::Enumeration* getAttributeNames() override;
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	virtual int32_t hashCode() override;
	void init$($String* name, $Array<::javax::swing::text::AttributeSet>* attrs, int32_t extendedIndex);
	virtual void addAttribute(Object$* name, Object$* value) override;
	virtual void addAttributes(::javax::swing::text::AttributeSet* attributes) override;
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void addExtendedStyle(::javax::swing::text::Style* attr);
	virtual int32_t boundedIndexOf($String* string, char16_t search, int32_t start, int32_t end);
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual $String* getName() override;
	virtual void insertExtendedStyleAt(::javax::swing::text::Style* attr, int32_t index);
	virtual void insertStyle(::javax::swing::text::Style* style, int32_t specificity);
	virtual bool isDefined(Object$* key) override;
	virtual bool isEqual(::javax::swing::text::AttributeSet* attr) override;
	virtual bool matches($String* selector);
	virtual bool matches($String* selector, int32_t sCurrent, int32_t sLast, int32_t thisCurrent, int32_t thisLast);
	virtual void removeAttribute(Object$* name) override;
	virtual void removeAttributes(::java::util::Enumeration* names) override;
	virtual void removeAttributes(::javax::swing::text::AttributeSet* attributes) override;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void removeExtendedStyleAt(int32_t index);
	virtual void removeStyle(::javax::swing::text::Style* style);
	virtual void setResolveParent(::javax::swing::text::AttributeSet* parent) override;
	virtual $String* toString() override;
	$String* name = nullptr;
	int32_t extendedIndex = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_StyleSheet$ResolvedStyle_h_