#include <sun/awt/AWTAutoShutdown.h>

#include <java/awt/AWTEvent.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
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
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/AWTAutoShutdown$1.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef SAFETY_TIMEOUT

using $AWTEvent = ::java::awt::AWTEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AWTAutoShutdown$1 = ::sun::awt::AWTAutoShutdown$1;
using $AppContext = ::sun::awt::AppContext;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {

class AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0 : public $PrivilegedAction {
	$class(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(AWTAutoShutdown* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$activateBlockerThread$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0>());
	}
	AWTAutoShutdown* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0, inst$)},
	{}
};
$MethodInfo AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0::methodInfos[3] = {
	{"<init>", "(Lsun/awt/AWTAutoShutdown;)V", nullptr, $PUBLIC, $method(static_cast<void(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0::*)(AWTAutoShutdown*)>(&AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0::load$($String* name, bool initialize) {
	$loadClass(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0::class$ = nullptr;

$FieldInfo _AWTAutoShutdown_FieldInfo_[] = {
	{"theInstance", "Lsun/awt/AWTAutoShutdown;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AWTAutoShutdown, theInstance)},
	{"mainLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AWTAutoShutdown, mainLock)},
	{"activationLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AWTAutoShutdown, activationLock)},
	{"busyThreadSet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Thread;>;", $PRIVATE | $FINAL, $field(AWTAutoShutdown, busyThreadSet)},
	{"toolkitThreadBusy", "Z", nullptr, $PRIVATE, $field(AWTAutoShutdown, toolkitThreadBusy)},
	{"peerMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(AWTAutoShutdown, peerMap)},
	{"blockerThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(AWTAutoShutdown, blockerThread)},
	{"timeoutPassed", "Z", nullptr, $PRIVATE, $field(AWTAutoShutdown, timeoutPassed)},
	{"SAFETY_TIMEOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AWTAutoShutdown, SAFETY_TIMEOUT)},
	{}
};

$MethodInfo _AWTAutoShutdown_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AWTAutoShutdown::*)()>(&AWTAutoShutdown::init$))},
	{"activateBlockerThread", "()V", nullptr, $PRIVATE, $method(static_cast<void(AWTAutoShutdown::*)()>(&AWTAutoShutdown::activateBlockerThread))},
	{"dumpPeers", "(Lsun/util/logging/PlatformLogger;)V", nullptr, 0, $method(static_cast<void(AWTAutoShutdown::*)($PlatformLogger*)>(&AWTAutoShutdown::dumpPeers))},
	{"getInstance", "()Lsun/awt/AWTAutoShutdown;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AWTAutoShutdown*(*)()>(&AWTAutoShutdown::getInstance))},
	{"getPeer", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $method(static_cast<$Object*(AWTAutoShutdown::*)(Object$*)>(&AWTAutoShutdown::getPeer))},
	{"getShutdownEvent", "()Ljava/awt/AWTEvent;", nullptr, $STATIC, $method(static_cast<$AWTEvent*(*)()>(&AWTAutoShutdown::getShutdownEvent))},
	{"isReadyToShutdown", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(AWTAutoShutdown::*)()>(&AWTAutoShutdown::isReadyToShutdown))},
	{"lambda$activateBlockerThread$0", "()Ljava/lang/Thread;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Thread*(AWTAutoShutdown::*)()>(&AWTAutoShutdown::lambda$activateBlockerThread$0))},
	{"notifyPeerMapUpdated", "()V", nullptr, 0, $method(static_cast<void(AWTAutoShutdown::*)()>(&AWTAutoShutdown::notifyPeerMapUpdated))},
	{"notifyThreadBusy", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC, $method(static_cast<void(AWTAutoShutdown::*)($Thread*)>(&AWTAutoShutdown::notifyThreadBusy))},
	{"notifyThreadFree", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC, $method(static_cast<void(AWTAutoShutdown::*)($Thread*)>(&AWTAutoShutdown::notifyThreadFree))},
	{"notifyToolkitThreadBusy", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&AWTAutoShutdown::notifyToolkitThreadBusy))},
	{"notifyToolkitThreadFree", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&AWTAutoShutdown::notifyToolkitThreadFree))},
	{"registerPeer", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(AWTAutoShutdown::*)(Object$*,Object$*)>(&AWTAutoShutdown::registerPeer))},
	{"run", "()V", nullptr, $PUBLIC},
	{"setToolkitBusy", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(AWTAutoShutdown::*)(bool)>(&AWTAutoShutdown::setToolkitBusy))},
	{"unregisterPeer", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(AWTAutoShutdown::*)(Object$*,Object$*)>(&AWTAutoShutdown::unregisterPeer))},
	{}
};

$InnerClassInfo _AWTAutoShutdown_InnerClassesInfo_[] = {
	{"sun.awt.AWTAutoShutdown$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AWTAutoShutdown_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.AWTAutoShutdown",
	"java.lang.Object",
	"java.lang.Runnable",
	_AWTAutoShutdown_FieldInfo_,
	_AWTAutoShutdown_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAutoShutdown_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.AWTAutoShutdown$1"
};

$Object* allocate$AWTAutoShutdown($Class* clazz) {
	return $of($alloc(AWTAutoShutdown));
}

AWTAutoShutdown* AWTAutoShutdown::theInstance = nullptr;

void AWTAutoShutdown::init$() {
	$set(this, mainLock, $new($Object));
	$set(this, activationLock, $new($Object));
	$set(this, busyThreadSet, $new($HashSet, 7));
	this->toolkitThreadBusy = false;
	$set(this, peerMap, $new($IdentityHashMap));
	$set(this, blockerThread, nullptr);
	this->timeoutPassed = false;
}

AWTAutoShutdown* AWTAutoShutdown::getInstance() {
	$init(AWTAutoShutdown);
	return AWTAutoShutdown::theInstance;
}

void AWTAutoShutdown::notifyToolkitThreadBusy() {
	$init(AWTAutoShutdown);
	$nc($(getInstance()))->setToolkitBusy(true);
}

void AWTAutoShutdown::notifyToolkitThreadFree() {
	$init(AWTAutoShutdown);
	$nc($(getInstance()))->setToolkitBusy(false);
}

void AWTAutoShutdown::notifyThreadBusy($Thread* thread) {
	if (thread == nullptr) {
		return;
	}
	$synchronized(this->activationLock) {
		$synchronized(this->mainLock) {
			if (this->blockerThread == nullptr) {
				activateBlockerThread();
			} else if (isReadyToShutdown()) {
				$nc($of(this->mainLock))->notifyAll();
				this->timeoutPassed = false;
			}
			$nc(this->busyThreadSet)->add(thread);
		}
	}
}

void AWTAutoShutdown::notifyThreadFree($Thread* thread) {
	if (thread == nullptr) {
		return;
	}
	$synchronized(this->activationLock) {
		$synchronized(this->mainLock) {
			$nc(this->busyThreadSet)->remove(thread);
			if (isReadyToShutdown()) {
				$nc($of(this->mainLock))->notifyAll();
				this->timeoutPassed = false;
			}
		}
	}
}

void AWTAutoShutdown::notifyPeerMapUpdated() {
	$synchronized(this->activationLock) {
		$synchronized(this->mainLock) {
			if (!isReadyToShutdown() && this->blockerThread == nullptr) {
				activateBlockerThread();
			} else {
				$nc($of(this->mainLock))->notifyAll();
				this->timeoutPassed = false;
			}
		}
	}
}

bool AWTAutoShutdown::isReadyToShutdown() {
	bool var$0 = !this->toolkitThreadBusy && $nc(this->peerMap)->isEmpty();
	return (var$0 && $nc(this->busyThreadSet)->isEmpty());
}

void AWTAutoShutdown::setToolkitBusy(bool busy) {
	if (busy != this->toolkitThreadBusy) {
		$synchronized(this->activationLock) {
			$synchronized(this->mainLock) {
				if (busy != this->toolkitThreadBusy) {
					if (busy) {
						if (this->blockerThread == nullptr) {
							activateBlockerThread();
						} else if (isReadyToShutdown()) {
							$nc($of(this->mainLock))->notifyAll();
							this->timeoutPassed = false;
						}
						this->toolkitThreadBusy = busy;
					} else {
						this->toolkitThreadBusy = busy;
						if (isReadyToShutdown()) {
							$nc($of(this->mainLock))->notifyAll();
							this->timeoutPassed = false;
						}
					}
				}
			}
		}
	}
}

void AWTAutoShutdown::run() {
	$var($Thread, currentThread, $Thread::currentThread());
	bool interrupted = false;
	$synchronized(this->mainLock) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc($of(this->mainLock))->notifyAll();
					while (this->blockerThread == currentThread) {
						$nc($of(this->mainLock))->wait();
						this->timeoutPassed = false;
						while (isReadyToShutdown()) {
							if (this->timeoutPassed) {
								this->timeoutPassed = false;
								$set(this, blockerThread, nullptr);
								break;
							}
							this->timeoutPassed = true;
							$nc($of(this->mainLock))->wait(AWTAutoShutdown::SAFETY_TIMEOUT);
						}
					}
				} catch ($InterruptedException&) {
					$var($InterruptedException, e, $catch());
					interrupted = true;
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (this->blockerThread == currentThread) {
					$set(this, blockerThread, nullptr);
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (!interrupted) {
		$AppContext::stopEventDispatchThreads();
	}
}

$AWTEvent* AWTAutoShutdown::getShutdownEvent() {
	$init(AWTAutoShutdown);
	return $new($AWTAutoShutdown$1, $(getInstance()), 0);
}

void AWTAutoShutdown::activateBlockerThread() {
	$beforeCallerSensitive();
	$nc(($cast($Thread, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0, this)))))))->start();
	try {
		$nc($of(this->mainLock))->wait();
	} catch ($InterruptedException&) {
		$var($InterruptedException, e, $catch());
		$init($System);
		$nc($System::err)->println("AWT blocker activation interrupted:"_s);
		e->printStackTrace();
	}
}

