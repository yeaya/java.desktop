#ifndef _sun_awt_AWTAccessor$DragSourceContextAccessor_h_
#define _sun_awt_AWTAccessor$DragSourceContextAccessor_h_
//$ interface sun.awt.AWTAccessor$DragSourceContextAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DragSourceContext;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {
				class DragSourceContextPeer;
			}
		}
	}
}

namespace sun {
	namespace awt {

class $import AWTAccessor$DragSourceContextAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$DragSourceContextAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::dnd::peer::DragSourceContextPeer* getPeer(::java::awt::dnd::DragSourceContext* dsc) {return nullptr;}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$DragSourceContextAccessor_h_