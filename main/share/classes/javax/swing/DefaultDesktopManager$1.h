#ifndef _javax_swing_DefaultDesktopManager$1_h_
#define _javax_swing_DefaultDesktopManager$1_h_
//$ class javax.swing.DefaultDesktopManager$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class DefaultDesktopManager;
		class JComponent;
	}
}

namespace javax {
	namespace swing {

class DefaultDesktopManager$1 : public ::java::lang::Runnable {
	$class(DefaultDesktopManager$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	DefaultDesktopManager$1();
	void init$(::javax::swing::DefaultDesktopManager* this$0, ::javax::swing::JComponent* val$f);
	virtual void run() override;
	::javax::swing::DefaultDesktopManager* this$0 = nullptr;
	::javax::swing::JComponent* val$f = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultDesktopManager$1_h_