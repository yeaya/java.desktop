#ifndef _sun_print_SunMinMaxPage_h_
#define _sun_print_SunMinMaxPage_h_
//$ class sun.print.SunMinMaxPage
//$ extends javax.print.attribute.PrintRequestAttribute

#include <javax/print/attribute/PrintRequestAttribute.h>

namespace sun {
	namespace print {

class SunMinMaxPage : public ::javax::print::attribute::PrintRequestAttribute {
	$class(SunMinMaxPage, $NO_CLASS_INIT, ::javax::print::attribute::PrintRequestAttribute)
public:
	SunMinMaxPage();
	void init$(int32_t min, int32_t max);
	virtual $Class* getCategory() override;
	int32_t getMax();
	int32_t getMin();
	virtual $String* getName() override;
	int32_t page_max = 0;
	int32_t page_min = 0;
};

	} // print
} // sun

#endif // _sun_print_SunMinMaxPage_h_