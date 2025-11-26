#include <java/beans/ThreadGroupContext$1.h>

#include <java/beans/ThreadGroupContext.h>
#include <java/beans/WeakIdentityMap.h>
#include <jcpp.h>

using $ThreadGroupContext = ::java::beans::ThreadGroupContext;
using $WeakIdentityMap = ::java::beans::WeakIdentityMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _ThreadGroupContext$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ThreadGroupContext$1::*)()>(&ThreadGroupContext$1::init$))},
	{"create", "(Ljava/lang/Object;)Ljava/beans/ThreadGroupContext;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ThreadGroupContext$1_EnclosingMethodInfo_ = {
	"java.beans.ThreadGroupContext",
	nullptr,
	nullptr
};

$InnerClassInfo _ThreadGroupContext$1_InnerClassesInfo_[] = {
	{"java.beans.ThreadGroupContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ThreadGroupContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.ThreadGroupContext$1",
	"java.beans.WeakIdentityMap",
	nullptr,
	nullptr,
	_ThreadGroupContext$1_MethodInfo_,
	"Ljava/beans/WeakIdentityMap<Ljava/beans/ThreadGroupContext;>;",
	&_ThreadGroupContext$1_EnclosingMethodInfo_,
	_ThreadGroupContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.ThreadGroupContext"
};

$Object* allocate$ThreadGroupContext$1($Class* clazz) {
	return $of($alloc(ThreadGroupContext$1));
}

void ThreadGroupContext$1::init$() {
	$WeakIdentityMap::init$();
}

$Object* ThreadGroupContext$1::create(Object$* key) {
	return $of($new($ThreadGroupContext));
}

ThreadGroupContext$1::ThreadGroupContext$1() {
}

$Class* ThreadGroupContext$1::load$($String* name, bool initialize) {
	$loadClass(ThreadGroupContext$1, name, initialize, &_ThreadGroupContext$1_ClassInfo_, allocate$ThreadGroupContext$1);
	return class$;
}

$Class* ThreadGroupContext$1::class$ = nullptr;

	} // beans
} // java