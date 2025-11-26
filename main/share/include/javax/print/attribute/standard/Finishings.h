#ifndef _javax_print_attribute_standard_Finishings_h_
#define _javax_print_attribute_standard_Finishings_h_
//$ class javax.print.attribute.standard.Finishings
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("BIND")
#undef BIND
#pragma push_macro("COVER")
#undef COVER
#pragma push_macro("EDGE_STITCH")
#undef EDGE_STITCH
#pragma push_macro("EDGE_STITCH_BOTTOM")
#undef EDGE_STITCH_BOTTOM
#pragma push_macro("EDGE_STITCH_LEFT")
#undef EDGE_STITCH_LEFT
#pragma push_macro("EDGE_STITCH_RIGHT")
#undef EDGE_STITCH_RIGHT
#pragma push_macro("EDGE_STITCH_TOP")
#undef EDGE_STITCH_TOP
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("SADDLE_STITCH")
#undef SADDLE_STITCH
#pragma push_macro("STAPLE")
#undef STAPLE
#pragma push_macro("STAPLE_BOTTOM_LEFT")
#undef STAPLE_BOTTOM_LEFT
#pragma push_macro("STAPLE_BOTTOM_RIGHT")
#undef STAPLE_BOTTOM_RIGHT
#pragma push_macro("STAPLE_DUAL_BOTTOM")
#undef STAPLE_DUAL_BOTTOM
#pragma push_macro("STAPLE_DUAL_LEFT")
#undef STAPLE_DUAL_LEFT
#pragma push_macro("STAPLE_DUAL_RIGHT")
#undef STAPLE_DUAL_RIGHT
#pragma push_macro("STAPLE_DUAL_TOP")
#undef STAPLE_DUAL_TOP
#pragma push_macro("STAPLE_TOP_LEFT")
#undef STAPLE_TOP_LEFT
#pragma push_macro("STAPLE_TOP_RIGHT")
#undef STAPLE_TOP_RIGHT

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import Finishings : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::DocAttribute, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(Finishings, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::DocAttribute, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	Finishings();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual $Class* getCategory() override;
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	virtual $String* getName() override;
	virtual int32_t getOffset() override;
	virtual $StringArray* getStringTable() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xF7497677012F96B6;
	static ::javax::print::attribute::standard::Finishings* NONE;
	static ::javax::print::attribute::standard::Finishings* STAPLE;
	static ::javax::print::attribute::standard::Finishings* COVER;
	static ::javax::print::attribute::standard::Finishings* BIND;
	static ::javax::print::attribute::standard::Finishings* SADDLE_STITCH;
	static ::javax::print::attribute::standard::Finishings* EDGE_STITCH;
	static ::javax::print::attribute::standard::Finishings* STAPLE_TOP_LEFT;
	static ::javax::print::attribute::standard::Finishings* STAPLE_BOTTOM_LEFT;
	static ::javax::print::attribute::standard::Finishings* STAPLE_TOP_RIGHT;
	static ::javax::print::attribute::standard::Finishings* STAPLE_BOTTOM_RIGHT;
	static ::javax::print::attribute::standard::Finishings* EDGE_STITCH_LEFT;
	static ::javax::print::attribute::standard::Finishings* EDGE_STITCH_TOP;
	static ::javax::print::attribute::standard::Finishings* EDGE_STITCH_RIGHT;
	static ::javax::print::attribute::standard::Finishings* EDGE_STITCH_BOTTOM;
	static ::javax::print::attribute::standard::Finishings* STAPLE_DUAL_LEFT;
	static ::javax::print::attribute::standard::Finishings* STAPLE_DUAL_TOP;
	static ::javax::print::attribute::standard::Finishings* STAPLE_DUAL_RIGHT;
	static ::javax::print::attribute::standard::Finishings* STAPLE_DUAL_BOTTOM;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::Finishings>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("BIND")
#pragma pop_macro("COVER")
#pragma pop_macro("EDGE_STITCH")
#pragma pop_macro("EDGE_STITCH_BOTTOM")
#pragma pop_macro("EDGE_STITCH_LEFT")
#pragma pop_macro("EDGE_STITCH_RIGHT")
#pragma pop_macro("EDGE_STITCH_TOP")
#pragma pop_macro("NONE")
#pragma pop_macro("SADDLE_STITCH")
#pragma pop_macro("STAPLE")
#pragma pop_macro("STAPLE_BOTTOM_LEFT")
#pragma pop_macro("STAPLE_BOTTOM_RIGHT")
#pragma pop_macro("STAPLE_DUAL_BOTTOM")
#pragma pop_macro("STAPLE_DUAL_LEFT")
#pragma pop_macro("STAPLE_DUAL_RIGHT")
#pragma pop_macro("STAPLE_DUAL_TOP")
#pragma pop_macro("STAPLE_TOP_LEFT")
#pragma pop_macro("STAPLE_TOP_RIGHT")

#endif // _javax_print_attribute_standard_Finishings_h_