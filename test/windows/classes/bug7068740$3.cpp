#include <bug7068740$3.h>

#include <bug7068740.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $bug7068740 = ::bug7068740;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $JTable = ::javax::swing::JTable;

$FieldInfo _bug7068740$3_FieldInfo_[] = {
	{"val$row", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(bug7068740$3, val$row)},
	{}
};

$MethodInfo _bug7068740$3_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicInteger;)V", "()V", 0, $method(static_cast<void(bug7068740$3::*)($AtomicInteger*)>(&bug7068740$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7068740$3_EnclosingMethodInfo_ = {
	"bug7068740",
	"getSelectedRow",
	"()I"
};

$InnerClassInfo _bug7068740$3_InnerClassesInfo_[] = {
	{"bug7068740$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7068740$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug7068740$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug7068740$3_FieldInfo_,
	_bug7068740$3_MethodInfo_,
	nullptr,
	&_bug7068740$3_EnclosingMethodInfo_,
	_bug7068740$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7068740"
};

$Object* allocate$bug7068740$3($Class* clazz) {
	return $of($alloc(bug7068740$3));
}

void bug7068740$3::init$($AtomicInteger* val$row) {
	$set(this, val$row, val$row);
}

void bug7068740$3::run() {
	$init($bug7068740);
	$nc(this->val$row)->set($nc($bug7068740::table)->getSelectedRow());
}

bug7068740$3::bug7068740$3() {
}

$Class* bug7068740$3::load$($String* name, bool initialize) {
	$loadClass(bug7068740$3, name, initialize, &_bug7068740$3_ClassInfo_, allocate$bug7068740$3);
	return class$;
}

$Class* bug7068740$3::class$ = nullptr;