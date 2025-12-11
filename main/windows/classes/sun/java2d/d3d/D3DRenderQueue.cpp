#include <sun/java2d/d3d/D3DRenderQueue.h>

#include <java/lang/Runnable.h>
#include <java/util/Set.h>
#include <sun/java2d/ScreenUpdateManager.h>
#include <sun/java2d/d3d/D3DRenderQueue$1.h>
#include <sun/java2d/d3d/D3DScreenUpdateManager.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Set = ::java::util::Set;
using $ScreenUpdateManager = ::sun::java2d::ScreenUpdateManager;
using $D3DRenderQueue$1 = ::sun::java2d::d3d::D3DRenderQueue$1;
using $D3DScreenUpdateManager = ::sun::java2d::d3d::D3DScreenUpdateManager;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DRenderQueue_FieldInfo_[] = {
	{"theInstance", "Lsun/java2d/d3d/D3DRenderQueue;", nullptr, $PRIVATE | $STATIC, $staticField(D3DRenderQueue, theInstance)},
	{"rqThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(D3DRenderQueue, rqThread)},
	{}
};

$MethodInfo _D3DRenderQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(D3DRenderQueue::*)()>(&D3DRenderQueue::init$))},
	{"disposeGraphicsConfig", "(J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t)>(&D3DRenderQueue::disposeGraphicsConfig))},
	{"flushAndInvokeNow", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"flushBuffer", "(JILjava/lang/Runnable;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(D3DRenderQueue::*)(int64_t,int32_t,$Runnable*)>(&D3DRenderQueue::flushBuffer))},
	{"flushBuffer", "(Ljava/lang/Runnable;)V", nullptr, $PRIVATE, $method(static_cast<void(D3DRenderQueue::*)($Runnable*)>(&D3DRenderQueue::flushBuffer))},
	{"flushNow", "()V", nullptr, $PUBLIC},
	{"getInstance", "()Lsun/java2d/d3d/D3DRenderQueue;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<D3DRenderQueue*(*)()>(&D3DRenderQueue::getInstance))},
	{"isRenderQueueThread", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&D3DRenderQueue::isRenderQueueThread))},
	{"restoreDevices", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&D3DRenderQueue::restoreDevices))},
	{"sync", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&D3DRenderQueue::sync))},
	{}
};

#define _METHOD_INDEX_flushBuffer 3

$InnerClassInfo _D3DRenderQueue_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DRenderQueue$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DRenderQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.d3d.D3DRenderQueue",
	"sun.java2d.pipe.RenderQueue",
	nullptr,
	_D3DRenderQueue_FieldInfo_,
	_D3DRenderQueue_MethodInfo_,
	nullptr,
	nullptr,
	_D3DRenderQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DRenderQueue$1"
};

$Object* allocate$D3DRenderQueue($Class* clazz) {
	return $of($alloc(D3DRenderQueue));
}

D3DRenderQueue* D3DRenderQueue::theInstance = nullptr;
$Thread* D3DRenderQueue::rqThread = nullptr;

void D3DRenderQueue::init$() {
	$RenderQueue::init$();
}

D3DRenderQueue* D3DRenderQueue::getInstance() {
	$load(D3DRenderQueue);
	$synchronized(class$) {
		$init(D3DRenderQueue);
		if (D3DRenderQueue::theInstance == nullptr) {
			$assignStatic(D3DRenderQueue::theInstance, $new(D3DRenderQueue));
			$nc(D3DRenderQueue::theInstance)->flushAndInvokeNow($$new($D3DRenderQueue$1));
		}
		return D3DRenderQueue::theInstance;
	}
}

void D3DRenderQueue::sync() {
	$init(D3DRenderQueue);
	$useLocalCurrentObjectStackCache();
	if (D3DRenderQueue::theInstance != nullptr) {
		$var($D3DScreenUpdateManager, mgr, $cast($D3DScreenUpdateManager, $ScreenUpdateManager::getInstance()));
		$nc(mgr)->runUpdateNow();
		$nc(D3DRenderQueue::theInstance)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(D3DRenderQueue::theInstance)->ensureCapacity(4);
				$nc($($nc(D3DRenderQueue::theInstance)->getBuffer()))->putInt(76);
				$nc(D3DRenderQueue::theInstance)->flushNow();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(D3DRenderQueue::theInstance)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void D3DRenderQueue::restoreDevices() {
	$init(D3DRenderQueue);
	$useLocalCurrentObjectStackCache();
	$var(D3DRenderQueue, rq, getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			rq->ensureCapacity(4);
			$nc($(rq->getBuffer()))->putInt(77);
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

bool D3DRenderQueue::isRenderQueueThread() {
	$init(D3DRenderQueue);
	return ($Thread::currentThread() == D3DRenderQueue::rqThread);
}

void D3DRenderQueue::disposeGraphicsConfig(int64_t pConfigInfo) {
	$init(D3DRenderQueue);
	$useLocalCurrentObjectStackCache();
	$var(D3DRenderQueue, rq, getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
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

void D3DRenderQueue::flushNow() {
	flushBuffer(nullptr);
}

void D3DRenderQueue::flushAndInvokeNow($Runnable* r) {
	flushBuffer(r);
}

void D3DRenderQueue::flushBuffer(int64_t buf, int32_t limit, $Runnable* task) {
	$prepareNative(D3DRenderQueue, flushBuffer, void, int64_t buf, int32_t limit, $Runnable* task);
	$invokeNative(buf, limit, task);
	$finishNative();
}

void D3DRenderQueue::flushBuffer($Runnable* task) {
	int32_t limit = $nc(this->buf)->position();
	if (limit > 0 || task != nullptr) {
		flushBuffer($nc(this->buf)->getAddress(), limit, task);
	}
	$nc(this->buf)->clear();
	$nc(this->refSet)->clear();
}

D3DRenderQueue::D3DRenderQueue() {
}

$Class* D3DRenderQueue::load$($String* name, bool initialize) {
	$loadClass(D3DRenderQueue, name, initialize, &_D3DRenderQueue_ClassInfo_, allocate$D3DRenderQueue);
	return class$;
}

$Class* D3DRenderQueue::class$ = nullptr;

		} // d3d
	} // java2d
} // sun