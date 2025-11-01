#ifndef _javax_print_attribute_HashAttributeSet_h_
#define _javax_print_attribute_HashAttributeSet_h_
//$ class javax.print.attribute.HashAttributeSet
//$ extends javax.print.attribute.AttributeSet
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/print/attribute/AttributeSet.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
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

class $import HashAttributeSet : public ::javax::print::attribute::AttributeSet, public ::java::io::Serializable {
	$class(HashAttributeSet, $NO_CLASS_INIT, ::javax::print::attribute::AttributeSet, ::java::io::Serializable)
public:
	HashAttributeSet();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	void init$(::javax::print::attribute::Attribute* attribute);
	void init$($Array<::javax::print::attribute::Attribute>* attributes);
	void init$(::javax::print::attribute::AttributeSet* attributes);
	void init$($Class* interfaceName);
	void init$(::javax::print::attribute::Attribute* attribute, $Class* interfaceName);
	void init$($Array<::javax::print::attribute::Attribute>* attributes, $Class* interfaceName);
	void init$(::javax::print::attribute::AttributeSet* attributes, $Class* interfaceName);
	virtual bool add(::javax::print::attribute::Attribute* attribute) override;
	virtual bool addAll(::javax::print::attribute::AttributeSet* attributes) override;
	virtual void clear() override;
	virtual bool containsKey($Class* category) override;
	virtual bool containsValue(::javax::print::attribute::Attribute* attribute) override;
	virtual bool equals(Object$* object) override;
	virtual ::javax::print::attribute::Attribute* get($Class* category) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual bool remove($Class* category) override;
	virtual bool remove(::javax::print::attribute::Attribute* attribute) override;
	virtual int32_t size() override;
	virtual $Array<::javax::print::attribute::Attribute>* toArray() override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x49B674370AD3160D;
	$Class* myInterface = nullptr;
	::java::util::HashMap* attrMap = nullptr;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_HashAttributeSet_h_