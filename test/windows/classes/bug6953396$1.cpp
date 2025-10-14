#include <bug6953396$1.h>

#include <bug6953396$1$1.h>
#include <bug6953396.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/plaf/ViewportUI.h>
#include <javax/swing/plaf/basic/BasicViewportUI.h>
#include <jcpp.h>

using $bug6953396 = ::bug6953396;
using $bug6953396$1$1 = ::bug6953396$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JViewport = ::javax::swing::JViewport;
using $ViewportUI = ::javax::swing::plaf::ViewportUI;
using $BasicViewportUI = ::javax::swing::plaf::basic::BasicViewportUI;

$MethodInfo _bug6953396$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6953396$1::*)()>(&bug6953396$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6953396$1_EnclosingMethodInfo_ = {
	"bug6953396",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6953396$1_InnerClassesInfo_[] = {
	{"bug6953396$1", nullptr, nullptr, 0},
	{"bug6953396$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6953396$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6953396$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6953396$1_MethodInfo_,
	nullptr,
	&_bug6953396$1_EnclosingMethodInfo_,
	_bug6953396$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6953396"
};

$Object* allocate$bug6953396$1($Class* clazz) {
	return $of($alloc(bug6953396$1));
}

void bug6953396$1::init$() {
}

void bug6953396$1::run() {
	$var($BasicViewportUI, ui, $new($bug6953396$1$1, this));
	$var($JViewport, viewport, $new($JViewport));
	viewport->setUI(static_cast<$ViewportUI*>(ui));
	viewport->setUI(($ViewportUI*)nullptr);
}

bug6953396$1::bug6953396$1() {
}

$Class* bug6953396$1::load$($String* name, bool initialize) {
	$loadClass(bug6953396$1, name, initialize, &_bug6953396$1_ClassInfo_, allocate$bug6953396$1);
	return class$;
}

$Class* bug6953396$1::class$ = nullptr;