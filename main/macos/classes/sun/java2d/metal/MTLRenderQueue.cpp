#include <sun/java2d/metal/MTLRenderQueue.h>

#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Set.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLRenderQueue$QueueFlusher.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Set = ::java::util::Set;
using $MTLContext = ::sun::java2d::metal::MTLContext;
using $MTLRenderQueue$QueueFlusher = ::sun::java2d::metal::MTLRenderQueue$QueueFlusher;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace metal {

class MTLRenderQueue$$Lambda$lambda$new$0 : public $PrivilegedAction {
	$class(MTLRenderQueue$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(MTLRenderQueue* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$new$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MTLRenderQueue$$Lambda$lambda$new$0>());
	}
	MTLRenderQueue* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MTLRenderQueue$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MTLRenderQueue$$Lambda$lambda$new$0, inst$)},
	{}
};
$MethodInfo MTLRenderQueue$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/metal/MTLRenderQueue;)V", nullptr, $PUBLIC, $method(static_cast<void(MTLRenderQueue$$Lambda$lambda$new$0::*)(MTLRenderQueue*)>(&MTLRenderQueue$$Lambda$lambda$new$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MTLRenderQueue$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.metal.MTLRenderQueue$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* MTLRenderQueue$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(MTLRenderQueue$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MTLRenderQueue$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _MTLRenderQueue_FieldInfo_[] = {
	{"theInstance", "Lsun/java2d/metal/MTLRenderQueue;", nullptr, $PRIVATE | $STATIC, $staticField(MTLRenderQueue, theInstance)},
	{"flusher", "Lsun/java2d/metal/MTLRenderQueue$QueueFlusher;", nullptr, $PRIVATE | $FINAL, $field(MTLRenderQueue, flusher)},
	{}
};

$MethodInfo _MTLRenderQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MTLRenderQueue::*)()>(&MTLRenderQueue::init$))},
	{"access$000", "(Lsun/java2d/metal/MTLRenderQueue;)Lsun/java2d/pipe/RenderBuffer;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$RenderBuffer*(*)(MTLRenderQueue*)>(&MTLRenderQueue::access$000))},
	{"disposeGraphicsConfig", "(J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t)>(&MTLRenderQueue::disposeGraphicsConfig))},
	{"flushAndInvokeNow", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"flushBuffer", "(JI)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(MTLRenderQueue::*)(int64_t,int32_t)>(&MTLRenderQueue::flushBuffer))},
	{"flushBuffer", "()V", nullptr, $PRIVATE, $method(static_cast<void(MTLRenderQueue::*)()>(&MTLRenderQueue::flushBuffer))},
	{"flushNow", "()V", nullptr, $PUBLIC},
	{"getInstance", "()Lsun/java2d/metal/MTLRenderQueue;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<MTLRenderQueue*(*)()>(&MTLRenderQueue::getInstance))},
	{"isQueueFlusherThread", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MTLRenderQueue::isQueueFlusherThread))},
	{"lambda$new$0", "()Lsun/java2d/metal/MTLRenderQueue$QueueFlusher;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$MTLRenderQueue$QueueFlusher*(MTLRenderQueue::*)()>(&MTLRenderQueue::lambda$new$0))},
	{"sync", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&MTLRenderQueue::sync))},
	{}
};

#define _METHOD_INDEX_flushBuffer 4

$InnerClassInfo _MTLRenderQueue_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLRenderQueue$QueueFlusher", "sun.java2d.metal.MTLRenderQueue", "QueueFlusher", $PRIVATE},
	{}
};

$ClassInfo _MTLRenderQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.metal.MTLRenderQueue",
	"sun.java2d.pipe.RenderQueue",
	nullptr,
	_MTLRenderQueue_FieldInfo_,
	_MTLRenderQueue_MethodInfo_,
	nullptr,
	nullptr,
	_MTLRenderQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLRenderQueue$QueueFlusher"
};

