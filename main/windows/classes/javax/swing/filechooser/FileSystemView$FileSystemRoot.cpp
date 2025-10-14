#include <javax/swing/filechooser/FileSystemView$FileSystemRoot.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

namespace javax {
	namespace swing {
		namespace filechooser {

$MethodInfo _FileSystemView$FileSystemRoot_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemView$FileSystemRoot::*)($File*)>(&FileSystemView$FileSystemRoot::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemView$FileSystemRoot::*)($String*)>(&FileSystemView$FileSystemRoot::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isDirectory", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FileSystemView$FileSystemRoot_InnerClassesInfo_[] = {
	{"javax.swing.filechooser.FileSystemView$FileSystemRoot", "javax.swing.filechooser.FileSystemView", "FileSystemRoot", $STATIC},
	{}
};

$ClassInfo _FileSystemView$FileSystemRoot_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.filechooser.FileSystemView$FileSystemRoot",
	"java.io.File",
	nullptr,
	nullptr,
	_FileSystemView$FileSystemRoot_MethodInfo_,
	nullptr,
	nullptr,
	_FileSystemView$FileSystemRoot_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.filechooser.FileSystemView"
};

$Object* allocate$FileSystemView$FileSystemRoot($Class* clazz) {
	return $of($alloc(FileSystemView$FileSystemRoot));
}

void FileSystemView$FileSystemRoot::init$($File* f) {
	$File::init$(f, ""_s);
}

void FileSystemView$FileSystemRoot::init$($String* s) {
	$File::init$(s);
}

bool FileSystemView$FileSystemRoot::isDirectory() {
	return true;
}

$String* FileSystemView$FileSystemRoot::getName() {
	return getPath();
}

FileSystemView$FileSystemRoot::FileSystemView$FileSystemRoot() {
}

$Class* FileSystemView$FileSystemRoot::load$($String* name, bool initialize) {
	$loadClass(FileSystemView$FileSystemRoot, name, initialize, &_FileSystemView$FileSystemRoot_ClassInfo_, allocate$FileSystemView$FileSystemRoot);
	return class$;
}

$Class* FileSystemView$FileSystemRoot::class$ = nullptr;

		} // filechooser
	} // swing
} // javax