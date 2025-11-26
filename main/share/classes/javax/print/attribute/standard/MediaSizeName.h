#ifndef _javax_print_attribute_standard_MediaSizeName_h_
#define _javax_print_attribute_standard_MediaSizeName_h_
//$ class javax.print.attribute.standard.MediaSizeName
//$ extends javax.print.attribute.standard.Media

#include <java/lang/Array.h>
#include <javax/print/attribute/standard/Media.h>

#pragma push_macro("A")
#undef A
#pragma push_macro("B")
#undef B
#pragma push_macro("C")
#undef C
#pragma push_macro("D")
#undef D
#pragma push_macro("E")
#undef E
#pragma push_macro("EXECUTIVE")
#undef EXECUTIVE
#pragma push_macro("FOLIO")
#undef FOLIO
#pragma push_macro("INVOICE")
#undef INVOICE
#pragma push_macro("ISO_A0")
#undef ISO_A0
#pragma push_macro("ISO_A1")
#undef ISO_A1
#pragma push_macro("ISO_A10")
#undef ISO_A10
#pragma push_macro("ISO_A2")
#undef ISO_A2
#pragma push_macro("ISO_A3")
#undef ISO_A3
#pragma push_macro("ISO_A4")
#undef ISO_A4
#pragma push_macro("ISO_A5")
#undef ISO_A5
#pragma push_macro("ISO_A6")
#undef ISO_A6
#pragma push_macro("ISO_A7")
#undef ISO_A7
#pragma push_macro("ISO_A8")
#undef ISO_A8
#pragma push_macro("ISO_A9")
#undef ISO_A9
#pragma push_macro("ISO_B0")
#undef ISO_B0
#pragma push_macro("ISO_B1")
#undef ISO_B1
#pragma push_macro("ISO_B10")
#undef ISO_B10
#pragma push_macro("ISO_B2")
#undef ISO_B2
#pragma push_macro("ISO_B3")
#undef ISO_B3
#pragma push_macro("ISO_B4")
#undef ISO_B4
#pragma push_macro("ISO_B5")
#undef ISO_B5
#pragma push_macro("ISO_B6")
#undef ISO_B6
#pragma push_macro("ISO_B7")
#undef ISO_B7
#pragma push_macro("ISO_B8")
#undef ISO_B8
#pragma push_macro("ISO_B9")
#undef ISO_B9
#pragma push_macro("ISO_C0")
#undef ISO_C0
#pragma push_macro("ISO_C1")
#undef ISO_C1
#pragma push_macro("ISO_C2")
#undef ISO_C2
#pragma push_macro("ISO_C3")
#undef ISO_C3
#pragma push_macro("ISO_C4")
#undef ISO_C4
#pragma push_macro("ISO_C5")
#undef ISO_C5
#pragma push_macro("ISO_C6")
#undef ISO_C6
#pragma push_macro("ISO_DESIGNATED_LONG")
#undef ISO_DESIGNATED_LONG
#pragma push_macro("ITALY_ENVELOPE")
#undef ITALY_ENVELOPE
#pragma push_macro("JAPANESE_DOUBLE_POSTCARD")
#undef JAPANESE_DOUBLE_POSTCARD
#pragma push_macro("JAPANESE_POSTCARD")
#undef JAPANESE_POSTCARD
#pragma push_macro("JIS_B0")
#undef JIS_B0
#pragma push_macro("JIS_B1")
#undef JIS_B1
#pragma push_macro("JIS_B10")
#undef JIS_B10
#pragma push_macro("JIS_B2")
#undef JIS_B2
#pragma push_macro("JIS_B3")
#undef JIS_B3
#pragma push_macro("JIS_B4")
#undef JIS_B4
#pragma push_macro("JIS_B5")
#undef JIS_B5
#pragma push_macro("JIS_B6")
#undef JIS_B6
#pragma push_macro("JIS_B7")
#undef JIS_B7
#pragma push_macro("JIS_B8")
#undef JIS_B8
#pragma push_macro("JIS_B9")
#undef JIS_B9
#pragma push_macro("LEDGER")
#undef LEDGER
#pragma push_macro("MONARCH_ENVELOPE")
#undef MONARCH_ENVELOPE
#pragma push_macro("NA_5X7")
#undef NA_5X7
#pragma push_macro("NA_6X9_ENVELOPE")
#undef NA_6X9_ENVELOPE
#pragma push_macro("NA_7X9_ENVELOPE")
#undef NA_7X9_ENVELOPE
#pragma push_macro("NA_9X11_ENVELOPE")
#undef NA_9X11_ENVELOPE
#pragma push_macro("NA_9X12_ENVELOPE")
#undef NA_9X12_ENVELOPE
#pragma push_macro("NA_LEGAL")
#undef NA_LEGAL
#pragma push_macro("NA_LETTER")
#undef NA_LETTER
#pragma push_macro("NA_NUMBER_10_ENVELOPE")
#undef NA_NUMBER_10_ENVELOPE
#pragma push_macro("NA_NUMBER_11_ENVELOPE")
#undef NA_NUMBER_11_ENVELOPE
#pragma push_macro("NA_NUMBER_12_ENVELOPE")
#undef NA_NUMBER_12_ENVELOPE
#pragma push_macro("NA_NUMBER_14_ENVELOPE")
#undef NA_NUMBER_14_ENVELOPE
#pragma push_macro("NA_NUMBER_9_ENVELOPE")
#undef NA_NUMBER_9_ENVELOPE
#pragma push_macro("PERSONAL_ENVELOPE")
#undef PERSONAL_ENVELOPE
#pragma push_macro("QUARTO")
#undef QUARTO
#pragma push_macro("TABLOID")
#undef TABLOID

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

