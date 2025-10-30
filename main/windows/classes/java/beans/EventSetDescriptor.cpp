#include <java/beans/EventSetDescriptor.h>

#include <com/sun/beans/introspect/EventSetInfo.h>
#include <java/beans/FeatureDescriptor.h>
#include <java/beans/IntrospectionException.h>
#include <java/beans/Introspector.h>
#include <java/beans/MethodDescriptor.h>
#include <java/beans/NameGenerator.h>
#include <java/beans/Transient.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

#undef ADD_PREFIX
#undef GET_PREFIX
#undef REMOVE_PREFIX

using $MethodDescriptorArray = $Array<::java::beans::MethodDescriptor>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $EventSetInfo = ::com::sun::beans::introspect::EventSetInfo;
using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $IntrospectionException = ::java::beans::IntrospectionException;
using $Introspector = ::java::beans::Introspector;
using $MethodDescriptor = ::java::beans::MethodDescriptor;
using $NameGenerator = ::java::beans::NameGenerator;
using $Transient = ::java::beans::Transient;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Annotation = ::java::lang::annotation::Annotation;
using $Reference = ::java::lang::ref::Reference;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;

namespace java {
	namespace beans {

$FieldInfo _EventSetDescriptor_FieldInfo_[] = {
	{"listenerMethodDescriptors", "[Ljava/beans/MethodDescriptor;", nullptr, $PRIVATE, $field(EventSetDescriptor, listenerMethodDescriptors)},
	{"addMethodDescriptor", "Ljava/beans/MethodDescriptor;", nullptr, $PRIVATE, $field(EventSetDescriptor, addMethodDescriptor)},
	{"removeMethodDescriptor", "Ljava/beans/MethodDescriptor;", nullptr, $PRIVATE, $field(EventSetDescriptor, removeMethodDescriptor)},
	{"getMethodDescriptor", "Ljava/beans/MethodDescriptor;", nullptr, $PRIVATE, $field(EventSetDescriptor, getMethodDescriptor)},
	{"listenerMethodsRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<[Ljava/lang/reflect/Method;>;", $PRIVATE, $field(EventSetDescriptor, listenerMethodsRef)},
	{"listenerTypeRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<+Ljava/lang/Class<*>;>;", $PRIVATE, $field(EventSetDescriptor, listenerTypeRef)},
	{"unicast", "Z", nullptr, $PRIVATE, $field(EventSetDescriptor, unicast)},
	{"inDefaultEventSet", "Z", nullptr, $PRIVATE, $field(EventSetDescriptor, inDefaultEventSet)},
	{}
};

$MethodInfo _EventSetDescriptor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(EventSetDescriptor::*)($Class*,$String*,$Class*,$String*)>(&EventSetDescriptor::init$)), "java.beans.IntrospectionException"},
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Class<*>;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(EventSetDescriptor::*)($Class*,$String*,$Class*,$StringArray*,$String*,$String*)>(&EventSetDescriptor::init$)), "java.beans.IntrospectionException"},
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Class<*>;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(EventSetDescriptor::*)($Class*,$String*,$Class*,$StringArray*,$String*,$String*,$String*)>(&EventSetDescriptor::init$)), "java.beans.IntrospectionException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;[Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", "(Ljava/lang/String;Ljava/lang/Class<*>;[Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", $PUBLIC, $method(static_cast<void(EventSetDescriptor::*)($String*,$Class*,$MethodArray*,$Method*,$Method*)>(&EventSetDescriptor::init$)), "java.beans.IntrospectionException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;[Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", "(Ljava/lang/String;Ljava/lang/Class<*>;[Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", $PUBLIC, $method(static_cast<void(EventSetDescriptor::*)($String*,$Class*,$MethodArray*,$Method*,$Method*,$Method*)>(&EventSetDescriptor::init$)), "java.beans.IntrospectionException"},
	{"<init>", "(Ljava/lang/String;Lcom/sun/beans/introspect/EventSetInfo;[Ljava/lang/reflect/Method;)V", nullptr, $TRANSIENT, $method(static_cast<void(EventSetDescriptor::*)($String*,$EventSetInfo*,$MethodArray*)>(&EventSetDescriptor::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;[Ljava/beans/MethodDescriptor;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", "(Ljava/lang/String;Ljava/lang/Class<*>;[Ljava/beans/MethodDescriptor;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", $PUBLIC, $method(static_cast<void(EventSetDescriptor::*)($String*,$Class*,$MethodDescriptorArray*,$Method*,$Method*)>(&EventSetDescriptor::init$)), "java.beans.IntrospectionException"},
	{"<init>", "(Ljava/beans/EventSetDescriptor;Ljava/beans/EventSetDescriptor;)V", nullptr, 0, $method(static_cast<void(EventSetDescriptor::*)(EventSetDescriptor*,EventSetDescriptor*)>(&EventSetDescriptor::init$))},
	{"<init>", "(Ljava/beans/EventSetDescriptor;)V", nullptr, 0, $method(static_cast<void(EventSetDescriptor::*)(EventSetDescriptor*)>(&EventSetDescriptor::init$))},
	{"appendTo", "(Ljava/lang/StringBuilder;)V", nullptr, 0},
	{"getAddListenerMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getGetListenerMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getListenerClassName", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Class*)>(&EventSetDescriptor::getListenerClassName))},
	{"getListenerMethodDescriptors", "()[Ljava/beans/MethodDescriptor;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getListenerMethods", "()[Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getListenerMethods0", "()[Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $method(static_cast<$MethodArray*(EventSetDescriptor::*)()>(&EventSetDescriptor::getListenerMethods0))},
	{"getListenerType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"getMethod", "(Ljava/lang/Class;Ljava/lang/String;I)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;I)Ljava/lang/reflect/Method;", $PRIVATE | $STATIC, $method(static_cast<$Method*(*)($Class*,$String*,int32_t)>(&EventSetDescriptor::getMethod)), "java.beans.IntrospectionException"},
	{"getMethod", "(Ljava/beans/MethodDescriptor;)Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Method*(*)($MethodDescriptor*)>(&EventSetDescriptor::getMethod))},
	{"getRemoveListenerMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isInDefaultEventSet", "()Z", nullptr, $PUBLIC},
	{"isUnicast", "()Z", nullptr, $PUBLIC},
	{"setAddListenerMethod", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(EventSetDescriptor::*)($Method*)>(&EventSetDescriptor::setAddListenerMethod))},
	{"setGetListenerMethod", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(EventSetDescriptor::*)($Method*)>(&EventSetDescriptor::setGetListenerMethod))},
	{"setInDefaultEventSet", "(Z)V", nullptr, $PUBLIC},
	{"setListenerMethods", "([Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE, $method(static_cast<void(EventSetDescriptor::*)($MethodArray*)>(&EventSetDescriptor::setListenerMethods))},
	{"setListenerType", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(EventSetDescriptor::*)($Class*)>(&EventSetDescriptor::setListenerType))},
	{"setRemoveListenerMethod", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(EventSetDescriptor::*)($Method*)>(&EventSetDescriptor::setRemoveListenerMethod))},
	{"setUnicast", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EventSetDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.EventSetDescriptor",
	"java.beans.FeatureDescriptor",
	nullptr,
	_EventSetDescriptor_FieldInfo_,
	_EventSetDescriptor_MethodInfo_
};

$Object* allocate$EventSetDescriptor($Class* clazz) {
	return $of($alloc(EventSetDescriptor));
}

void EventSetDescriptor::init$($Class* sourceClass, $String* eventSetName, $Class* listenerType, $String* listenerMethodName) {
	$useLocalCurrentObjectStackCache();
	$Class* var$0 = sourceClass;
	$var($String, var$1, eventSetName);
	$Class* var$2 = listenerType;
	$var($StringArray, var$3, $new($StringArray, {listenerMethodName}));
	$init($Introspector);
	$var($String, var$4, $str({$Introspector::ADD_PREFIX, $(getListenerClassName(listenerType))}));
	$var($String, var$5, $str({$Introspector::REMOVE_PREFIX, $(getListenerClassName(listenerType))}));
	EventSetDescriptor::init$(var$0, var$1, var$2, var$3, var$4, var$5, $$str({$Introspector::GET_PREFIX, $(getListenerClassName(listenerType)), "s"_s}));
	$var($String, eventName, $str({$($NameGenerator::capitalize(eventSetName)), "Event"_s}));
	$var($MethodArray, listenerMethods, getListenerMethods());
	if ($nc(listenerMethods)->length > 0) {
		$var($ClassArray, args, getParameterTypes(getClass0(), listenerMethods->get(0)));
		bool var$6 = !"vetoableChange"_s->equals(eventSetName);
		if (var$6 && !$nc($($nc($nc(args)->get(0))->getName()))->endsWith(eventName)) {
			$throwNew($IntrospectionException, $$str({"Method \""_s, listenerMethodName, "\" should have argument \""_s, eventName, "\""_s}));
		}
	}
}

$String* EventSetDescriptor::getListenerClassName($Class* cls) {
	$init(EventSetDescriptor);
	$var($String, className, $nc(cls)->getName());
	return $nc(className)->substring(className->lastIndexOf((int32_t)u'.') + 1);
}

void EventSetDescriptor::init$($Class* sourceClass, $String* eventSetName, $Class* listenerType, $StringArray* listenerMethodNames, $String* addListenerMethodName, $String* removeListenerMethodName) {
	EventSetDescriptor::init$(sourceClass, eventSetName, listenerType, listenerMethodNames, addListenerMethodName, removeListenerMethodName, nullptr);
}

void EventSetDescriptor::init$($Class* sourceClass, $String* eventSetName, $Class* listenerType, $StringArray* listenerMethodNames, $String* addListenerMethodName, $String* removeListenerMethodName, $String* getListenerMethodName) {
	$useLocalCurrentObjectStackCache();
	$FeatureDescriptor::init$();
	this->inDefaultEventSet = true;
	if (sourceClass == nullptr || eventSetName == nullptr || listenerType == nullptr) {
		$throwNew($NullPointerException);
	}
	setName(eventSetName);
	setClass0(sourceClass);
	setListenerType(listenerType);
	$var($MethodArray, listenerMethods, $new($MethodArray, $nc(listenerMethodNames)->length));
	for (int32_t i = 0; i < listenerMethodNames->length; ++i) {
		if (listenerMethodNames->get(i) == nullptr) {
			$throwNew($NullPointerException);
		}
		listenerMethods->set(i, $(getMethod(listenerType, listenerMethodNames->get(i), 1)));
	}
	setListenerMethods(listenerMethods);
	setAddListenerMethod($(getMethod(sourceClass, addListenerMethodName, 1)));
	setRemoveListenerMethod($(getMethod(sourceClass, removeListenerMethodName, 1)));
	$var($Method, method, $Introspector::findMethod(sourceClass, getListenerMethodName, 0));
	if (method != nullptr) {
		setGetListenerMethod(method);
	}
}

$Method* EventSetDescriptor::getMethod($Class* cls, $String* name, int32_t args) {
	$init(EventSetDescriptor);
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		return nullptr;
	}
	$var($Method, method, $Introspector::findMethod(cls, name, args));
	if ((method == nullptr) || $Modifier::isStatic($nc(method)->getModifiers())) {
		$throwNew($IntrospectionException, $$str({"Method not found: "_s, name, " on class "_s, $($nc(cls)->getName())}));
	}
	return method;
}

void EventSetDescriptor::init$($String* eventSetName, $Class* listenerType, $MethodArray* listenerMethods, $Method* addListenerMethod, $Method* removeListenerMethod) {
	EventSetDescriptor::init$(eventSetName, listenerType, listenerMethods, addListenerMethod, removeListenerMethod, ($Method*)nullptr);
}

void EventSetDescriptor::init$($String* eventSetName, $Class* listenerType, $MethodArray* listenerMethods, $Method* addListenerMethod, $Method* removeListenerMethod, $Method* getListenerMethod) {
	$FeatureDescriptor::init$();
	this->inDefaultEventSet = true;
	setName(eventSetName);
	setListenerMethods(listenerMethods);
	setAddListenerMethod(addListenerMethod);
	setRemoveListenerMethod(removeListenerMethod);
	setGetListenerMethod(getListenerMethod);
	setListenerType(listenerType);
}

void EventSetDescriptor::init$($String* base, $EventSetInfo* info, $MethodArray* methods) {
	$useLocalCurrentObjectStackCache();
	$FeatureDescriptor::init$();
	this->inDefaultEventSet = true;
	setName($($Introspector::decapitalize(base)));
	setListenerMethods(methods);
	setAddListenerMethod($($nc(info)->getAddMethod()));
	setRemoveListenerMethod($($nc(info)->getRemoveMethod()));
	setGetListenerMethod($($nc(info)->getGetMethod()));
	setListenerType($nc(info)->getListenerType());
	setUnicast($nc(info)->isUnicast());
}

void EventSetDescriptor::init$($String* eventSetName, $Class* listenerType, $MethodDescriptorArray* listenerMethodDescriptors, $Method* addListenerMethod, $Method* removeListenerMethod) {
	$FeatureDescriptor::init$();
	this->inDefaultEventSet = true;
	setName(eventSetName);
	$set(this, listenerMethodDescriptors, (listenerMethodDescriptors != nullptr) ? $cast($MethodDescriptorArray, $nc(listenerMethodDescriptors)->clone()) : ($MethodDescriptorArray*)nullptr);
	setAddListenerMethod(addListenerMethod);
	setRemoveListenerMethod(removeListenerMethod);
	setListenerType(listenerType);
}

$Class* EventSetDescriptor::getListenerType() {
	return (this->listenerTypeRef != nullptr) ? $cast($Class, $nc(this->listenerTypeRef)->get()) : ($Class*)nullptr;
}

void EventSetDescriptor::setListenerType($Class* cls) {
	$set(this, listenerTypeRef, getWeakReference(cls));
}

$MethodArray* EventSetDescriptor::getListenerMethods() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($MethodArray, methods, getListenerMethods0());
		if (methods == nullptr) {
			if (this->listenerMethodDescriptors != nullptr) {
				$assign(methods, $new($MethodArray, $nc(this->listenerMethodDescriptors)->length));
				for (int32_t i = 0; i < methods->length; ++i) {
					methods->set(i, $($nc($nc(this->listenerMethodDescriptors)->get(i))->getMethod()));
				}
			}
			setListenerMethods(methods);
		}
		return methods;
	}
}

