#include <bug6868611$MyThread.h>

#include <bug6868611.h>
#include <java/io/File.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $bug6868611 = ::bug6868611;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

$FieldInfo _bug6868611$MyThread_FieldInfo_[] = {
	{"dir", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(bug6868611$MyThread, dir)},
	{}
};

$MethodInfo _bug6868611$MyThread_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(bug6868611$MyThread::*)($File*)>(&bug6868611$MyThread::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6868611$MyThread_InnerClassesInfo_[] = {
	{"bug6868611$MyThread", "bug6868611", "MyThread", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug6868611$MyThread_ClassInfo_ = {
	$ACC_SUPER,
	"bug6868611$MyThread",
	"java.lang.Thread",
	nullptr,
	_bug6868611$MyThread_FieldInfo_,
	_bug6868611$MyThread_MethodInfo_,
	nullptr,
	nullptr,
	_bug6868611$MyThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6868611"
};

$Object* allocate$bug6868611$MyThread($Class* clazz) {
	return $of($alloc(bug6868611$MyThread));
}

void bug6868611$MyThread::init$($File* dir) {
	$Thread::init$();
	$set(this, dir, dir);
}

void bug6868611$MyThread::run() {
	$var($FileSystemView, fileSystemView, $FileSystemView::getFileSystemView());
	$nc(fileSystemView)->getFiles(this->dir, false);
}

bug6868611$MyThread::bug6868611$MyThread() {
}

$Class* bug6868611$MyThread::load$($String* name, bool initialize) {
	$loadClass(bug6868611$MyThread, name, initialize, &_bug6868611$MyThread_ClassInfo_, allocate$bug6868611$MyThread);
	return class$;
}

$Class* bug6868611$MyThread::class$ = nullptr;