void AWTAutoShutdown::registerPeer(Object$* target, Object$* peer) {
	$synchronized(this->activationLock) {
		$synchronized(this->mainLock) {
			$nc(this->peerMap)->put(target, peer);
			notifyPeerMapUpdated();
		}
	}
}

void AWTAutoShutdown::unregisterPeer(Object$* target, Object$* peer) {
	$synchronized(this->activationLock) {
		$synchronized(this->mainLock) {
			if ($equals($nc(this->peerMap)->get(target), peer)) {
				$nc(this->peerMap)->remove(target);
				notifyPeerMapUpdated();
			}
		}
	}
}

$Object* AWTAutoShutdown::getPeer(Object$* target) {
	$synchronized(this->activationLock) {
		$synchronized(this->mainLock) {
			return $of($nc(this->peerMap)->get(target));
		}
	}
}

void AWTAutoShutdown::dumpPeers($PlatformLogger* aLog) {
	$init($PlatformLogger$Level);
	if ($nc(aLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$synchronized(this->activationLock) {
			$synchronized(this->mainLock) {
				aLog->fine("Mapped peers:"_s);
				{
					$var($Iterator, i$, $nc($($nc(this->peerMap)->keySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Object, key, i$->next());
						{
							$var($String, var$0, $$str({key, "->"_s}));
							aLog->fine($$concat(var$0, $($nc(this->peerMap)->get(key))));
						}
					}
				}
			}
		}
	}
}

$Thread* AWTAutoShutdown::lambda$activateBlockerThread$0() {
	$var($String, name, "AWT-Shutdown"_s);
	$var($Thread, thread, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), this, name, 0, false));
	thread->setContextClassLoader(nullptr);
	thread->setDaemon(false);
	$set(this, blockerThread, thread);
	return thread;
}

void clinit$AWTAutoShutdown($Class* class$) {
	$assignStatic(AWTAutoShutdown::theInstance, $new(AWTAutoShutdown));
}

AWTAutoShutdown::AWTAutoShutdown() {
}

$Class* AWTAutoShutdown::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0::classInfo$.name)) {
			return AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0::load$(name, initialize);
		}
	}
	$loadClass(AWTAutoShutdown, name, initialize, &_AWTAutoShutdown_ClassInfo_, clinit$AWTAutoShutdown, allocate$AWTAutoShutdown);
	return class$;
}

$Class* AWTAutoShutdown::class$ = nullptr;

	} // awt
} // sun