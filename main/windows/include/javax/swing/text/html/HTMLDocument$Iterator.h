#ifndef _javax_swing_text_html_HTMLDocument$Iterator_h_
#define _javax_swing_text_html_HTMLDocument$Iterator_h_
//$ class javax.swing.text.html.HTMLDocument$Iterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
				class HTML$Tag;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import HTMLDocument$Iterator : public ::java::lang::Object {
	$class(HTMLDocument$Iterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HTMLDocument$Iterator();
	void init$();
	virtual ::javax::swing::text::AttributeSet* getAttributes() {return nullptr;}
	virtual int32_t getEndOffset() {return 0;}
	virtual int32_t getStartOffset() {return 0;}
	virtual ::javax::swing::text::html::HTML$Tag* getTag() {return nullptr;}
	virtual bool isValid() {return false;}
	virtual void next() {}
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLDocument$Iterator_h_