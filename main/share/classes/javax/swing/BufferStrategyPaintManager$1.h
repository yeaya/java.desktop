#ifndef _javax_swing_BufferStrategyPaintManager$1_h_
#define _javax_swing_BufferStrategyPaintManager$1_h_
//$ class javax.swing.BufferStrategyPaintManager$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class BufferStrategyPaintManager;
	}
}

namespace javax {
	namespace swing {

class BufferStrategyPaintManager$1 : public ::java::lang::Runnable {
	$class(BufferStrategyPaintManager$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	BufferStrategyPaintManager$1();
	void init$(::javax::swing::BufferStrategyPaintManager* this$0);
	virtual void run() override;
	::javax::swing::BufferStrategyPaintManager* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_BufferStrategyPaintManager$1_h_