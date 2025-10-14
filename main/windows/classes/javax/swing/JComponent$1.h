#ifndef _javax_swing_JComponent$1_h_
#define _javax_swing_JComponent$1_h_
//$ class javax.swing.JComponent$1
//$ extends sun.swing.SwingAccessor$JComponentAccessor

#include <sun/swing/SwingAccessor$JComponentAccessor.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace javax {
	namespace swing {

class JComponent$1 : public ::sun::swing::SwingAccessor$JComponentAccessor {
	$class(JComponent$1, $NO_CLASS_INIT, ::sun::swing::SwingAccessor$JComponentAccessor)
public:
	JComponent$1();
	void init$();
	virtual void compWriteObjectNotify(::javax::swing::JComponent* comp) override;
	virtual bool getFlag(::javax::swing::JComponent* comp, int32_t aFlag) override;
};

	} // swing
} // javax

#endif // _javax_swing_JComponent$1_h_