void EventSetDescriptor::setListenerMethods($MethodArray* methods) {
	$useLocalCurrentObjectStackCache();
	if (methods == nullptr) {
		return;
	}
	if (this->listenerMethodDescriptors == nullptr) {
		$set(this, listenerMethodDescriptors, $new($MethodDescriptorArray, $nc(methods)->length));
		for (int32_t i = 0; i < methods->length; ++i) {
			$nc(this->listenerMethodDescriptors)->set(i, $$new($MethodDescriptor, methods->get(i)));
		}
	}
	$set(this, listenerMethodsRef, getSoftReference(methods));
}

$MethodArray* EventSetDescriptor::getListenerMethods0() {
	return (this->listenerMethodsRef != nullptr) ? $cast($MethodArray, $nc(this->listenerMethodsRef)->get()) : ($MethodArray*)nullptr;
}

$MethodDescriptorArray* EventSetDescriptor::getListenerMethodDescriptors() {
	$synchronized(this) {
		return (this->listenerMethodDescriptors != nullptr) ? $cast($MethodDescriptorArray, $nc(this->listenerMethodDescriptors)->clone()) : ($MethodDescriptorArray*)nullptr;
	}
}

$Method* EventSetDescriptor::getAddListenerMethod() {
	$synchronized(this) {
		return getMethod(this->addMethodDescriptor);
	}
}

