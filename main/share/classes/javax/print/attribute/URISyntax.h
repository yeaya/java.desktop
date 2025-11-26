#ifndef _javax_print_attribute_URISyntax_h_
#define _javax_print_attribute_URISyntax_h_
//$ class javax.print.attribute.URISyntax
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace net {
		class URI;
	}
}

namespace javax {
	namespace print {
		namespace attribute {

class $export URISyntax : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(URISyntax, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	URISyntax();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::net::URI* uri);
	virtual bool equals(Object$* object) override;
	virtual ::java::net::URI* getURI();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static ::java::net::URI* verify(::java::net::URI* uri);
	static const int64_t serialVersionUID = (int64_t)0x9329452E67391572;
	::java::net::URI* uri = nullptr;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_URISyntax_h_