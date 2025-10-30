#include <bug4865918$3.h>

#include <bug4865918$TestScrollBar.h>
#include <bug4865918.h>
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

using $bug4865918 = ::bug4865918;
using $bug4865918$TestScrollBar = ::bug4865918$TestScrollBar;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JScrollBar = ::javax::swing::JScrollBar;

$FieldInfo _bug4865918$3_FieldInfo_[] = {
	{"val$result", "[I", nullptr, $FINAL | $SYNTHETIC, $field(bug4865918$3, val$result)},
	{}
};

$MethodInfo _bug4865918$3_MethodInfo_[] = {
	{"<init>", "([I)V", "()V", 0, $method(static_cast<void(bug4865918$3::*)($ints*)>(&bug4865918$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4865918$3_EnclosingMethodInfo_ = {
	"bug4865918",
	"getValue",
	"()I"
};

$InnerClassInfo _bug4865918$3_InnerClassesInfo_[] = {
	{"bug4865918$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4865918$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4865918$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4865918$3_FieldInfo_,
	_bug4865918$3_MethodInfo_,
	nullptr,
	&_bug4865918$3_EnclosingMethodInfo_,
	_bug4865918$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4865918"
};

$Object* allocate$bug4865918$3($Class* clazz) {
	return $of($alloc(bug4865918$3));
}

void bug4865918$3::init$($ints* val$result) {
	$set(this, val$result, val$result);
}

void bug4865918$3::run() {
	$init($bug4865918);
	$nc(this->val$result)->set(0, $nc($bug4865918::sbar)->getValue());
}

bug4865918$3::bug4865918$3() {
}

$Class* bug4865918$3::load$($String* name, bool initialize) {
	$loadClass(bug4865918$3, name, initialize, &_bug4865918$3_ClassInfo_, allocate$bug4865918$3);
	return class$;
}

$Class* bug4865918$3::class$ = nullptr;