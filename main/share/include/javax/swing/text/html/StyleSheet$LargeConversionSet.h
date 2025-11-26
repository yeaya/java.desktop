#ifndef _javax_swing_text_html_StyleSheet$LargeConversionSet_h_
#define _javax_swing_text_html_StyleSheet$LargeConversionSet_h_
//$ class javax.swing.text.html.StyleSheet$LargeConversionSet
//$ extends javax.swing.text.SimpleAttributeSet

#include <javax/swing/text/SimpleAttributeSet.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import StyleSheet$LargeConversionSet : public ::javax::swing::text::SimpleAttributeSet {
	$class(StyleSheet$LargeConversionSet, $NO_CLASS_INIT, ::javax::swing::text::SimpleAttributeSet)
public:
	StyleSheet$LargeConversionSet();
	void init$(::javax::swing::text::html::StyleSheet* this$0, ::javax::swing::text::AttributeSet* source);
	void init$(::javax::swing::text::html::StyleSheet* this$0);
	virtual $Object* getAttribute(Object$* key) override;
	virtual bool isDefined(Object$* key) override;
	::javax::swing::text::html::StyleSheet* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_StyleSheet$LargeConversionSet_h_