#ifndef _javax_swing_text_html_StyleSheet$ViewAttributeSet_h_
#define _javax_swing_text_html_StyleSheet$ViewAttributeSet_h_
//$ class javax.swing.text.html.StyleSheet$ViewAttributeSet
//$ extends javax.swing.text.html.MuxingAttributeSet

#include <javax/swing/text/html/MuxingAttributeSet.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class View;
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

class $export StyleSheet$ViewAttributeSet : public ::javax::swing::text::html::MuxingAttributeSet {
	$class(StyleSheet$ViewAttributeSet, $NO_CLASS_INIT, ::javax::swing::text::html::MuxingAttributeSet)
public:
	StyleSheet$ViewAttributeSet();
	void init$(::javax::swing::text::html::StyleSheet* this$0, ::javax::swing::text::View* v);
	virtual $Object* doGetAttribute(Object$* key);
	virtual $Object* getAttribute(Object$* key) override;
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	virtual bool isDefined(Object$* key) override;
	::javax::swing::text::html::StyleSheet* this$0 = nullptr;
	::javax::swing::text::View* host = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_StyleSheet$ViewAttributeSet_h_