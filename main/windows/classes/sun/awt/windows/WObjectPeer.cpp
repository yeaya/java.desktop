#include <sun/awt/windows/WObjectPeer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WObjectPeer_FieldInfo_[] = {
	{"pData", "J", nullptr, $VOLATILE, $field(WObjectPeer, pData)},
	{"destroyed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(WObjectPeer, destroyed)},
	{"target", "Ljava/lang/Object;", nullptr, $VOLATILE, $field(WObjectPeer, target)},
	{"disposed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(WObjectPeer, disposed)},
	{"createError", "Ljava/lang/Error;", nullptr, $VOLATILE, $field(WObjectPeer, createError)},
	{"stateLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(WObjectPeer, stateLock)},
	{"childPeers", "Ljava/util/Map;", "Ljava/util/Map<Lsun/awt/windows/WObjectPeer;Lsun/awt/windows/WObjectPeer;>;", $PRIVATE | $VOLATILE, $field(WObjectPeer, childPeers)},
	{}
};

$MethodInfo _WObjectPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WObjectPeer::*)()>(&WObjectPeer::init$))},
	{"addChildPeer", "(Lsun/awt/windows/WObjectPeer;)V", nullptr, $FINAL, $method(static_cast<void(WObjectPeer::*)(WObjectPeer*)>(&WObjectPeer::addChildPeer))},
	{"dispose", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(WObjectPeer::*)()>(&WObjectPeer::dispose))},
	{"disposeChildPeers", "()V", nullptr, $PRIVATE, $method(static_cast<void(WObjectPeer::*)()>(&WObjectPeer::disposeChildPeers))},
	{"disposeImpl", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"getData", "()J", nullptr, $PUBLIC},
	{"getPeerForTarget", "(Ljava/lang/Object;)Lsun/awt/windows/WObjectPeer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<WObjectPeer*(*)(Object$*)>(&WObjectPeer::getPeerForTarget))},
	{"getStateLock", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(WObjectPeer::*)()>(&WObjectPeer::getStateLock))},
	{"getTarget", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WObjectPeer::initIDs))},
	{"isDisposed", "()Z", nullptr, $PROTECTED | $FINAL, $method(static_cast<bool(WObjectPeer::*)()>(&WObjectPeer::isDisposed))},
	{}
};

#define _METHOD_INDEX_initIDs 9

$ClassInfo _WObjectPeer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.awt.windows.WObjectPeer",
	"java.lang.Object",
	nullptr,
	_WObjectPeer_FieldInfo_,
	_WObjectPeer_MethodInfo_
};

$Object* allocate$WObjectPeer($Class* clazz) {
	return $of($alloc(WObjectPeer));
}

void WObjectPeer::init$() {
	$set(this, createError, nullptr);
	$set(this, stateLock, $new($Object));
}

WObjectPeer* WObjectPeer::getPeerForTarget(Object$* t) {
	$init(WObjectPeer);
	$var(WObjectPeer, peer, $cast(WObjectPeer, $WToolkit::targetToPeer(t)));
	return peer;
}

int64_t WObjectPeer::getData() {
	return this->pData;
}

$Object* WObjectPeer::getTarget() {
	return $of(this->target);
}

$Object* WObjectPeer::getStateLock() {
	return $of(this->stateLock);
}

void WObjectPeer::dispose() {
	bool call_disposeImpl = false;
	$synchronized(this) {
		if (!this->disposed) {
			this->disposed = (call_disposeImpl = true);
		}
	}
	if (call_disposeImpl) {
		if (this->childPeers != nullptr) {
			disposeChildPeers();
		}
		disposeImpl();
	}
}

bool WObjectPeer::isDisposed() {
	return this->disposed;
}

void WObjectPeer::initIDs() {
	$init(WObjectPeer);
	$prepareNativeStatic(WObjectPeer, initIDs, void);
	$invokeNativeStatic(WObjectPeer, initIDs);
	$finishNativeStatic();
}

void WObjectPeer::addChildPeer(WObjectPeer* child) {
	$synchronized(getStateLock()) {
		if (this->childPeers == nullptr) {
			$set(this, childPeers, $new($WeakHashMap));
		}
		if (isDisposed()) {
			$throwNew($IllegalStateException, "Parent peer is disposed"_s);
		}
		$nc(this->childPeers)->put(child, this);
	}
}

void WObjectPeer::disposeChildPeers() {
	$synchronized(getStateLock()) {
		{
			$var($Iterator, i$, $nc($($nc(this->childPeers)->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var(WObjectPeer, child, $cast(WObjectPeer, i$->next()));
				{
					if (child != nullptr) {
						try {
							child->dispose();
						} catch ($Exception&) {
							$catch();
						}
					}
				}
			}
		}
	}
}

void clinit$WObjectPeer($Class* class$) {
	{
		WObjectPeer::initIDs();
	}
}

WObjectPeer::WObjectPeer() {
}

$Class* WObjectPeer::load$($String* name, bool initialize) {
	$loadClass(WObjectPeer, name, initialize, &_WObjectPeer_ClassInfo_, clinit$WObjectPeer, allocate$WObjectPeer);
	return class$;
}

$Class* WObjectPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun