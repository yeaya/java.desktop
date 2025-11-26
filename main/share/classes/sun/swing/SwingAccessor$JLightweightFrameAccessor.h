#ifndef _sun_swing_SwingAccessor$JLightweightFrameAccessor_h_
#define _sun_swing_SwingAccessor$JLightweightFrameAccessor_h_
//$ interface sun.swing.SwingAccessor$JLightweightFrameAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace swing {
		class JLightweightFrame;
	}
}

namespace sun {
	namespace swing {

class $export SwingAccessor$JLightweightFrameAccessor : public ::java::lang::Object {
	$interface(SwingAccessor$JLightweightFrameAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void updateCursor(::sun::swing::JLightweightFrame* frame) {}
};

	} // swing
} // sun

#endif // _sun_swing_SwingAccessor$JLightweightFrameAccessor_h_