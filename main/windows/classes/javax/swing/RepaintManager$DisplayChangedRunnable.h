#ifndef _javax_swing_RepaintManager$DisplayChangedRunnable_h_
#define _javax_swing_RepaintManager$DisplayChangedRunnable_h_
//$ class javax.swing.RepaintManager$DisplayChangedRunnable
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {

class RepaintManager$DisplayChangedRunnable : public ::java::lang::Runnable {
	$class(RepaintManager$DisplayChangedRunnable, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	RepaintManager$DisplayChangedRunnable();
	void init$();
	virtual void run() override;
};

	} // swing
} // javax

#endif // _javax_swing_RepaintManager$DisplayChangedRunnable_h_