#ifndef _javax_print_attribute_standard_Compression_h_
#define _javax_print_attribute_standard_Compression_h_
//$ class javax.print.attribute.standard.Compression
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.DocAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/EnumSyntax.h>

#pragma push_macro("COMPRESS")
#undef COMPRESS
#pragma push_macro("DEFLATE")
#undef DEFLATE
#pragma push_macro("GZIP")
#undef GZIP
#pragma push_macro("NONE")
#undef NONE

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import Compression : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::DocAttribute {
	$class(Compression, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::DocAttribute)
public:
	Compression();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	static const int64_t serialVersionUID = (int64_t)0xB0AA0726E729C3D6;
	static ::javax::print::attribute::standard::Compression* NONE;
	static ::javax::print::attribute::standard::Compression* DEFLATE;
	static ::javax::print::attribute::standard::Compression* GZIP;
	static ::javax::print::attribute::standard::Compression* COMPRESS;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::Compression>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("COMPRESS")
#pragma pop_macro("DEFLATE")
#pragma pop_macro("GZIP")
#pragma pop_macro("NONE")

#endif // _javax_print_attribute_standard_Compression_h_