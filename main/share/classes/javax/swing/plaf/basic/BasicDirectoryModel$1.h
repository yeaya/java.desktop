#ifndef _javax_swing_plaf_basic_BasicDirectoryModel$1_h_
#define _javax_swing_plaf_basic_BasicDirectoryModel$1_h_
//$ class javax.swing.plaf.basic.BasicDirectoryModel$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicDirectoryModel;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicDirectoryModel$1 : public ::java::lang::Runnable {
	$class(BasicDirectoryModel$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	BasicDirectoryModel$1();
	void init$(::javax::swing::plaf::basic::BasicDirectoryModel* this$0, bool val$busy);
	virtual void run() override;
	::javax::swing::plaf::basic::BasicDirectoryModel* this$0 = nullptr;
	bool val$busy = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicDirectoryModel$1_h_