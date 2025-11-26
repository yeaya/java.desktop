#ifndef _javax_swing_RepaintManager$DoubleBufferInfo_h_
#define _javax_swing_RepaintManager$DoubleBufferInfo_h_
//$ class javax.swing.RepaintManager$DoubleBufferInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Dimension;
		class Image;
	}
}
namespace javax {
	namespace swing {
		class RepaintManager;
	}
}

namespace javax {
	namespace swing {

class RepaintManager$DoubleBufferInfo : public ::java::lang::Object {
	$class(RepaintManager$DoubleBufferInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RepaintManager$DoubleBufferInfo();
	void init$(::javax::swing::RepaintManager* this$0);
	::javax::swing::RepaintManager* this$0 = nullptr;
	::java::awt::Image* image = nullptr;
	::java::awt::Dimension* size = nullptr;
	bool needsReset = false;
};

	} // swing
} // javax

#endif // _javax_swing_RepaintManager$DoubleBufferInfo_h_