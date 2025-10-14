#ifndef _javax_swing_text_html_CSS$BackgroundPosition_h_
#define _javax_swing_text_html_CSS$BackgroundPosition_h_
//$ class javax.swing.text.html.CSS$BackgroundPosition
//$ extends javax.swing.text.html.CSS$CssValue

#include <javax/swing/text/html/CSS$CssValue.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export CSS$BackgroundPosition : public ::javax::swing::text::html::CSS$CssValue {
	$class(CSS$BackgroundPosition, $NO_CLASS_INIT, ::javax::swing::text::html::CSS$CssValue)
public:
	CSS$BackgroundPosition();
	void init$();
	virtual float getHorizontalPosition();
	virtual float getVerticalPosition();
	virtual bool isHorizontalPositionRelativeToFontSize();
	virtual bool isHorizontalPositionRelativeToSize();
	virtual bool isVerticalPositionRelativeToFontSize();
	virtual bool isVerticalPositionRelativeToSize();
	virtual $Object* parseCssValue($String* value) override;
	float horizontalPosition = 0.0;
	float verticalPosition = 0.0;
	int16_t relative = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$BackgroundPosition_h_