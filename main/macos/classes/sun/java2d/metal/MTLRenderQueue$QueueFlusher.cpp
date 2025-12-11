#include <sun/java2d/metal/MTLRenderQueue$QueueFlusher.h>

#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <jcpp.h>

#undef MAX_PRIORITY

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLRenderQueue$QueueFlusher_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/metal/MTLRenderQueue;", nullptr, $FINAL | $SYNTHETIC, $field(MTLRenderQueue$QueueFlusher, this$0)},
	{"needsFlush", "Z", nullptr, $PRIVATE, $field(MTLRenderQueue$QueueFlusher, needsFlush)},
	{"task", "Ljava/lang/Runnable;", nullptr, $PRIVATE, $field(MTLRenderQueue$QueueFlusher, task)},
	{"error", "Ljava/lang/Error;", nullptr, $PRIVATE, $field(MTLRenderQueue$QueueFlusher, error)},
	{"thread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $FINAL, $field(MTLRenderQueue$QueueFlusher, thread)},
	{}
};

$MethodInfo _MTLRenderQueue$QueueFlusher_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/metal/MTLRenderQueue;)V", nullptr, $PUBLIC, $method(static_cast<void(MTLRenderQueue$QueueFlusher::*)($MTLRenderQueue*)>(&MTLRenderQueue$QueueFlusher::init$))},
	{"flushAndInvokeNow", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"flushNow", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"run", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _MTLRenderQueue$QueueFlusher_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLRenderQueue$QueueFlusher", "sun.java2d.metal.MTLRenderQueue", "QueueFlusher", $PRIVATE},
	{}
};

$ClassInfo _MTLRenderQueue$QueueFlusher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLRenderQueue$QueueFlusher",
	"java.lang.Object",
	"java.lang.Runnable",
	_MTLRenderQueue$QueueFlusher_FieldInfo_,
	_MTLRenderQueue$QueueFlusher_MethodInfo_,
	nullptr,
	nullptr,
	_MTLRenderQueue$QueueFlusher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLRenderQueue"
};

$Object* allocate$MTLRenderQueue$QueueFlusher($Class* clazz) {
	return $of($alloc(MTLRenderQueue$QueueFlusher));
}

void MTLRenderQueue$QueueFlusher::init$($MTLRenderQueue* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$var($String, name, "Java2D Queue Flusher"_s);
	$set(this, thread, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), this, name, 0, false));
	$nc(this->thread)->setDaemon(true);
	$nc(this->thread)->setPriority($Thread::MAX_PRIORITY);
	$nc(this->thread)->start();
}

void MTLRenderQueue$QueueFlusher::flushNow() {
	$synchronized(this) {
		this->needsFlush = true;
		$of(this)->notify();
		while (this->needsFlush) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException& e) {
			}
		}
		if (this->error != nullptr) {
			$throw(this->error);
		}
	}
}

void MTLRenderQueue$QueueFlusher::flushAndInvokeNow($Runnable* task) {
	$synchronized(this) {
		$set(this, task, task);
		flushNow();
	}
}

void MTLRenderQueue$QueueFlusher::run() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		bool timedOut = false;
		while (true) {
			while (!this->needsFlush) {
				try {
					timedOut = false;
					$of(this)->wait(100);
					if (!this->needsFlush && (timedOut = this->this$0->tryLock())) {
						if ($nc($($MTLRenderQueue::access$000(this->this$0)))->position() > 0) {
							this->needsFlush = true;
						} else {
							this->this$0->unlock();
						}
					}
				} catch ($InterruptedException& e) {
				}
			}
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$set(this, error, nullptr);
						this->this$0->flushBuffer();
						if (this->task != nullptr) {
							$nc(this->task)->run();
						}
					} catch ($Error& e) {
						$set(this, error, e);
					} catch ($Exception& x) {
						$nc($System::err)->println("exception in QueueFlusher:"_s);
						x->printStackTrace();
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (timedOut) {
						this->this$0->unlock();
					}
					$set(this, task, nullptr);
					this->needsFlush = false;
					$of(this)->notify();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

MTLRenderQueue$QueueFlusher::MTLRenderQueue$QueueFlusher() {
}

$Class* MTLRenderQueue$QueueFlusher::load$($String* name, bool initialize) {
	$loadClass(MTLRenderQueue$QueueFlusher, name, initialize, &_MTLRenderQueue$QueueFlusher_ClassInfo_, allocate$MTLRenderQueue$QueueFlusher);
	return class$;
}

$Class* MTLRenderQueue$QueueFlusher::class$ = nullptr;

		} // metal
	} // java2d
} // sun