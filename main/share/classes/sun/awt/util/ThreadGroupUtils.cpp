#include <sun/awt/util/ThreadGroupUtils.h>

#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;

namespace sun {
	namespace awt {
		namespace util {

$MethodInfo _ThreadGroupUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ThreadGroupUtils::*)()>(&ThreadGroupUtils::init$))},
	{"getRootThreadGroup", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ThreadGroup*(*)()>(&ThreadGroupUtils::getRootThreadGroup))},
	{}
};

$ClassInfo _ThreadGroupUtils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.util.ThreadGroupUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ThreadGroupUtils_MethodInfo_
};

$Object* allocate$ThreadGroupUtils($Class* clazz) {
	return $of($alloc(ThreadGroupUtils));
}

void ThreadGroupUtils::init$() {
}

$ThreadGroup* ThreadGroupUtils::getRootThreadGroup() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, currentTG, $($Thread::currentThread())->getThreadGroup());
	$var($ThreadGroup, parentTG, $nc(currentTG)->getParent());
	while (parentTG != nullptr) {
		$assign(currentTG, parentTG);
		$assign(parentTG, currentTG->getParent());
	}
	return currentTG;
}

ThreadGroupUtils::ThreadGroupUtils() {
}

$Class* ThreadGroupUtils::load$($String* name, bool initialize) {
	$loadClass(ThreadGroupUtils, name, initialize, &_ThreadGroupUtils_ClassInfo_, allocate$ThreadGroupUtils);
	return class$;
}

$Class* ThreadGroupUtils::class$ = nullptr;

		} // util
	} // awt
} // sun