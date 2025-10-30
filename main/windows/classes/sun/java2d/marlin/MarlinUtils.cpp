#include <sun/java2d/marlin/MarlinUtils.h>

#include <java/lang/ThreadGroup.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ENABLE_LOGS
#undef LOG
#undef USE_LOGGER

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _MarlinUtils_FieldInfo_[] = {
	{"LOG", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MarlinUtils, LOG)},
	{}
};

$MethodInfo _MarlinUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MarlinUtils::*)()>(&MarlinUtils::init$))},
	{"getRootThreadGroup", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ThreadGroup*(*)()>(&MarlinUtils::getRootThreadGroup))},
	{"logException", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$Throwable*)>(&MarlinUtils::logException))},
	{"logInfo", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&MarlinUtils::logInfo))},
	{}
};

$ClassInfo _MarlinUtils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.marlin.MarlinUtils",
	"java.lang.Object",
	nullptr,
	_MarlinUtils_FieldInfo_,
	_MarlinUtils_MethodInfo_
};

$Object* allocate$MarlinUtils($Class* clazz) {
	return $of($alloc(MarlinUtils));
}

$PlatformLogger* MarlinUtils::LOG = nullptr;

void MarlinUtils::init$() {
}

void MarlinUtils::logInfo($String* msg) {
	$init(MarlinUtils);
	$init($MarlinConst);
	if ($MarlinConst::USE_LOGGER) {
		$nc(MarlinUtils::LOG)->info(msg);
	} else {
		if ($MarlinConst::ENABLE_LOGS) {
			$nc($System::out)->print("INFO: "_s);
			$nc($System::out)->println(msg);
		}
	}
}

void MarlinUtils::logException($String* msg, $Throwable* th) {
	$init(MarlinUtils);
	$init($MarlinConst);
	if ($MarlinConst::USE_LOGGER) {
		$nc(MarlinUtils::LOG)->warning(msg, th);
	} else {
		if ($MarlinConst::ENABLE_LOGS) {
			$nc($System::out)->print("WARNING: "_s);
			$nc($System::out)->println(msg);
			$nc(th)->printStackTrace($System::err);
		}
	}
}

$ThreadGroup* MarlinUtils::getRootThreadGroup() {
	$init(MarlinUtils);
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, currentTG, $($Thread::currentThread())->getThreadGroup());
	$var($ThreadGroup, parentTG, $nc(currentTG)->getParent());
	while (parentTG != nullptr) {
		$assign(currentTG, parentTG);
		$assign(parentTG, currentTG->getParent());
	}
	return currentTG;
}

void clinit$MarlinUtils($Class* class$) {
	{
		$init($MarlinConst);
		if ($MarlinConst::USE_LOGGER) {
			$assignStatic(MarlinUtils::LOG, $PlatformLogger::getLogger("sun.java2d.marlin"_s));
		} else {
			$assignStatic(MarlinUtils::LOG, nullptr);
		}
	}
}

MarlinUtils::MarlinUtils() {
}

$Class* MarlinUtils::load$($String* name, bool initialize) {
	$loadClass(MarlinUtils, name, initialize, &_MarlinUtils_ClassInfo_, clinit$MarlinUtils, allocate$MarlinUtils);
	return class$;
}

$Class* MarlinUtils::class$ = nullptr;

		} // marlin
	} // java2d
} // sun