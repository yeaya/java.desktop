#ifndef _sun_swing_SwingAccessor$JTextComponentAccessor_h_
#define _sun_swing_SwingAccessor$JTextComponentAccessor_h_
//$ interface sun.swing.SwingAccessor$JTextComponentAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace sun {
	namespace swing {

class $import SwingAccessor$JTextComponentAccessor : public ::java::lang::Object {
	$interface(SwingAccessor$JTextComponentAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::swing::TransferHandler$DropLocation* dropLocationForPoint(::javax::swing::text::JTextComponent* textComp, ::java::awt::Point* p) {return nullptr;}
	virtual $Object* setDropLocation(::javax::swing::text::JTextComponent* textComp, ::javax::swing::TransferHandler$DropLocation* location, Object$* state, bool forDrop) {return nullptr;}
};

	} // swing
} // sun

#endif // _sun_swing_SwingAccessor$JTextComponentAccessor_h_