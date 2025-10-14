#ifndef _javax_swing_text_StyleContext$SmallAttributeSet_h_
#define _javax_swing_text_StyleContext$SmallAttributeSet_h_
//$ class javax.swing.text.StyleContext$SmallAttributeSet
//$ extends javax.swing.text.AttributeSet

#include <java/lang/Array.h>
#include <javax/swing/text/AttributeSet.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class StyleContext;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import StyleContext$SmallAttributeSet : public ::javax::swing::text::AttributeSet {
	$class(StyleContext$SmallAttributeSet, $NO_CLASS_INIT, ::javax::swing::text::AttributeSet)
public:
	StyleContext$SmallAttributeSet();
	void init$(::javax::swing::text::StyleContext* this$0, $ObjectArray* attributes);
	void init$(::javax::swing::text::StyleContext* this$0, ::javax::swing::text::AttributeSet* attrs);
	virtual $Object* clone() override;
	virtual bool containsAttribute(Object$* name, Object$* value) override;
	virtual bool containsAttributes(::javax::swing::text::AttributeSet* attrs) override;
	virtual ::javax::swing::text::AttributeSet* copyAttributes() override;
	virtual bool equals(Object$* obj) override;
	virtual $Object* getAttribute(Object$* key) override;
	virtual int32_t getAttributeCount() override;
	virtual ::java::util::Enumeration* getAttributeNames() override;
	virtual $Object* getLocalAttribute(Object$* nm);
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	virtual int32_t hashCode() override;
	virtual bool isDefined(Object$* key) override;
	virtual bool isEqual(::javax::swing::text::AttributeSet* attr) override;
	virtual $String* toString() override;
	void updateResolveParent();
	::javax::swing::text::StyleContext* this$0 = nullptr;
	$ObjectArray* attributes = nullptr;
	::javax::swing::text::AttributeSet* resolveParent = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyleContext$SmallAttributeSet_h_