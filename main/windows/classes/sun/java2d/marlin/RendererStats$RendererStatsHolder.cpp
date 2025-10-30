#include <sun/java2d/marlin/RendererStats$RendererStatsHolder.h>

#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/java2d/marlin/RendererStats$RendererStatsHolder$1.h>
#include <sun/java2d/marlin/RendererStats.h>
#include <jcpp.h>

#undef SINGLETON

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $ConcurrentLinkedQueue = ::java::util::concurrent::ConcurrentLinkedQueue;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;
using $RendererStats = ::sun::java2d::marlin::RendererStats;
using $RendererStats$RendererStatsHolder$1 = ::sun::java2d::marlin::RendererStats$RendererStatsHolder$1;

namespace sun {
	namespace java2d {
		namespace marlin {

class RendererStats$RendererStatsHolder$$Lambda$lambda$new$0 : public $PrivilegedAction {
	$class(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(RendererStats$RendererStatsHolder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$new$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RendererStats$RendererStatsHolder$$Lambda$lambda$new$0>());
	}
	RendererStats$RendererStatsHolder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RendererStats$RendererStatsHolder$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0, inst$)},
	{}
};
$MethodInfo RendererStats$RendererStatsHolder$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/marlin/RendererStats$RendererStatsHolder;)V", nullptr, $PUBLIC, $method(static_cast<void(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0::*)(RendererStats$RendererStatsHolder*)>(&RendererStats$RendererStatsHolder$$Lambda$lambda$new$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo RendererStats$RendererStatsHolder$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.marlin.RendererStats$RendererStatsHolder$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* RendererStats$RendererStatsHolder$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RendererStats$RendererStatsHolder$$Lambda$lambda$new$0::class$ = nullptr;

class RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1 : public $Runnable {
	$class(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(RendererStats$RendererStatsHolder* inst, $RendererStats* stats) {
		$set(this, inst$, inst);
		$set(this, stats, stats);
	}
	virtual void run() override {
		$nc(inst$)->lambda$add$1(stats);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1>());
	}
	RendererStats$RendererStatsHolder* inst$ = nullptr;
	$RendererStats* stats = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1, inst$)},
	{"stats", "Lsun/java2d/marlin/RendererStats;", nullptr, $PUBLIC, $field(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1, stats)},
	{}
};
$MethodInfo RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/marlin/RendererStats$RendererStatsHolder;Lsun/java2d/marlin/RendererStats;)V", nullptr, $PUBLIC, $method(static_cast<void(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1::*)(RendererStats$RendererStatsHolder*,$RendererStats*)>(&RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.marlin.RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1::load$($String* name, bool initialize) {
	$loadClass(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1::class$ = nullptr;

$FieldInfo _RendererStats$RendererStatsHolder_FieldInfo_[] = {
	{"SINGLETON", "Lsun/java2d/marlin/RendererStats$RendererStatsHolder;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(RendererStats$RendererStatsHolder, SINGLETON)},
	{"allStats", "Ljava/util/concurrent/ConcurrentLinkedQueue;", "Ljava/util/concurrent/ConcurrentLinkedQueue<Lsun/java2d/marlin/RendererStats;>;", $PRIVATE | $FINAL, $field(RendererStats$RendererStatsHolder, allStats)},
	{}
};

$MethodInfo _RendererStats$RendererStatsHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(RendererStats$RendererStatsHolder::*)()>(&RendererStats$RendererStatsHolder::init$))},
	{"add", "(Ljava/lang/Object;Lsun/java2d/marlin/RendererStats;)V", nullptr, 0, $method(static_cast<void(RendererStats$RendererStatsHolder::*)(Object$*,$RendererStats*)>(&RendererStats$RendererStatsHolder::add))},
	{"dump", "()V", nullptr, 0, $method(static_cast<void(RendererStats$RendererStatsHolder::*)()>(&RendererStats$RendererStatsHolder::dump))},
	{"dumpStats", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&RendererStats$RendererStatsHolder::dumpStats))},
	{"getInstance", "()Lsun/java2d/marlin/RendererStats$RendererStatsHolder;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<RendererStats$RendererStatsHolder*(*)()>(&RendererStats$RendererStatsHolder::getInstance))},
	{"lambda$add$1", "(Lsun/java2d/marlin/RendererStats;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(RendererStats$RendererStatsHolder::*)($RendererStats*)>(&RendererStats$RendererStatsHolder::lambda$add$1))},
	{"lambda$new$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Void*(RendererStats$RendererStatsHolder::*)()>(&RendererStats$RendererStatsHolder::lambda$new$0))},
	{"remove", "(Lsun/java2d/marlin/RendererStats;)V", nullptr, 0, $method(static_cast<void(RendererStats$RendererStatsHolder::*)($RendererStats*)>(&RendererStats$RendererStatsHolder::remove))},
	{}
};

$InnerClassInfo _RendererStats$RendererStatsHolder_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.RendererStats$RendererStatsHolder", "sun.java2d.marlin.RendererStats", "RendererStatsHolder", $STATIC | $FINAL},
	{"sun.java2d.marlin.RendererStats$RendererStatsHolder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RendererStats$RendererStatsHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.RendererStats$RendererStatsHolder",
	"java.lang.Object",
	nullptr,
	_RendererStats$RendererStatsHolder_FieldInfo_,
	_RendererStats$RendererStatsHolder_MethodInfo_,
	nullptr,
	nullptr,
	_RendererStats$RendererStatsHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.RendererStats"
};

$Object* allocate$RendererStats$RendererStatsHolder($Class* clazz) {
	return $of($alloc(RendererStats$RendererStatsHolder));
}

$volatile(RendererStats$RendererStatsHolder*) RendererStats$RendererStatsHolder::SINGLETON = nullptr;

RendererStats$RendererStatsHolder* RendererStats$RendererStatsHolder::getInstance() {
	$load(RendererStats$RendererStatsHolder);
	$synchronized(class$) {
		$init(RendererStats$RendererStatsHolder);
		if (RendererStats$RendererStatsHolder::SINGLETON == nullptr) {
			$assignStatic(RendererStats$RendererStatsHolder::SINGLETON, $new(RendererStats$RendererStatsHolder));
		}
		return RendererStats$RendererStatsHolder::SINGLETON;
	}
}

void RendererStats$RendererStatsHolder::dumpStats() {
	$init(RendererStats$RendererStatsHolder);
	if (RendererStats$RendererStatsHolder::SINGLETON != nullptr) {
		$nc(RendererStats$RendererStatsHolder::SINGLETON)->dump();
	}
}

void RendererStats$RendererStatsHolder::init$() {
	$beforeCallerSensitive();
	$set(this, allStats, $new($ConcurrentLinkedQueue));
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0, this)));
}

