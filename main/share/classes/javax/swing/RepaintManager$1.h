#ifndef _javax_swing_RepaintManager$1_h_
#define _javax_swing_RepaintManager$1_h_
//$ class javax.swing.RepaintManager$1
//$ extends sun.swing.SwingAccessor$RepaintManagerAccessor

#include <sun/swing/SwingAccessor$RepaintManagerAccessor.h>

namespace javax {
	namespace swing {
		class RepaintManager;
	}
}
namespace sun {
	namespace swing {
		class SwingUtilities2$RepaintListener;
	}
}

namespace javax {
	namespace swing {

class RepaintManager$1 : public ::sun::swing::SwingAccessor$RepaintManagerAccessor {
	$class(RepaintManager$1, $NO_CLASS_INIT, ::sun::swing::SwingAccessor$RepaintManagerAccessor)
public:
	RepaintManager$1();
	void init$();
	virtual void addRepaintListener(::javax::swing::RepaintManager* rm, ::sun::swing::SwingUtilities2$RepaintListener* l) override;
	virtual void removeRepaintListener(::javax::swing::RepaintManager* rm, ::sun::swing::SwingUtilities2$RepaintListener* l) override;
};

	} // swing
} // javax

#endif // _javax_swing_RepaintManager$1_h_