#ifndef _javax_print_DocFlavor$SERVICE_FORMATTED_h_
#define _javax_print_DocFlavor$SERVICE_FORMATTED_h_
//$ class javax.print.DocFlavor$SERVICE_FORMATTED
//$ extends javax.print.DocFlavor

#include <javax/print/DocFlavor.h>

#pragma push_macro("PAGEABLE")
#undef PAGEABLE
#pragma push_macro("PRINTABLE")
#undef PRINTABLE
#pragma push_macro("RENDERABLE_IMAGE")
#undef RENDERABLE_IMAGE

namespace javax {
	namespace print {

class $export DocFlavor$SERVICE_FORMATTED : public ::javax::print::DocFlavor {
	$class(DocFlavor$SERVICE_FORMATTED, 0, ::javax::print::DocFlavor)
public:
	DocFlavor$SERVICE_FORMATTED();
	void init$($String* className);
	static const int64_t serialVersionUID = (int64_t)0x55C885F2C3078BC8;
	static ::javax::print::DocFlavor$SERVICE_FORMATTED* RENDERABLE_IMAGE;
	static ::javax::print::DocFlavor$SERVICE_FORMATTED* PRINTABLE;
	static ::javax::print::DocFlavor$SERVICE_FORMATTED* PAGEABLE;
};

	} // print
} // javax

#pragma pop_macro("PAGEABLE")
#pragma pop_macro("PRINTABLE")
#pragma pop_macro("RENDERABLE_IMAGE")

#endif // _javax_print_DocFlavor$SERVICE_FORMATTED_h_