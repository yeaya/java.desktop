#ifndef _javax_print_attribute_standard_MediaSize$NA_h_
#define _javax_print_attribute_standard_MediaSize$NA_h_
//$ class javax.print.attribute.standard.MediaSize$NA
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LEGAL")
#undef LEGAL
#pragma push_macro("LETTER")
#undef LETTER
#pragma push_macro("NA_5X7")
#undef NA_5X7
#pragma push_macro("NA_6X9_ENVELOPE")
#undef NA_6X9_ENVELOPE
#pragma push_macro("NA_7X9_ENVELOPE")
#undef NA_7X9_ENVELOPE
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

class $import MediaSize$NA : public ::java::lang::Object {
	$class(MediaSize$NA, 0, ::java::lang::Object)
public:
	MediaSize$NA();
	void init$();
	static ::javax::print::attribute::standard::MediaSize* LETTER;
	static ::javax::print::attribute::standard::MediaSize* LEGAL;
	static ::javax::print::attribute::standard::MediaSize* NA_5X7;
	static ::javax::print::attribute::standard::MediaSize* NA_8X10;
	static ::javax::print::attribute::standard::MediaSize* NA_NUMBER_9_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* NA_NUMBER_10_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* NA_NUMBER_11_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* NA_NUMBER_12_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* NA_NUMBER_14_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* NA_6X9_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* NA_7X9_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* NA_9x11_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* NA_9x12_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* NA_10x13_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* NA_10x14_ENVELOPE;
	static ::javax::print::attribute::standard::MediaSize* NA_10X15_ENVELOPE;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("LEGAL")
#pragma pop_macro("LETTER")
#pragma pop_macro("NA_5X7")
#pragma pop_macro("NA_6X9_ENVELOPE")
#pragma pop_macro("NA_7X9_ENVELOPE")
#pragma pop_macro("NA_NUMBER_10_ENVELOPE")
#pragma pop_macro("NA_NUMBER_11_ENVELOPE")
#pragma pop_macro("NA_NUMBER_12_ENVELOPE")
#pragma pop_macro("NA_NUMBER_14_ENVELOPE")
#pragma pop_macro("NA_NUMBER_9_ENVELOPE")

#endif // _javax_print_attribute_standard_MediaSize$NA_h_