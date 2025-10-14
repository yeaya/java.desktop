#include <bug8075314$1.h>

#include <bug8075314.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8075314 = ::bug8075314;
using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8075314$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8075314$1::*)()>(&bug8075314$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8075314$1_EnclosingMethodInfo_ = {
	"bug8075314",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8075314$1_InnerClassesInfo_[] = {
	{"bug8075314$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8075314$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8075314$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8075314$1_MethodInfo_,
	nullptr,
	&_bug8075314$1_EnclosingMethodInfo_,
	_bug8075314$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8075314"
};

$Object* allocate$bug8075314$1($Class* clazz) {
	return $of($alloc(bug8075314$1));
}

void bug8075314$1::init$() {
}

void bug8075314$1::run() {
	$init($bug8075314);
	$assignStatic($bug8075314::frame, $new($JFrame));
	$nc($bug8075314::frame)->setUndecorated(true);
	$nc($bug8075314::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$bug8075314::setup($bug8075314::frame);
}

bug8075314$1::bug8075314$1() {
}

$Class* bug8075314$1::load$($String* name, bool initialize) {
	$loadClass(bug8075314$1, name, initialize, &_bug8075314$1_ClassInfo_, allocate$bug8075314$1);
	return class$;
}

$Class* bug8075314$1::class$ = nullptr;