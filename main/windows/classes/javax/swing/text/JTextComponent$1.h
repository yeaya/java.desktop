#ifndef _javax_swing_text_JTextComponent$1_h_
#define _javax_swing_text_JTextComponent$1_h_
//$ class javax.swing.text.JTextComponent$1
//$ extends sun.swing.SwingAccessor$JTextComponentAccessor

#include <sun/swing/SwingAccessor$JTextComponentAccessor.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class TransferHandler$DropLocation;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class JTextComponent$1 : public ::sun::swing::SwingAccessor$JTextComponentAccessor {
	$class(JTextComponent$1, $NO_CLASS_INIT, ::sun::swing::SwingAccessor$JTextComponentAccessor)
public:
	JTextComponent$1();
	void init$();
	virtual ::javax::swing::TransferHandler$DropLocation* dropLocationForPoint(::javax::swing::text::JTextComponent* textComp, ::java::awt::Point* p) override;
	virtual $Object* setDropLocation(::javax::swing::text::JTextComponent* textComp, ::javax::swing::TransferHandler$DropLocation* location, Object$* state, bool forDrop) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$1_h_