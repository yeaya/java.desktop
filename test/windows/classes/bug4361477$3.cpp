#include <bug4361477$3.h>

#include <bug4361477.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $bug4361477 = ::bug4361477;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

$MethodInfo _bug4361477$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4361477$3::*)()>(&bug4361477$3::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4361477$3_EnclosingMethodInfo_ = {
	"bug4361477",
	"createAndShowUI",
	"()V"
};

$InnerClassInfo _bug4361477$3_InnerClassesInfo_[] = {
	{"bug4361477$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4361477$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4361477$3",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	nullptr,
	_bug4361477$3_MethodInfo_,
	nullptr,
	&_bug4361477$3_EnclosingMethodInfo_,
	_bug4361477$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4361477"
};

$Object* allocate$bug4361477$3($Class* clazz) {
	return $of($alloc(bug4361477$3));
}

void bug4361477$3::init$() {
}

void bug4361477$3::stateChanged($ChangeEvent* pick) {
	$init($bug4361477);
	$bug4361477::bStateChanged = true;
	if ($nc($bug4361477::tabbedPane)->getTabCount() == 3) {
		$nc($bug4361477::tabbedPane)->remove(2);
	}
}

bug4361477$3::bug4361477$3() {
}

$Class* bug4361477$3::load$($String* name, bool initialize) {
	$loadClass(bug4361477$3, name, initialize, &_bug4361477$3_ClassInfo_, allocate$bug4361477$3);
	return class$;
}

$Class* bug4361477$3::class$ = nullptr;