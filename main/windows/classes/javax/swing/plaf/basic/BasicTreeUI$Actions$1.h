#ifndef _javax_swing_plaf_basic_BasicTreeUI$Actions$1_h_
#define _javax_swing_plaf_basic_BasicTreeUI$Actions$1_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$Actions$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTreeUI;
				class BasicTreeUI$Actions;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicTreeUI$Actions$1 : public ::java::lang::Runnable {
	$class(BasicTreeUI$Actions$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	BasicTreeUI$Actions$1();
	void init$(::javax::swing::plaf::basic::BasicTreeUI$Actions* this$0, ::javax::swing::plaf::basic::BasicTreeUI* val$ui, int32_t val$rowCount);
	virtual void run() override;
	::javax::swing::plaf::basic::BasicTreeUI$Actions* this$0 = nullptr;
	int32_t val$rowCount = 0;
	::javax::swing::plaf::basic::BasicTreeUI* val$ui = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$Actions$1_h_