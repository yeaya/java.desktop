#include <bug7161568$2.h>

#include <bug7161568.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $bug7161568 = ::bug7161568;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;

$MethodInfo _bug7161568$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7161568$2::*)()>(&bug7161568$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7161568$2_EnclosingMethodInfo_ = {
	"bug7161568",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7161568$2_InnerClassesInfo_[] = {
	{"bug7161568$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7161568$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7161568$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7161568$2_MethodInfo_,
	nullptr,
	&_bug7161568$2_EnclosingMethodInfo_,
	_bug7161568$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7161568"
};

$Object* allocate$bug7161568$2($Class* clazz) {
	return $of($alloc(bug7161568$2));
}

void bug7161568$2::init$() {
}

void bug7161568$2::run() {
	$init($bug7161568);
	$nc($bug7161568::tabbedPane)->requestFocus();
}

bug7161568$2::bug7161568$2() {
}

$Class* bug7161568$2::load$($String* name, bool initialize) {
	$loadClass(bug7161568$2, name, initialize, &_bug7161568$2_ClassInfo_, allocate$bug7161568$2);
	return class$;
}

$Class* bug7161568$2::class$ = nullptr;