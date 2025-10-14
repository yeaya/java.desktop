#include <bug8010718$1.h>

#include <bug8010718$1$1.h>
#include <bug8010718$1$2.h>
#include <bug8010718.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $bug8010718 = ::bug8010718;
using $bug8010718$1$1 = ::bug8010718$1$1;
using $bug8010718$1$2 = ::bug8010718$1$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

$MethodInfo _bug8010718$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8010718$1::*)()>(&bug8010718$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8010718$1_EnclosingMethodInfo_ = {
	"bug8010718",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8010718$1_InnerClassesInfo_[] = {
	{"bug8010718$1", nullptr, nullptr, 0},
	{"bug8010718$1$2", nullptr, nullptr, 0},
	{"bug8010718$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8010718$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8010718$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8010718$1_MethodInfo_,
	nullptr,
	&_bug8010718$1_EnclosingMethodInfo_,
	_bug8010718$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8010718"
};

$Object* allocate$bug8010718$1($Class* clazz) {
	return $of($alloc(bug8010718$1));
}

void bug8010718$1::init$() {
}

void bug8010718$1::run() {
	$var($JFileChooser, fileChooser, $new($JFileChooser));
	fileChooser->addChoosableFileFilter($$new($bug8010718$1$1, this));
	fileChooser->addChoosableFileFilter($$new($bug8010718$1$2, this));
	if (fileChooser->getFileFilter() == nullptr) {
		$throwNew($RuntimeException, "getFileFilter() should not return null"_s);
	}
}

bug8010718$1::bug8010718$1() {
}

$Class* bug8010718$1::load$($String* name, bool initialize) {
	$loadClass(bug8010718$1, name, initialize, &_bug8010718$1_ClassInfo_, allocate$bug8010718$1);
	return class$;
}

$Class* bug8010718$1::class$ = nullptr;