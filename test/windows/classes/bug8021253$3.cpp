#include <bug8021253$3.h>

#include <bug8021253.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
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

using $bug8021253 = ::bug8021253;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8021253$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8021253$3::*)()>(&bug8021253$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8021253$3_EnclosingMethodInfo_ = {
	"bug8021253",
	"createAndShowGUI",
	"()V"
};

$InnerClassInfo _bug8021253$3_InnerClassesInfo_[] = {
	{"bug8021253$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8021253$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug8021253$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_bug8021253$3_MethodInfo_,
	nullptr,
	&_bug8021253$3_EnclosingMethodInfo_,
	_bug8021253$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8021253"
};

$Object* allocate$bug8021253$3($Class* clazz) {
	return $of($alloc(bug8021253$3));
}

void bug8021253$3::init$() {
}

void bug8021253$3::actionPerformed($ActionEvent* e) {
	$init($bug8021253);
	$bug8021253::defaultKeyPressed = true;
	$nc($bug8021253::frame)->dispose();
}

bug8021253$3::bug8021253$3() {
}

$Class* bug8021253$3::load$($String* name, bool initialize) {
	$loadClass(bug8021253$3, name, initialize, &_bug8021253$3_ClassInfo_, allocate$bug8021253$3);
	return class$;
}

$Class* bug8021253$3::class$ = nullptr;