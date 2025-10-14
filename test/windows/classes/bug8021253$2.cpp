#include <bug8021253$2.h>

#include <bug8021253.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $bug8021253 = ::bug8021253;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFileChooser = ::javax::swing::JFileChooser;

$MethodInfo _bug8021253$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8021253$2::*)()>(&bug8021253$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8021253$2_EnclosingMethodInfo_ = {
	"bug8021253",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8021253$2_InnerClassesInfo_[] = {
	{"bug8021253$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8021253$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8021253$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8021253$2_MethodInfo_,
	nullptr,
	&_bug8021253$2_EnclosingMethodInfo_,
	_bug8021253$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8021253"
};

$Object* allocate$bug8021253$2($Class* clazz) {
	return $of($alloc(bug8021253$2));
}

void bug8021253$2::init$() {
}

void bug8021253$2::run() {
	$init($bug8021253);
	$nc($bug8021253::fileChooser)->setSelectedFile($bug8021253::file);
}

bug8021253$2::bug8021253$2() {
}

$Class* bug8021253$2::load$($String* name, bool initialize) {
	$loadClass(bug8021253$2, name, initialize, &_bug8021253$2_ClassInfo_, allocate$bug8021253$2);
	return class$;
}

$Class* bug8021253$2::class$ = nullptr;