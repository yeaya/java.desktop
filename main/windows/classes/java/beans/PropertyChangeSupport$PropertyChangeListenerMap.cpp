#include <java/beans/PropertyChangeSupport$PropertyChangeListenerMap.h>

#include <java/beans/ChangeListenerMap.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeListenerProxy.h>
#include <java/beans/PropertyChangeSupport.h>
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

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerMap = ::java::beans::ChangeListenerMap;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeListenerProxy = ::java::beans::PropertyChangeListenerProxy;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $EventListenerProxy = ::java::util::EventListenerProxy;

namespace java {
	namespace beans {

$FieldInfo _PropertyChangeSupport$PropertyChangeListenerMap_FieldInfo_[] = {
	{"EMPTY", "[Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyChangeSupport$PropertyChangeListenerMap, EMPTY)},
	{}
};

$MethodInfo _PropertyChangeSupport$PropertyChangeListenerMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PropertyChangeSupport$PropertyChangeListenerMap::*)()>(&PropertyChangeSupport$PropertyChangeListenerMap::init$))},
	{"extract", "(Ljava/beans/PropertyChangeListener;)Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC, $method(static_cast<$PropertyChangeListener*(PropertyChangeSupport$PropertyChangeListenerMap::*)($PropertyChangeListener*)>(&PropertyChangeSupport$PropertyChangeListenerMap::extract))},
	{"extract", "(Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"newArray", "(I)[Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"newProxy", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $method(static_cast<$PropertyChangeListener*(PropertyChangeSupport$PropertyChangeListenerMap::*)($String*,$PropertyChangeListener*)>(&PropertyChangeSupport$PropertyChangeListenerMap::newProxy))},
	{"newProxy", "(Ljava/lang/String;Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _PropertyChangeSupport$PropertyChangeListenerMap_InnerClassesInfo_[] = {
	{"java.beans.PropertyChangeSupport$PropertyChangeListenerMap", "java.beans.PropertyChangeSupport", "PropertyChangeListenerMap", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PropertyChangeSupport$PropertyChangeListenerMap_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.PropertyChangeSupport$PropertyChangeListenerMap",
	"java.beans.ChangeListenerMap",
	nullptr,
	_PropertyChangeSupport$PropertyChangeListenerMap_FieldInfo_,
	_PropertyChangeSupport$PropertyChangeListenerMap_MethodInfo_,
	"Ljava/beans/ChangeListenerMap<Ljava/beans/PropertyChangeListener;>;",
	nullptr,
	_PropertyChangeSupport$PropertyChangeListenerMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.PropertyChangeSupport"
};

$Object* allocate$PropertyChangeSupport$PropertyChangeListenerMap($Class* clazz) {
	return $of($alloc(PropertyChangeSupport$PropertyChangeListenerMap));
}

$PropertyChangeListenerArray* PropertyChangeSupport$PropertyChangeListenerMap::EMPTY = nullptr;

void PropertyChangeSupport$PropertyChangeListenerMap::init$() {
	$ChangeListenerMap::init$();
}

$EventListenerArray* PropertyChangeSupport$PropertyChangeListenerMap::newArray(int32_t length) {
	return $fcast($EventListenerArray, ((0 < length) ? $new($PropertyChangeListenerArray, length) : PropertyChangeSupport$PropertyChangeListenerMap::EMPTY));
}

$PropertyChangeListener* PropertyChangeSupport$PropertyChangeListenerMap::newProxy($String* name, $PropertyChangeListener* listener) {
	return $new($PropertyChangeListenerProxy, name, listener);
}

$PropertyChangeListener* PropertyChangeSupport$PropertyChangeListenerMap::extract($PropertyChangeListener* listener$renamed) {
	$var($PropertyChangeListener, listener, listener$renamed);
	while ($instanceOf($PropertyChangeListenerProxy, listener)) {
		$assign(listener, $cast($PropertyChangeListener, $nc(($cast($PropertyChangeListenerProxy, listener)))->getListener()));
	}
	return listener;
}

$EventListener* PropertyChangeSupport$PropertyChangeListenerMap::extract($EventListener* listener) {
	return this->extract($cast($PropertyChangeListener, listener));
}

$EventListener* PropertyChangeSupport$PropertyChangeListenerMap::newProxy($String* name, $EventListener* listener) {
	return this->newProxy(name, $cast($PropertyChangeListener, listener));
}

void clinit$PropertyChangeSupport$PropertyChangeListenerMap($Class* class$) {
	$assignStatic(PropertyChangeSupport$PropertyChangeListenerMap::EMPTY, $new($PropertyChangeListenerArray, 0));
}

PropertyChangeSupport$PropertyChangeListenerMap::PropertyChangeSupport$PropertyChangeListenerMap() {
}

$Class* PropertyChangeSupport$PropertyChangeListenerMap::load$($String* name, bool initialize) {
	$loadClass(PropertyChangeSupport$PropertyChangeListenerMap, name, initialize, &_PropertyChangeSupport$PropertyChangeListenerMap_ClassInfo_, clinit$PropertyChangeSupport$PropertyChangeListenerMap, allocate$PropertyChangeSupport$PropertyChangeListenerMap);
	return class$;
}

$Class* PropertyChangeSupport$PropertyChangeListenerMap::class$ = nullptr;

	} // beans
} // java