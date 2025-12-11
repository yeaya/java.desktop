#include <bug6694823$5.h>

#include <bug6694823.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6694823 = ::bug6694823;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$FieldInfo _bug6694823$5_FieldInfo_[] = {
	{"val$point", "Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6694823$5, val$point)},
	{}
};

$MethodInfo _bug6694823$5_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Point;)V", "()V", 0, $method(static_cast<void(bug6694823$5::*)($Point*)>(&bug6694823$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6694823$5_EnclosingMethodInfo_ = {
	"bug6694823",
	"checkPopup",
	"()V"
};

$InnerClassInfo _bug6694823$5_InnerClassesInfo_[] = {
	{"bug6694823$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6694823$5_ClassInfo_ = {
	$ACC_SUPER,
	"bug6694823$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6694823$5_FieldInfo_,
	_bug6694823$5_MethodInfo_,
	nullptr,
	&_bug6694823$5_EnclosingMethodInfo_,
	_bug6694823$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6694823"
};

$Object* allocate$bug6694823$5($Class* clazz) {
	return $of($alloc(bug6694823$5));
}

void bug6694823$5::init$($Point* val$point) {
	$set(this, val$point, val$point);
}

void bug6694823$5::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6694823);
	$var($Point, frameLoc, $nc($bug6694823::frame)->getLocationOnScreen());
	if ($nc($($nc($bug6694823::popup)->getLocationOnScreen()))->equals($$new($Point, $nc(frameLoc)->x, frameLoc->y + $nc(this->val$point)->y))) {
		$throwNew($RuntimeException, "Popup is not shifted"_s);
	}
	$nc($bug6694823::popup)->setVisible(false);
	$nc($bug6694823::frame)->dispose();
}

bug6694823$5::bug6694823$5() {
}

$Class* bug6694823$5::load$($String* name, bool initialize) {
	$loadClass(bug6694823$5, name, initialize, &_bug6694823$5_ClassInfo_, allocate$bug6694823$5);
	return class$;
}

$Class* bug6694823$5::class$ = nullptr;