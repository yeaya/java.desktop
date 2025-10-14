#ifndef _javax_swing_plaf_basic_BasicDirectoryModel$DoChangeContents_h_
#define _javax_swing_plaf_basic_BasicDirectoryModel$DoChangeContents_h_
//$ class javax.swing.plaf.basic.BasicDirectoryModel$DoChangeContents
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		class List;
	}
}
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

class BasicDirectoryModel$DoChangeContents : public ::java::lang::Runnable {
	$class(BasicDirectoryModel$DoChangeContents, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	BasicDirectoryModel$DoChangeContents();
	void init$(::javax::swing::plaf::basic::BasicDirectoryModel* this$0, ::java::util::List* addFiles, int32_t addStart, ::java::util::List* remFiles, int32_t remStart, int32_t fid);
	void cancel();
	virtual void run() override;
	::javax::swing::plaf::basic::BasicDirectoryModel* this$0 = nullptr;
	::java::util::List* addFiles = nullptr;
	::java::util::List* remFiles = nullptr;
	bool doFire = false;
	int32_t fid = 0;
	int32_t addStart = 0;
	int32_t remStart = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicDirectoryModel$DoChangeContents_h_