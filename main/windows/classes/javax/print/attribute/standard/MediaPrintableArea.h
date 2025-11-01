#ifndef _javax_print_attribute_standard_MediaPrintableArea_h_
#define _javax_print_attribute_standard_MediaPrintableArea_h_
//$ class javax.print.attribute.standard.MediaPrintableArea
//$ extends javax.print.attribute.DocAttribute
//$ implements javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("INCH")
#undef INCH
#pragma push_macro("MM")
#undef MM

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export MediaPrintableArea : public ::javax::print::attribute::DocAttribute, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(MediaPrintableArea, $NO_CLASS_INIT, ::javax::print::attribute::DocAttribute, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	MediaPrintableArea();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(float x, float y, float w, float h, int32_t units);
	void init$(int32_t x, int32_t y, int32_t w, int32_t h, int32_t units);
	static float convertFromMicrometers(int32_t x, int32_t units);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	float getHeight(int32_t units);
	virtual $String* getName() override;
	$floats* getPrintableArea(int32_t units);
	float getWidth(int32_t units);
	float getX(int32_t units);
	float getY(int32_t units);
	virtual int32_t hashCode() override;
	$String* toString(int32_t units, $String* unitsName);
	virtual $String* toString() override;
	int32_t x = 0;
	int32_t y = 0;
	int32_t w = 0;
	int32_t h = 0;
	int32_t units = 0;
	static const int64_t serialVersionUID = (int64_t)0xE9D5B503FFDC9AEF;
	static const int32_t INCH = 25400;
	static const int32_t MM = 1000;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("INCH")
#pragma pop_macro("MM")

#endif // _javax_print_attribute_standard_MediaPrintableArea_h_