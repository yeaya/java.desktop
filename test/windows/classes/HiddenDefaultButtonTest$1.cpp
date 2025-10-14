#include <HiddenDefaultButtonTest$1.h>

#include <HiddenDefaultButtonTest.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HiddenDefaultButtonTest = ::HiddenDefaultButtonTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HiddenDefaultButtonTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HiddenDefaultButtonTest$1::*)()>(&HiddenDefaultButtonTest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HiddenDefaultButtonTest$1_EnclosingMethodInfo_ = {
	"HiddenDefaultButtonTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _HiddenDefaultButtonTest$1_InnerClassesInfo_[] = {
	{"HiddenDefaultButtonTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HiddenDefaultButtonTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"HiddenDefaultButtonTest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_HiddenDefaultButtonTest$1_MethodInfo_,
	nullptr,
	&_HiddenDefaultButtonTest$1_EnclosingMethodInfo_,
	_HiddenDefaultButtonTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HiddenDefaultButtonTest"
};

$Object* allocate$HiddenDefaultButtonTest$1($Class* clazz) {
	return $of($alloc(HiddenDefaultButtonTest$1));
}

void HiddenDefaultButtonTest$1::init$() {
}

void HiddenDefaultButtonTest$1::actionPerformed($ActionEvent* e) {
	$init($HiddenDefaultButtonTest);
	++$HiddenDefaultButtonTest::ButtonClickCount;
}

HiddenDefaultButtonTest$1::HiddenDefaultButtonTest$1() {
}

$Class* HiddenDefaultButtonTest$1::load$($String* name, bool initialize) {
	$loadClass(HiddenDefaultButtonTest$1, name, initialize, &_HiddenDefaultButtonTest$1_ClassInfo_, allocate$HiddenDefaultButtonTest$1);
	return class$;
}

$Class* HiddenDefaultButtonTest$1::class$ = nullptr;