void EventSetDescriptor::setAddListenerMethod($Method* method) {
	$synchronized(this) {
		if (method == nullptr) {
			return;
		}
		if (getClass0() == nullptr) {
			setClass0($nc(method)->getDeclaringClass());
		}
		$set(this, addMethodDescriptor, $new($MethodDescriptor, method));
		$load($Transient);
		setTransient($cast($Transient, $($nc(method)->getAnnotation($Transient::class$))));
	}
}

$Method* EventSetDescriptor::getRemoveListenerMethod() {
	$synchronized(this) {
		return getMethod(this->removeMethodDescriptor);
	}
}

void EventSetDescriptor::setRemoveListenerMethod($Method* method) {
	$synchronized(this) {
		if (method == nullptr) {
			return;
		}
		if (getClass0() == nullptr) {
			setClass0($nc(method)->getDeclaringClass());
		}
		$set(this, removeMethodDescriptor, $new($MethodDescriptor, method));
		$load($Transient);
		setTransient($cast($Transient, $($nc(method)->getAnnotation($Transient::class$))));
	}
}

$Method* EventSetDescriptor::getGetListenerMethod() {
	$synchronized(this) {
		return getMethod(this->getMethodDescriptor);
	}
}

void EventSetDescriptor::setGetListenerMethod($Method* method) {
	$synchronized(this) {
		if (method == nullptr) {
			return;
		}
		if (getClass0() == nullptr) {
			setClass0($nc(method)->getDeclaringClass());
		}
		$set(this, getMethodDescriptor, $new($MethodDescriptor, method));
		$load($Transient);
		setTransient($cast($Transient, $($nc(method)->getAnnotation($Transient::class$))));
	}
}

