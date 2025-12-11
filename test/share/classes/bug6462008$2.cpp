#include <bug6462008$2.h>

#include <bug6462008.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug6462008 = ::bug6462008;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6462008$2_FieldInfo_[] = {
	{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$2, val$result)},
	{}
};

$MethodInfo _bug6462008$2_MethodInfo_[] = {
	{"<init>", "([Ljava/awt/Point;)V", "()V", 0, $method(static_cast<void(bug6462008$2::*)($PointArray*)>(&bug6462008$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6462008$2_EnclosingMethodInfo_ = {
	"bug6462008",
	"clickItem4",
	"()Ljava/awt/Point;"
};

$InnerClassInfo _bug6462008$2_InnerClassesInfo_[] = {
	{"bug6462008$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6462008$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6462008$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6462008$2_FieldInfo_,
	_bug6462008$2_MethodInfo_,
	nullptr,
	&_bug6462008$2_EnclosingMethodInfo_,
	_bug6462008$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6462008"
};

$Object* allocate$bug6462008$2($Class* clazz) {
	return $of($alloc(bug6462008$2));
}

void bug6462008$2::init$($PointArray* val$result) {
	$set(this, val$result, val$result);
}

void bug6462008$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6462008);
	$var($Rectangle, r, $nc($bug6462008::list)->getCellBounds(4, 4));
	$var($Point, p, $new($Point, $nc(r)->x + r->width / 2, r->y + r->height / 2));
	$SwingUtilities::convertPointToScreen(p, $bug6462008::list);
	$nc(this->val$result)->set(0, p);
}

bug6462008$2::bug6462008$2() {
}

$Class* bug6462008$2::load$($String* name, bool initialize) {
	$loadClass(bug6462008$2, name, initialize, &_bug6462008$2_ClassInfo_, allocate$bug6462008$2);
	return class$;
}

$Class* bug6462008$2::class$ = nullptr;