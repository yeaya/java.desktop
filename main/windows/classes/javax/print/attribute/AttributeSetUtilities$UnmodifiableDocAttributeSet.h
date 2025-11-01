#ifndef _javax_print_attribute_AttributeSetUtilities$UnmodifiableDocAttributeSet_h_
#define _javax_print_attribute_AttributeSetUtilities$UnmodifiableDocAttributeSet_h_
//$ class javax.print.attribute.AttributeSetUtilities$UnmodifiableDocAttributeSet
//$ extends javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet
//$ implements javax.print.attribute.DocAttributeSet

#include <javax/print/attribute/AttributeSetUtilities$UnmodifiableAttributeSet.h>
#include <javax/print/attribute/DocAttributeSet.h>

namespace javax {
	namespace print {
		namespace attribute {

class AttributeSetUtilities$UnmodifiableDocAttributeSet : public ::javax::print::attribute::AttributeSetUtilities$UnmodifiableAttributeSet, public ::javax::print::attribute::DocAttributeSet {
	$class(AttributeSetUtilities$UnmodifiableDocAttributeSet, $NO_CLASS_INIT, ::javax::print::attribute::AttributeSetUtilities$UnmodifiableAttributeSet, ::javax::print::attribute::DocAttributeSet)
public:
	AttributeSetUtilities$UnmodifiableDocAttributeSet();
	virtual bool add(::javax::print::attribute::Attribute* attribute) override;
	virtual bool addAll(::javax::print::attribute::AttributeSet* attributes) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsKey($Class* category) override;
	virtual bool containsValue(::javax::print::attribute::Attribute* attribute) override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual ::javax::print::attribute::Attribute* get($Class* key) override;
	virtual int32_t hashCode() override;
	void init$(::javax::print::attribute::DocAttributeSet* attributeSet);
	virtual bool isEmpty() override;
	virtual bool remove($Class* category) override;
	virtual bool remove(::javax::print::attribute::Attribute* attribute) override;
	virtual int32_t size() override;
	virtual $Array<::javax::print::attribute::Attribute>* toArray() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xA7E25EC49EDFF7F4;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_AttributeSetUtilities$UnmodifiableDocAttributeSet_h_