class $export MediaSizeName : public ::javax::print::attribute::standard::Media {
	$class(MediaSizeName, 0, ::javax::print::attribute::standard::Media)
public:
	MediaSizeName();
	void init$(int32_t value);
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	virtual $StringArray* getStringTable() override;
	static const int64_t serialVersionUID = (int64_t)0x2690465BB39C819B;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_A0;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_A1;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_A2;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_A3;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_A4;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_A5;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_A6;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_A7;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_A8;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_A9;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_A10;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_B0;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_B1;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_B2;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_B3;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_B4;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_B5;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_B6;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_B7;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_B8;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_B9;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_B10;
	static ::javax::print::attribute::standard::MediaSizeName* JIS_B0;
	static ::javax::print::attribute::standard::MediaSizeName* JIS_B1;
	static ::javax::print::attribute::standard::MediaSizeName* JIS_B2;
	static ::javax::print::attribute::standard::MediaSizeName* JIS_B3;
	static ::javax::print::attribute::standard::MediaSizeName* JIS_B4;
	static ::javax::print::attribute::standard::MediaSizeName* JIS_B5;
	static ::javax::print::attribute::standard::MediaSizeName* JIS_B6;
	static ::javax::print::attribute::standard::MediaSizeName* JIS_B7;
	static ::javax::print::attribute::standard::MediaSizeName* JIS_B8;
	static ::javax::print::attribute::standard::MediaSizeName* JIS_B9;
	static ::javax::print::attribute::standard::MediaSizeName* JIS_B10;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_C0;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_C1;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_C2;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_C3;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_C4;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_C5;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_C6;
	static ::javax::print::attribute::standard::MediaSizeName* NA_LETTER;
	static ::javax::print::attribute::standard::MediaSizeName* NA_LEGAL;
	static ::javax::print::attribute::standard::MediaSizeName* EXECUTIVE;
	static ::javax::print::attribute::standard::MediaSizeName* LEDGER;
	static ::javax::print::attribute::standard::MediaSizeName* TABLOID;
	static ::javax::print::attribute::standard::MediaSizeName* INVOICE;
	static ::javax::print::attribute::standard::MediaSizeName* FOLIO;
	static ::javax::print::attribute::standard::MediaSizeName* QUARTO;
	static ::javax::print::attribute::standard::MediaSizeName* JAPANESE_POSTCARD;
	static ::javax::print::attribute::standard::MediaSizeName* JAPANESE_DOUBLE_POSTCARD;
	static ::javax::print::attribute::standard::MediaSizeName* A;
	static ::javax::print::attribute::standard::MediaSizeName* B;
	static ::javax::print::attribute::standard::MediaSizeName* C;
	static ::javax::print::attribute::standard::MediaSizeName* D;
	static ::javax::print::attribute::standard::MediaSizeName* E;
	static ::javax::print::attribute::standard::MediaSizeName* ISO_DESIGNATED_LONG;
	static ::javax::print::attribute::standard::MediaSizeName* ITALY_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* MONARCH_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* PERSONAL_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_NUMBER_9_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_NUMBER_10_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_NUMBER_11_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_NUMBER_12_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_NUMBER_14_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_6X9_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_7X9_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_9X11_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_9X12_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_10X13_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_10X14_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_10X15_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSizeName* NA_5X7;
	static ::javax::print::attribute::standard::MediaSizeName* NA_8X10;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::MediaSizeName>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("A")
#pragma pop_macro("B")
#pragma pop_macro("C")
#pragma pop_macro("D")
#pragma pop_macro("E")
#pragma pop_macro("EXECUTIVE")
#pragma pop_macro("FOLIO")
#pragma pop_macro("INVOICE")
#pragma pop_macro("ISO_A0")
#pragma pop_macro("ISO_A1")
#pragma pop_macro("ISO_A10")
#pragma pop_macro("ISO_A2")
#pragma pop_macro("ISO_A3")
#pragma pop_macro("ISO_A4")
#pragma pop_macro("ISO_A5")
#pragma pop_macro("ISO_A6")
#pragma pop_macro("ISO_A7")
#pragma pop_macro("ISO_A8")
#pragma pop_macro("ISO_A9")
#pragma pop_macro("ISO_B0")
#pragma pop_macro("ISO_B1")
#pragma pop_macro("ISO_B10")
#pragma pop_macro("ISO_B2")
#pragma pop_macro("ISO_B3")
#pragma pop_macro("ISO_B4")
#pragma pop_macro("ISO_B5")
#pragma pop_macro("ISO_B6")
#pragma pop_macro("ISO_B7")
#pragma pop_macro("ISO_B8")
#pragma pop_macro("ISO_B9")
#pragma pop_macro("ISO_C0")
#pragma pop_macro("ISO_C1")
#pragma pop_macro("ISO_C2")
#pragma pop_macro("ISO_C3")
#pragma pop_macro("ISO_C4")
#pragma pop_macro("ISO_C5")
#pragma pop_macro("ISO_C6")
#pragma pop_macro("ISO_DESIGNATED_LONG")
#pragma pop_macro("ITALY_ENVELOPE")
#pragma pop_macro("JAPANESE_DOUBLE_POSTCARD")
#pragma pop_macro("JAPANESE_POSTCARD")
#pragma pop_macro("JIS_B0")
#pragma pop_macro("JIS_B1")
#pragma pop_macro("JIS_B10")
#pragma pop_macro("JIS_B2")
#pragma pop_macro("JIS_B3")
#pragma pop_macro("JIS_B4")
#pragma pop_macro("JIS_B5")
#pragma pop_macro("JIS_B6")
#pragma pop_macro("JIS_B7")
#pragma pop_macro("JIS_B8")
#pragma pop_macro("JIS_B9")
#pragma pop_macro("LEDGER")
#pragma pop_macro("MONARCH_ENVELOPE")
#pragma pop_macro("NA_5X7")
#pragma pop_macro("NA_6X9_ENVELOPE")
#pragma pop_macro("NA_7X9_ENVELOPE")
#pragma pop_macro("NA_9X11_ENVELOPE")
#pragma pop_macro("NA_9X12_ENVELOPE")
#pragma pop_macro("NA_LEGAL")
#pragma pop_macro("NA_LETTER")
#pragma pop_macro("NA_NUMBER_10_ENVELOPE")
#pragma pop_macro("NA_NUMBER_11_ENVELOPE")
#pragma pop_macro("NA_NUMBER_12_ENVELOPE")
#pragma pop_macro("NA_NUMBER_14_ENVELOPE")
#pragma pop_macro("NA_NUMBER_9_ENVELOPE")
#pragma pop_macro("PERSONAL_ENVELOPE")
#pragma pop_macro("QUARTO")
#pragma pop_macro("TABLOID")

#endif // _javax_print_attribute_standard_MediaSizeName_h_