#ifndef _sun_swing_JLightweightFrame$3$1_h_
#define _sun_swing_JLightweightFrame$3$1_h_
//$ class sun.swing.JLightweightFrame$3$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace sun {
	namespace swing {
		class JLightweightFrame$3;
	}
}

namespace sun {
	namespace swing {

class JLightweightFrame$3$1 : public ::java::lang::Runnable {
	$class(JLightweightFrame$3$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JLightweightFrame$3$1();
	void init$(::sun::swing::JLightweightFrame$3* this$1, ::java::awt::Rectangle* val$clip);
	virtual void run() override;
	::sun::swing::JLightweightFrame$3* this$1 = nullptr;
	::java::awt::Rectangle* val$clip = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_JLightweightFrame$3$1_h_