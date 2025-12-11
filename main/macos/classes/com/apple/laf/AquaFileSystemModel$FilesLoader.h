#ifndef _com_apple_laf_AquaFileSystemModel$FilesLoader_h_
#define _com_apple_laf_AquaFileSystemModel$FilesLoader_h_
//$ class com.apple.laf.AquaFileSystemModel$FilesLoader
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileSystemModel;
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileSystemModel$FilesLoader : public ::java::lang::Runnable {
	$class(AquaFileSystemModel$FilesLoader, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AquaFileSystemModel$FilesLoader();
	void init$(::com::apple::laf::AquaFileSystemModel* this$0, ::java::io::File* currentDirectory, int32_t fid);
	virtual void cancelRunnables(::java::util::Vector* runnables);
	virtual void run() override;
	::com::apple::laf::AquaFileSystemModel* this$0 = nullptr;
	::java::util::Vector* queuedTasks = nullptr;
	::java::io::File* currentDirectory = nullptr;
	int32_t fid = 0;
	$Thread* loadThread = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileSystemModel$FilesLoader_h_