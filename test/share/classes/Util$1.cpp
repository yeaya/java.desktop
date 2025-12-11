#include <Util$1.h>

#include <Util.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Util$1_FieldInfo_[] = {
	{"val$component", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Util$1, val$component)},
	{}
};

$MethodInfo _Util$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;)V", "()V", 0, $method(static_cast<void(Util$1::*)($Component*)>(&Util$1::init$))},
	{"call", "()Ljava/awt/Point;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Util$1_EnclosingMethodInfo_ = {
	"Util",
	"getCenterPoint",
	"(Ljava/awt/Component;)Ljava/awt/Point;"
};

$InnerClassInfo _Util$1_InnerClassesInfo_[] = {
	{"Util$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Util$1_ClassInfo_ = {
	$ACC_SUPER,
	"Util$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Util$1_FieldInfo_,
	_Util$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/awt/Point;>;",
	&_Util$1_EnclosingMethodInfo_,
	_Util$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Util"
};

$Object* allocate$Util$1($Class* clazz) {
	return $of($alloc(Util$1));
}

void Util$1::init$($Component* val$component) {
	$set(this, val$component, val$component);
}

$Object* Util$1::call() {
	$useLocalCurrentObjectStackCache();
	$var($Point, p, $nc(this->val$component)->getLocationOnScreen());
	$var($Dimension, size, $nc(this->val$component)->getSize());
	return $of($new($Point, $nc(p)->x + $nc(size)->width / 2, p->y + size->height / 2));
}

Util$1::Util$1() {
}

$Class* Util$1::load$($String* name, bool initialize) {
	$loadClass(Util$1, name, initialize, &_Util$1_ClassInfo_, allocate$Util$1);
	return class$;
}

$Class* Util$1::class$ = nullptr;