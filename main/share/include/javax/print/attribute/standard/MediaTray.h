#ifndef _javax_print_attribute_standard_MediaTray_h_
#define _javax_print_attribute_standard_MediaTray_h_
//$ class javax.print.attribute.standard.MediaTray
//$ extends javax.print.attribute.standard.Media

#include <java/lang/Array.h>
#include <javax/print/attribute/standard/Media.h>

#pragma push_macro("BOTTOM")
#undef BOTTOM
#pragma push_macro("ENVELOPE")
#undef ENVELOPE
#pragma push_macro("LARGE_CAPACITY")
#undef LARGE_CAPACITY
#pragma push_macro("MAIN")
#undef MAIN
#pragma push_macro("MANUAL")
#undef MANUAL
#pragma push_macro("MIDDLE")
#undef MIDDLE
#pragma push_macro("SIDE")
#undef SIDE
#pragma push_macro("TOP")
#undef TOP

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

class $import MediaTray : public ::javax::print::attribute::standard::Media {
	$class(MediaTray, 0, ::javax::print::attribute::standard::Media)
public:
	MediaTray();
	void init$(int32_t value);
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	virtual $StringArray* getStringTable() override;
	static const int64_t serialVersionUID = (int64_t)0xF25D722BD6219591;
	static ::javax::print::attribute::standard::MediaTray* TOP;
	static ::javax::print::attribute::standard::MediaTray* MIDDLE;
	static ::javax::print::attribute::standard::MediaTray* BOTTOM;
	static ::javax::print::attribute::standard::MediaTray* ENVELOPE;
	static ::javax::print::attribute::standard::MediaTray* MANUAL;
	static ::javax::print::attribute::standard::MediaTray* LARGE_CAPACITY;
	static ::javax::print::attribute::standard::MediaTray* MAIN;
	static ::javax::print::attribute::standard::MediaTray* SIDE;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::MediaTray>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("BOTTOM")
#pragma pop_macro("ENVELOPE")
#pragma pop_macro("LARGE_CAPACITY")
#pragma pop_macro("MAIN")
#pragma pop_macro("MANUAL")
#pragma pop_macro("MIDDLE")
#pragma pop_macro("SIDE")
#pragma pop_macro("TOP")

#endif // _javax_print_attribute_standard_MediaTray_h_