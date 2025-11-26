#ifndef _RootPaneDecorationSize_h_
#define _RootPaneDecorationSize_h_
//$ class RootPaneDecorationSize
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export RootPaneDecorationSize : public ::java::lang::Object {
	$class(RootPaneDecorationSize, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RootPaneDecorationSize();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void test();
};

#endif // _RootPaneDecorationSize_h_