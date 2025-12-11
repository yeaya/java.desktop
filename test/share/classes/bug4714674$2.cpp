#include <bug4714674$2.h>

#include <DeafServer.h>
#include <bug4714674.h>
#include <jcpp.h>

using $DeafServer = ::DeafServer;
using $bug4714674 = ::bug4714674;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug4714674$2_FieldInfo_[] = {
	{"this$0", "Lbug4714674;", nullptr, $FINAL | $SYNTHETIC, $field(bug4714674$2, this$0)},
	{"val$server", "LDeafServer;", nullptr, $FINAL | $SYNTHETIC, $field(bug4714674$2, val$server)},
	{}
};

$MethodInfo _bug4714674$2_MethodInfo_[] = {
	{"<init>", "(Lbug4714674;LDeafServer;)V", "()V", 0, $method(static_cast<void(bug4714674$2::*)($bug4714674*,$DeafServer*)>(&bug4714674$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4714674$2_EnclosingMethodInfo_ = {
	"bug4714674",
	"test",
	"()V"
};

$InnerClassInfo _bug4714674$2_InnerClassesInfo_[] = {
	{"bug4714674$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4714674$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4714674$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4714674$2_FieldInfo_,
	_bug4714674$2_MethodInfo_,
	nullptr,
	&_bug4714674$2_EnclosingMethodInfo_,
	_bug4714674$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4714674"
};

$Object* allocate$bug4714674$2($Class* clazz) {
	return $of($alloc(bug4714674$2));
}

void bug4714674$2::init$($bug4714674* this$0, $DeafServer* val$server) {
	$set(this, this$0, this$0);
	$set(this, val$server, val$server);
}

void bug4714674$2::run() {
	$synchronized(this->val$server) {
		$nc(this->val$server)->wakeup = true;
		$nc($of(this->val$server))->notifyAll();
	}
	this->this$0->pass();
}

bug4714674$2::bug4714674$2() {
}

$Class* bug4714674$2::load$($String* name, bool initialize) {
	$loadClass(bug4714674$2, name, initialize, &_bug4714674$2_ClassInfo_, allocate$bug4714674$2);
	return class$;
}

$Class* bug4714674$2::class$ = nullptr;