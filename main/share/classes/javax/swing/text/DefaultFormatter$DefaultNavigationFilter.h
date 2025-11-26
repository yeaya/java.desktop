#ifndef _javax_swing_text_DefaultFormatter$DefaultNavigationFilter_h_
#define _javax_swing_text_DefaultFormatter$DefaultNavigationFilter_h_
//$ class javax.swing.text.DefaultFormatter$DefaultNavigationFilter
//$ extends javax.swing.text.NavigationFilter
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/text/NavigationFilter.h>

namespace javax {
	namespace swing {
		namespace text {
			class DefaultFormatter;
			class JTextComponent;
			class NavigationFilter$FilterBypass;
			class Position$Bias;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class DefaultFormatter$DefaultNavigationFilter : public ::javax::swing::text::NavigationFilter, public ::java::io::Serializable {
	$class(DefaultFormatter$DefaultNavigationFilter, $NO_CLASS_INIT, ::javax::swing::text::NavigationFilter, ::java::io::Serializable)
public:
	DefaultFormatter$DefaultNavigationFilter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::DefaultFormatter* this$0);
	virtual int32_t getNextVisualPositionFrom(::javax::swing::text::JTextComponent* text, int32_t pos, ::javax::swing::text::Position$Bias* bias, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet) override;
	virtual void moveDot(::javax::swing::text::NavigationFilter$FilterBypass* fb, int32_t dot, ::javax::swing::text::Position$Bias* bias) override;
	virtual void setDot(::javax::swing::text::NavigationFilter$FilterBypass* fb, int32_t dot, ::javax::swing::text::Position$Bias* bias) override;
	virtual $String* toString() override;
	::javax::swing::text::DefaultFormatter* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultFormatter$DefaultNavigationFilter_h_