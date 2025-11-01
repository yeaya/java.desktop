#ifndef _javax_print_attribute_HashDocAttributeSet_h_
#define _javax_print_attribute_HashDocAttributeSet_h_
//$ class javax.print.attribute.HashDocAttributeSet
//$ extends javax.print.attribute.HashAttributeSet
//$ implements javax.print.attribute.DocAttributeSet

#include <java/lang/Array.h>
#include <javax/print/attribute/DocAttributeSet.h>
#include <javax/print/attribute/HashAttributeSet.h>

namespace javax {
	namespace print {
		namespace attribute {
			class DocAttribute;
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {

class $export HashDocAttributeSet : public ::javax::print::attribute::HashAttributeSet, public ::javax::print::attribute::DocAttributeSet {
	$class(HashDocAttributeSet, $NO_CLASS_INIT, ::javax::print::attribute::HashAttributeSet, ::javax::print::attribute::DocAttributeSet)
public:
	HashDocAttributeSet();
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
	void init$(::javax::print::attribute::DocAttribute* attribute);
	void init$($Array<::javax::print::attribute::DocAttribute>* attributes);
	void init$(::javax::print::attribute::DocAttributeSet* attributes);
	virtual bool isEmpty() override;
	virtual bool remove($Class* category) override;
	virtual bool remove(::javax::print::attribute::Attribute* attribute) override;
	virtual int32_t size() override;
	virtual $Array<::javax::print::attribute::Attribute>* toArray() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xF056A3DD3987C130;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_HashDocAttributeSet_h_