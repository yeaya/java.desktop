#include <bug4275046$3.h>

#include <bug4275046.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $bug4275046 = ::bug4275046;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;

$FieldInfo _bug4275046$3_FieldInfo_[] = {
	{"this$0", "Lbug4275046;", nullptr, $FINAL | $SYNTHETIC, $field(bug4275046$3, this$0)},
	{}
};

$MethodInfo _bug4275046$3_MethodInfo_[] = {
	{"<init>", "(Lbug4275046;)V", nullptr, 0, $method(static_cast<void(bug4275046$3::*)($bug4275046*)>(&bug4275046$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4275046$3_EnclosingMethodInfo_ = {
	"bug4275046",
	"runTest",
	"()V"
};

$InnerClassInfo _bug4275046$3_InnerClassesInfo_[] = {
	{"bug4275046$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4275046$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4275046$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4275046$3_FieldInfo_,
	_bug4275046$3_MethodInfo_,
	nullptr,
	&_bug4275046$3_EnclosingMethodInfo_,
	_bug4275046$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4275046"
};

$Object* allocate$bug4275046$3($Class* clazz) {
	return $of($alloc(bug4275046$3));
}

void bug4275046$3::init$($bug4275046* this$0) {
	$set(this, this$0, this$0);
}

void bug4275046$3::run() {
	$set(this->this$0, tableLoc, $nc(this->this$0->table)->getLocationOnScreen());
	$set(this->this$0, cellRect, $nc(this->this$0->table)->getCellRect(0, 1, true));
}

bug4275046$3::bug4275046$3() {
}

$Class* bug4275046$3::load$($String* name, bool initialize) {
	$loadClass(bug4275046$3, name, initialize, &_bug4275046$3_ClassInfo_, allocate$bug4275046$3);
	return class$;
}

$Class* bug4275046$3::class$ = nullptr;