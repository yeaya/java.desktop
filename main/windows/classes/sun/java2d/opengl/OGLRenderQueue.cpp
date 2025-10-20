#include <sun/java2d/opengl/OGLRenderQueue.h>

#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Set.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLRenderQueue$QueueFlusher.h>
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
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Set = ::java::util::Set;
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLRenderQueue$QueueFlusher = ::sun::java2d::opengl::OGLRenderQueue$QueueFlusher;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLRenderQueue$$Lambda$lambda$new$0 : public $PrivilegedAction {
	$class(OGLRenderQueue$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(OGLRenderQueue* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$new$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<OGLRenderQueue$$Lambda$lambda$new$0>());
	}
	OGLRenderQueue* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo OGLRenderQueue$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(OGLRenderQueue$$Lambda$lambda$new$0, inst$)},
	{}
};
$MethodInfo OGLRenderQueue$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/opengl/OGLRenderQueue;)V", nullptr, $PUBLIC, $method(static_cast<void(OGLRenderQueue$$Lambda$lambda$new$0::*)(OGLRenderQueue*)>(&OGLRenderQueue$$Lambda$lambda$new$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo OGLRenderQueue$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.opengl.OGLRenderQueue$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* OGLRenderQueue$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(OGLRenderQueue$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* OGLRenderQueue$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _OGLRenderQueue_FieldInfo_[] = {
	{"theInstance", "Lsun/java2d/opengl/OGLRenderQueue;", nullptr, $PRIVATE | $STATIC, $staticField(OGLRenderQueue, theInstance)},
	{"flusher", "Lsun/java2d/opengl/OGLRenderQueue$QueueFlusher;", nullptr, $PRIVATE | $FINAL, $field(OGLRenderQueue, flusher)},
	{}
};

$MethodInfo _OGLRenderQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(OGLRenderQueue::*)()>(&OGLRenderQueue::init$))},
	{"access$000", "(Lsun/java2d/opengl/OGLRenderQueue;)Lsun/java2d/pipe/RenderBuffer;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$RenderBuffer*(*)(OGLRenderQueue*)>(&OGLRenderQueue::access$000))},
	{"disposeGraphicsConfig", "(J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t)>(&OGLRenderQueue::disposeGraphicsConfig))},
	{"flushAndInvokeNow", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"flushBuffer", "(JI)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(OGLRenderQueue::*)(int64_t,int32_t)>(&OGLRenderQueue::flushBuffer))},
	{"flushBuffer", "()V", nullptr, $PRIVATE, $method(static_cast<void(OGLRenderQueue::*)()>(&OGLRenderQueue::flushBuffer))},
	{"flushNow", "()V", nullptr, $PUBLIC},
	{"getInstance", "()Lsun/java2d/opengl/OGLRenderQueue;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<OGLRenderQueue*(*)()>(&OGLRenderQueue::getInstance))},
	{"isQueueFlusherThread", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&OGLRenderQueue::isQueueFlusherThread))},
	{"lambda$new$0", "()Lsun/java2d/opengl/OGLRenderQueue$QueueFlusher;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$OGLRenderQueue$QueueFlusher*(OGLRenderQueue::*)()>(&OGLRenderQueue::lambda$new$0))},
	{"sync", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&OGLRenderQueue::sync))},
	{}
};

#define _METHOD_INDEX_flushBuffer 4

$InnerClassInfo _OGLRenderQueue_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLRenderQueue$QueueFlusher", "sun.java2d.opengl.OGLRenderQueue", "QueueFlusher", $PRIVATE},
	{}
};

$ClassInfo _OGLRenderQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.OGLRenderQueue",
	"sun.java2d.pipe.RenderQueue",
	nullptr,
	_OGLRenderQueue_FieldInfo_,
	_OGLRenderQueue_MethodInfo_,
	nullptr,
	nullptr,
	_OGLRenderQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLRenderQueue$QueueFlusher"
};

