#ifndef _javax_print_attribute_standard_MultipleDocumentHandling_h_
#define _javax_print_attribute_standard_MultipleDocumentHandling_h_
//$ class javax.print.attribute.standard.MultipleDocumentHandling
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("SEPARATE_DOCUMENTS_COLLATED_COPIES")
#undef SEPARATE_DOCUMENTS_COLLATED_COPIES
#pragma push_macro("SEPARATE_DOCUMENTS_UNCOLLATED_COPIES")
#undef SEPARATE_DOCUMENTS_UNCOLLATED_COPIES
#pragma push_macro("SINGLE_DOCUMENT")
#undef SINGLE_DOCUMENT
#pragma push_macro("SINGLE_DOCUMENT_NEW_SHEET")
#undef SINGLE_DOCUMENT_NEW_SHEET

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export MultipleDocumentHandling : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(MultipleDocumentHandling, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	MultipleDocumentHandling();
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
	static const int64_t serialVersionUID = (int64_t)0x706309025FEFB59A;
	static ::javax::print::attribute::standard::MultipleDocumentHandling* SINGLE_DOCUMENT;
	static ::javax::print::attribute::standard::MultipleDocumentHandling* SEPARATE_DOCUMENTS_UNCOLLATED_COPIES;
	static ::javax::print::attribute::standard::MultipleDocumentHandling* SEPARATE_DOCUMENTS_COLLATED_COPIES;
	static ::javax::print::attribute::standard::MultipleDocumentHandling* SINGLE_DOCUMENT_NEW_SHEET;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::MultipleDocumentHandling>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("SEPARATE_DOCUMENTS_COLLATED_COPIES")
#pragma pop_macro("SEPARATE_DOCUMENTS_UNCOLLATED_COPIES")
#pragma pop_macro("SINGLE_DOCUMENT")
#pragma pop_macro("SINGLE_DOCUMENT_NEW_SHEET")

#endif // _javax_print_attribute_standard_MultipleDocumentHandling_h_