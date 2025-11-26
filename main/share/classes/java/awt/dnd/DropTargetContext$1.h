#ifndef _java_awt_dnd_DropTargetContext$1_h_
#define _java_awt_dnd_DropTargetContext$1_h_
//$ class java.awt.dnd.DropTargetContext$1
//$ extends sun.awt.AWTAccessor$DropTargetContextAccessor

#include <sun/awt/AWTAccessor$DropTargetContextAccessor.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DropTargetContext;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {
				class DropTargetContextPeer;
			}
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class DropTargetContext$1 : public ::sun::awt::AWTAccessor$DropTargetContextAccessor {
	$class(DropTargetContext$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$DropTargetContextAccessor)
public:
	DropTargetContext$1();
	void init$();
	virtual void reset(::java::awt::dnd::DropTargetContext* dtc) override;
	virtual void setDropTargetContextPeer(::java::awt::dnd::DropTargetContext* dtc, ::java::awt::dnd::peer::DropTargetContextPeer* dtcp) override;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DropTargetContext$1_h_