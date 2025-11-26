#ifndef _bug7011777$MyParserCallback_h_
#define _bug7011777$MyParserCallback_h_
//$ class bug7011777$MyParserCallback
//$ extends javax.swing.text.html.HTMLEditorKit$ParserCallback

#include <java/lang/Array.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>

class $export bug7011777$MyParserCallback : public ::javax::swing::text::html::HTMLEditorKit$ParserCallback {
	$class(bug7011777$MyParserCallback, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLEditorKit$ParserCallback)
public:
	bug7011777$MyParserCallback();
	void init$();
	virtual void handleComment($chars* data, int32_t pos) override;
};

#endif // _bug7011777$MyParserCallback_h_