#ifndef _ListSelectionModelTest$1_h_
#define _ListSelectionModelTest$1_h_
//$ class ListSelectionModelTest$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class ListSelectionModelTest$1 : public ::java::lang::Runnable {
	$class(ListSelectionModelTest$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ListSelectionModelTest$1();
	void init$(::javax::swing::UIManager$LookAndFeelInfo* val$lookAndFeelInfo);
	virtual void run() override;
	::javax::swing::UIManager$LookAndFeelInfo* val$lookAndFeelInfo = nullptr;
};

#endif // _ListSelectionModelTest$1_h_