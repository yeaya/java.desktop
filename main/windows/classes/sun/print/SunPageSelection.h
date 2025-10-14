#ifndef _sun_print_SunPageSelection_h_
#define _sun_print_SunPageSelection_h_
//$ class sun.print.SunPageSelection
//$ extends javax.print.attribute.PrintRequestAttribute

#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("RANGE")
#undef RANGE
#pragma push_macro("SELECTION")
#undef SELECTION

namespace sun {
	namespace print {

class SunPageSelection : public ::javax::print::attribute::PrintRequestAttribute {
	$class(SunPageSelection, 0, ::javax::print::attribute::PrintRequestAttribute)
public:
	SunPageSelection();
	void init$(int32_t value);
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static ::sun::print::SunPageSelection* ALL;
	static ::sun::print::SunPageSelection* RANGE;
	static ::sun::print::SunPageSelection* SELECTION;
	int32_t pages = 0;
};

	} // print
} // sun

#pragma pop_macro("ALL")
#pragma pop_macro("RANGE")
#pragma pop_macro("SELECTION")

#endif // _sun_print_SunPageSelection_h_