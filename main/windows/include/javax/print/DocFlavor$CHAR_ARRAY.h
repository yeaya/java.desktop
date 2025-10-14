#ifndef _javax_print_DocFlavor$CHAR_ARRAY_h_
#define _javax_print_DocFlavor$CHAR_ARRAY_h_
//$ class javax.print.DocFlavor$CHAR_ARRAY
//$ extends javax.print.DocFlavor

#include <javax/print/DocFlavor.h>

#pragma push_macro("TEXT_HTML")
#undef TEXT_HTML
#pragma push_macro("TEXT_PLAIN")
#undef TEXT_PLAIN

namespace javax {
	namespace print {

class $import DocFlavor$CHAR_ARRAY : public ::javax::print::DocFlavor {
	$class(DocFlavor$CHAR_ARRAY, 0, ::javax::print::DocFlavor)
public:
	DocFlavor$CHAR_ARRAY();
	void init$($String* mimeType);
	static const int64_t serialVersionUID = (int64_t)0x86FA3CC6D8010E78;
	static ::javax::print::DocFlavor$CHAR_ARRAY* TEXT_PLAIN;
	static ::javax::print::DocFlavor$CHAR_ARRAY* TEXT_HTML;
};

	} // print
} // javax

#pragma pop_macro("TEXT_HTML")
#pragma pop_macro("TEXT_PLAIN")

#endif // _javax_print_DocFlavor$CHAR_ARRAY_h_