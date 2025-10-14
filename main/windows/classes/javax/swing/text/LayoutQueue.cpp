#include <javax/swing/text/LayoutQueue.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef DEFAULT_QUEUE
#undef MIN_PRIORITY

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Vector = ::java::util::Vector;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace text {

class LayoutQueue$$Lambda$lambda$addTask$0 : public $Runnable {
	$class(LayoutQueue$$Lambda$lambda$addTask$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(LayoutQueue* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$addTask$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LayoutQueue$$Lambda$lambda$addTask$0>());
	}
	LayoutQueue* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LayoutQueue$$Lambda$lambda$addTask$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LayoutQueue$$Lambda$lambda$addTask$0, inst$)},
	{}
};
$MethodInfo LayoutQueue$$Lambda$lambda$addTask$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/text/LayoutQueue;)V", nullptr, $PUBLIC, $method(static_cast<void(LayoutQueue$$Lambda$lambda$addTask$0::*)(LayoutQueue*)>(&LayoutQueue$$Lambda$lambda$addTask$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LayoutQueue$$Lambda$lambda$addTask$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.text.LayoutQueue$$Lambda$lambda$addTask$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* LayoutQueue$$Lambda$lambda$addTask$0::load$($String* name, bool initialize) {
	$loadClass(LayoutQueue$$Lambda$lambda$addTask$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LayoutQueue$$Lambda$lambda$addTask$0::class$ = nullptr;

$FieldInfo _LayoutQueue_FieldInfo_[] = {
	{"DEFAULT_QUEUE", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LayoutQueue, DEFAULT_QUEUE)},
	{"tasks", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Runnable;>;", $PRIVATE, $field(LayoutQueue, tasks)},
	{"worker", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(LayoutQueue, worker)},
	{}
};

$MethodInfo _LayoutQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LayoutQueue::*)()>(&LayoutQueue::init$))},
	{"addTask", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDefaultQueue", "()Ljavax/swing/text/LayoutQueue;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LayoutQueue*(*)()>(&LayoutQueue::getDefaultQueue))},
	{"lambda$addTask$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(LayoutQueue::*)()>(&LayoutQueue::lambda$addTask$0))},
	{"setDefaultQueue", "(Ljavax/swing/text/LayoutQueue;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(LayoutQueue*)>(&LayoutQueue::setDefaultQueue))},
	{"waitForWork", "()Ljava/lang/Runnable;", nullptr, $PROTECTED | $SYNCHRONIZED},
	{}
};

$ClassInfo _LayoutQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.LayoutQueue",
	"java.lang.Object",
	nullptr,
	_LayoutQueue_FieldInfo_,
	_LayoutQueue_MethodInfo_
};

$Object* allocate$LayoutQueue($Class* clazz) {
	return $of($alloc(LayoutQueue));
}

$Object* LayoutQueue::DEFAULT_QUEUE = nullptr;

void LayoutQueue::init$() {
	$set(this, tasks, $new($Vector));
}

LayoutQueue* LayoutQueue::getDefaultQueue() {
	$init(LayoutQueue);
	$var($AppContext, ac, $AppContext::getAppContext());
	$synchronized(LayoutQueue::DEFAULT_QUEUE) {
		$var(LayoutQueue, defaultQueue, $cast(LayoutQueue, $nc(ac)->get(LayoutQueue::DEFAULT_QUEUE)));
		if (defaultQueue == nullptr) {
			$assign(defaultQueue, $new(LayoutQueue));
			ac->put(LayoutQueue::DEFAULT_QUEUE, defaultQueue);
		}
		return defaultQueue;
	}
}

void LayoutQueue::setDefaultQueue(LayoutQueue* q) {
	$init(LayoutQueue);
	$synchronized(LayoutQueue::DEFAULT_QUEUE) {
		$nc($($AppContext::getAppContext()))->put(LayoutQueue::DEFAULT_QUEUE, q);
	}
}

void LayoutQueue::addTask($Runnable* task) {
	$synchronized(this) {
		if (this->worker == nullptr) {
			$var($Runnable, workerRunnable, static_cast<$Runnable*>($new(LayoutQueue$$Lambda$lambda$addTask$0, this)));
			$set(this, worker, $new($Thread, nullptr, workerRunnable, "text-layout"_s, 0, false));
			$nc(this->worker)->setPriority($Thread::MIN_PRIORITY);
			$nc(this->worker)->start();
		}
		$nc(this->tasks)->addElement(task);
		$of(this)->notifyAll();
	}
}

$Runnable* LayoutQueue::waitForWork() {
	$synchronized(this) {
		while ($nc(this->tasks)->size() == 0) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException&) {
				$var($InterruptedException, ie, $catch());
				return nullptr;
			}
		}
		$var($Runnable, work, $cast($Runnable, $nc(this->tasks)->firstElement()));
		$nc(this->tasks)->removeElementAt(0);
		return work;
	}
}

void LayoutQueue::lambda$addTask$0() {
	$var($Runnable, work, nullptr);
	do {
		$assign(work, waitForWork());
		if (work != nullptr) {
			work->run();
		}
	} while (work != nullptr);
}

void clinit$LayoutQueue($Class* class$) {
	$assignStatic(LayoutQueue::DEFAULT_QUEUE, $new($Object));
}

LayoutQueue::LayoutQueue() {
}

$Class* LayoutQueue::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LayoutQueue$$Lambda$lambda$addTask$0::classInfo$.name)) {
			return LayoutQueue$$Lambda$lambda$addTask$0::load$(name, initialize);
		}
	}
	$loadClass(LayoutQueue, name, initialize, &_LayoutQueue_ClassInfo_, clinit$LayoutQueue, allocate$LayoutQueue);
	return class$;
}

$Class* LayoutQueue::class$ = nullptr;

		} // text
	} // swing
} // javax