#ifndef _javax_swing_text_html_HiddenTagView$StartTagBorder_h_
#define _javax_swing_text_html_HiddenTagView$StartTagBorder_h_
//$ class javax.swing.text.html.HiddenTagView$StartTagBorder
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

class HiddenTagView$StartTagBorder : public ::javax::swing::border::Border, public ::java::io::Serializable {
	$class(HiddenTagView$StartTagBorder, $NO_CLASS_INIT, ::javax::swing::border::Border, ::java::io::Serializable)
public:
	HiddenTagView$StartTagBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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

#endif // _javax_swing_text_html_HiddenTagView$StartTagBorder_h_