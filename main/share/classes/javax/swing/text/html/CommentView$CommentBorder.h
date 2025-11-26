#ifndef _javax_swing_text_html_CommentView$CommentBorder_h_
#define _javax_swing_text_html_CommentView$CommentBorder_h_
//$ class javax.swing.text.html.CommentView$CommentBorder
//$ extends javax.swing.border.LineBorder

#include <javax/swing/border/LineBorder.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class CommentView$CommentBorder : public ::javax::swing::border::LineBorder {
	$class(CommentView$CommentBorder, $NO_CLASS_INIT, ::javax::swing::border::LineBorder)
public:
	CommentView$CommentBorder();
	using ::javax::swing::border::LineBorder::getBorderInsets;
	void init$();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CommentView$CommentBorder_h_