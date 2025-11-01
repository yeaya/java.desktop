#ifndef _javax_print_attribute_TextSyntax_h_
#define _javax_print_attribute_TextSyntax_h_
//$ class javax.print.attribute.TextSyntax
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace javax {
	namespace print {
		namespace attribute {

class $export TextSyntax : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(TextSyntax, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	TextSyntax();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* value, ::java::util::Locale* locale);
	virtual bool equals(Object$* object) override;
	virtual ::java::util::Locale* getLocale();
	virtual $String* getValue();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static $String* verify($String* value);
	static ::java::util::Locale* verify(::java::util::Locale* locale);
	static const int64_t serialVersionUID = (int64_t)0x8F2A220D62B3BA9A;
	$String* value = nullptr;
	::java::util::Locale* locale = nullptr;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_TextSyntax_h_