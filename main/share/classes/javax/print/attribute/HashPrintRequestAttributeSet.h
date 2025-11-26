#ifndef _javax_print_attribute_HashPrintRequestAttributeSet_h_
#define _javax_print_attribute_HashPrintRequestAttributeSet_h_
//$ class javax.print.attribute.HashPrintRequestAttributeSet
//$ extends javax.print.attribute.HashAttributeSet
//$ implements javax.print.attribute.PrintRequestAttributeSet

#include <java/lang/Array.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>

namespace javax {
	namespace print {
		namespace attribute {
			class PrintRequestAttribute;
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {

class $export HashPrintRequestAttributeSet : public ::javax::print::attribute::HashAttributeSet, public ::javax::print::attribute::PrintRequestAttributeSet {
	$class(HashPrintRequestAttributeSet, $NO_CLASS_INIT, ::javax::print::attribute::HashAttributeSet, ::javax::print::attribute::PrintRequestAttributeSet)
public:
	HashPrintRequestAttributeSet();
	virtual bool add(::javax::print::attribute::Attribute* attribute) override;
	virtual bool addAll(::javax::print::attribute::AttributeSet* attributes) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsKey($Class* category) override;
	virtual bool containsValue(::javax::print::attribute::Attribute* attribute) override;
	virtual bool equals(Object$* object) override;
	virtual void finalize() override;
	virtual ::javax::print::attribute::Attribute* get($Class* category) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::print::attribute::PrintRequestAttribute* attribute);
	void init$($Array<::javax::print::attribute::PrintRequestAttribute>* attributes);
	void init$(::javax::print::attribute::PrintRequestAttributeSet* attributes);
	virtual bool isEmpty() override;
	virtual bool remove($Class* category) override;
	virtual bool remove(::javax::print::attribute::Attribute* attribute) override;
	virtual int32_t size() override;
	virtual $Array<::javax::print::attribute::Attribute>* toArray() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x20D14D4B85BB4DFD;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_HashPrintRequestAttributeSet_h_