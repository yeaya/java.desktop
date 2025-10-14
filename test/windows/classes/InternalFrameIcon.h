#ifndef _InternalFrameIcon_h_
#define _InternalFrameIcon_h_
//$ class InternalFrameIcon
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export InternalFrameIcon : public ::java::lang::Runnable {
	$class(InternalFrameIcon, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	InternalFrameIcon();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void main($StringArray* args);
	virtual void run() override;
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
};

#endif // _InternalFrameIcon_h_