$Object* allocate$OGLRenderQueue($Class* clazz) {
	return $of($alloc(OGLRenderQueue));
}

OGLRenderQueue* OGLRenderQueue::theInstance = nullptr;

$RenderBuffer* OGLRenderQueue::access$000(OGLRenderQueue* x0) {
	$init(OGLRenderQueue);
	return $nc(x0)->buf;
}

void OGLRenderQueue::init$() {
	$beforeCallerSensitive();
	$RenderQueue::init$();
	$set(this, flusher, $cast($OGLRenderQueue$QueueFlusher, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(OGLRenderQueue$$Lambda$lambda$new$0, this)))));
}

OGLRenderQueue* OGLRenderQueue::getInstance() {
	$load(OGLRenderQueue);
	$synchronized(class$) {
		$init(OGLRenderQueue);
		if (OGLRenderQueue::theInstance == nullptr) {
			$assignStatic(OGLRenderQueue::theInstance, $new(OGLRenderQueue));
		}
		return OGLRenderQueue::theInstance;
	}
}

void OGLRenderQueue::sync() {
	$init(OGLRenderQueue);
	$useLocalCurrentObjectStackCache();
	if (OGLRenderQueue::theInstance != nullptr) {
		$nc(OGLRenderQueue::theInstance)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(OGLRenderQueue::theInstance)->ensureCapacity(4);
				$nc($($nc(OGLRenderQueue::theInstance)->getBuffer()))->putInt(76);
				$nc(OGLRenderQueue::theInstance)->flushNow();
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(OGLRenderQueue::theInstance)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void OGLRenderQueue::disposeGraphicsConfig(int64_t pConfigInfo) {
	$init(OGLRenderQueue);
	$useLocalCurrentObjectStackCache();
	$var(OGLRenderQueue, rq, getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$OGLContext::setScratchSurface(pConfigInfo);
			$var($RenderBuffer, buf, rq->getBuffer());
			rq->ensureCapacityAndAlignment(12, 4);
			$nc(buf)->putInt(74);
			buf->putLong(pConfigInfo);
			rq->flushNow();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool OGLRenderQueue::isQueueFlusherThread() {
	$init(OGLRenderQueue);
	return ($Thread::currentThread() == $nc($nc($(getInstance()))->flusher)->thread);
}

void OGLRenderQueue::flushNow() {
	try {
		$nc(this->flusher)->flushNow();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$init($System);
		$nc($System::err)->println("exception in flushNow:"_s);
		e->printStackTrace();
	}
}

void OGLRenderQueue::flushAndInvokeNow($Runnable* r) {
	try {
		$nc(this->flusher)->flushAndInvokeNow(r);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$init($System);
		$nc($System::err)->println("exception in flushAndInvokeNow:"_s);
		e->printStackTrace();
	}
}

void OGLRenderQueue::flushBuffer(int64_t buf, int32_t limit) {
	$prepareNative(OGLRenderQueue, flushBuffer, void, int64_t buf, int32_t limit);
	$invokeNative(OGLRenderQueue, flushBuffer, buf, limit);
	$finishNative();
}

void OGLRenderQueue::flushBuffer() {
	int32_t limit = $nc(this->buf)->position();
	if (limit > 0) {
		flushBuffer($nc(this->buf)->getAddress(), limit);
	}
	$nc(this->buf)->clear();
	$nc(this->refSet)->clear();
}

$OGLRenderQueue$QueueFlusher* OGLRenderQueue::lambda$new$0() {
	return $new($OGLRenderQueue$QueueFlusher, this);
}

OGLRenderQueue::OGLRenderQueue() {
}

$Class* OGLRenderQueue::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(OGLRenderQueue$$Lambda$lambda$new$0::classInfo$.name)) {
			return OGLRenderQueue$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(OGLRenderQueue, name, initialize, &_OGLRenderQueue_ClassInfo_, allocate$OGLRenderQueue);
	return class$;
}

$Class* OGLRenderQueue::class$ = nullptr;

		} // opengl
	} // java2d
} // sun