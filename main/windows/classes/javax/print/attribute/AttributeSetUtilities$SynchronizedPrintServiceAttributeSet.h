#ifndef _javax_print_attribute_AttributeSetUtilities$SynchronizedPrintServiceAttributeSet_h_
#define _javax_print_attribute_AttributeSetUtilities$SynchronizedPrintServiceAttributeSet_h_
//$ class javax.print.attribute.AttributeSetUtilities$SynchronizedPrintServiceAttributeSet
//$ extends javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet
//$ implements javax.print.attribute.PrintServiceAttributeSet

#include <javax/print/attribute/AttributeSetUtilities$SynchronizedAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>

namespace javax {
	namespace print {
		namespace attribute {

class AttributeSetUtilities$SynchronizedPrintServiceAttributeSet : public ::javax::print::attribute::AttributeSetUtilities$SynchronizedAttributeSet, public ::javax::print::attribute::PrintServiceAttributeSet {
	$class(AttributeSetUtilities$SynchronizedPrintServiceAttributeSet, $NO_CLASS_INIT, ::javax::print::attribute::AttributeSetUtilities$SynchronizedAttributeSet, ::javax::print::attribute::PrintServiceAttributeSet)
public:
	AttributeSetUtilities$SynchronizedPrintServiceAttributeSet();
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
	void init$(::javax::print::attribute::PrintServiceAttributeSet* attributeSet);
	virtual bool isEmpty() override;
	virtual bool remove($Class* category) override;
	virtual bool remove(::javax::print::attribute::Attribute* attribute) override;
	virtual int32_t size() override;
	virtual $Array<::javax::print::attribute::Attribute>* toArray() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD8B75075C6D744BF;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_AttributeSetUtilities$SynchronizedPrintServiceAttributeSet_h_