void EventSetDescriptor::setUnicast(bool unicast) {
	this->unicast = unicast;
}

bool EventSetDescriptor::isUnicast() {
	return this->unicast;
}

void EventSetDescriptor::setInDefaultEventSet(bool inDefaultEventSet) {
	this->inDefaultEventSet = inDefaultEventSet;
}

bool EventSetDescriptor::isInDefaultEventSet() {
	return this->inDefaultEventSet;
}

void EventSetDescriptor::init$(EventSetDescriptor* x, EventSetDescriptor* y) {
	$FeatureDescriptor::init$(x, y);
	this->inDefaultEventSet = true;
	$set(this, listenerMethodDescriptors, $nc(x)->listenerMethodDescriptors);
	if ($nc(y)->listenerMethodDescriptors != nullptr) {
		$set(this, listenerMethodDescriptors, y->listenerMethodDescriptors);
	}
	$set(this, listenerTypeRef, x->listenerTypeRef);
	if ($nc(y)->listenerTypeRef != nullptr) {
		$set(this, listenerTypeRef, y->listenerTypeRef);
	}
	$set(this, addMethodDescriptor, x->addMethodDescriptor);
	if ($nc(y)->addMethodDescriptor != nullptr) {
		$set(this, addMethodDescriptor, y->addMethodDescriptor);
	}
	$set(this, removeMethodDescriptor, x->removeMethodDescriptor);
	if ($nc(y)->removeMethodDescriptor != nullptr) {
		$set(this, removeMethodDescriptor, y->removeMethodDescriptor);
	}
	$set(this, getMethodDescriptor, x->getMethodDescriptor);
	if ($nc(y)->getMethodDescriptor != nullptr) {
		$set(this, getMethodDescriptor, y->getMethodDescriptor);
	}
	this->unicast = $nc(y)->unicast;
	if (!x->inDefaultEventSet || !y->inDefaultEventSet) {
		this->inDefaultEventSet = false;
	}
}

