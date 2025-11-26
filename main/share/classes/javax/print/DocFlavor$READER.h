#ifndef _javax_print_DocFlavor$READER_h_
#define _javax_print_DocFlavor$READER_h_
//$ class javax.print.DocFlavor$READER
//$ extends javax.print.DocFlavor

#include <javax/print/DocFlavor.h>

#pragma push_macro("TEXT_HTML")
#undef TEXT_HTML
#pragma push_macro("TEXT_PLAIN")
#undef TEXT_PLAIN

namespace javax {
	namespace print {

class $export DocFlavor$READER : public ::javax::print::DocFlavor {
	$class(DocFlavor$READER, 0, ::javax::print::DocFlavor)
public:
	DocFlavor$READER();
	void init$($String* mimeType);
	static const int64_t serialVersionUID = (int64_t)0x6289516C2CFC5C0F;
	static ::javax::print::DocFlavor$READER* TEXT_PLAIN;
	static ::javax::print::DocFlavor$READER* TEXT_HTML;
};

	} // print
} // javax

#pragma pop_macro("TEXT_HTML")
#pragma pop_macro("TEXT_PLAIN")

#endif // _javax_print_DocFlavor$READER_h_