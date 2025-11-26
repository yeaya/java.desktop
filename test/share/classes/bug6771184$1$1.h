#ifndef _bug6771184$1$1_h_
#define _bug6771184$1$1_h_
//$ class bug6771184$1$1
//$ extends javax.swing.text.Highlighter$HighlightPainter

#include <javax/swing/text/Highlighter$HighlightPainter.h>

class bug6771184$1;
namespace java {
	namespace awt {
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

class bug6771184$1$1 : public ::javax::swing::text::Highlighter$HighlightPainter {
	$class(bug6771184$1$1, $NO_CLASS_INIT, ::javax::swing::text::Highlighter$HighlightPainter)
public:
	bug6771184$1$1();
	void init$(::bug6771184$1* this$0);
	virtual void paint(::java::awt::Graphics* g, int32_t p0, int32_t p1, ::java::awt::Shape* bounds, ::javax::swing::text::JTextComponent* c) override;
	::bug6771184$1* this$0 = nullptr;
};

#endif // _bug6771184$1$1_h_