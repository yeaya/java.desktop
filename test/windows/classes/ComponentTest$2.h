#ifndef _ComponentTest$2_h_
#define _ComponentTest$2_h_
//$ class ComponentTest$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class ComponentTest$2 : public ::java::lang::Runnable {
	$class(ComponentTest$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ComponentTest$2();
	void init$(::javax::swing::UIManager$LookAndFeelInfo* val$laf);
	virtual void run() override;
	::javax::swing::UIManager$LookAndFeelInfo* val$laf = nullptr;
};

#endif // _ComponentTest$2_h_