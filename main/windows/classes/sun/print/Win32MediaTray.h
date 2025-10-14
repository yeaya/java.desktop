#ifndef _sun_print_Win32MediaTray_h_
#define _sun_print_Win32MediaTray_h_
//$ class sun.print.Win32MediaTray
//$ extends javax.print.attribute.standard.MediaTray

#include <java/lang/Array.h>
#include <javax/print/attribute/standard/MediaTray.h>

#pragma push_macro("AUTO")
#undef AUTO
#pragma push_macro("ENVELOPE_MANUAL")
#undef ENVELOPE_MANUAL
#pragma push_macro("FORMSOURCE")
#undef FORMSOURCE
#pragma push_macro("LARGE_FORMAT")
#undef LARGE_FORMAT
#pragma push_macro("SMALL_FORMAT")
#undef SMALL_FORMAT
#pragma push_macro("TRACTOR")
#undef TRACTOR

namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class EnumSyntax;
		}
	}
}

namespace sun {
	namespace print {

class Win32MediaTray : public ::javax::print::attribute::standard::MediaTray {
	$class(Win32MediaTray, 0, ::javax::print::attribute::standard::MediaTray)
public:
	Win32MediaTray();
	void init$(int32_t value, int32_t id);
	void init$(int32_t id, $String* name);
	virtual int32_t getDMBinID();
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	virtual $StringArray* getStringTable() override;
	static int32_t getTraySize();
	static int32_t nextValue($String* name);
	static ::sun::print::Win32MediaTray* ENVELOPE_MANUAL;
	static ::sun::print::Win32MediaTray* AUTO;
	static ::sun::print::Win32MediaTray* TRACTOR;
	static ::sun::print::Win32MediaTray* SMALL_FORMAT;
	static ::sun::print::Win32MediaTray* LARGE_FORMAT;
	static ::sun::print::Win32MediaTray* FORMSOURCE;
	static ::java::util::ArrayList* winStringTable;
	static ::java::util::ArrayList* winEnumTable;
	int32_t winID = 0;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::MediaTray>* myEnumValueTable;
};

	} // print
} // sun

#pragma pop_macro("AUTO")
#pragma pop_macro("ENVELOPE_MANUAL")
#pragma pop_macro("FORMSOURCE")
#pragma pop_macro("LARGE_FORMAT")
#pragma pop_macro("SMALL_FORMAT")
#pragma pop_macro("TRACTOR")

#endif // _sun_print_Win32MediaTray_h_