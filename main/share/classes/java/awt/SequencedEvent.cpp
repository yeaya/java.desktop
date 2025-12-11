#include <java/awt/SequencedEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Conditional.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventFilter.h>
#include <java/awt/EventQueue.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/SentEvent.h>
#include <java/awt/SequencedEvent$1.h>
#include <java/awt/SequencedEvent$2.h>
#include <java/awt/SequencedEvent$3.h>
#include <java/awt/SequencedEvent$SequencedEventsFilter.h>
#include <java/awt/Toolkit.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/EventObject.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <sun/awt/AWTAccessor$SequencedEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef ID

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Conditional = ::java::awt::Conditional;
using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $EventFilter = ::java::awt::EventFilter;
using $EventQueue = ::java::awt::EventQueue;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $SentEvent = ::java::awt::SentEvent;
using $SequencedEvent$1 = ::java::awt::SequencedEvent$1;
using $SequencedEvent$2 = ::java::awt::SequencedEvent$2;
using $SequencedEvent$3 = ::java::awt::SequencedEvent$3;
using $SequencedEvent$SequencedEventsFilter = ::java::awt::SequencedEvent$SequencedEventsFilter;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$SequencedEventAccessor = ::sun::awt::AWTAccessor$SequencedEventAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {

class SequencedEvent$$Lambda$lambda$dispatch$0 : public $Conditional {
	$class(SequencedEvent$$Lambda$lambda$dispatch$0, $NO_CLASS_INIT, $Conditional)
public:
	void init$(SequencedEvent* inst) {
		$set(this, inst$, inst);
	}
	virtual bool evaluate() override {
		 return $nc(inst$)->lambda$dispatch$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SequencedEvent$$Lambda$lambda$dispatch$0>());
	}
	SequencedEvent* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SequencedEvent$$Lambda$lambda$dispatch$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SequencedEvent$$Lambda$lambda$dispatch$0, inst$)},
	{}
};
$MethodInfo SequencedEvent$$Lambda$lambda$dispatch$0::methodInfos[3] = {
	{"<init>", "(Ljava/awt/SequencedEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(SequencedEvent$$Lambda$lambda$dispatch$0::*)(SequencedEvent*)>(&SequencedEvent$$Lambda$lambda$dispatch$0::init$))},
	{"evaluate", "()Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo SequencedEvent$$Lambda$lambda$dispatch$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.SequencedEvent$$Lambda$lambda$dispatch$0",
	"java.lang.Object",
	"java.awt.Conditional",
	fieldInfos,
	methodInfos
};
$Class* SequencedEvent$$Lambda$lambda$dispatch$0::load$($String* name, bool initialize) {
	$loadClass(SequencedEvent$$Lambda$lambda$dispatch$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SequencedEvent$$Lambda$lambda$dispatch$0::class$ = nullptr;

$FieldInfo _SequencedEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SequencedEvent, serialVersionUID)},
	{"ID", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SequencedEvent, ID)},
	{"list", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/SequencedEvent;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SequencedEvent, list)},
	{"nested", "Ljava/awt/AWTEvent;", nullptr, $PRIVATE | $FINAL, $field(SequencedEvent, nested)},
	{"appContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE, $field(SequencedEvent, appContext)},
	{"disposed", "Z", nullptr, $PRIVATE, $field(SequencedEvent, disposed)},
	{"pendingEvents", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/AWTEvent;>;", $PRIVATE | $FINAL, $field(SequencedEvent, pendingEvents)},
	{"fxAppThreadIsDispatchThread", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SequencedEvent, fxAppThreadIsDispatchThread)},
	{"fxCheckSequenceThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(SequencedEvent, fxCheckSequenceThread)},
	{}
};

$MethodInfo _SequencedEvent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(SequencedEvent::*)($AWTEvent*)>(&SequencedEvent::init$))},
	{"dispatch", "()V", nullptr, $PUBLIC | $FINAL},
	{"dispose", "()V", nullptr, $FINAL, $method(static_cast<void(SequencedEvent::*)()>(&SequencedEvent::dispose))},
	{"getFirst", "()Ljava/awt/SequencedEvent;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNCHRONIZED, $method(static_cast<SequencedEvent*(*)()>(&SequencedEvent::getFirst))},
	{"getFirstWithContext", "()Ljava/awt/SequencedEvent;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<SequencedEvent*(*)()>(&SequencedEvent::getFirstWithContext))},
	{"isFirstOrDisposed", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(SequencedEvent::*)()>(&SequencedEvent::isFirstOrDisposed))},
	{"isOwnerAppContextDisposed", "(Ljava/awt/SequencedEvent;)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)(SequencedEvent*)>(&SequencedEvent::isOwnerAppContextDisposed))},
	{"lambda$dispatch$0", "()Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(SequencedEvent::*)()>(&SequencedEvent::lambda$dispatch$0))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SequencedEvent_InnerClassesInfo_[] = {
	{"java.awt.SequencedEvent$SequencedEventsFilter", "java.awt.SequencedEvent", "SequencedEventsFilter", $PRIVATE | $STATIC | $FINAL},
	{"java.awt.SequencedEvent$3", nullptr, nullptr, 0},
	{"java.awt.SequencedEvent$2", nullptr, nullptr, 0},
	{"java.awt.SequencedEvent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SequencedEvent_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.SequencedEvent",
	"java.awt.AWTEvent",
	"java.awt.ActiveEvent",
	_SequencedEvent_FieldInfo_,
	_SequencedEvent_MethodInfo_,
	nullptr,
	nullptr,
	_SequencedEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.SequencedEvent$SequencedEventsFilter,java.awt.SequencedEvent$3,java.awt.SequencedEvent$2,java.awt.SequencedEvent$1"
};

$Object* allocate$SequencedEvent($Class* clazz) {
	return $of($alloc(SequencedEvent));
}

$String* SequencedEvent::toString() {
	 return this->$AWTEvent::toString();
}

int32_t SequencedEvent::hashCode() {
	 return this->$AWTEvent::hashCode();
}

bool SequencedEvent::equals(Object$* arg0) {
	 return this->$AWTEvent::equals(arg0);
}

$Object* SequencedEvent::clone() {
	 return this->$AWTEvent::clone();
}

void SequencedEvent::finalize() {
	this->$AWTEvent::finalize();
}

$LinkedList* SequencedEvent::list = nullptr;
bool SequencedEvent::fxAppThreadIsDispatchThread = false;

void SequencedEvent::init$($AWTEvent* nested) {
	$AWTEvent::init$($($nc(nested)->getSource()), SequencedEvent::ID);
	$set(this, pendingEvents, $new($LinkedList));
	$set(this, nested, nested);
	$SunToolkit::setSystemGenerated(nested);
	if (SequencedEvent::fxAppThreadIsDispatchThread) {
		$set(this, fxCheckSequenceThread, $new($SequencedEvent$3, this));
	}
	$synchronized(SequencedEvent::class$) {
		$nc(SequencedEvent::list)->add(this);
	}
}

void SequencedEvent::dispatch() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, appContext, $AppContext::getAppContext());
			if (getFirst() != this) {
				if ($EventQueue::isDispatchThread()) {
					if ($instanceOf($EventDispatchThread, $($Thread::currentThread()))) {
						$var($EventDispatchThread, edt, $cast($EventDispatchThread, $Thread::currentThread()));
						$var($Conditional, var$1, static_cast<$Conditional*>($new(SequencedEvent$$Lambda$lambda$dispatch$0, this)));
						edt->pumpEventsForFilter(var$1, $$new($SequencedEvent$SequencedEventsFilter, this));
					} else if (SequencedEvent::fxAppThreadIsDispatchThread) {
						$nc(this->fxCheckSequenceThread)->start();
						try {
							$nc(this->fxCheckSequenceThread)->join(500);
						} catch ($InterruptedException& e) {
						}
					}
				} else {
					while (!isFirstOrDisposed()) {
						$synchronized(SequencedEvent::class$) {
							try {
								$of(SequencedEvent::class$)->wait(1000);
							} catch ($InterruptedException& e) {
								break;
							}
						}
					}
				}
			}
			if (!this->disposed) {
				$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->setCurrentSequencedEvent(this);
				$nc($($Toolkit::getEventQueue()))->dispatchEvent(this->nested);
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SequencedEvent::isOwnerAppContextDisposed(SequencedEvent* se) {
	$init(SequencedEvent);
	if (se != nullptr) {
		$var($Object, target, $nc(se->nested)->getSource());
		if ($instanceOf($Component, target)) {
			return $nc($nc(($cast($Component, target)))->appContext)->isDisposed();
		}
	}
	return false;
}

bool SequencedEvent::isFirstOrDisposed() {
	if (this->disposed) {
		return true;
	}
	return this == getFirstWithContext() || this->disposed;
}

SequencedEvent* SequencedEvent::getFirst() {
	$load(SequencedEvent);
	$synchronized(class$) {
		$init(SequencedEvent);
		return $cast(SequencedEvent, $nc(SequencedEvent::list)->getFirst());
	}
}

SequencedEvent* SequencedEvent::getFirstWithContext() {
	$init(SequencedEvent);
	$var(SequencedEvent, first, getFirst());
	while (isOwnerAppContextDisposed(first)) {
		$nc(first)->dispose();
		$assign(first, getFirst());
	}
	return first;
}

void SequencedEvent::dispose() {
	$useLocalCurrentObjectStackCache();
	$synchronized(SequencedEvent::class$) {
		if (this->disposed) {
			return;
		}
		if ($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getCurrentSequencedEvent() == this) {
			$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->setCurrentSequencedEvent(nullptr);
		}
		this->disposed = true;
	}
	$var(SequencedEvent, next, nullptr);
	$synchronized(SequencedEvent::class$) {
		$of(SequencedEvent::class$)->notifyAll();
		if ($equals($nc(SequencedEvent::list)->getFirst(), this)) {
			$nc(SequencedEvent::list)->removeFirst();
			if (!$nc(SequencedEvent::list)->isEmpty()) {
				$assign(next, $cast(SequencedEvent, $nc(SequencedEvent::list)->getFirst()));
			}
		} else {
			$nc(SequencedEvent::list)->remove($of(this));
		}
	}
	if (next != nullptr && next->appContext != nullptr) {
		$SunToolkit::postEvent(next->appContext, $$new($SentEvent));
	}
	{
		$var($Iterator, i$, $nc(this->pendingEvents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AWTEvent, e, $cast($AWTEvent, i$->next()));
			{
				$SunToolkit::postEvent(this->appContext, e);
			}
		}
	}
}

bool SequencedEvent::lambda$dispatch$0() {
	return !this->isFirstOrDisposed();
}

void clinit$SequencedEvent($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(SequencedEvent::list, $new($LinkedList));
	{
		$AWTAccessor::setSequencedEventAccessor($$new($SequencedEvent$1));
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SequencedEvent$2)));
	}
}

SequencedEvent::SequencedEvent() {
}

$Class* SequencedEvent::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SequencedEvent$$Lambda$lambda$dispatch$0::classInfo$.name)) {
			return SequencedEvent$$Lambda$lambda$dispatch$0::load$(name, initialize);
		}
	}
	$loadClass(SequencedEvent, name, initialize, &_SequencedEvent_ClassInfo_, clinit$SequencedEvent, allocate$SequencedEvent);
	return class$;
}

$Class* SequencedEvent::class$ = nullptr;

	} // awt
} // java