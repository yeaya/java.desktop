#include <bug4760494$1.h>

#include <bug4760494.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug4760494 = ::bug4760494;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$MethodInfo _bug4760494$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4760494$1::*)()>(&bug4760494$1::init$))},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4760494$1_EnclosingMethodInfo_ = {
	"bug4760494",
	"createUI",
	"()V"
};

$InnerClassInfo _bug4760494$1_InnerClassesInfo_[] = {
	{"bug4760494$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4760494$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4760494$1",
	"java.awt.event.MouseAdapter",
	nullptr,
	nullptr,
	_bug4760494$1_MethodInfo_,
	nullptr,
	&_bug4760494$1_EnclosingMethodInfo_,
	_bug4760494$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4760494"
};

$Object* allocate$bug4760494$1($Class* clazz) {
	return $of($alloc(bug4760494$1));
}

void bug4760494$1::init$() {
	$MouseAdapter::init$();
}

void bug4760494$1::mouseReleased($MouseEvent* e) {
	$init($bug4760494);
	$var($Component, var$0, static_cast<$Component*>($bug4760494::frame));
	int32_t var$1 = $nc(e)->getX();
	$nc($bug4760494::popup)->show(var$0, var$1, e->getY());
}

bug4760494$1::bug4760494$1() {
}

$Class* bug4760494$1::load$($String* name, bool initialize) {
	$loadClass(bug4760494$1, name, initialize, &_bug4760494$1_ClassInfo_, allocate$bug4760494$1);
	return class$;
}

$Class* bug4760494$1::class$ = nullptr;