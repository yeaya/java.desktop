#ifndef _javax_swing_text_ViewFactory_h_
#define _javax_swing_text_ViewFactory_h_
//$ interface javax.swing.text.ViewFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import ViewFactory : public ::java::lang::Object {
	$interface(ViewFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) {return nullptr;}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_ViewFactory_h_