#ifndef _SilenceOfDeprecatedMenuBar_h_
#define _SilenceOfDeprecatedMenuBar_h_
//$ class SilenceOfDeprecatedMenuBar
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export SilenceOfDeprecatedMenuBar : public ::java::lang::Runnable {
	$class(SilenceOfDeprecatedMenuBar, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SilenceOfDeprecatedMenuBar();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void main($StringArray* args);
	virtual void run() override;
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
};

#endif // _SilenceOfDeprecatedMenuBar_h_