#ifndef _javax_print_attribute_AttributeSetUtilities$SynchronizedPrintRequestAttributeSet_h_
#define _javax_print_attribute_AttributeSetUtilities$SynchronizedPrintRequestAttributeSet_h_
//$ class javax.print.attribute.AttributeSetUtilities$SynchronizedPrintRequestAttributeSet
//$ extends javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet
//$ implements javax.print.attribute.PrintRequestAttributeSet

#include <javax/print/attribute/AttributeSetUtilities$SynchronizedAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>

namespace javax {
	namespace print {
		namespace attribute {

class AttributeSetUtilities$SynchronizedPrintRequestAttributeSet : public ::javax::print::attribute::AttributeSetUtilities$SynchronizedAttributeSet, public ::javax::print::attribute::PrintRequestAttributeSet {
	$class(AttributeSetUtilities$SynchronizedPrintRequestAttributeSet, $NO_CLASS_INIT, ::javax::print::attribute::AttributeSetUtilities$SynchronizedAttributeSet, ::javax::print::attribute::PrintRequestAttributeSet)
public:
	AttributeSetUtilities$SynchronizedPrintRequestAttributeSet();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool add(::javax::print::attribute::Attribute* attribute) override;
	virtual bool addAll(::javax::print::attribute::AttributeSet* attributes) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsKey($Class* category) override;
	virtual bool containsValue(::javax::print::attribute::Attribute* attribute) override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual ::javax::print::attribute::Attribute* get($Class* category) override;
	virtual int32_t hashCode() override;
	void init$(::javax::print::attribute::PrintRequestAttributeSet* attributeSet);
	virtual bool isEmpty() override;
	virtual bool remove($Class* category) override;
	virtual bool remove(::javax::print::attribute::Attribute* attribute) override;
	virtual int32_t size() override;
	virtual $Array<::javax::print::attribute::Attribute>* toArray() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x4EB448069AD85303;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_AttributeSetUtilities$SynchronizedPrintRequestAttributeSet_h_