#ifndef _javax_print_DocFlavor$INPUT_STREAM_h_
#define _javax_print_DocFlavor$INPUT_STREAM_h_
//$ class javax.print.DocFlavor$INPUT_STREAM
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

class $export DocFlavor$INPUT_STREAM : public ::javax::print::DocFlavor {
	$class(DocFlavor$INPUT_STREAM, 0, ::javax::print::DocFlavor)
public:
	DocFlavor$INPUT_STREAM();
	void init$($String* mimeType);
	static const int64_t serialVersionUID = (int64_t)0x9E382364E690BC71;
	static ::javax::print::DocFlavor$INPUT_STREAM* TEXT_PLAIN_HOST;
	static ::javax::print::DocFlavor$INPUT_STREAM* TEXT_PLAIN_UTF_8;
	static ::javax::print::DocFlavor$INPUT_STREAM* TEXT_PLAIN_UTF_16;
	static ::javax::print::DocFlavor$INPUT_STREAM* TEXT_PLAIN_UTF_16BE;
	static ::javax::print::DocFlavor$INPUT_STREAM* TEXT_PLAIN_UTF_16LE;
	static ::javax::print::DocFlavor$INPUT_STREAM* TEXT_PLAIN_US_ASCII;
	static ::javax::print::DocFlavor$INPUT_STREAM* TEXT_HTML_HOST;
	static ::javax::print::DocFlavor$INPUT_STREAM* TEXT_HTML_UTF_8;
	static ::javax::print::DocFlavor$INPUT_STREAM* TEXT_HTML_UTF_16;
	static ::javax::print::DocFlavor$INPUT_STREAM* TEXT_HTML_UTF_16BE;
	static ::javax::print::DocFlavor$INPUT_STREAM* TEXT_HTML_UTF_16LE;
	static ::javax::print::DocFlavor$INPUT_STREAM* TEXT_HTML_US_ASCII;
	static ::javax::print::DocFlavor$INPUT_STREAM* PDF;
	static ::javax::print::DocFlavor$INPUT_STREAM* POSTSCRIPT;
	static ::javax::print::DocFlavor$INPUT_STREAM* PCL;
	static ::javax::print::DocFlavor$INPUT_STREAM* GIF;
	static ::javax::print::DocFlavor$INPUT_STREAM* JPEG;
	static ::javax::print::DocFlavor$INPUT_STREAM* PNG;
	static ::javax::print::DocFlavor$INPUT_STREAM* AUTOSENSE;
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

#endif // _javax_print_DocFlavor$INPUT_STREAM_h_