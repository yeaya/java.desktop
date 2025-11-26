#ifndef _javax_print_attribute_standard_ReferenceUriSchemesSupported_h_
#define _javax_print_attribute_standard_ReferenceUriSchemesSupported_h_
//$ class javax.print.attribute.standard.ReferenceUriSchemesSupported
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.Attribute

#include <java/lang/Array.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/EnumSyntax.h>

#pragma push_macro("FILE")
#undef FILE
#pragma push_macro("FTP")
#undef FTP
#pragma push_macro("GOPHER")
#undef GOPHER
#pragma push_macro("HTTP")
#undef HTTP
#pragma push_macro("HTTPS")
#undef HTTPS
#pragma push_macro("NEWS")
#undef NEWS
#pragma push_macro("NNTP")
#undef NNTP
#pragma push_macro("WAIS")
#undef WAIS

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export ReferenceUriSchemesSupported : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::Attribute {
	$class(ReferenceUriSchemesSupported, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::Attribute)
public:
	ReferenceUriSchemesSupported();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual $Class* getCategory() override;
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	virtual $String* getName() override;
	virtual $StringArray* getStringTable() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x834062258CF34D0B;
	static ::javax::print::attribute::standard::ReferenceUriSchemesSupported* FTP;
	static ::javax::print::attribute::standard::ReferenceUriSchemesSupported* HTTP;
	static ::javax::print::attribute::standard::ReferenceUriSchemesSupported* HTTPS;
	static ::javax::print::attribute::standard::ReferenceUriSchemesSupported* GOPHER;
	static ::javax::print::attribute::standard::ReferenceUriSchemesSupported* NEWS;
	static ::javax::print::attribute::standard::ReferenceUriSchemesSupported* NNTP;
	static ::javax::print::attribute::standard::ReferenceUriSchemesSupported* WAIS;
	static ::javax::print::attribute::standard::ReferenceUriSchemesSupported* FILE;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::ReferenceUriSchemesSupported>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("FILE")
#pragma pop_macro("FTP")
#pragma pop_macro("GOPHER")
#pragma pop_macro("HTTP")
#pragma pop_macro("HTTPS")
#pragma pop_macro("NEWS")
#pragma pop_macro("NNTP")
#pragma pop_macro("WAIS")

#endif // _javax_print_attribute_standard_ReferenceUriSchemesSupported_h_