#ifndef _javax_swing_text_html_StyleSheet$SmallConversionSet_h_
#define _javax_swing_text_html_StyleSheet$SmallConversionSet_h_
//$ class javax.swing.text.html.StyleSheet$SmallConversionSet
//$ extends javax.swing.text.StyleContext$SmallAttributeSet

#include <javax/swing/text/StyleContext$SmallAttributeSet.h>

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

class $import StyleSheet$SmallConversionSet : public ::javax::swing::text::StyleContext$SmallAttributeSet {
	$class(StyleSheet$SmallConversionSet, $NO_CLASS_INIT, ::javax::swing::text::StyleContext$SmallAttributeSet)
public:
	StyleSheet$SmallConversionSet();
	void init$(::javax::swing::text::html::StyleSheet* this$0, ::javax::swing::text::AttributeSet* attrs);
	virtual $Object* getAttribute(Object$* key) override;
	virtual bool isDefined(Object$* key) override;
	::javax::swing::text::html::StyleSheet* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_StyleSheet$SmallConversionSet_h_