void RendererStats$RendererStatsHolder::add(Object$* parent, $RendererStats* stats) {
	$useLocalCurrentObjectStackCache();
	$nc(this->allStats)->add(stats);
	$nc($($CleanerFactory::cleaner()))->register$(parent, static_cast<$Runnable*>($$new(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1, this, stats)));
}

void RendererStats$RendererStatsHolder::remove($RendererStats* stats) {
	$nc(stats)->dump();
	$nc(this->allStats)->remove(stats);
}

void RendererStats$RendererStatsHolder::dump() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->allStats)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($RendererStats, stats, $cast($RendererStats, i$->next()));
			{
				$nc(stats)->dump();
			}
		}
	}
}

void RendererStats$RendererStatsHolder::lambda$add$1($RendererStats* stats) {
	remove(stats);
}

$Void* RendererStats$RendererStatsHolder::lambda$new$0() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, var$0, $MarlinUtils::getRootThreadGroup());
	$var($Thread, hook, $new($Thread, var$0, $$new($RendererStats$RendererStatsHolder$1, this), "MarlinStatsHook"_s));
	hook->setContextClassLoader(nullptr);
	$nc($($Runtime::getRuntime()))->addShutdownHook(hook);
	return nullptr;
}

void clinit$RendererStats$RendererStatsHolder($Class* class$) {
	$assignStatic(RendererStats$RendererStatsHolder::SINGLETON, nullptr);
}

RendererStats$RendererStatsHolder::RendererStats$RendererStatsHolder() {
}

$Class* RendererStats$RendererStatsHolder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0::classInfo$.name)) {
			return RendererStats$RendererStatsHolder$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1::classInfo$.name)) {
			return RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1::load$(name, initialize);
		}
	}
	$loadClass(RendererStats$RendererStatsHolder, name, initialize, &_RendererStats$RendererStatsHolder_ClassInfo_, clinit$RendererStats$RendererStatsHolder, allocate$RendererStats$RendererStatsHolder);
	return class$;
}

$Class* RendererStats$RendererStatsHolder::class$ = nullptr;

		} // marlin
	} // java2d
} // sun