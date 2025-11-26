#ifndef _javax_print_attribute_standard_MediaSize$Other_h_
#define _javax_print_attribute_standard_MediaSize$Other_h_
//$ class javax.print.attribute.standard.MediaSize$Other
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EXECUTIVE")
#undef EXECUTIVE
#pragma push_macro("FOLIO")
#undef FOLIO
#pragma push_macro("INVOICE")
#undef INVOICE
#pragma push_macro("ITALY_ENVELOPE")
#undef ITALY_ENVELOPE
#pragma push_macro("JAPANESE_DOUBLE_POSTCARD")
#undef JAPANESE_DOUBLE_POSTCARD
#pragma push_macro("JAPANESE_POSTCARD")
#undef JAPANESE_POSTCARD
#pragma push_macro("LEDGER")
#undef LEDGER
#pragma push_macro("MONARCH_ENVELOPE")
#undef MONARCH_ENVELOPE
#pragma push_macro("PERSONAL_ENVELOPE")
#undef PERSONAL_ENVELOPE
#pragma push_macro("QUARTO")
#undef QUARTO
#pragma push_macro("TABLOID")
#undef TABLOID

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class MediaSize;
			}
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import MediaSize$Other : public ::java::lang::Object {
	$class(MediaSize$Other, 0, ::java::lang::Object)
public:
	MediaSize$Other();
	void init$();
	static ::javax::print::attribute::standard::MediaSize* EXECUTIVE;
	static ::javax::print::attribute::standard::MediaSize* LEDGER;
	static ::javax::print::attribute::standard::MediaSize* TABLOID;
	static ::javax::print::attribute::standard::MediaSize* INVOICE;
	static ::javax::print::attribute::standard::MediaSize* FOLIO;
	static ::javax::print::attribute::standard::MediaSize* QUARTO;
	static ::javax::print::attribute::standard::MediaSize* ITALY_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* MONARCH_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* PERSONAL_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* JAPANESE_POSTCARD;
	static ::javax::print::attribute::standard::MediaSize* JAPANESE_DOUBLE_POSTCARD;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("EXECUTIVE")
#pragma pop_macro("FOLIO")
#pragma pop_macro("INVOICE")
#pragma pop_macro("ITALY_ENVELOPE")
#pragma pop_macro("JAPANESE_DOUBLE_POSTCARD")
#pragma pop_macro("JAPANESE_POSTCARD")
#pragma pop_macro("LEDGER")
#pragma pop_macro("MONARCH_ENVELOPE")
#pragma pop_macro("PERSONAL_ENVELOPE")
#pragma pop_macro("QUARTO")
#pragma pop_macro("TABLOID")

#endif // _javax_print_attribute_standard_MediaSize$Other_h_