void EventSetDescriptor::init$(EventSetDescriptor* old) {
	$useLocalCurrentObjectStackCache();
	$FeatureDescriptor::init$(old);
	this->inDefaultEventSet = true;
	if ($nc(old)->listenerMethodDescriptors != nullptr) {
		int32_t len = $nc(old->listenerMethodDescriptors)->length;
		$set(this, listenerMethodDescriptors, $new($MethodDescriptorArray, len));
		for (int32_t i = 0; i < len; ++i) {
			$nc(this->listenerMethodDescriptors)->set(i, $$new($MethodDescriptor, $nc(old->listenerMethodDescriptors)->get(i)));
		}
	}
	$set(this, listenerTypeRef, $nc(old)->listenerTypeRef);
	$set(this, addMethodDescriptor, old->addMethodDescriptor);
	$set(this, removeMethodDescriptor, old->removeMethodDescriptor);
	$set(this, getMethodDescriptor, old->getMethodDescriptor);
	this->unicast = old->unicast;
	this->inDefaultEventSet = old->inDefaultEventSet;
}

void EventSetDescriptor::appendTo($StringBuilder* sb) {
	$useLocalCurrentObjectStackCache();
	$FeatureDescriptor::appendTo(sb, "unicast"_s, this->unicast);
	$FeatureDescriptor::appendTo(sb, "inDefaultEventSet"_s, this->inDefaultEventSet);
	$FeatureDescriptor::appendTo(sb, "listenerType"_s, this->listenerTypeRef);
	$FeatureDescriptor::appendTo(sb, "getListenerMethod"_s, $($of(getMethod(this->getMethodDescriptor))));
	$FeatureDescriptor::appendTo(sb, "addListenerMethod"_s, $($of(getMethod(this->addMethodDescriptor))));
	$FeatureDescriptor::appendTo(sb, "removeListenerMethod"_s, $($of(getMethod(this->removeMethodDescriptor))));
}

$Method* EventSetDescriptor::getMethod($MethodDescriptor* descriptor) {
	$init(EventSetDescriptor);
	return (descriptor != nullptr) ? $nc(descriptor)->getMethod() : ($Method*)nullptr;
}

EventSetDescriptor::EventSetDescriptor() {
}

$Class* EventSetDescriptor::load$($String* name, bool initialize) {
	$loadClass(EventSetDescriptor, name, initialize, &_EventSetDescriptor_ClassInfo_, allocate$EventSetDescriptor);
	return class$;
}

$Class* EventSetDescriptor::class$ = nullptr;

	} // beans
} // java