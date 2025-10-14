#ifndef _javax_print_attribute_AttributeSetUtilities$SynchronizedPrintJobAttributeSet_h_
#define _javax_print_attribute_AttributeSetUtilities$SynchronizedPrintJobAttributeSet_h_
//$ class javax.print.attribute.AttributeSetUtilities$SynchronizedPrintJobAttributeSet
//$ extends javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet
//$ implements javax.print.attribute.PrintJobAttributeSet

#include <javax/print/attribute/AttributeSetUtilities$SynchronizedAttributeSet.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>

namespace javax {
	namespace print {
		namespace attribute {

class AttributeSetUtilities$SynchronizedPrintJobAttributeSet : public ::javax::print::attribute::AttributeSetUtilities$SynchronizedAttributeSet, public ::javax::print::attribute::PrintJobAttributeSet {
	$class(AttributeSetUtilities$SynchronizedPrintJobAttributeSet, $NO_CLASS_INIT, ::javax::print::attribute::AttributeSetUtilities$SynchronizedAttributeSet, ::javax::print::attribute::PrintJobAttributeSet)
public:
	AttributeSetUtilities$SynchronizedPrintJobAttributeSet();
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
	void init$(::javax::print::attribute::PrintJobAttributeSet* attributeSet);
	virtual bool isEmpty() override;
	virtual bool remove($Class* category) override;
	virtual bool remove(::javax::print::attribute::Attribute* attribute) override;
	virtual int32_t size() override;
	virtual $Array<::javax::print::attribute::Attribute>* toArray() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x1D61C3E996486075;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_AttributeSetUtilities$SynchronizedPrintJobAttributeSet_h_