#ifndef _ComboPopupTest_h_
#define _ComboPopupTest_h_
//$ class ComboPopupTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Dimension;
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JComponent;
		class JFrame;
	}
}

class $export ComboPopupTest : public ::java::lang::Object {
	$class(ComboPopupTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ComboPopupTest();
	void init$();
	virtual void blockTillDisplayed(::javax::swing::JComponent* comp);
	void lambda$blockTillDisplayed$0(::javax::swing::JComponent* comp);
	void lambda$new$1();
	void lambda$new$2();
	static void main($StringArray* args);
	virtual void start();
	::javax::swing::JFrame* frame = nullptr;
	::javax::swing::JComboBox* comboBox = nullptr;
	$volatile(::java::awt::Point*) p = nullptr;
	$volatile(::java::awt::Dimension*) d = nullptr;
};

#endif // _ComboPopupTest_h_