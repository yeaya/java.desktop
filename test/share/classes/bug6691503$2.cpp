#include <bug6691503$2.h>

#include <bug6691503.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6691503 = ::bug6691503;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$FieldInfo _bug6691503$2_FieldInfo_[] = {
	{"this$0", "Lbug6691503;", nullptr, $FINAL | $SYNTHETIC, $field(bug6691503$2, this$0)},
	{}
};

$MethodInfo _bug6691503$2_MethodInfo_[] = {
	{"<init>", "(Lbug6691503;)V", nullptr, 0, $method(static_cast<void(bug6691503$2::*)($bug6691503*)>(&bug6691503$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6691503$2_EnclosingMethodInfo_ = {
	"bug6691503",
	"testApplication",
	"()V"
};

$InnerClassInfo _bug6691503$2_InnerClassesInfo_[] = {
	{"bug6691503$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6691503$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6691503$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6691503$2_FieldInfo_,
	_bug6691503$2_MethodInfo_,
	nullptr,
	&_bug6691503$2_EnclosingMethodInfo_,
	_bug6691503$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6691503"
};

$Object* allocate$bug6691503$2($Class* clazz) {
	return $of($alloc(bug6691503$2));
}

void bug6691503$2::init$($bug6691503* this$0) {
	$set(this, this$0, this$0);
}

void bug6691503$2::run() {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$0->popupMenu)->show(this->this$0->frame, 0, 0);
	$var($Window, popupWindow, ($cast($Window, $nc($($nc($($nc($($nc(this->this$0->popupMenu)->getParent()))->getParent()))->getParent()))->getParent())));
	this->this$0->isAlwaysOnTop1 = $nc(popupWindow)->isAlwaysOnTop();
	$nc($System::out)->println($$str({"Application: popupWindow.isAlwaysOnTop() = "_s, $$str(this->this$0->isAlwaysOnTop1)}));
	$nc(this->this$0->popupMenu)->setVisible(false);
}

bug6691503$2::bug6691503$2() {
}

$Class* bug6691503$2::load$($String* name, bool initialize) {
	$loadClass(bug6691503$2, name, initialize, &_bug6691503$2_ClassInfo_, allocate$bug6691503$2);
	return class$;
}

$Class* bug6691503$2::class$ = nullptr;