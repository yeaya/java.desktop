#ifndef _javax_print_attribute_AttributeSetUtilities$UnmodifiablePrintJobAttributeSet_h_
#define _javax_print_attribute_AttributeSetUtilities$UnmodifiablePrintJobAttributeSet_h_
//$ class javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintJobAttributeSet
//$ extends javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet
//$ implements javax.print.attribute.PrintJobAttributeSet

#include <javax/print/attribute/AttributeSetUtilities$UnmodifiableAttributeSet.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>

namespace javax {
	namespace print {
		namespace attribute {

class AttributeSetUtilities$UnmodifiablePrintJobAttributeSet : public ::javax::print::attribute::AttributeSetUtilities$UnmodifiableAttributeSet, public ::javax::print::attribute::PrintJobAttributeSet {
	$class(AttributeSetUtilities$UnmodifiablePrintJobAttributeSet, $NO_CLASS_INIT, ::javax::print::attribute::AttributeSetUtilities$UnmodifiableAttributeSet, ::javax::print::attribute::PrintJobAttributeSet)
public:
	AttributeSetUtilities$UnmodifiablePrintJobAttributeSet();
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
	void init$(::javax::print::attribute::PrintJobAttributeSet* attributeSet);
	virtual bool isEmpty() override;
	virtual bool remove($Class* category) override;
	virtual bool remove(::javax::print::attribute::Attribute* attribute) override;
	virtual int32_t size() override;
	virtual $Array<::javax::print::attribute::Attribute>* toArray() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x90F2504CFE044000;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_AttributeSetUtilities$UnmodifiablePrintJobAttributeSet_h_