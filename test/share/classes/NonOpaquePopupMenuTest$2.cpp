#include <NonOpaquePopupMenuTest$2.h>

#include <NonOpaquePopupMenuTest.h>
#include <java/awt/Container.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $NonOpaquePopupMenuTest = ::NonOpaquePopupMenuTest;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$FieldInfo _NonOpaquePopupMenuTest$2_FieldInfo_[] = {
	{"val$result", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(NonOpaquePopupMenuTest$2, val$result)},
	{}
};

$MethodInfo _NonOpaquePopupMenuTest$2_MethodInfo_[] = {
	{"<init>", "([Z)V", "()V", 0, $method(static_cast<void(NonOpaquePopupMenuTest$2::*)($booleans*)>(&NonOpaquePopupMenuTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NonOpaquePopupMenuTest$2_EnclosingMethodInfo_ = {
	"NonOpaquePopupMenuTest",
	"isParentOpaque",
	"()Z"
};

$InnerClassInfo _NonOpaquePopupMenuTest$2_InnerClassesInfo_[] = {
	{"NonOpaquePopupMenuTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NonOpaquePopupMenuTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"NonOpaquePopupMenuTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_NonOpaquePopupMenuTest$2_FieldInfo_,
	_NonOpaquePopupMenuTest$2_MethodInfo_,
	nullptr,
	&_NonOpaquePopupMenuTest$2_EnclosingMethodInfo_,
	_NonOpaquePopupMenuTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NonOpaquePopupMenuTest"
};

$Object* allocate$NonOpaquePopupMenuTest$2($Class* clazz) {
	return $of($alloc(NonOpaquePopupMenuTest$2));
}

void NonOpaquePopupMenuTest$2::init$($booleans* val$result) {
	$set(this, val$result, val$result);
}

void NonOpaquePopupMenuTest$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($NonOpaquePopupMenuTest);
	$nc(this->val$result)->set(0, $nc($($nc($($nc($NonOpaquePopupMenuTest::fileMenu)->getPopupMenu()))->getParent()))->isOpaque());
}

NonOpaquePopupMenuTest$2::NonOpaquePopupMenuTest$2() {
}

$Class* NonOpaquePopupMenuTest$2::load$($String* name, bool initialize) {
	$loadClass(NonOpaquePopupMenuTest$2, name, initialize, &_NonOpaquePopupMenuTest$2_ClassInfo_, allocate$NonOpaquePopupMenuTest$2);
	return class$;
}

$Class* NonOpaquePopupMenuTest$2::class$ = nullptr;