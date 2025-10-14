#ifndef _javax_print_DocFlavor$BYTE_ARRAY_h_
#define _javax_print_DocFlavor$BYTE_ARRAY_h_
//$ class javax.print.DocFlavor$BYTE_ARRAY
//$ extends javax.print.DocFlavor

#include <javax/print/DocFlavor.h>

#pragma push_macro("AUTOSENSE")
#undef AUTOSENSE
#pragma push_macro("GIF")
#undef GIF
#pragma push_macro("JPEG")
#undef JPEG
#pragma push_macro("PCL")
#undef PCL
#pragma push_macro("PDF")
#undef PDF
#pragma push_macro("PNG")
#undef PNG
#pragma push_macro("POSTSCRIPT")
#undef POSTSCRIPT
#pragma push_macro("TEXT_HTML_HOST")
#undef TEXT_HTML_HOST
#pragma push_macro("TEXT_HTML_US_ASCII")
#undef TEXT_HTML_US_ASCII
#pragma push_macro("TEXT_HTML_UTF_16")
#undef TEXT_HTML_UTF_16
#pragma push_macro("TEXT_HTML_UTF_16BE")
#undef TEXT_HTML_UTF_16BE
#pragma push_macro("TEXT_HTML_UTF_16LE")
#undef TEXT_HTML_UTF_16LE
#pragma push_macro("TEXT_HTML_UTF_8")
#undef TEXT_HTML_UTF_8
#pragma push_macro("TEXT_PLAIN_HOST")
#undef TEXT_PLAIN_HOST
#pragma push_macro("TEXT_PLAIN_US_ASCII")
#undef TEXT_PLAIN_US_ASCII
#pragma push_macro("TEXT_PLAIN_UTF_16")
#undef TEXT_PLAIN_UTF_16
#pragma push_macro("TEXT_PLAIN_UTF_16BE")
#undef TEXT_PLAIN_UTF_16BE
#pragma push_macro("TEXT_PLAIN_UTF_16LE")
#undef TEXT_PLAIN_UTF_16LE
#pragma push_macro("TEXT_PLAIN_UTF_8")
#undef TEXT_PLAIN_UTF_8

namespace javax {
	namespace print {

class $import DocFlavor$BYTE_ARRAY : public ::javax::print::DocFlavor {
	$class(DocFlavor$BYTE_ARRAY, 0, ::javax::print::DocFlavor)
public:
	DocFlavor$BYTE_ARRAY();
	void init$($String* mimeType);
	static const int64_t serialVersionUID = (int64_t)0x823098D5A161183D;
	static ::javax::print::DocFlavor$BYTE_ARRAY* TEXT_PLAIN_HOST;
	static ::javax::print::DocFlavor$BYTE_ARRAY* TEXT_PLAIN_UTF_8;
	static ::javax::print::DocFlavor$BYTE_ARRAY* TEXT_PLAIN_UTF_16;
	static ::javax::print::DocFlavor$BYTE_ARRAY* TEXT_PLAIN_UTF_16BE;
	static ::javax::print::DocFlavor$BYTE_ARRAY* TEXT_PLAIN_UTF_16LE;
	static ::javax::print::DocFlavor$BYTE_ARRAY* TEXT_PLAIN_US_ASCII;
	static ::javax::print::DocFlavor$BYTE_ARRAY* TEXT_HTML_HOST;
	static ::javax::print::DocFlavor$BYTE_ARRAY* TEXT_HTML_UTF_8;
	static ::javax::print::DocFlavor$BYTE_ARRAY* TEXT_HTML_UTF_16;
	static ::javax::print::DocFlavor$BYTE_ARRAY* TEXT_HTML_UTF_16BE;
	static ::javax::print::DocFlavor$BYTE_ARRAY* TEXT_HTML_UTF_16LE;
	static ::javax::print::DocFlavor$BYTE_ARRAY* TEXT_HTML_US_ASCII;
	static ::javax::print::DocFlavor$BYTE_ARRAY* PDF;
	static ::javax::print::DocFlavor$BYTE_ARRAY* POSTSCRIPT;
	static ::javax::print::DocFlavor$BYTE_ARRAY* PCL;
	static ::javax::print::DocFlavor$BYTE_ARRAY* GIF;
	static ::javax::print::DocFlavor$BYTE_ARRAY* JPEG;
	static ::javax::print::DocFlavor$BYTE_ARRAY* PNG;
	static ::javax::print::DocFlavor$BYTE_ARRAY* AUTOSENSE;
};

	} // print
} // javax

#pragma pop_macro("AUTOSENSE")
#pragma pop_macro("GIF")
#pragma pop_macro("JPEG")
#pragma pop_macro("PCL")
#pragma pop_macro("PDF")
#pragma pop_macro("PNG")
#pragma pop_macro("POSTSCRIPT")
#pragma pop_macro("TEXT_HTML_HOST")
#pragma pop_macro("TEXT_HTML_US_ASCII")
#pragma pop_macro("TEXT_HTML_UTF_16")
#pragma pop_macro("TEXT_HTML_UTF_16BE")
#pragma pop_macro("TEXT_HTML_UTF_16LE")
#pragma pop_macro("TEXT_HTML_UTF_8")
#pragma pop_macro("TEXT_PLAIN_HOST")
#pragma pop_macro("TEXT_PLAIN_US_ASCII")
#pragma pop_macro("TEXT_PLAIN_UTF_16")
#pragma pop_macro("TEXT_PLAIN_UTF_16BE")
#pragma pop_macro("TEXT_PLAIN_UTF_16LE")
#pragma pop_macro("TEXT_PLAIN_UTF_8")

#endif // _javax_print_DocFlavor$BYTE_ARRAY_h_