#include <NonOpaquePopupMenuTest$3.h>

#include <NonOpaquePopupMenuTest.h>
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

using $NonOpaquePopupMenuTest = ::NonOpaquePopupMenuTest;
using $PointArray = $Array<::java::awt::Point>;
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

$FieldInfo _NonOpaquePopupMenuTest$3_FieldInfo_[] = {
	{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(NonOpaquePopupMenuTest$3, val$result)},
	{}
};

$MethodInfo _NonOpaquePopupMenuTest$3_MethodInfo_[] = {
	{"<init>", "([Ljava/awt/Point;)V", "()V", 0, $method(static_cast<void(NonOpaquePopupMenuTest$3::*)($PointArray*)>(&NonOpaquePopupMenuTest$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NonOpaquePopupMenuTest$3_EnclosingMethodInfo_ = {
	"NonOpaquePopupMenuTest",
	"getMenuClickPoint",
	"()Ljava/awt/Point;"
};

$InnerClassInfo _NonOpaquePopupMenuTest$3_InnerClassesInfo_[] = {
	{"NonOpaquePopupMenuTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NonOpaquePopupMenuTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"NonOpaquePopupMenuTest$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_NonOpaquePopupMenuTest$3_FieldInfo_,
	_NonOpaquePopupMenuTest$3_MethodInfo_,
	nullptr,
	&_NonOpaquePopupMenuTest$3_EnclosingMethodInfo_,
	_NonOpaquePopupMenuTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NonOpaquePopupMenuTest"
};

$Object* allocate$NonOpaquePopupMenuTest$3($Class* clazz) {
	return $of($alloc(NonOpaquePopupMenuTest$3));
}

void NonOpaquePopupMenuTest$3::init$($PointArray* val$result) {
	$set(this, val$result, val$result);
}

void NonOpaquePopupMenuTest$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($NonOpaquePopupMenuTest);
	$var($Point, p, $nc($NonOpaquePopupMenuTest::fileMenu)->getLocationOnScreen());
	$var($Dimension, size, $nc($NonOpaquePopupMenuTest::fileMenu)->getSize());
	$nc(this->val$result)->set(0, $$new($Point, $nc(p)->x + $nc(size)->width / 2, p->y + size->height / 2));
}

NonOpaquePopupMenuTest$3::NonOpaquePopupMenuTest$3() {
}

$Class* NonOpaquePopupMenuTest$3::load$($String* name, bool initialize) {
	$loadClass(NonOpaquePopupMenuTest$3, name, initialize, &_NonOpaquePopupMenuTest$3_ClassInfo_, allocate$NonOpaquePopupMenuTest$3);
	return class$;
}

$Class* NonOpaquePopupMenuTest$3::class$ = nullptr;