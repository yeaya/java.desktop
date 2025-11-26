#ifndef _javax_swing_text_html_HiddenTagView$EndTagBorder_h_
#define _javax_swing_text_html_HiddenTagView$EndTagBorder_h_
//$ class javax.swing.text.html.HiddenTagView$EndTagBorder
//$ extends javax.swing.border.Border
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/border/Border.h>

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

class HiddenTagView$EndTagBorder : public ::javax::swing::border::Border, public ::java::io::Serializable {
	$class(HiddenTagView$EndTagBorder, $NO_CLASS_INIT, ::javax::swing::border::Border, ::java::io::Serializable)
public:
	HiddenTagView$EndTagBorder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HiddenTagView$EndTagBorder_h_