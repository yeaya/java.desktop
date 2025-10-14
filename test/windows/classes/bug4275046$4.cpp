#include <bug4275046$4.h>

#include <bug4275046.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $bug4275046 = ::bug4275046;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTable = ::javax::swing::JTable;

$FieldInfo _bug4275046$4_FieldInfo_[] = {
	{"this$0", "Lbug4275046;", nullptr, $FINAL | $SYNTHETIC, $field(bug4275046$4, this$0)},
	{}
};

$MethodInfo _bug4275046$4_MethodInfo_[] = {
	{"<init>", "(Lbug4275046;)V", nullptr, 0, $method(static_cast<void(bug4275046$4::*)($bug4275046*)>(&bug4275046$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4275046$4_EnclosingMethodInfo_ = {
	"bug4275046",
	"runTest",
	"()V"
};

$InnerClassInfo _bug4275046$4_InnerClassesInfo_[] = {
	{"bug4275046$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4275046$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug4275046$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4275046$4_FieldInfo_,
	_bug4275046$4_MethodInfo_,
	nullptr,
	&_bug4275046$4_EnclosingMethodInfo_,
	_bug4275046$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4275046"
};

$Object* allocate$bug4275046$4($Class* clazz) {
	return $of($alloc(bug4275046$4));
}

void bug4275046$4::init$($bug4275046* this$0) {
	$set(this, this$0, this$0);
}

void bug4275046$4::run() {
	$set(this->this$0, cellRect, $nc(this->this$0->table)->getCellRect(1, 2, true));
}

bug4275046$4::bug4275046$4() {
}

$Class* bug4275046$4::load$($String* name, bool initialize) {
	$loadClass(bug4275046$4, name, initialize, &_bug4275046$4_ClassInfo_, allocate$bug4275046$4);
	return class$;
}

$Class* bug4275046$4::class$ = nullptr;