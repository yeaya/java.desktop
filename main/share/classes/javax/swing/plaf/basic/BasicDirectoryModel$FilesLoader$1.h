#ifndef _javax_swing_plaf_basic_BasicDirectoryModel$FilesLoader$1_h_
#define _javax_swing_plaf_basic_BasicDirectoryModel$FilesLoader$1_h_
//$ class javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicDirectoryModel$FilesLoader;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicDirectoryModel$FilesLoader$1 : public ::java::util::concurrent::Callable {
	$class(BasicDirectoryModel$FilesLoader$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	BasicDirectoryModel$FilesLoader$1();
	void init$(::javax::swing::plaf::basic::BasicDirectoryModel$FilesLoader* this$1, ::java::util::Vector* val$newFileCache);
	virtual $Object* call() override;
	::javax::swing::plaf::basic::BasicDirectoryModel$FilesLoader* this$1 = nullptr;
	::java::util::Vector* val$newFileCache = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicDirectoryModel$FilesLoader$1_h_