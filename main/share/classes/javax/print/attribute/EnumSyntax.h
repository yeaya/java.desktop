#ifndef _javax_print_attribute_EnumSyntax_h_
#define _javax_print_attribute_EnumSyntax_h_
//$ class javax.print.attribute.EnumSyntax
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace javax {
	namespace print {
		namespace attribute {

class $export EnumSyntax : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(EnumSyntax, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	EnumSyntax();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	void init$(int32_t value);
	virtual $Object* clone() override;
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable();
	virtual int32_t getOffset();
	virtual $StringArray* getStringTable();
	virtual int32_t getValue();
	virtual int32_t hashCode() override;
	virtual $Object* readResolve();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD9FB4365813C7E26;
	int32_t value = 0;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_EnumSyntax_h_