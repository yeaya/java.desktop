#include <java/beans/VetoableChangeSupport$VetoableChangeListenerMap.h>

#include <java/beans/ChangeListenerMap.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/VetoableChangeListenerProxy.h>
#include <java/beans/VetoableChangeSupport.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <jcpp.h>

#undef EMPTY

using $VetoableChangeListenerArray = $Array<::java::beans::VetoableChangeListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerMap = ::java::beans::ChangeListenerMap;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $VetoableChangeListenerProxy = ::java::beans::VetoableChangeListenerProxy;
using $VetoableChangeSupport = ::java::beans::VetoableChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $EventListenerProxy = ::java::util::EventListenerProxy;

namespace java {
	namespace beans {

$FieldInfo _VetoableChangeSupport$VetoableChangeListenerMap_FieldInfo_[] = {
	{"EMPTY", "[Ljava/beans/VetoableChangeListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VetoableChangeSupport$VetoableChangeListenerMap, EMPTY)},
	{}
};

$MethodInfo _VetoableChangeSupport$VetoableChangeListenerMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(VetoableChangeSupport$VetoableChangeListenerMap::*)()>(&VetoableChangeSupport$VetoableChangeListenerMap::init$))},
	{"extract", "(Ljava/beans/VetoableChangeListener;)Ljava/beans/VetoableChangeListener;", nullptr, $PUBLIC, $method(static_cast<$VetoableChangeListener*(VetoableChangeSupport$VetoableChangeListenerMap::*)($VetoableChangeListener*)>(&VetoableChangeSupport$VetoableChangeListenerMap::extract))},
	{"extract", "(Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"newArray", "(I)[Ljava/beans/VetoableChangeListener;", nullptr, $PROTECTED},
	{"newProxy", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)Ljava/beans/VetoableChangeListener;", nullptr, $PROTECTED, $method(static_cast<$VetoableChangeListener*(VetoableChangeSupport$VetoableChangeListenerMap::*)($String*,$VetoableChangeListener*)>(&VetoableChangeSupport$VetoableChangeListenerMap::newProxy))},
	{"newProxy", "(Ljava/lang/String;Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _VetoableChangeSupport$VetoableChangeListenerMap_InnerClassesInfo_[] = {
	{"java.beans.VetoableChangeSupport$VetoableChangeListenerMap", "java.beans.VetoableChangeSupport", "VetoableChangeListenerMap", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _VetoableChangeSupport$VetoableChangeListenerMap_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.VetoableChangeSupport$VetoableChangeListenerMap",
	"java.beans.ChangeListenerMap",
	nullptr,
	_VetoableChangeSupport$VetoableChangeListenerMap_FieldInfo_,
	_VetoableChangeSupport$VetoableChangeListenerMap_MethodInfo_,
	"Ljava/beans/ChangeListenerMap<Ljava/beans/VetoableChangeListener;>;",
	nullptr,
	_VetoableChangeSupport$VetoableChangeListenerMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.VetoableChangeSupport"
};

$Object* allocate$VetoableChangeSupport$VetoableChangeListenerMap($Class* clazz) {
	return $of($alloc(VetoableChangeSupport$VetoableChangeListenerMap));
}

$VetoableChangeListenerArray* VetoableChangeSupport$VetoableChangeListenerMap::EMPTY = nullptr;

void VetoableChangeSupport$VetoableChangeListenerMap::init$() {
	$ChangeListenerMap::init$();
}

$EventListenerArray* VetoableChangeSupport$VetoableChangeListenerMap::newArray(int32_t length) {
	return $fcast($EventListenerArray, ((0 < length) ? $new($VetoableChangeListenerArray, length) : VetoableChangeSupport$VetoableChangeListenerMap::EMPTY));
}

$VetoableChangeListener* VetoableChangeSupport$VetoableChangeListenerMap::newProxy($String* name, $VetoableChangeListener* listener) {
	return $new($VetoableChangeListenerProxy, name, listener);
}

$VetoableChangeListener* VetoableChangeSupport$VetoableChangeListenerMap::extract($VetoableChangeListener* listener$renamed) {
	$var($VetoableChangeListener, listener, listener$renamed);
	while ($instanceOf($VetoableChangeListenerProxy, listener)) {
		$assign(listener, $cast($VetoableChangeListener, $nc(($cast($VetoableChangeListenerProxy, listener)))->getListener()));
	}
	return listener;
}

$EventListener* VetoableChangeSupport$VetoableChangeListenerMap::extract($EventListener* listener) {
	return this->extract($cast($VetoableChangeListener, listener));
}

$EventListener* VetoableChangeSupport$VetoableChangeListenerMap::newProxy($String* name, $EventListener* listener) {
	return this->newProxy(name, $cast($VetoableChangeListener, listener));
}

void clinit$VetoableChangeSupport$VetoableChangeListenerMap($Class* class$) {
	$assignStatic(VetoableChangeSupport$VetoableChangeListenerMap::EMPTY, $new($VetoableChangeListenerArray, 0));
}

VetoableChangeSupport$VetoableChangeListenerMap::VetoableChangeSupport$VetoableChangeListenerMap() {
}

$Class* VetoableChangeSupport$VetoableChangeListenerMap::load$($String* name, bool initialize) {
	$loadClass(VetoableChangeSupport$VetoableChangeListenerMap, name, initialize, &_VetoableChangeSupport$VetoableChangeListenerMap_ClassInfo_, clinit$VetoableChangeSupport$VetoableChangeListenerMap, allocate$VetoableChangeSupport$VetoableChangeListenerMap);
	return class$;
}

$Class* VetoableChangeSupport$VetoableChangeListenerMap::class$ = nullptr;

	} // beans
} // java