#include <sun/java2d/Disposer.h>

#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Hashtable.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/java2d/DefaultDisposerRecord.h>
#include <sun/java2d/Disposer$1.h>
#include <sun/java2d/Disposer$PollDisposable.h>
#include <sun/java2d/DisposerRecord.h>
#include <sun/java2d/DisposerTarget.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef MAX_PRIORITY
#undef PHANTOM
#undef WEAK

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $PhantomReference = ::java::lang::ref::PhantomReference;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Hashtable = ::java::util::Hashtable;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $DefaultDisposerRecord = ::sun::java2d::DefaultDisposerRecord;
using $Disposer$1 = ::sun::java2d::Disposer$1;
using $Disposer$PollDisposable = ::sun::java2d::Disposer$PollDisposable;
using $DisposerRecord = ::sun::java2d::DisposerRecord;
using $DisposerTarget = ::sun::java2d::DisposerTarget;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace java2d {

class Disposer$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(Disposer$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Disposer::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Disposer$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Disposer$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Disposer$$Lambda$lambda$static$0::*)()>(&Disposer$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Disposer$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.Disposer$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* Disposer$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(Disposer$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Disposer$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _Disposer_FieldInfo_[] = {
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Disposer, queue)},
	{"records", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/ref/Reference<Ljava/lang/Object;>;Lsun/java2d/DisposerRecord;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Disposer, records)},
	{"disposerInstance", "Lsun/java2d/Disposer;", nullptr, $PRIVATE | $STATIC, $staticField(Disposer, disposerInstance)},
	{"WEAK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Disposer, WEAK)},
	{"PHANTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Disposer, PHANTOM)},
	{"refType", "I", nullptr, $PUBLIC | $STATIC, $staticField(Disposer, refType)},
	{"deferredRecords", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/java2d/DisposerRecord;>;", $PRIVATE | $STATIC, $staticField(Disposer, deferredRecords)},
	{"pollingQueue", "Z", nullptr, $PUBLIC | $STATIC | $VOLATILE, $staticField(Disposer, pollingQueue)},
	{}
};

$MethodInfo _Disposer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Disposer::*)()>(&Disposer::init$))},
	{"add", "(Ljava/lang/Object;Lsun/java2d/DisposerRecord;)V", nullptr, $SYNCHRONIZED},
	{"addObjectRecord", "(Ljava/lang/Object;Lsun/java2d/DisposerRecord;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*,$DisposerRecord*)>(&Disposer::addObjectRecord))},
	{"addRecord", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*,int64_t,int64_t)>(&Disposer::addRecord))},
	{"addRecord", "(Ljava/lang/Object;Lsun/java2d/DisposerRecord;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*,$DisposerRecord*)>(&Disposer::addRecord))},
	{"addReference", "(Ljava/lang/ref/Reference;Lsun/java2d/DisposerRecord;)V", "(Ljava/lang/ref/Reference<Ljava/lang/Object;>;Lsun/java2d/DisposerRecord;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Reference*,$DisposerRecord*)>(&Disposer::addReference))},
	{"clearDeferredRecords", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Disposer::clearDeferredRecords))},
	{"getQueue", "()Ljava/lang/ref/ReferenceQueue;", "()Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PUBLIC | $STATIC, $method(static_cast<$ReferenceQueue*(*)()>(&Disposer::getQueue))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Disposer::initIDs))},
	{"lambda$static$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&Disposer::lambda$static$0))},
	{"pollRemove", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Disposer::pollRemove))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 8

$InnerClassInfo _Disposer_InnerClassesInfo_[] = {
	{"sun.java2d.Disposer$PollDisposable", "sun.java2d.Disposer", "PollDisposable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.java2d.Disposer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Disposer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.Disposer",
	"java.lang.Object",
	"java.lang.Runnable",
	_Disposer_FieldInfo_,
	_Disposer_MethodInfo_,
	nullptr,
	nullptr,
	_Disposer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.Disposer$PollDisposable,sun.java2d.Disposer$1"
};

$Object* allocate$Disposer($Class* clazz) {
	return $of($alloc(Disposer));
}

$ReferenceQueue* Disposer::queue = nullptr;
$Hashtable* Disposer::records = nullptr;
Disposer* Disposer::disposerInstance = nullptr;
int32_t Disposer::refType = 0;
$ArrayList* Disposer::deferredRecords = nullptr;
$volatile(bool) Disposer::pollingQueue = false;

void Disposer::init$() {
}

void Disposer::addRecord(Object$* target, int64_t disposeMethod, int64_t pData) {
	$init(Disposer);
	$nc(Disposer::disposerInstance)->add(target, $$new($DefaultDisposerRecord, disposeMethod, pData));
}

void Disposer::addRecord(Object$* target, $DisposerRecord* rec) {
	$init(Disposer);
	$nc(Disposer::disposerInstance)->add(target, rec);
}

void Disposer::add(Object$* target$renamed, $DisposerRecord* rec) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Object, target, target$renamed);
		if ($instanceOf($DisposerTarget, target)) {
			$assign(target, $nc(($cast($DisposerTarget, target)))->getDisposerReferent());
		}
		$var($Reference, ref, nullptr);
		if (Disposer::refType == Disposer::PHANTOM) {
			$assign(ref, $new($PhantomReference, target, Disposer::queue));
		} else {
			$assign(ref, $new($WeakReference, target, Disposer::queue));
		}
		$nc(Disposer::records)->put(ref, rec);
	}
}

