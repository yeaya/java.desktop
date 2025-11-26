#ifndef _javax_swing_text_html_HTMLDocument$RunElement_h_
#define _javax_swing_text_html_HTMLDocument$RunElement_h_
//$ class javax.swing.text.html.HTMLDocument$RunElement
//$ extends javax.swing.text.AbstractDocument$LeafElement

#include <javax/swing/text/AbstractDocument$LeafElement.h>

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

class $import HTMLDocument$RunElement : public ::javax::swing::text::AbstractDocument$LeafElement {
	$class(HTMLDocument$RunElement, $NO_CLASS_INIT, ::javax::swing::text::AbstractDocument$LeafElement)
public:
	HTMLDocument$RunElement();
	void init$(::javax::swing::text::html::HTMLDocument* this$0, ::javax::swing::text::Element* parent, ::javax::swing::text::AttributeSet* a, int32_t offs0, int32_t offs1);
	virtual $String* getName() override;
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	::javax::swing::text::html::HTMLDocument* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLDocument$RunElement_h_