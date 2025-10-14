#ifndef _bug7165725$SBParserCallback_h_
#define _bug7165725$SBParserCallback_h_
//$ class bug7165725$SBParserCallback
//$ extends javax.swing.text.html.HTMLEditorKit$ParserCallback

#include <java/lang/Array.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>

namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class MutableAttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Tag;
			}
		}
	}
}

class $export bug7165725$SBParserCallback : public ::javax::swing::text::html::HTMLEditorKit$ParserCallback {
	$class(bug7165725$SBParserCallback, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLEditorKit$ParserCallback)
public:
	bug7165725$SBParserCallback();
	void init$();
	virtual $String* getStringOneLine();
	virtual void handleComment($chars* data, int32_t pos) override;
	virtual void handleEndTag(::javax::swing::text::html::HTML$Tag* t, int32_t pos) override;
	virtual void handleError($String* errorMsg, int32_t pos) override;
	virtual void handleSimpleTag(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* a, int32_t pos) override;
	virtual void handleStartTag(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* a, int32_t pos) override;
	virtual void handleText($chars* data, int32_t pos) override;
	virtual void indent();
	virtual $String* pIndent();
	virtual $String* toString() override;
	virtual void unIndent();
	int32_t indentSize = 0;
	::java::util::ArrayList* elist = nullptr;
};

#endif // _bug7165725$SBParserCallback_h_