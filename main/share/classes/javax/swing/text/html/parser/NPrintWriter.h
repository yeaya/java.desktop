#ifndef _javax_swing_text_html_parser_NPrintWriter_h_
#define _javax_swing_text_html_parser_NPrintWriter_h_
//$ class javax.swing.text.html.parser.NPrintWriter
//$ extends java.io.PrintWriter

#include <java/io/PrintWriter.h>
#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

class NPrintWriter : public ::java::io::PrintWriter {
	$class(NPrintWriter, $NO_CLASS_INIT, ::java::io::PrintWriter)
public:
	NPrintWriter();
	void init$(int32_t numberOfLines);
	using ::java::io::PrintWriter::println;
	virtual void println($chars* array) override;
	int32_t numLines = 0;
	int32_t numPrinted = 0;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_parser_NPrintWriter_h_