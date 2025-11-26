#ifndef _javax_swing_RepaintManager$DisplayChangedHandler_h_
#define _javax_swing_RepaintManager$DisplayChangedHandler_h_
//$ class javax.swing.RepaintManager$DisplayChangedHandler
//$ extends sun.awt.DisplayChangedListener

#include <sun/awt/DisplayChangedListener.h>

namespace javax {
	namespace swing {

class RepaintManager$DisplayChangedHandler : public ::sun::awt::DisplayChangedListener {
	$class(RepaintManager$DisplayChangedHandler, $NO_CLASS_INIT, ::sun::awt::DisplayChangedListener)
public:
	RepaintManager$DisplayChangedHandler();
	void init$();
	virtual void displayChanged() override;
	virtual void paletteChanged() override;
	static void scheduleDisplayChanges();
};

	} // swing
} // javax

#endif // _javax_swing_RepaintManager$DisplayChangedHandler_h_