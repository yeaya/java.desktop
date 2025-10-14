#include <bug6868611$1.h>

#include <bug6868611.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $bug6868611 = ::bug6868611;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

$MethodInfo _bug6868611$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6868611$1::*)()>(&bug6868611$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6868611$1_EnclosingMethodInfo_ = {
	"bug6868611",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6868611$1_InnerClassesInfo_[] = {
	{"bug6868611$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6868611$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6868611$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6868611$1_MethodInfo_,
	nullptr,
	&_bug6868611$1_EnclosingMethodInfo_,
	_bug6868611$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6868611"
};

$Object* allocate$bug6868611$1($Class* clazz) {
	return $of($alloc(bug6868611$1));
}

void bug6868611$1::init$() {
}

void bug6868611$1::run() {
	$init($bug6868611);
	$nc($($FileSystemView::getFileSystemView()))->getFiles($bug6868611::tempFolder, false);
}

bug6868611$1::bug6868611$1() {
}

$Class* bug6868611$1::load$($String* name, bool initialize) {
	$loadClass(bug6868611$1, name, initialize, &_bug6868611$1_ClassInfo_, allocate$bug6868611$1);
	return class$;
}

$Class* bug6868611$1::class$ = nullptr;