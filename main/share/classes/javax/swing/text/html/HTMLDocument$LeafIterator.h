#ifndef _javax_swing_text_html_HTMLDocument$LeafIterator_h_
#define _javax_swing_text_html_HTMLDocument$LeafIterator_h_
//$ class javax.swing.text.html.HTMLDocument$LeafIterator
//$ extends javax.swing.text.html.HTMLDocument$Iterator

#include <javax/swing/text/html/HTMLDocument$Iterator.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
			class ElementIterator;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Tag;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export HTMLDocument$LeafIterator : public ::javax::swing::text::html::HTMLDocument$Iterator {
	$class(HTMLDocument$LeafIterator, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLDocument$Iterator)
public:
	HTMLDocument$LeafIterator();
	void init$(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::Document* doc);
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual int32_t getEndOffset() override;
	virtual int32_t getStartOffset() override;
	virtual ::javax::swing::text::html::HTML$Tag* getTag() override;
	virtual bool isValid() override;
	virtual void next() override;
	virtual void nextLeaf(::javax::swing::text::ElementIterator* iter);
	virtual void setEndOffset();
	int32_t endOffset = 0;
	::javax::swing::text::html::HTML$Tag* tag = nullptr;
	::javax::swing::text::ElementIterator* pos = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLDocument$LeafIterator_h_