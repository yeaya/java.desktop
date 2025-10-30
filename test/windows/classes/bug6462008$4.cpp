#include <bug6462008$4.h>

#include <bug6462008.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $bug6462008 = ::bug6462008;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;

$MethodInfo _bug6462008$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6462008$4::*)()>(&bug6462008$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6462008$4_EnclosingMethodInfo_ = {
	"bug6462008",
	"scrollDownExtendSelection",
	"()V"
};

$InnerClassInfo _bug6462008$4_InnerClassesInfo_[] = {
	{"bug6462008$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6462008$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug6462008$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6462008$4_MethodInfo_,
	nullptr,
	&_bug6462008$4_EnclosingMethodInfo_,
	_bug6462008$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6462008"
};

$Object* allocate$bug6462008$4($Class* clazz) {
	return $of($alloc(bug6462008$4));
}

void bug6462008$4::init$() {
}

void bug6462008$4::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6462008);
	$nc($($nc($($nc($bug6462008::list)->getActionMap()))->get("scrollDownExtendSelection"_s)))->actionPerformed($$new($ActionEvent, $bug6462008::list, $ActionEvent::ACTION_PERFORMED, nullptr));
}

bug6462008$4::bug6462008$4() {
}

$Class* bug6462008$4::load$($String* name, bool initialize) {
	$loadClass(bug6462008$4, name, initialize, &_bug6462008$4_ClassInfo_, allocate$bug6462008$4);
	return class$;
}

$Class* bug6462008$4::class$ = nullptr;