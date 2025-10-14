#include <javax/swing/filechooser/WindowsFileSystemView$2.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/filechooser/FileSystemView$FileSystemRoot.h>
#include <javax/swing/filechooser/WindowsFileSystemView.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemView$FileSystemRoot = ::javax::swing::filechooser::FileSystemView$FileSystemRoot;
using $WindowsFileSystemView = ::javax::swing::filechooser::WindowsFileSystemView;

namespace javax {
	namespace swing {
		namespace filechooser {

$FieldInfo _WindowsFileSystemView$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/filechooser/WindowsFileSystemView;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystemView$2, this$0)},
	{}
};

$MethodInfo _WindowsFileSystemView$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/filechooser/WindowsFileSystemView;Ljava/io/File;)V", nullptr, 0, $method(static_cast<void(WindowsFileSystemView$2::*)($WindowsFileSystemView*,$File*)>(&WindowsFileSystemView$2::init$))},
	{"exists", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileSystemView$2_EnclosingMethodInfo_ = {
	"javax.swing.filechooser.WindowsFileSystemView",
	"createFileSystemRoot",
	"(Ljava/io/File;)Ljava/io/File;"
};

$InnerClassInfo _WindowsFileSystemView$2_InnerClassesInfo_[] = {
	{"javax.swing.filechooser.WindowsFileSystemView$2", nullptr, nullptr, 0},
	{"javax.swing.filechooser.FileSystemView$FileSystemRoot", "javax.swing.filechooser.FileSystemView", "FileSystemRoot", $STATIC},
	{}
};

$ClassInfo _WindowsFileSystemView$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.filechooser.WindowsFileSystemView$2",
	"javax.swing.filechooser.FileSystemView$FileSystemRoot",
	nullptr,
	_WindowsFileSystemView$2_FieldInfo_,
	_WindowsFileSystemView$2_MethodInfo_,
	nullptr,
	&_WindowsFileSystemView$2_EnclosingMethodInfo_,
	_WindowsFileSystemView$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.filechooser.WindowsFileSystemView"
};

$Object* allocate$WindowsFileSystemView$2($Class* clazz) {
	return $of($alloc(WindowsFileSystemView$2));
}

void WindowsFileSystemView$2::init$($WindowsFileSystemView* this$0, $File* f) {
	$set(this, this$0, this$0);
	$FileSystemView$FileSystemRoot::init$(f);
}

bool WindowsFileSystemView$2::exists() {
	return true;
}

WindowsFileSystemView$2::WindowsFileSystemView$2() {
}

$Class* WindowsFileSystemView$2::load$($String* name, bool initialize) {
	$loadClass(WindowsFileSystemView$2, name, initialize, &_WindowsFileSystemView$2_ClassInfo_, allocate$WindowsFileSystemView$2);
	return class$;
}

$Class* WindowsFileSystemView$2::class$ = nullptr;

		} // filechooser
	} // swing
} // javax