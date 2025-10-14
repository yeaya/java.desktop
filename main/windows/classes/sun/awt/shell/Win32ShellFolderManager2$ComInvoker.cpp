#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/List.h>
#include <java/util/concurrent/AbstractExecutorService.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <java/util/concurrent/RejectedExecutionException.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <java/util/concurrent/TimeUnit.h>
#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker$1.h>
#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker$2.h>
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <jcpp.h>

#undef DAYS
#undef MAX_PRIORITY

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $List = ::java::util::List;
using $AbstractExecutorService = ::java::util::concurrent::AbstractExecutorService;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $Future = ::java::util::concurrent::Future;
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $RejectedExecutionException = ::java::util::concurrent::RejectedExecutionException;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $ShellFolder$Invoker = ::sun::awt::shell::ShellFolder$Invoker;
using $Win32ShellFolderManager2 = ::sun::awt::shell::Win32ShellFolderManager2;
using $Win32ShellFolderManager2$ComInvoker$1 = ::sun::awt::shell::Win32ShellFolderManager2$ComInvoker$1;
using $Win32ShellFolderManager2$ComInvoker$2 = ::sun::awt::shell::Win32ShellFolderManager2$ComInvoker$2;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;

namespace sun {
	namespace awt {
		namespace shell {

class Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1 : public $Runnable {
	$class(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Win32ShellFolderManager2$ComInvoker* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1>());
	}
	Win32ShellFolderManager2$ComInvoker* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1, inst$)},
	{}
};
$MethodInfo Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1::methodInfos[3] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolderManager2$ComInvoker;)V", nullptr, $PUBLIC, $method(static_cast<void(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1::*)(Win32ShellFolderManager2$ComInvoker*)>(&Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1::class$ = nullptr;

class Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1 : public $PrivilegedAction {
	$class(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Runnable* shutdownHook) {
		$set(this, shutdownHook, shutdownHook);
	}
	virtual $Object* run() override {
		 return $of(Win32ShellFolderManager2$ComInvoker::lambda$new$2(shutdownHook));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1>());
	}
	$Runnable* shutdownHook = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1::fieldInfos[2] = {
	{"shutdownHook", "Ljava/lang/Runnable;", nullptr, $PUBLIC, $field(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1, shutdownHook)},
	{}
};
$MethodInfo Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1::*)($Runnable*)>(&Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1::class$ = nullptr;

class Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2 : public $PrivilegedAction {
	$class(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Runnable* comRun) {
		$set(this, comRun, comRun);
	}
	virtual $Object* run() override {
		 return $of(Win32ShellFolderManager2$ComInvoker::lambda$newThread$3(comRun));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2>());
	}
	$Runnable* comRun = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2::fieldInfos[2] = {
	{"comRun", "Ljava/lang/Runnable;", nullptr, $PUBLIC, $field(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2, comRun)},
	{}
};
$MethodInfo Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2::*)($Runnable*)>(&Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2::class$ = nullptr;

class Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3 : public $PrivilegedAction {
	$class(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(Win32ShellFolderManager2$ComInvoker* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$new$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3>());
	}
	Win32ShellFolderManager2$ComInvoker* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3, inst$)},
	{}
};
$MethodInfo Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3::methodInfos[3] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolderManager2$ComInvoker;)V", nullptr, $PUBLIC, $method(static_cast<void(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3::*)(Win32ShellFolderManager2$ComInvoker*)>(&Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3::class$ = nullptr;

$FieldInfo _Win32ShellFolderManager2$ComInvoker_FieldInfo_[] = {
	{"comThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(Win32ShellFolderManager2$ComInvoker, comThread)},
	{}
};

$MethodInfo _Win32ShellFolderManager2$ComInvoker_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Win32ShellFolderManager2$ComInvoker::*)()>(&Win32ShellFolderManager2$ComInvoker::init$))},
	{"invoke", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $PUBLIC, nullptr, "java.lang.Exception"},
	{"lambda$new$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Void*(Win32ShellFolderManager2$ComInvoker::*)()>(&Win32ShellFolderManager2$ComInvoker::lambda$new$0))},
	{"lambda$new$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Win32ShellFolderManager2$ComInvoker::*)()>(&Win32ShellFolderManager2$ComInvoker::lambda$new$1))},
	{"lambda$new$2", "(Ljava/lang/Runnable;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)($Runnable*)>(&Win32ShellFolderManager2$ComInvoker::lambda$new$2))},
	{"lambda$newThread$3", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Thread*(*)($Runnable*)>(&Win32ShellFolderManager2$ComInvoker::lambda$newThread$3))},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Win32ShellFolderManager2$ComInvoker_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker", "sun.awt.shell.Win32ShellFolderManager2", "ComInvoker", $PRIVATE | $STATIC},
	{"sun.awt.shell.ShellFolder$Invoker", "sun.awt.shell.ShellFolder", "Invoker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$2", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolderManager2$ComInvoker_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolderManager2$ComInvoker",
	"java.util.concurrent.ThreadPoolExecutor",
	"java.util.concurrent.ThreadFactory,sun.awt.shell.ShellFolder$Invoker",
	_Win32ShellFolderManager2$ComInvoker_FieldInfo_,
	_Win32ShellFolderManager2$ComInvoker_MethodInfo_,
	nullptr,
	nullptr,
	_Win32ShellFolderManager2$ComInvoker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolderManager2"
};

$Object* allocate$Win32ShellFolderManager2$ComInvoker($Class* clazz) {
	return $of($alloc(Win32ShellFolderManager2$ComInvoker));
}

void Win32ShellFolderManager2$ComInvoker::finalize() {
	this->$ThreadPoolExecutor::finalize();
}

$String* Win32ShellFolderManager2$ComInvoker::toString() {
	 return this->$ThreadPoolExecutor::toString();
}

int32_t Win32ShellFolderManager2$ComInvoker::hashCode() {
	 return this->$ThreadPoolExecutor::hashCode();
}

bool Win32ShellFolderManager2$ComInvoker::equals(Object$* arg0) {
	 return this->$ThreadPoolExecutor::equals(arg0);
}

$Object* Win32ShellFolderManager2$ComInvoker::clone() {
	 return this->$ThreadPoolExecutor::clone();
}

$Thread* Win32ShellFolderManager2$ComInvoker::comThread = nullptr;

void Win32ShellFolderManager2$ComInvoker::init$() {
	$beforeCallerSensitive();
	$init($TimeUnit);
	$ThreadPoolExecutor::init$(1, 1, 0, $TimeUnit::DAYS, $$new($LinkedBlockingQueue));
	allowCoreThreadTimeOut(false);
	setThreadFactory(this);
	$var($Runnable, shutdownHook, static_cast<$Runnable*>($new(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1, this)));
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1, shutdownHook)));
}

