#ifndef _sun_swing_SwingAccessor$JComponentAccessor_h_
#define _sun_swing_SwingAccessor$JComponentAccessor_h_
//$ interface sun.swing.SwingAccessor$JComponentAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace sun {
	namespace swing {

class $export SwingAccessor$JComponentAccessor : public ::java::lang::Object {
	$interface(SwingAccessor$JComponentAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void compWriteObjectNotify(::javax::swing::JComponent* comp) {}
	virtual bool getFlag(::javax::swing::JComponent* comp, int32_t aFlag) {return false;}
};

	} // swing
} // sun

#endif // _sun_swing_SwingAccessor$JComponentAccessor_h_