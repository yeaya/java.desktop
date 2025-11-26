#ifndef _FPMethodCalledTest$1_h_
#define _FPMethodCalledTest$1_h_
//$ class FPMethodCalledTest$1
//$ extends javax.swing.plaf.metal.MetalTextFieldUI

#include <javax/swing/plaf/metal/MetalTextFieldUI.h>

class FPMethodCalledTest$Test;
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class View;
		}
	}
}

class FPMethodCalledTest$1 : public ::javax::swing::plaf::metal::MetalTextFieldUI {
	$class(FPMethodCalledTest$1, $NO_CLASS_INIT, ::javax::swing::plaf::metal::MetalTextFieldUI)
public:
	FPMethodCalledTest$1();
	using ::javax::swing::plaf::metal::MetalTextFieldUI::create;
	void init$(::FPMethodCalledTest$Test* val$test);
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) override;
	::FPMethodCalledTest$Test* val$test = nullptr;
};

#endif // _FPMethodCalledTest$1_h_