void Disposer::run() {
	$useLocalCurrentObjectStackCache();
	while (true) {
		try {
			$var($Object, obj, $nc(Disposer::queue)->remove());
			$nc(($cast($Reference, obj)))->clear();
			$var($DisposerRecord, rec, $cast($DisposerRecord, $nc(Disposer::records)->remove(obj)));
			$nc(rec)->dispose();
			$assign(obj, nullptr);
			$assign(rec, nullptr);
			clearDeferredRecords();
		} catch ($Exception& e) {
			$nc($System::out)->println("Exception while removing reference."_s);
		}
	}
}

void Disposer::clearDeferredRecords() {
	$init(Disposer);
	$useLocalCurrentObjectStackCache();
	if (Disposer::deferredRecords == nullptr || $nc(Disposer::deferredRecords)->isEmpty()) {
		return;
	}
	for (int32_t i = 0; i < $nc(Disposer::deferredRecords)->size(); ++i) {
		try {
			$var($DisposerRecord, rec, $cast($DisposerRecord, $nc(Disposer::deferredRecords)->get(i)));
			$nc(rec)->dispose();
		} catch ($Exception& e) {
			$nc($System::out)->println("Exception while disposing deferred rec."_s);
		}
	}
	$nc(Disposer::deferredRecords)->clear();
}

void Disposer::pollRemove() {
	$init(Disposer);
	$useLocalCurrentObjectStackCache();
	if (Disposer::pollingQueue) {
		return;
	}
	$var($Object, obj, nullptr);
	Disposer::pollingQueue = true;
	int32_t freed = 0;
	int32_t deferred = 0;
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				while (freed < 10000 && deferred < 100 && ($assign(obj, $nc(Disposer::queue)->poll())) != nullptr) {
					++freed;
					$nc(($cast($Reference, obj)))->clear();
					$var($DisposerRecord, rec, $cast($DisposerRecord, $nc(Disposer::records)->remove(obj)));
					if ($instanceOf($Disposer$PollDisposable, rec)) {
						$nc(rec)->dispose();
						$assign(obj, nullptr);
						$assign(rec, nullptr);
					} else {
						if (rec == nullptr) {
							continue;
						}
						++deferred;
						if (Disposer::deferredRecords == nullptr) {
							$assignStatic(Disposer::deferredRecords, $new($ArrayList, 5));
						}
						$nc(Disposer::deferredRecords)->add(rec);
					}
				}
			} catch ($Exception& e) {
				$nc($System::out)->println("Exception while removing reference."_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			Disposer::pollingQueue = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Disposer::initIDs() {
	$init(Disposer);
	$prepareNativeStatic(Disposer, initIDs, void);
	$invokeNativeStatic(Disposer, initIDs);
	$finishNativeStatic();
}

void Disposer::addReference($Reference* ref, $DisposerRecord* rec) {
	$init(Disposer);
	$nc(Disposer::records)->put(ref, rec);
}

void Disposer::addObjectRecord(Object$* obj, $DisposerRecord* rec) {
	$init(Disposer);
	$nc(Disposer::records)->put($$new($WeakReference, obj, Disposer::queue), rec);
}

$ReferenceQueue* Disposer::getQueue() {
	$init(Disposer);
	return Disposer::queue;
}

$Void* Disposer::lambda$static$0() {
	$init(Disposer);
	$useLocalCurrentObjectStackCache();
	$var($String, name, "Java2D Disposer"_s);
	$var($ThreadGroup, rootTG, $ThreadGroupUtils::getRootThreadGroup());
	$var($Thread, t, $new($Thread, rootTG, Disposer::disposerInstance, name, 0, false));
	t->setContextClassLoader(nullptr);
	t->setDaemon(true);
	t->setPriority($Thread::MAX_PRIORITY);
	t->start();
	return nullptr;
}

void clinit$Disposer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(Disposer::queue, $new($ReferenceQueue));
	$assignStatic(Disposer::records, $new($Hashtable));
	Disposer::refType = Disposer::PHANTOM;
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Disposer$1)));
		Disposer::initIDs();
		$var($String, type, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.reftype"_s)))));
		if (type != nullptr) {
			if (type->equals("weak"_s)) {
				Disposer::refType = Disposer::WEAK;
				$nc($System::err)->println("Using WEAK refs"_s);
			} else {
				Disposer::refType = Disposer::PHANTOM;
				$nc($System::err)->println("Using PHANTOM refs"_s);
			}
		}
		$assignStatic(Disposer::disposerInstance, $new(Disposer));
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Disposer$$Lambda$lambda$static$0)));
	}
	$assignStatic(Disposer::deferredRecords, nullptr);
	Disposer::pollingQueue = false;
}

Disposer::Disposer() {
}

$Class* Disposer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Disposer$$Lambda$lambda$static$0::classInfo$.name)) {
			return Disposer$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(Disposer, name, initialize, &_Disposer_ClassInfo_, clinit$Disposer, allocate$Disposer);
	return class$;
}

$Class* Disposer::class$ = nullptr;

	} // java2d
} // sun