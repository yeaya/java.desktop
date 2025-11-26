#ifndef _javax_print_attribute_standard_MediaName_h_
#define _javax_print_attribute_standard_MediaName_h_
//$ class javax.print.attribute.standard.MediaName
//$ extends javax.print.attribute.standard.Media

#include <java/lang/Array.h>
#include <javax/print/attribute/standard/Media.h>

#pragma push_macro("ISO_A4_TRANSPARENT")
#undef ISO_A4_TRANSPARENT
#pragma push_macro("ISO_A4_WHITE")
#undef ISO_A4_WHITE
#pragma push_macro("NA_LETTER_TRANSPARENT")
#undef NA_LETTER_TRANSPARENT
#pragma push_macro("NA_LETTER_WHITE")
#undef NA_LETTER_WHITE

namespace javax {
	namespace print {
		namespace attribute {
			class EnumSyntax;
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export MediaName : public ::javax::print::attribute::standard::Media {
	$class(MediaName, 0, ::javax::print::attribute::standard::Media)
public:
	MediaName();
	void init$(int32_t value);
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	virtual $StringArray* getStringTable() override;
	static const int64_t serialVersionUID = (int64_t)0x409331E8784A2E38;
	static ::javax::print::attribute::standard::MediaName* NA_LETTER_WHITE;
	static ::javax::print::attribute::standard::MediaName* NA_LETTER_TRANSPARENT;
	static ::javax::print::attribute::standard::MediaName* ISO_A4_WHITE;
	static ::javax::print::attribute::standard::MediaName* ISO_A4_TRANSPARENT;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::MediaName>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("ISO_A4_TRANSPARENT")
#pragma pop_macro("ISO_A4_WHITE")
#pragma pop_macro("NA_LETTER_TRANSPARENT")
#pragma pop_macro("NA_LETTER_WHITE")

#endif // _javax_print_attribute_standard_MediaName_h_