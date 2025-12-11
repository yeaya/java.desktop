#include <javax/swing/filechooser/WindowsFileSystemView$1.h>

#include <java/io/File.h>
#include <javax/swing/filechooser/WindowsFileSystemView.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WindowsFileSystemView = ::javax::swing::filechooser::WindowsFileSystemView;

namespace javax {
	namespace swing {
		namespace filechooser {

$FieldInfo _WindowsFileSystemView$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/filechooser/WindowsFileSystemView;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystemView$1, this$0)},
	{"val$dir", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystemView$1, val$dir)},
	{}
};

$MethodInfo _WindowsFileSystemView$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/filechooser/WindowsFileSystemView;Ljava/io/File;)V", "()V", 0, $method(static_cast<void(WindowsFileSystemView$1::*)($WindowsFileSystemView*,$File*)>(&WindowsFileSystemView$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileSystemView$1_EnclosingMethodInfo_ = {
	"javax.swing.filechooser.WindowsFileSystemView",
	"isFloppyDrive",
	"(Ljava/io/File;)Z"
};

$InnerClassInfo _WindowsFileSystemView$1_InnerClassesInfo_[] = {
	{"javax.swing.filechooser.WindowsFileSystemView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileSystemView$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.filechooser.WindowsFileSystemView$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_WindowsFileSystemView$1_FieldInfo_,
	_WindowsFileSystemView$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_WindowsFileSystemView$1_EnclosingMethodInfo_,
	_WindowsFileSystemView$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.filechooser.WindowsFileSystemView"
};

$Object* allocate$WindowsFileSystemView$1($Class* clazz) {
	return $of($alloc(WindowsFileSystemView$1));
}

void WindowsFileSystemView$1::init$($WindowsFileSystemView* this$0, $File* val$dir) {
	$set(this, this$0, this$0);
	$set(this, val$dir, val$dir);
}

$Object* WindowsFileSystemView$1::run() {
	return $of($nc(this->val$dir)->getAbsolutePath());
}

WindowsFileSystemView$1::WindowsFileSystemView$1() {
}

$Class* WindowsFileSystemView$1::load$($String* name, bool initialize) {
	$loadClass(WindowsFileSystemView$1, name, initialize, &_WindowsFileSystemView$1_ClassInfo_, allocate$WindowsFileSystemView$1);
	return class$;
}

$Class* WindowsFileSystemView$1::class$ = nullptr;

		} // filechooser
	} // swing
} // javax