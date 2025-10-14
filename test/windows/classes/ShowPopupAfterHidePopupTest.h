#ifndef _ShowPopupAfterHidePopupTest_h_
#define _ShowPopupAfterHidePopupTest_h_
//$ class ShowPopupAfterHidePopupTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JComboBox;
		class JFrame;
	}
}

class $export ShowPopupAfterHidePopupTest : public ::java::lang::Object {
	$class(ShowPopupAfterHidePopupTest, 0, ::java::lang::Object)
public:
	ShowPopupAfterHidePopupTest();
	void init$();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JComboBox* comboBox;
	static bool popupIsVisible;
};

#endif // _ShowPopupAfterHidePopupTest_h_