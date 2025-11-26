#ifndef _javax_print_DocFlavor$STRING_h_
#define _javax_print_DocFlavor$STRING_h_
//$ class javax.print.DocFlavor$STRING
//$ extends javax.print.DocFlavor

#include <javax/print/DocFlavor.h>

#pragma push_macro("TEXT_HTML")
#undef TEXT_HTML
#pragma push_macro("TEXT_PLAIN")
#undef TEXT_PLAIN

namespace javax {
	namespace print {

class $import DocFlavor$STRING : public ::javax::print::DocFlavor {
	$class(DocFlavor$STRING, 0, ::javax::print::DocFlavor)
public:
	DocFlavor$STRING();
	void init$($String* mimeType);
	static const int64_t serialVersionUID = (int64_t)0x3D43203CB69C30B3;
	static ::javax::print::DocFlavor$STRING* TEXT_PLAIN;
	static ::javax::print::DocFlavor$STRING* TEXT_HTML;
};

	} // print
} // javax

#pragma pop_macro("TEXT_HTML")
#pragma pop_macro("TEXT_PLAIN")

#endif // _javax_print_DocFlavor$STRING_h_