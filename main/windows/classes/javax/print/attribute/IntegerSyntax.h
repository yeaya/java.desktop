#ifndef _javax_print_attribute_IntegerSyntax_h_
#define _javax_print_attribute_IntegerSyntax_h_
//$ class javax.print.attribute.IntegerSyntax
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>

namespace javax {
	namespace print {
		namespace attribute {

class $export IntegerSyntax : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(IntegerSyntax, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	IntegerSyntax();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t value);
	void init$(int32_t value, int32_t lowerBound, int32_t upperBound);
	virtual bool equals(Object$* object) override;
	virtual int32_t getValue();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x3294217C5491E217;
	int32_t value = 0;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_IntegerSyntax_h_