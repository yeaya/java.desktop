#include <bug4708809$4.h>

#include <bug4708809.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug4708809 = ::bug4708809;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JScrollBar = ::javax::swing::JScrollBar;

$FieldInfo _bug4708809$4_FieldInfo_[] = {
	{"val$scaleY", "D", nullptr, $FINAL | $SYNTHETIC, $field(bug4708809$4, val$scaleY)},
	{"val$scaleX", "D", nullptr, $FINAL | $SYNTHETIC, $field(bug4708809$4, val$scaleX)},
	{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug4708809$4, val$result)},
	{}
};

$MethodInfo _bug4708809$4_MethodInfo_[] = {
	{"<init>", "([Ljava/awt/Point;DD)V", "()V", 0, $method(static_cast<void(bug4708809$4::*)($PointArray*,double,double)>(&bug4708809$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4708809$4_EnclosingMethodInfo_ = {
	"bug4708809",
	"getClickPoint",
	"(DD)Ljava/awt/Point;"
};

$InnerClassInfo _bug4708809$4_InnerClassesInfo_[] = {
	{"bug4708809$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4708809$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug4708809$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4708809$4_FieldInfo_,
	_bug4708809$4_MethodInfo_,
	nullptr,
	&_bug4708809$4_EnclosingMethodInfo_,
	_bug4708809$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4708809"
};

$Object* allocate$bug4708809$4($Class* clazz) {
	return $of($alloc(bug4708809$4));
}

void bug4708809$4::init$($PointArray* val$result, double val$scaleX, double val$scaleY) {
	$set(this, val$result, val$result);
	this->val$scaleX = val$scaleX;
	this->val$scaleY = val$scaleY;
}

void bug4708809$4::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug4708809);
	$var($Point, p, $nc($bug4708809::sbar)->getLocationOnScreen());
	$var($Rectangle, rect, $nc($bug4708809::sbar)->getBounds());
	$nc(this->val$result)->set(0, $$new($Point, $cast(int32_t, ($nc(p)->x + this->val$scaleX * $nc(rect)->width)), $cast(int32_t, (p->y + this->val$scaleY * rect->height))));
}

bug4708809$4::bug4708809$4() {
}

$Class* bug4708809$4::load$($String* name, bool initialize) {
	$loadClass(bug4708809$4, name, initialize, &_bug4708809$4_ClassInfo_, allocate$bug4708809$4);
	return class$;
}

$Class* bug4708809$4::class$ = nullptr;