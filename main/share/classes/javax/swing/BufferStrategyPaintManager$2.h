#ifndef _javax_swing_BufferStrategyPaintManager$2_h_
#define _javax_swing_BufferStrategyPaintManager$2_h_
//$ class javax.swing.BufferStrategyPaintManager$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class BufferStrategyPaintManager;
		class JRootPane;
	}
}

namespace javax {
	namespace swing {

class BufferStrategyPaintManager$2 : public ::java::lang::Runnable {
	$class(BufferStrategyPaintManager$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	BufferStrategyPaintManager$2();
	void init$(::javax::swing::BufferStrategyPaintManager* this$0, ::javax::swing::JRootPane* val$rootPane);
	virtual void run() override;
	::javax::swing::BufferStrategyPaintManager* this$0 = nullptr;
	::javax::swing::JRootPane* val$rootPane = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_BufferStrategyPaintManager$2_h_