$Thread* Win32ShellFolderManager2$ComInvoker::newThread($Runnable* task) {
	$synchronized(this) {
		$beforeCallerSensitive();
		$var($Runnable, comRun, $new($Win32ShellFolderManager2$ComInvoker$1, this, task));
		$assignStatic(Win32ShellFolderManager2$ComInvoker::comThread, $cast($Thread, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2, comRun)))));
		return Win32ShellFolderManager2$ComInvoker::comThread;
	}
}

$Object* Win32ShellFolderManager2$ComInvoker::invoke($Callable* task) {
	$beforeCallerSensitive();
	if ($Thread::currentThread() == Win32ShellFolderManager2$ComInvoker::comThread) {
		return $of($nc(task)->call());
	} else {
		$var($Future, future, nullptr);
		try {
			$assign(future, submit(task));
		} catch ($RejectedExecutionException&) {
			$var($RejectedExecutionException, e, $catch());
			$throwNew($InterruptedException, $(e->getMessage()));
		}
		try {
			return $of($nc(future)->get());
		} catch ($InterruptedException&) {
			$var($InterruptedException, e, $catch());
			$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Win32ShellFolderManager2$ComInvoker$2, this, future)));
			$throw(e);
		} catch ($ExecutionException&) {
			$var($ExecutionException, e, $catch());
			$var($Throwable, cause, e->getCause());
			if ($instanceOf($Exception, cause)) {
				$throw($cast($Exception, cause));
			}
			if ($instanceOf($Error, cause)) {
				$throw($cast($Error, cause));
			}
			$throwNew($RuntimeException, "Unexpected error"_s, cause);
		}
	}
	$shouldNotReachHere();
}

$Thread* Win32ShellFolderManager2$ComInvoker::lambda$newThread$3($Runnable* comRun) {
	$init(Win32ShellFolderManager2$ComInvoker);
	$var($String, name, "Swing-Shell"_s);
	$var($Thread, thread, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), comRun, name, 0, false));
	thread->setDaemon(true);
	thread->setPriority($Thread::MAX_PRIORITY);
	return thread;
}

$Void* Win32ShellFolderManager2$ComInvoker::lambda$new$2($Runnable* shutdownHook) {
	$init(Win32ShellFolderManager2$ComInvoker);
	$var($Thread, t, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), shutdownHook, "ShellFolder"_s, 0, false));
	$nc($($Runtime::getRuntime()))->addShutdownHook(t);
	return nullptr;
}

void Win32ShellFolderManager2$ComInvoker::lambda$new$1() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3, this)));
}

$Void* Win32ShellFolderManager2$ComInvoker::lambda$new$0() {
	shutdownNow();
	return nullptr;
}

Win32ShellFolderManager2$ComInvoker::Win32ShellFolderManager2$ComInvoker() {
}

$Class* Win32ShellFolderManager2$ComInvoker::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1::classInfo$.name)) {
			return Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1::load$(name, initialize);
		}
		if (name->equals(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1::classInfo$.name)) {
			return Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1::load$(name, initialize);
		}
		if (name->equals(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2::classInfo$.name)) {
			return Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2::load$(name, initialize);
		}
		if (name->equals(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3::classInfo$.name)) {
			return Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3::load$(name, initialize);
		}
	}
	$loadClass(Win32ShellFolderManager2$ComInvoker, name, initialize, &_Win32ShellFolderManager2$ComInvoker_ClassInfo_, allocate$Win32ShellFolderManager2$ComInvoker);
	return class$;
}

$Class* Win32ShellFolderManager2$ComInvoker::class$ = nullptr;

		} // shell
	} // awt
} // sun