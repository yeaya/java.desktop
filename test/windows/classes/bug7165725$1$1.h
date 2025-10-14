#ifndef _bug7165725$1$1_h_
#define _bug7165725$1$1_h_
//$ class bug7165725$1$1
//$ extends javax.swing.text.html.HTMLEditorKit

#include <javax/swing/text/html/HTMLEditorKit.h>

class bug7165725$1;
namespace javax {
	namespace swing {
		namespace text {
			class Document;
		}
	}
}

class bug7165725$1$1 : public ::javax::swing::text::html::HTMLEditorKit {
	$class(bug7165725$1$1, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLEditorKit)
public:
	bug7165725$1$1();
	void init$(::bug7165725$1* this$1);
	virtual ::javax::swing::text::Document* createDefaultDocument() override;
	using ::javax::swing::text::html::HTMLEditorKit::read;
	using ::javax::swing::text::html::HTMLEditorKit::write;
	::bug7165725$1* this$1 = nullptr;
};

#endif // _bug7165725$1$1_h_