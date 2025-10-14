#ifndef _TestObjectView$UserElement$1_h_
#define _TestObjectView$UserElement$1_h_
//$ class TestObjectView$UserElement$1
//$ extends javax.swing.text.AttributeSet

#include <javax/swing/text/AttributeSet.h>

class TestObjectView$UserElement;
namespace java {
	namespace util {
		class Enumeration;
	}
}

class TestObjectView$UserElement$1 : public ::javax::swing::text::AttributeSet {
	$class(TestObjectView$UserElement$1, $NO_CLASS_INIT, ::javax::swing::text::AttributeSet)
public:
	TestObjectView$UserElement$1();
	void init$(::TestObjectView$UserElement* this$0);
	virtual bool containsAttribute(Object$* name, Object$* value) override;
	virtual bool containsAttributes(::javax::swing::text::AttributeSet* attributes) override;
	virtual ::javax::swing::text::AttributeSet* copyAttributes() override;
	virtual $Object* getAttribute(Object$* key) override;
	virtual int32_t getAttributeCount() override;
	virtual ::java::util::Enumeration* getAttributeNames() override;
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	virtual bool isDefined(Object$* attrName) override;
	virtual bool isEqual(::javax::swing::text::AttributeSet* attr) override;
	::TestObjectView$UserElement* this$0 = nullptr;
};

#endif // _TestObjectView$UserElement$1_h_