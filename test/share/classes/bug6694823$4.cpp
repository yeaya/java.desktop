#include <bug6694823$4.h>

#include <bug6694823.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6694823 = ::bug6694823;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$FieldInfo _bug6694823$4_FieldInfo_[] = {
	{"val$point", "Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6694823$4, val$point)},
	{}
};

$MethodInfo _bug6694823$4_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Point;)V", "()V", 0, $method(static_cast<void(bug6694823$4::*)($Point*)>(&bug6694823$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6694823$4_EnclosingMethodInfo_ = {
	"bug6694823",
	"checkPopup",
	"()V"
};

$InnerClassInfo _bug6694823$4_InnerClassesInfo_[] = {
	{"bug6694823$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6694823$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug6694823$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6694823$4_FieldInfo_,
	_bug6694823$4_MethodInfo_,
	nullptr,
	&_bug6694823$4_EnclosingMethodInfo_,
	_bug6694823$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6694823"
};

$Object* allocate$bug6694823$4($Class* clazz) {
	return $of($alloc(bug6694823$4));
}

void bug6694823$4::init$($Point* val$point) {
	$set(this, val$point, val$point);
}

void bug6694823$4::run() {
	$nc(this->val$point)->x = 0;
	$init($bug6694823);
	int32_t var$0 = $nc($bug6694823::frame)->getHeight();
	$nc(this->val$point)->y = var$0 - $nc($($nc($bug6694823::popup)->getPreferredSize()))->height + $nc($bug6694823::screenInsets)->bottom;
	$nc($bug6694823::popup)->show($bug6694823::frame, $nc(this->val$point)->x, $nc(this->val$point)->y);
}

bug6694823$4::bug6694823$4() {
}

$Class* bug6694823$4::load$($String* name, bool initialize) {
	$loadClass(bug6694823$4, name, initialize, &_bug6694823$4_ClassInfo_, allocate$bug6694823$4);
	return class$;
}

$Class* bug6694823$4::class$ = nullptr;