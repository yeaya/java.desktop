#ifndef _FontSetByLaF_h_
#define _FontSetByLaF_h_
//$ class FontSetByLaF
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export FontSetByLaF : public ::java::lang::Object {
	$class(FontSetByLaF, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FontSetByLaF();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$1();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
};

#endif // _FontSetByLaF_h_