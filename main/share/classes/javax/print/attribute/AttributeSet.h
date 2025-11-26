#ifndef _javax_print_attribute_AttributeSet_h_
#define _javax_print_attribute_AttributeSet_h_
//$ interface javax.print.attribute.AttributeSet
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $export AttributeSet : public ::java::lang::Object {
	$interface(AttributeSet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool add(::javax::print::attribute::Attribute* attribute) {return false;}
	virtual bool addAll(::javax::print::attribute::AttributeSet* attributes) {return false;}
	virtual void clear() {}
	virtual bool containsKey($Class* category) {return false;}
	virtual bool containsValue(::javax::print::attribute::Attribute* attribute) {return false;}
	virtual bool equals(Object$* object) override;
	virtual ::javax::print::attribute::Attribute* get($Class* category) {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isEmpty() {return false;}
	virtual bool remove($Class* category) {return false;}
	virtual bool remove(::javax::print::attribute::Attribute* attribute) {return false;}
	virtual int32_t size() {return 0;}
	virtual $Array<::javax::print::attribute::Attribute>* toArray() {return nullptr;}
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_AttributeSet_h_