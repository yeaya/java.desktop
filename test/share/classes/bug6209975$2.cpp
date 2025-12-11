#include <bug6209975$2.h>

#include <bug6209975.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug6209975 = ::bug6209975;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;

$FieldInfo _bug6209975$2_FieldInfo_[] = {
	{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6209975$2, val$result)},
	{}
};

$MethodInfo _bug6209975$2_MethodInfo_[] = {
	{"<init>", "([Ljava/awt/Point;)V", "()V", 0, $method(static_cast<void(bug6209975$2::*)($PointArray*)>(&bug6209975$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6209975$2_EnclosingMethodInfo_ = {
	"bug6209975",
	"getButtonClickPoint",
	"()Ljava/awt/Point;"
};

$InnerClassInfo _bug6209975$2_InnerClassesInfo_[] = {
	{"bug6209975$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6209975$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6209975$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6209975$2_FieldInfo_,
	_bug6209975$2_MethodInfo_,
	nullptr,
	&_bug6209975$2_EnclosingMethodInfo_,
	_bug6209975$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6209975"
};

$Object* allocate$bug6209975$2($Class* clazz) {
	return $of($alloc(bug6209975$2));
}

void bug6209975$2::init$($PointArray* val$result) {
	$set(this, val$result, val$result);
}

void bug6209975$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6209975);
	$var($Point, p, $nc($bug6209975::button)->getLocationOnScreen());
	$var($Dimension, size, $nc($bug6209975::button)->getSize());
	$nc(this->val$result)->set(0, $$new($Point, $nc(p)->x + $nc(size)->width / 2, p->y + size->height / 2));
}

bug6209975$2::bug6209975$2() {
}

$Class* bug6209975$2::load$($String* name, bool initialize) {
	$loadClass(bug6209975$2, name, initialize, &_bug6209975$2_ClassInfo_, allocate$bug6209975$2);
	return class$;
}

$Class* bug6209975$2::class$ = nullptr;