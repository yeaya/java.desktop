#include <bug4314199$2.h>

#include <bug4314199.h>
#include <jcpp.h>

using $bug4314199 = ::bug4314199;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _bug4314199$2_FieldInfo_[] = {
	{"this$0", "Lbug4314199;", nullptr, $FINAL | $SYNTHETIC, $field(bug4314199$2, this$0)},
	{"val$e", "Ljava/lang/Exception;", nullptr, $FINAL | $SYNTHETIC, $field(bug4314199$2, val$e)},
	{}
};

$MethodInfo _bug4314199$2_MethodInfo_[] = {
	{"<init>", "(Lbug4314199;Ljava/lang/Exception;)V", "()V", 0, $method(static_cast<void(bug4314199$2::*)($bug4314199*,$Exception*)>(&bug4314199$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4314199$2_EnclosingMethodInfo_ = {
	"bug4314199",
	"init",
	"()V"
};

$InnerClassInfo _bug4314199$2_InnerClassesInfo_[] = {
	{"bug4314199$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4314199$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4314199$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4314199$2_FieldInfo_,
	_bug4314199$2_MethodInfo_,
	nullptr,
	&_bug4314199$2_EnclosingMethodInfo_,
	_bug4314199$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4314199"
};

$Object* allocate$bug4314199$2($Class* clazz) {
	return $of($alloc(bug4314199$2));
}

void bug4314199$2::init$($bug4314199* this$0, $Exception* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
}

void bug4314199$2::run() {
	$useLocalCurrentObjectStackCache();
	this->this$0->createAndShowMessage($$str({"Test fails because of exception: "_s, $($nc(this->val$e)->getMessage())}));
}

bug4314199$2::bug4314199$2() {
}

$Class* bug4314199$2::load$($String* name, bool initialize) {
	$loadClass(bug4314199$2, name, initialize, &_bug4314199$2_ClassInfo_, allocate$bug4314199$2);
	return class$;
}

$Class* bug4314199$2::class$ = nullptr;