#include <bug6613904$1.h>

#include <bug6613904.h>
#include <java/awt/Container.h>
#include <javax/swing/GroupLayout$Alignment.h>
#include <javax/swing/GroupLayout$ParallelGroup.h>
#include <javax/swing/GroupLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$Alignment = ::javax::swing::GroupLayout$Alignment;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;

$MethodInfo _bug6613904$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6613904$1::*)()>(&bug6613904$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6613904$1_EnclosingMethodInfo_ = {
	"bug6613904",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6613904$1_InnerClassesInfo_[] = {
	{"bug6613904$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6613904$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6613904$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6613904$1_MethodInfo_,
	nullptr,
	&_bug6613904$1_EnclosingMethodInfo_,
	_bug6613904$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6613904"
};

$Object* allocate$bug6613904$1($Class* clazz) {
	return $of($alloc(bug6613904$1));
}

void bug6613904$1::init$() {
}

void bug6613904$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($GroupLayout, groupLayout, $new($GroupLayout, $$new($JPanel)));
	try {
		groupLayout->createParallelGroup(nullptr);
		$throwNew($RuntimeException, "groupLayout.createParallelGroup(null) doesn\'t throw IAE"_s);
	} catch ($IllegalArgumentException& e) {
	}
	try {
		groupLayout->createParallelGroup(nullptr, true);
		$throwNew($RuntimeException, "groupLayout.createParallelGroup(null, true) doesn\'t throw IAE"_s);
	} catch ($IllegalArgumentException& e) {
	}
	try {
		groupLayout->createParallelGroup(nullptr, false);
		$throwNew($RuntimeException, "groupLayout.createParallelGroup(null, false) doesn\'t throw IAE"_s);
	} catch ($IllegalArgumentException& e) {
	}
}

bug6613904$1::bug6613904$1() {
}

$Class* bug6613904$1::load$($String* name, bool initialize) {
	$loadClass(bug6613904$1, name, initialize, &_bug6613904$1_ClassInfo_, allocate$bug6613904$1);
	return class$;
}

$Class* bug6613904$1::class$ = nullptr;