#ifndef _HtmlCommentTagParseTest$MyParser_h_
#define _HtmlCommentTagParseTest$MyParser_h_
//$ class HtmlCommentTagParseTest$MyParser
//$ extends javax.swing.text.html.HTMLEditorKit$ParserCallback

#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>

class HtmlCommentTagParseTest$MyParser : public ::javax::swing::text::html::HTMLEditorKit$ParserCallback {
	$class(HtmlCommentTagParseTest$MyParser, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLEditorKit$ParserCallback)
public:
	HtmlCommentTagParseTest$MyParser();
	void init$();
	virtual void handleError($String* errorMsg, int32_t pos) override;
};

#endif // _HtmlCommentTagParseTest$MyParser_h_