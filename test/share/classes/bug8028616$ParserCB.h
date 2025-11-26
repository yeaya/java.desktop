#ifndef _bug8028616$ParserCB_h_
#define _bug8028616$ParserCB_h_
//$ class bug8028616$ParserCB
//$ extends javax.swing.text.html.HTMLEditorKit$ParserCallback

#include <java/lang/Array.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>

class bug8028616$ParserCB : public ::javax::swing::text::html::HTMLEditorKit$ParserCallback {
	$class(bug8028616$ParserCB, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLEditorKit$ParserCallback)
public:
	bug8028616$ParserCB();
	void init$();
	virtual void handleText($chars* data, int32_t pos) override;
};

#endif // _bug8028616$ParserCB_h_