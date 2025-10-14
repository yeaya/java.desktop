#ifndef _javax_swing_plaf_basic_BasicDirectoryModel$FilesLoader_h_
#define _javax_swing_plaf_basic_BasicDirectoryModel$FilesLoader_h_
//$ class javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

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
namespace javax {
	namespace swing {
		namespace filechooser {
			class FileSystemView;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicDirectoryModel;
				class BasicDirectoryModel$DoChangeContents;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicDirectoryModel$FilesLoader : public ::java::lang::Runnable {
	$class(BasicDirectoryModel$FilesLoader, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	BasicDirectoryModel$FilesLoader();
	void init$(::javax::swing::plaf::basic::BasicDirectoryModel* this$0, ::java::io::File* currentDirectory, int32_t fid);
	void cancelRunnables();
	virtual void run() override;
	void run0();
	::javax::swing::plaf::basic::BasicDirectoryModel* this$0 = nullptr;
	::javax::swing::filechooser::FileSystemView* fileSystemView = nullptr;
	bool useFileHiding = false;
	bool fileSelectionEnabled = false;
	int32_t fid = 0;
	::java::io::File* currentDirectory = nullptr;
	$volatile(::javax::swing::plaf::basic::BasicDirectoryModel$DoChangeContents*) runnable = nullptr;
	$Thread* loadThread = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicDirectoryModel$FilesLoader_h_