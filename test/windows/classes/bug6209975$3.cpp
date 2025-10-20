#include <bug6209975$3.h>

#include <bug6209975.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JMenu.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug6209975 = ::bug6209975;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JMenu = ::javax::swing::JMenu;

$FieldInfo _bug6209975$3_FieldInfo_[] = {
	{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6209975$3, val$result)},
	{}
};

$MethodInfo _bug6209975$3_MethodInfo_[] = {
	{"<init>", "([Ljava/awt/Point;)V", "()V", 0, $method(static_cast<void(bug6209975$3::*)($PointArray*)>(&bug6209975$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6209975$3_EnclosingMethodInfo_ = {
	"bug6209975",
	"getMenuClickPoint",
	"()Ljava/awt/Point;"
};

$InnerClassInfo _bug6209975$3_InnerClassesInfo_[] = {
	{"bug6209975$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6209975$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6209975$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6209975$3_FieldInfo_,
	_bug6209975$3_MethodInfo_,
	nullptr,
	&_bug6209975$3_EnclosingMethodInfo_,
	_bug6209975$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6209975"
};

$Object* allocate$bug6209975$3($Class* clazz) {
	return $of($alloc(bug6209975$3));
}

void bug6209975$3::init$($PointArray* val$result) {
	$set(this, val$result, val$result);
}

void bug6209975$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6209975);
	$var($Point, p, $nc($bug6209975::menu)->getLocationOnScreen());
	$var($Dimension, size, $nc($bug6209975::menu)->getSize());
	$nc(this->val$result)->set(0, $$new($Point, $nc(p)->x + $nc(size)->width / 2, p->y + size->height / 2));
}

bug6209975$3::bug6209975$3() {
}

$Class* bug6209975$3::load$($String* name, bool initialize) {
	$loadClass(bug6209975$3, name, initialize, &_bug6209975$3_ClassInfo_, allocate$bug6209975$3);
	return class$;
}

$Class* bug6209975$3::class$ = nullptr;