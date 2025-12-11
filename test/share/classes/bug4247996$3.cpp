#include <bug4247996$3.h>

#include <bug4247996.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug4247996 = ::bug4247996;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;

$FieldInfo _bug4247996$3_FieldInfo_[] = {
	{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug4247996$3, val$result)},
	{}
};

$MethodInfo _bug4247996$3_MethodInfo_[] = {
	{"<init>", "([Ljava/awt/Point;)V", "()V", 0, $method(static_cast<void(bug4247996$3::*)($PointArray*)>(&bug4247996$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4247996$3_EnclosingMethodInfo_ = {
	"bug4247996",
	"getButtonCenter",
	"()Ljava/awt/Point;"
};

$InnerClassInfo _bug4247996$3_InnerClassesInfo_[] = {
	{"bug4247996$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4247996$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4247996$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4247996$3_FieldInfo_,
	_bug4247996$3_MethodInfo_,
	nullptr,
	&_bug4247996$3_EnclosingMethodInfo_,
	_bug4247996$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4247996"
};

$Object* allocate$bug4247996$3($Class* clazz) {
	return $of($alloc(bug4247996$3));
}

void bug4247996$3::init$($PointArray* val$result) {
	$set(this, val$result, val$result);
}

void bug4247996$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug4247996);
	$var($Point, p, $nc($bug4247996::button)->getLocationOnScreen());
	$var($Dimension, size, $nc($bug4247996::button)->getSize());
	$nc(this->val$result)->set(0, $$new($Point, $nc(p)->x + $nc(size)->width / 2, p->y + size->height / 2));
}

bug4247996$3::bug4247996$3() {
}

$Class* bug4247996$3::load$($String* name, bool initialize) {
	$loadClass(bug4247996$3, name, initialize, &_bug4247996$3_ClassInfo_, allocate$bug4247996$3);
	return class$;
}

$Class* bug4247996$3::class$ = nullptr;