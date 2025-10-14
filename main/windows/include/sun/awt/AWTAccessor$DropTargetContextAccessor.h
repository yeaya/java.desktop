#ifndef _sun_awt_AWTAccessor$DropTargetContextAccessor_h_
#define _sun_awt_AWTAccessor$DropTargetContextAccessor_h_
//$ interface sun.awt.AWTAccessor$DropTargetContextAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace sun {
	namespace awt {

class $import AWTAccessor$DropTargetContextAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$DropTargetContextAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void reset(::java::awt::dnd::DropTargetContext* dtc) {}
	virtual void setDropTargetContextPeer(::java::awt::dnd::DropTargetContext* dtc, ::java::awt::dnd::peer::DropTargetContextPeer* dtcp) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$DropTargetContextAccessor_h_