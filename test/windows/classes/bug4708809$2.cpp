#include <bug4708809$2.h>

#include <bug4708809.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <jcpp.h>

using $bug4708809 = ::bug4708809;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;

$MethodInfo _bug4708809$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4708809$2::*)()>(&bug4708809$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4708809$2_EnclosingMethodInfo_ = {
	"bug4708809",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4708809$2_InnerClassesInfo_[] = {
	{"bug4708809$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4708809$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4708809$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4708809$2_MethodInfo_,
	nullptr,
	&_bug4708809$2_EnclosingMethodInfo_,
	_bug4708809$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4708809"
};

$Object* allocate$bug4708809$2($Class* clazz) {
	return $of($alloc(bug4708809$2));
}

void bug4708809$2::init$() {
}

void bug4708809$2::run() {
	$init($bug4708809);
	$nc($bug4708809::spane)->requestFocus();
	$nc($bug4708809::sbar)->setValue($nc($bug4708809::sbar)->getMaximum());
}

bug4708809$2::bug4708809$2() {
}

$Class* bug4708809$2::load$($String* name, bool initialize) {
	$loadClass(bug4708809$2, name, initialize, &_bug4708809$2_ClassInfo_, allocate$bug4708809$2);
	return class$;
}

$Class* bug4708809$2::class$ = nullptr;