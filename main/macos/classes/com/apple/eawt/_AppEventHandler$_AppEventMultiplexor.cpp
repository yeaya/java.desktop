#include <com/apple/eawt/_AppEventHandler$_AppEventMultiplexor.h>

#include <com/apple/eawt/_AppEventHandler$_AppEventMultiplexor$1.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/lang/Runnable.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_AppEventMultiplexor$1 = ::com::apple::eawt::_AppEventHandler$_AppEventMultiplexor$1;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_AppEventMultiplexor_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_AppEventMultiplexor, this$0)},
	{"listenerToAppContext", "Ljava/util/Map;", "Ljava/util/Map<TL;Lsun/awt/AppContext;>;", $PRIVATE | $FINAL, $field(_AppEventHandler$_AppEventMultiplexor, listenerToAppContext)},
	{"nativeListenerRegistered", "Z", nullptr, 0, $field(_AppEventHandler$_AppEventMultiplexor, nativeListenerRegistered)},
	{}
};

$MethodInfo __AppEventHandler$_AppEventMultiplexor_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(_AppEventHandler$_AppEventMultiplexor::*)($_AppEventHandler*)>(&_AppEventHandler$_AppEventMultiplexor::init$))},
	{"addListener", "(Ljava/lang/Object;)V", "(TL;)V", $SYNCHRONIZED},
	{"dispatch", "(Lcom/apple/eawt/_AppEventHandler$_NativeEvent;[Ljava/lang/Object;)V", nullptr, $TRANSIENT},
	{"performOnListener", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", "(TL;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", $ABSTRACT},
	{"registerNativeListener", "()V", nullptr, 0},
	{"removeListener", "(Ljava/lang/Object;)V", "(TL;)V", $SYNCHRONIZED},
	{"setListenerContext", "(Ljava/lang/Object;Lsun/awt/AppContext;)V", "(TL;Lsun/awt/AppContext;)V", $PRIVATE, $method(static_cast<void(_AppEventHandler$_AppEventMultiplexor::*)(Object$*,$AppContext*)>(&_AppEventHandler$_AppEventMultiplexor::setListenerContext))},
	{}
};

$InnerClassInfo __AppEventHandler$_AppEventMultiplexor_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_AppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_AppEventMultiplexor", $ABSTRACT},
	{"com.apple.eawt._AppEventHandler$_AppEventMultiplexor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo __AppEventHandler$_AppEventMultiplexor_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.eawt._AppEventHandler$_AppEventMultiplexor",
	"java.lang.Object",
	nullptr,
	__AppEventHandler$_AppEventMultiplexor_FieldInfo_,
	__AppEventHandler$_AppEventMultiplexor_MethodInfo_,
	"<L:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	__AppEventHandler$_AppEventMultiplexor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_AppEventMultiplexor($Class* clazz) {
	return $of($alloc(_AppEventHandler$_AppEventMultiplexor));
}

void _AppEventHandler$_AppEventMultiplexor::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$set(this, listenerToAppContext, $new($IdentityHashMap));
}

void _AppEventHandler$_AppEventMultiplexor::dispatch($_AppEventHandler$_NativeEvent* event, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, localEntries, nullptr);
	$synchronized(this) {
		if ($nc(this->listenerToAppContext)->size() == 0) {
			return;
		}
		$assign(localEntries, $new($ArrayList, $nc(this->listenerToAppContext)->size()));
		localEntries->addAll($($nc(this->listenerToAppContext)->entrySet()));
	}
	{
		$var($Iterator, i$, $nc(localEntries)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($Object, listener, $nc(e)->getKey());
				$var($AppContext, listenerContext, $cast($AppContext, e->getValue()));
				$SunToolkit::invokeLaterOnAppContext(listenerContext, $$new($_AppEventHandler$_AppEventMultiplexor$1, this, listener, event));
			}
		}
	}
}

void _AppEventHandler$_AppEventMultiplexor::addListener(Object$* listener) {
	$synchronized(this) {
		setListenerContext(listener, $($AppContext::getAppContext()));
		if (!this->nativeListenerRegistered) {
			registerNativeListener();
			this->nativeListenerRegistered = true;
		}
	}
}

void _AppEventHandler$_AppEventMultiplexor::removeListener(Object$* listener) {
	$synchronized(this) {
		$nc(this->listenerToAppContext)->remove(listener);
	}
}

void _AppEventHandler$_AppEventMultiplexor::registerNativeListener() {
}

void _AppEventHandler$_AppEventMultiplexor::setListenerContext(Object$* listener, $AppContext* listenerContext) {
	if (listenerContext == nullptr) {
		$throwNew($RuntimeException, "Attempting to add a listener from a thread group without AppContext"_s);
	}
	$nc(this->listenerToAppContext)->put(listener, $($AppContext::getAppContext()));
}

_AppEventHandler$_AppEventMultiplexor::_AppEventHandler$_AppEventMultiplexor() {
}

$Class* _AppEventHandler$_AppEventMultiplexor::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_AppEventMultiplexor, name, initialize, &__AppEventHandler$_AppEventMultiplexor_ClassInfo_, allocate$_AppEventHandler$_AppEventMultiplexor);
	return class$;
}

$Class* _AppEventHandler$_AppEventMultiplexor::class$ = nullptr;

		} // eawt
	} // apple
} // com