$Object* allocate$MTLRenderQueue($Class* clazz) {
	return $of($alloc(MTLRenderQueue));
}

MTLRenderQueue* MTLRenderQueue::theInstance = nullptr;

$RenderBuffer* MTLRenderQueue::access$000(MTLRenderQueue* x0) {
	$init(MTLRenderQueue);
	return $nc(x0)->buf;
}

void MTLRenderQueue::init$() {
	$beforeCallerSensitive();
	$RenderQueue::init$();
	$set(this, flusher, $cast($MTLRenderQueue$QueueFlusher, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(MTLRenderQueue$$Lambda$lambda$new$0, this)))));
}

MTLRenderQueue* MTLRenderQueue::getInstance() {
	$load(MTLRenderQueue);
	$synchronized(class$) {
		$init(MTLRenderQueue);
		if (MTLRenderQueue::theInstance == nullptr) {
			$assignStatic(MTLRenderQueue::theInstance, $new(MTLRenderQueue));
		}
		return MTLRenderQueue::theInstance;
	}
}

void MTLRenderQueue::sync() {
	$init(MTLRenderQueue);
	$useLocalCurrentObjectStackCache();
	if (MTLRenderQueue::theInstance != nullptr) {
		$nc(MTLRenderQueue::theInstance)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(MTLRenderQueue::theInstance)->ensureCapacity(4);
				$nc($($nc(MTLRenderQueue::theInstance)->getBuffer()))->putInt(76);
				$nc(MTLRenderQueue::theInstance)->flushNow();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(MTLRenderQueue::theInstance)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void MTLRenderQueue::disposeGraphicsConfig(int64_t pConfigInfo) {
	$init(MTLRenderQueue);
	$useLocalCurrentObjectStackCache();
	$var(MTLRenderQueue, rq, getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$MTLContext::setScratchSurface(pConfigInfo);
			$var($RenderBuffer, buf, rq->getBuffer());
			rq->ensureCapacityAndAlignment(12, 4);
			$nc(buf)->putInt(74);
			buf->putLong(pConfigInfo);
			rq->flushNow();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool MTLRenderQueue::isQueueFlusherThread() {
	$init(MTLRenderQueue);
	return ($Thread::currentThread() == $nc($nc($(getInstance()))->flusher)->thread);
}

void MTLRenderQueue::flushNow() {
	try {
		$nc(this->flusher)->flushNow();
	} catch ($Exception& e) {
		$nc($System::err)->println("exception in flushNow:"_s);
		e->printStackTrace();
	}
}

void MTLRenderQueue::flushAndInvokeNow($Runnable* r) {
	try {
		$nc(this->flusher)->flushAndInvokeNow(r);
	} catch ($Exception& e) {
		$nc($System::err)->println("exception in flushAndInvokeNow:"_s);
		e->printStackTrace();
	}
}

void MTLRenderQueue::flushBuffer(int64_t buf, int32_t limit) {
	$prepareNative(MTLRenderQueue, flushBuffer, void, int64_t buf, int32_t limit);
	$invokeNative(buf, limit);
	$finishNative();
}

void MTLRenderQueue::flushBuffer() {
	int32_t limit = $nc(this->buf)->position();
	if (limit > 0) {
		flushBuffer($nc(this->buf)->getAddress(), limit);
	}
	$nc(this->buf)->clear();
	$nc(this->refSet)->clear();
}

$MTLRenderQueue$QueueFlusher* MTLRenderQueue::lambda$new$0() {
	return $new($MTLRenderQueue$QueueFlusher, this);
}

MTLRenderQueue::MTLRenderQueue() {
}

$Class* MTLRenderQueue::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MTLRenderQueue$$Lambda$lambda$new$0::classInfo$.name)) {
			return MTLRenderQueue$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(MTLRenderQueue, name, initialize, &_MTLRenderQueue_ClassInfo_, allocate$MTLRenderQueue);
	return class$;
}

$Class* MTLRenderQueue::class$ = nullptr;

		} // metal
	} // java2d
} // sun