#ifndef _javax_swing_text_html_HTMLDocument$BlockElement_h_
#define _javax_swing_text_html_HTMLDocument$BlockElement_h_
//$ class javax.swing.text.html.HTMLDocument$BlockElement
//$ extends javax.swing.text.AbstractDocument$BranchElement

#include <javax/swing/text/AbstractDocument$BranchElement.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTMLDocument;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import HTMLDocument$BlockElement : public ::javax::swing::text::AbstractDocument$BranchElement {
	$class(HTMLDocument$BlockElement, $NO_CLASS_INIT, ::javax::swing::text::AbstractDocument$BranchElement)
public:
	HTMLDocument$BlockElement();
	void init$(::javax::swing::text::html::HTMLDocument* this$0, ::javax::swing::text::Element* parent, ::javax::swing::text::AttributeSet* a);
	virtual $String* getName() override;
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	::javax::swing::text::html::HTMLDocument* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLDocument$BlockElement_h_