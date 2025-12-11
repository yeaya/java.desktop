#include <bug4235420$1.h>

#include <bug4235420$Table.h>
#include <bug4235420.h>
#include <jcpp.h>

using $bug4235420$Table = ::bug4235420$Table;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug4235420$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4235420$1::*)()>(&bug4235420$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4235420$1_EnclosingMethodInfo_ = {
	"bug4235420",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4235420$1_InnerClassesInfo_[] = {
	{"bug4235420$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4235420$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4235420$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4235420$1_MethodInfo_,
	nullptr,
	&_bug4235420$1_EnclosingMethodInfo_,
	_bug4235420$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4235420"
};

$Object* allocate$bug4235420$1($Class* clazz) {
	return $of($alloc(bug4235420$1));
}

void bug4235420$1::init$() {
}

void bug4235420$1::run() {
	$var($bug4235420$Table, table, $new($bug4235420$Table));
	table->test();
}

bug4235420$1::bug4235420$1() {
}

$Class* bug4235420$1::load$($String* name, bool initialize) {
	$loadClass(bug4235420$1, name, initialize, &_bug4235420$1_ClassInfo_, allocate$bug4235420$1);
	return class$;
}

$Class* bug4235420$1::class$ = nullptr;