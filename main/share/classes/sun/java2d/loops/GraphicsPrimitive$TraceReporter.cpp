#include <sun/java2d/loops/GraphicsPrimitive$TraceReporter.h>

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
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
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
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;

namespace sun {
	namespace java2d {
		namespace loops {

class GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0 : public $PrivilegedAction {
	$class(GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(GraphicsPrimitive$TraceReporter::lambda$setShutdownHook$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0::*)()>(&GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.loops.GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0::load$($String* name, bool initialize) {
	$loadClass(GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0::class$ = nullptr;

$MethodInfo _GraphicsPrimitive$TraceReporter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GraphicsPrimitive$TraceReporter::*)()>(&GraphicsPrimitive$TraceReporter::init$))},
	{"lambda$setShutdownHook$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&GraphicsPrimitive$TraceReporter::lambda$setShutdownHook$0))},
	{"run", "()V", nullptr, $PUBLIC},
	{"setShutdownHook", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&GraphicsPrimitive$TraceReporter::setShutdownHook))},
	{}
};

$InnerClassInfo _GraphicsPrimitive$TraceReporter_InnerClassesInfo_[] = {
	{"sun.java2d.loops.GraphicsPrimitive$TraceReporter", "sun.java2d.loops.GraphicsPrimitive", "TraceReporter", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _GraphicsPrimitive$TraceReporter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.GraphicsPrimitive$TraceReporter",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_GraphicsPrimitive$TraceReporter_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsPrimitive$TraceReporter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.GraphicsPrimitive"
};

$Object* allocate$GraphicsPrimitive$TraceReporter($Class* clazz) {
	return $of($alloc(GraphicsPrimitive$TraceReporter));
}

void GraphicsPrimitive$TraceReporter::init$() {
}

void GraphicsPrimitive$TraceReporter::setShutdownHook() {
	$init(GraphicsPrimitive$TraceReporter);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0)));
}

void GraphicsPrimitive$TraceReporter::run() {
	$useLocalCurrentObjectStackCache();
	$var($PrintStream, ps, $GraphicsPrimitive::getTraceOutputFile());
	$var($Iterator, iterator, $nc($($nc($GraphicsPrimitive::traceMap)->entrySet()))->iterator());
	int64_t total = 0;
	int32_t numprims = 0;
	while ($nc(iterator)->hasNext()) {
		$var($Map$Entry, me, $cast($Map$Entry, iterator->next()));
		$var($Object, prim, $nc(me)->getKey());
		$var($ints, count, $cast($ints, me->getValue()));
		if ($nc(count)->get(0) == 1) {
			$nc(ps)->print("1 call to "_s);
		} else {
			$nc(ps)->print($$str({$$str(count->get(0)), " calls to "_s}));
		}
		$nc(ps)->println(prim);
		++numprims;
		total += $nc(count)->get(0);
	}
	if (numprims == 0) {
		$nc(ps)->println("No graphics primitives executed"_s);
	} else if (numprims > 1) {
		$nc(ps)->println($$str({$$str(total), " total calls to "_s, $$str(numprims), " different primitives"_s}));
	}
}

$Void* GraphicsPrimitive$TraceReporter::lambda$setShutdownHook$0() {
	$init(GraphicsPrimitive$TraceReporter);
	$useLocalCurrentObjectStackCache();
	$var(GraphicsPrimitive$TraceReporter, t, $new(GraphicsPrimitive$TraceReporter));
	$var($Thread, thread, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), t, "TraceReporter"_s, 0, false));
	thread->setContextClassLoader(nullptr);
	$nc($($Runtime::getRuntime()))->addShutdownHook(thread);
	return nullptr;
}

GraphicsPrimitive$TraceReporter::GraphicsPrimitive$TraceReporter() {
}

$Class* GraphicsPrimitive$TraceReporter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0::classInfo$.name)) {
			return GraphicsPrimitive$TraceReporter$$Lambda$lambda$setShutdownHook$0::load$(name, initialize);
		}
	}
	$loadClass(GraphicsPrimitive$TraceReporter, name, initialize, &_GraphicsPrimitive$TraceReporter_ClassInfo_, allocate$GraphicsPrimitive$TraceReporter);
	return class$;
}

$Class* GraphicsPrimitive$TraceReporter::class$ = nullptr;

		} // loops
	} // java2d
} // sun