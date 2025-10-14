#include <bug4927934$2.h>

#include <bug4927934.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <jcpp.h>

using $bug4927934 = ::bug4927934;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;

$MethodInfo _bug4927934$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4927934$2::*)()>(&bug4927934$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4927934$2_EnclosingMethodInfo_ = {
	"bug4927934",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4927934$2_InnerClassesInfo_[] = {
	{"bug4927934$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4927934$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4927934$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4927934$2_MethodInfo_,
	nullptr,
	&_bug4927934$2_EnclosingMethodInfo_,
	_bug4927934$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4927934"
};

$Object* allocate$bug4927934$2($Class* clazz) {
	return $of($alloc(bug4927934$2));
}

void bug4927934$2::init$() {
}

void bug4927934$2::run() {
	$init($bug4927934);
	$nc($bug4927934::tree)->requestFocus();
}

bug4927934$2::bug4927934$2() {
}

$Class* bug4927934$2::load$($String* name, bool initialize) {
	$loadClass(bug4927934$2, name, initialize, &_bug4927934$2_ClassInfo_, allocate$bug4927934$2);
	return class$;
}

$Class* bug4927934$2::class$ = nullptr;