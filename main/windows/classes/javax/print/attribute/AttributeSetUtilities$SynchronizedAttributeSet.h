#ifndef _javax_print_attribute_AttributeSetUtilities$SynchronizedAttributeSet_h_
#define _javax_print_attribute_AttributeSetUtilities$SynchronizedAttributeSet_h_
//$ class javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet
//$ extends javax.print.attribute.AttributeSet
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/print/attribute/AttributeSet.h>

namespace javax {
	namespace print {
		namespace attribute {
			class Attribute;
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {

class AttributeSetUtilities$SynchronizedAttributeSet : public ::javax::print::attribute::AttributeSet, public ::java::io::Serializable {
	$class(AttributeSetUtilities$SynchronizedAttributeSet, $NO_CLASS_INIT, ::javax::print::attribute::AttributeSet, ::java::io::Serializable)
public:
	AttributeSetUtilities$SynchronizedAttributeSet();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::javax::print::attribute::AttributeSet* attributeSet);
	virtual bool add(::javax::print::attribute::Attribute* attribute) override;
	virtual bool addAll(::javax::print::attribute::AttributeSet* attributes) override;
	virtual void clear() override;
	virtual bool containsKey($Class* category) override;
	virtual bool containsValue(::javax::print::attribute::Attribute* attribute) override;
	virtual bool equals(Object$* o) override;
	virtual ::javax::print::attribute::Attribute* get($Class* category) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual bool remove($Class* category) override;
	virtual bool remove(::javax::print::attribute::Attribute* attribute) override;
	virtual int32_t size() override;
	virtual $Array<::javax::print::attribute::Attribute>* toArray() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x74190C0A0D3AB6BD;
	::javax::print::attribute::AttributeSet* attrset = nullptr;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_AttributeSetUtilities$SynchronizedAttributeSet_h_