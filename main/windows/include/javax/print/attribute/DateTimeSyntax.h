#ifndef _javax_print_attribute_DateTimeSyntax_h_
#define _javax_print_attribute_DateTimeSyntax_h_
//$ class javax.print.attribute.DateTimeSyntax
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace util {
		class Date;
	}
}

namespace javax {
	namespace print {
		namespace attribute {

class $import DateTimeSyntax : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(DateTimeSyntax, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	DateTimeSyntax();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::util::Date* value);
	virtual bool equals(Object$* object) override;
	virtual ::java::util::Date* getValue();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xEC8F4A780274977A;
	::java::util::Date* value = nullptr;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_DateTimeSyntax_h_