#include <bug6691503$1.h>

#include <bug6691503.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6691503 = ::bug6691503;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$FieldInfo _bug6691503$1_FieldInfo_[] = {
	{"this$0", "Lbug6691503;", nullptr, $FINAL | $SYNTHETIC, $field(bug6691503$1, this$0)},
	{}
};

$MethodInfo _bug6691503$1_MethodInfo_[] = {
	{"<init>", "(Lbug6691503;)V", nullptr, 0, $method(static_cast<void(bug6691503$1::*)($bug6691503*)>(&bug6691503$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6691503$1_EnclosingMethodInfo_ = {
	"bug6691503",
	"setupUI",
	"()V"
};

$InnerClassInfo _bug6691503$1_InnerClassesInfo_[] = {
	{"bug6691503$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6691503$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6691503$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6691503$1_FieldInfo_,
	_bug6691503$1_MethodInfo_,
	nullptr,
	&_bug6691503$1_EnclosingMethodInfo_,
	_bug6691503$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6691503"
};

$Object* allocate$bug6691503$1($Class* clazz) {
	return $of($alloc(bug6691503$1));
}

void bug6691503$1::init$($bug6691503* this$0) {
	$set(this, this$0, this$0);
}

void bug6691503$1::run() {
	$set(this->this$0, frame, $new($JFrame));
	$nc(this->this$0->frame)->setVisible(true);
	$set(this->this$0, popupMenu, $new($JPopupMenu));
	$var($JMenuItem, click, $new($JMenuItem, "Click"_s));
	$nc(this->this$0->popupMenu)->add(click);
}

bug6691503$1::bug6691503$1() {
}

$Class* bug6691503$1::load$($String* name, bool initialize) {
	$loadClass(bug6691503$1, name, initialize, &_bug6691503$1_ClassInfo_, allocate$bug6691503$1);
	return class$;
}

$Class* bug6691503$1::class$ = nullptr;