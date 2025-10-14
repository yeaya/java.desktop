#ifndef _javax_print_attribute_HashPrintServiceAttributeSet_h_
#define _javax_print_attribute_HashPrintServiceAttributeSet_h_
//$ class javax.print.attribute.HashPrintServiceAttributeSet
//$ extends javax.print.attribute.HashAttributeSet
//$ implements javax.print.attribute.PrintServiceAttributeSet

#include <java/lang/Array.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>

namespace javax {
	namespace print {
		namespace attribute {
			class PrintServiceAttribute;
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {

class $import HashPrintServiceAttributeSet : public ::javax::print::attribute::HashAttributeSet, public ::javax::print::attribute::PrintServiceAttributeSet {
	$class(HashPrintServiceAttributeSet, $NO_CLASS_INIT, ::javax::print::attribute::HashAttributeSet, ::javax::print::attribute::PrintServiceAttributeSet)
public:
	HashPrintServiceAttributeSet();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	void init$(::javax::print::attribute::PrintServiceAttribute* attribute);
	void init$($Array<::javax::print::attribute::PrintServiceAttribute>* attributes);
	void init$(::javax::print::attribute::PrintServiceAttributeSet* attributes);
	virtual bool isEmpty() override;
	virtual bool remove($Class* category) override;
	virtual bool remove(::javax::print::attribute::Attribute* attribute) override;
	virtual int32_t size() override;
	virtual $Array<::javax::print::attribute::Attribute>* toArray() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x5C30568D8429FBFE;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_HashPrintServiceAttributeSet_h_