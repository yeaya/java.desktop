#include <java/beans/Introspector.h>

#include <com/sun/beans/TypeResolver.h>
#include <com/sun/beans/finder/BeanInfoFinder.h>
#include <com/sun/beans/finder/ClassFinder.h>
#include <com/sun/beans/introspect/ClassInfo.h>
#include <com/sun/beans/introspect/EventSetInfo.h>
#include <com/sun/beans/introspect/PropertyInfo.h>
#include <java/awt/Component.h>
#include <java/beans/BeanDescriptor.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/Customizer.h>
#include <java/beans/EventSetDescriptor.h>
#include <java/beans/FeatureDescriptor.h>
#include <java/beans/GenericBeanInfo.h>
#include <java/beans/IndexedPropertyDescriptor.h>
#include <java/beans/IntrospectionException.h>
#include <java/beans/Introspector$1.h>
#include <java/beans/JavaBean.h>
#include <java/beans/MethodDescriptor.h>
#include <java/beans/NameGenerator.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/beans/SimpleBeanInfo.h>
#include <java/beans/ThreadGroupContext.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/EventObject.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <jdk/internal/access/JavaBeansAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef ADD_PREFIX
#undef EMPTY_EVENTSETDESCRIPTORS
#undef GET_PREFIX
#undef IGNORE_ALL_BEANINFO
#undef IGNORE_IMMEDIATE_BEANINFO
#undef IS_PREFIX
#undef REMOVE_PREFIX
#undef SET_PREFIX
#undef USE_ALL_BEANINFO

using $BeanInfoArray = $Array<::java::beans::BeanInfo>;
using $EventSetDescriptorArray = $Array<::java::beans::EventSetDescriptor>;
using $MethodDescriptorArray = $Array<::java::beans::MethodDescriptor>;
using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $TypeResolver = ::com::sun::beans::TypeResolver;
using $BeanInfoFinder = ::com::sun::beans::finder::BeanInfoFinder;
using $ClassFinder = ::com::sun::beans::finder::ClassFinder;
using $1ClassInfo = ::com::sun::beans::introspect::ClassInfo;
using $EventSetInfo = ::com::sun::beans::introspect::EventSetInfo;
using $PropertyInfo = ::com::sun::beans::introspect::PropertyInfo;
using $Component = ::java::awt::Component;
using $BeanDescriptor = ::java::beans::BeanDescriptor;
using $BeanInfo = ::java::beans::BeanInfo;
using $Customizer = ::java::beans::Customizer;
using $EventSetDescriptor = ::java::beans::EventSetDescriptor;
using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $GenericBeanInfo = ::java::beans::GenericBeanInfo;
using $IndexedPropertyDescriptor = ::java::beans::IndexedPropertyDescriptor;
using $IntrospectionException = ::java::beans::IntrospectionException;
using $Introspector$1 = ::java::beans::Introspector$1;
using $JavaBean = ::java::beans::JavaBean;
using $MethodDescriptor = ::java::beans::MethodDescriptor;
using $NameGenerator = ::java::beans::NameGenerator;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $SimpleBeanInfo = ::java::beans::SimpleBeanInfo;
using $ThreadGroupContext = ::java::beans::ThreadGroupContext;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Method = ::java::lang::reflect::Method;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $EventObject = ::java::util::EventObject;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $JavaBeansAccess = ::jdk::internal::access::JavaBeansAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace java {
	namespace beans {

$FieldInfo _Introspector_FieldInfo_[] = {
	{"USE_ALL_BEANINFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Introspector, USE_ALL_BEANINFO)},
	{"IGNORE_IMMEDIATE_BEANINFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Introspector, IGNORE_IMMEDIATE_BEANINFO)},
	{"IGNORE_ALL_BEANINFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Introspector, IGNORE_ALL_BEANINFO)},
	{"beanClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(Introspector, beanClass)},
	{"explicitBeanInfo", "Ljava/beans/BeanInfo;", nullptr, $PRIVATE, $field(Introspector, explicitBeanInfo)},
	{"superBeanInfo", "Ljava/beans/BeanInfo;", nullptr, $PRIVATE, $field(Introspector, superBeanInfo)},
	{"additionalBeanInfo", "[Ljava/beans/BeanInfo;", nullptr, $PRIVATE, $field(Introspector, additionalBeanInfo)},
	{"propertyChangeSource", "Z", nullptr, $PRIVATE, $field(Introspector, propertyChangeSource)},
	{"defaultEventName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Introspector, defaultEventName)},
	{"defaultPropertyName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Introspector, defaultPropertyName)},
	{"defaultEventIndex", "I", nullptr, $PRIVATE, $field(Introspector, defaultEventIndex)},
	{"defaultPropertyIndex", "I", nullptr, $PRIVATE, $field(Introspector, defaultPropertyIndex)},
	{"methods", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/beans/MethodDescriptor;>;", $PRIVATE, $field(Introspector, methods)},
	{"properties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/beans/PropertyDescriptor;>;", $PRIVATE, $field(Introspector, properties)},
	{"events", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/beans/EventSetDescriptor;>;", $PRIVATE, $field(Introspector, events)},
	{"EMPTY_EVENTSETDESCRIPTORS", "[Ljava/beans/EventSetDescriptor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Introspector, EMPTY_EVENTSETDESCRIPTORS)},
	{"ADD_PREFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Introspector, ADD_PREFIX)},
	{"REMOVE_PREFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Introspector, REMOVE_PREFIX)},
	{"GET_PREFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Introspector, GET_PREFIX)},
	{"SET_PREFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Introspector, SET_PREFIX)},
	{"IS_PREFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Introspector, IS_PREFIX)},
	{"pdStore", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/List<Ljava/beans/PropertyDescriptor;>;>;", $PRIVATE, $field(Introspector, pdStore)},
	{}
};

$MethodInfo _Introspector_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/Class;I)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;I)V", $PRIVATE, $method(static_cast<void(Introspector::*)($Class*,$Class*,int32_t)>(&Introspector::init$)), "java.beans.IntrospectionException"},
	{"addEvent", "(Ljava/beans/EventSetDescriptor;)V", nullptr, $PRIVATE, $method(static_cast<void(Introspector::*)($EventSetDescriptor*)>(&Introspector::addEvent))},
	{"addMethod", "(Ljava/beans/MethodDescriptor;)V", nullptr, $PRIVATE, $method(static_cast<void(Introspector::*)($MethodDescriptor*)>(&Introspector::addMethod))},
	{"addPropertyDescriptor", "(Ljava/beans/PropertyDescriptor;)V", nullptr, $PRIVATE, $method(static_cast<void(Introspector::*)($PropertyDescriptor*)>(&Introspector::addPropertyDescriptor))},
	{"addPropertyDescriptors", "([Ljava/beans/PropertyDescriptor;)V", nullptr, $PRIVATE, $method(static_cast<void(Introspector::*)($PropertyDescriptorArray*)>(&Introspector::addPropertyDescriptors))},
	{"decapitalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Introspector::decapitalize))},
	{"findCustomizerClass", "(Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($Class*)>(&Introspector::findCustomizerClass))},
	{"findExplicitBeanInfo", "(Ljava/lang/Class;)Ljava/beans/BeanInfo;", "(Ljava/lang/Class<*>;)Ljava/beans/BeanInfo;", $PRIVATE | $STATIC, $method(static_cast<$BeanInfo*(*)($Class*)>(&Introspector::findExplicitBeanInfo))},
	{"findMethod", "(Ljava/lang/Class;Ljava/lang/String;I)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;I)Ljava/lang/reflect/Method;", $STATIC, $method(static_cast<$Method*(*)($Class*,$String*,int32_t)>(&Introspector::findMethod))},
	{"findMethod", "(Ljava/lang/Class;Ljava/lang/String;I[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;I[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $STATIC, $method(static_cast<$Method*(*)($Class*,$String*,int32_t,$ClassArray*)>(&Introspector::findMethod))},
	{"flushCaches", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Introspector::flushCaches))},
	{"flushFromCaches", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*)>(&Introspector::flushFromCaches))},
	{"getBeanInfo", "(Ljava/lang/Class;)Ljava/beans/BeanInfo;", "(Ljava/lang/Class<*>;)Ljava/beans/BeanInfo;", $PUBLIC | $STATIC, $method(static_cast<$BeanInfo*(*)($Class*)>(&Introspector::getBeanInfo)), "java.beans.IntrospectionException"},
	{"getBeanInfo", "(Ljava/lang/Class;I)Ljava/beans/BeanInfo;", "(Ljava/lang/Class<*>;I)Ljava/beans/BeanInfo;", $PUBLIC | $STATIC, $method(static_cast<$BeanInfo*(*)($Class*,int32_t)>(&Introspector::getBeanInfo)), "java.beans.IntrospectionException"},
	{"getBeanInfo", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/beans/BeanInfo;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Ljava/beans/BeanInfo;", $PUBLIC | $STATIC, $method(static_cast<$BeanInfo*(*)($Class*,$Class*)>(&Introspector::getBeanInfo)), "java.beans.IntrospectionException"},
	{"getBeanInfo", "(Ljava/lang/Class;Ljava/lang/Class;I)Ljava/beans/BeanInfo;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;I)Ljava/beans/BeanInfo;", $PUBLIC | $STATIC, $method(static_cast<$BeanInfo*(*)($Class*,$Class*,int32_t)>(&Introspector::getBeanInfo)), "java.beans.IntrospectionException"},
	{"getBeanInfo", "()Ljava/beans/BeanInfo;", nullptr, $PRIVATE, $method(static_cast<$BeanInfo*(Introspector::*)()>(&Introspector::getBeanInfo)), "java.beans.IntrospectionException"},
	{"getBeanInfoSearchPath", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&Introspector::getBeanInfoSearchPath))},
	{"getPropertyDescriptors", "(Ljava/beans/BeanInfo;)[Ljava/beans/PropertyDescriptor;", nullptr, $PRIVATE, $method(static_cast<$PropertyDescriptorArray*(Introspector::*)($BeanInfo*)>(&Introspector::getPropertyDescriptors))},
	{"getTargetBeanDescriptor", "()Ljava/beans/BeanDescriptor;", nullptr, $PRIVATE, $method(static_cast<$BeanDescriptor*(Introspector::*)()>(&Introspector::getTargetBeanDescriptor))},
	{"getTargetDefaultEventIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(Introspector::*)()>(&Introspector::getTargetDefaultEventIndex))},
	{"getTargetDefaultPropertyIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(Introspector::*)()>(&Introspector::getTargetDefaultPropertyIndex))},
	{"getTargetEventInfo", "()[Ljava/beans/EventSetDescriptor;", nullptr, $PRIVATE, $method(static_cast<$EventSetDescriptorArray*(Introspector::*)()>(&Introspector::getTargetEventInfo)), "java.beans.IntrospectionException"},
	{"getTargetMethodInfo", "()[Ljava/beans/MethodDescriptor;", nullptr, $PRIVATE, $method(static_cast<$MethodDescriptorArray*(Introspector::*)()>(&Introspector::getTargetMethodInfo))},
	{"getTargetPropertyInfo", "()[Ljava/beans/PropertyDescriptor;", nullptr, $PRIVATE, $method(static_cast<$PropertyDescriptorArray*(Introspector::*)()>(&Introspector::getTargetPropertyInfo))},
	{"instantiate", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/Object;", $STATIC, $method(static_cast<$Object*(*)($Class*,$String*)>(&Introspector::instantiate)), "java.lang.InstantiationException,java.lang.IllegalAccessException,java.lang.NoSuchMethodException,java.lang.reflect.InvocationTargetException,java.lang.ClassNotFoundException"},
	{"internalFindMethod", "(Ljava/lang/Class;Ljava/lang/String;I[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;I[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PRIVATE | $STATIC, $method(static_cast<$Method*(*)($Class*,$String*,int32_t,$ClassArray*)>(&Introspector::internalFindMethod))},
	{"isAssignable", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*,$Class*)>(&Introspector::isAssignable))},
	{"isEventHandler", "(Ljava/lang/reflect/Method;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Introspector::*)($Method*)>(&Introspector::isEventHandler))},
	{"isSubclass", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $STATIC, $method(static_cast<bool(*)($Class*,$Class*)>(&Introspector::isSubclass))},
	{"makeQualifiedMethodName", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$StringArray*)>(&Introspector::makeQualifiedMethodName))},
	{"mergePropertyDescriptor", "(Ljava/beans/IndexedPropertyDescriptor;Ljava/beans/PropertyDescriptor;)Ljava/beans/PropertyDescriptor;", nullptr, $PRIVATE, $method(static_cast<$PropertyDescriptor*(Introspector::*)($IndexedPropertyDescriptor*,$PropertyDescriptor*)>(&Introspector::mergePropertyDescriptor))},
	{"mergePropertyDescriptor", "(Ljava/beans/PropertyDescriptor;Ljava/beans/PropertyDescriptor;)Ljava/beans/PropertyDescriptor;", nullptr, $PRIVATE, $method(static_cast<$PropertyDescriptor*(Introspector::*)($PropertyDescriptor*,$PropertyDescriptor*)>(&Introspector::mergePropertyDescriptor))},
	{"mergePropertyDescriptor", "(Ljava/beans/IndexedPropertyDescriptor;Ljava/beans/IndexedPropertyDescriptor;)Ljava/beans/IndexedPropertyDescriptor;", nullptr, $PRIVATE, $method(static_cast<$IndexedPropertyDescriptor*(Introspector::*)($IndexedPropertyDescriptor*,$IndexedPropertyDescriptor*)>(&Introspector::mergePropertyDescriptor))},
	{"mergePropertyWithIndexedProperty", "(Ljava/beans/PropertyDescriptor;Ljava/beans/IndexedPropertyDescriptor;)Ljava/beans/PropertyDescriptor;", nullptr, $PRIVATE, $method(static_cast<$PropertyDescriptor*(Introspector::*)($PropertyDescriptor*,$IndexedPropertyDescriptor*)>(&Introspector::mergePropertyWithIndexedProperty))},
	{"processPropertyDescriptors", "()V", nullptr, $PRIVATE, $method(static_cast<void(Introspector::*)()>(&Introspector::processPropertyDescriptors))},
	{"setBeanInfoSearchPath", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Introspector::setBeanInfoSearchPath))},
	{}
};

$InnerClassInfo _Introspector_InnerClassesInfo_[] = {
	{"java.beans.Introspector$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Introspector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.Introspector",
	"java.lang.Object",
	nullptr,
	_Introspector_FieldInfo_,
	_Introspector_MethodInfo_,
	nullptr,
	nullptr,
	_Introspector_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.beans.Introspector$1"
};

$Object* allocate$Introspector($Class* clazz) {
	return $of($alloc(Introspector));
}

$EventSetDescriptorArray* Introspector::EMPTY_EVENTSETDESCRIPTORS = nullptr;
$String* Introspector::ADD_PREFIX = nullptr;
$String* Introspector::REMOVE_PREFIX = nullptr;
$String* Introspector::GET_PREFIX = nullptr;
$String* Introspector::SET_PREFIX = nullptr;
$String* Introspector::IS_PREFIX = nullptr;

$BeanInfo* Introspector::getBeanInfo($Class* beanClass) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	if (!$ReflectUtil::isPackageAccessible(beanClass)) {
		return ($$new(Introspector, beanClass, nullptr, Introspector::USE_ALL_BEANINFO))->getBeanInfo();
	}
	$var($ThreadGroupContext, context, $ThreadGroupContext::getContext());
	$var($BeanInfo, beanInfo, $nc(context)->getBeanInfo(beanClass));
	if (beanInfo == nullptr) {
		$assign(beanInfo, $$new(Introspector, beanClass, nullptr, Introspector::USE_ALL_BEANINFO)->getBeanInfo());
		context->putBeanInfo(beanClass, beanInfo);
	}
	return beanInfo;
}

$BeanInfo* Introspector::getBeanInfo($Class* beanClass, int32_t flags) {
	$init(Introspector);
	return getBeanInfo(beanClass, nullptr, flags);
}

$BeanInfo* Introspector::getBeanInfo($Class* beanClass, $Class* stopClass) {
	$init(Introspector);
	return getBeanInfo(beanClass, stopClass, Introspector::USE_ALL_BEANINFO);
}

$BeanInfo* Introspector::getBeanInfo($Class* beanClass, $Class* stopClass, int32_t flags) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	$var($BeanInfo, bi, nullptr);
	if (stopClass == nullptr && flags == Introspector::USE_ALL_BEANINFO) {
		$assign(bi, getBeanInfo(beanClass));
	} else {
		$assign(bi, ($$new(Introspector, beanClass, stopClass, flags))->getBeanInfo());
	}
	return bi;
}

$String* Introspector::decapitalize($String* name) {
	$init(Introspector);
	if (name == nullptr || $nc(name)->length() == 0) {
		return name;
	}
	bool var$1 = $nc(name)->length() > 1;
	bool var$0 = var$1 && $Character::isUpperCase(name->charAt(1));
	if (var$0 && $Character::isUpperCase(name->charAt(0))) {
		return name;
	}
	$var($chars, chars, $nc(name)->toCharArray());
	chars->set(0, $Character::toLowerCase(chars->get(0)));
	return $new($String, chars);
}

$StringArray* Introspector::getBeanInfoSearchPath() {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($ThreadGroupContext::getContext()))->getBeanInfoFinder()))->getPackages();
}

void Introspector::setBeanInfoSearchPath($StringArray* path) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertiesAccess();
	}
	$nc($($nc($($ThreadGroupContext::getContext()))->getBeanInfoFinder()))->setPackages(path);
}

void Introspector::flushCaches() {
	$init(Introspector);
	$nc($($ThreadGroupContext::getContext()))->clearBeanInfoCache();
	$1ClassInfo::clear();
}

void Introspector::flushFromCaches($Class* clz) {
	$init(Introspector);
	if (clz == nullptr) {
		$throwNew($NullPointerException);
	}
	$nc($($ThreadGroupContext::getContext()))->removeBeanInfo(clz);
	$1ClassInfo::remove(clz);
}

void Introspector::init$($Class* beanClass, $Class* stopClass, int32_t flags) {
	$useLocalCurrentObjectStackCache();
	this->propertyChangeSource = false;
	this->defaultEventIndex = -1;
	this->defaultPropertyIndex = -1;
	$set(this, pdStore, $new($HashMap));
	$set(this, beanClass, beanClass);
	if (stopClass != nullptr) {
		bool isSuper = false;
		{
			$Class* c = $nc(beanClass)->getSuperclass();
			for (; c != nullptr; c = $nc(c)->getSuperclass()) {
				if (c == stopClass) {
					isSuper = true;
				}
			}
		}
		if (!isSuper) {
			$var($String, var$0, $$str({$(stopClass->getName()), " not superclass of "_s}));
			$throwNew($IntrospectionException, $$concat(var$0, $(beanClass->getName())));
		}
	}
	if (flags == Introspector::USE_ALL_BEANINFO) {
		$set(this, explicitBeanInfo, findExplicitBeanInfo(beanClass));
	}
	$Class* superClass = $nc(beanClass)->getSuperclass();
	if (superClass != stopClass) {
		int32_t newFlags = flags;
		if (newFlags == Introspector::IGNORE_IMMEDIATE_BEANINFO) {
			newFlags = Introspector::USE_ALL_BEANINFO;
		}
		$set(this, superBeanInfo, getBeanInfo(superClass, stopClass, newFlags));
	}
	if (this->explicitBeanInfo != nullptr) {
		$set(this, additionalBeanInfo, $nc(this->explicitBeanInfo)->getAdditionalBeanInfo());
	}
	if (this->additionalBeanInfo == nullptr) {
		$set(this, additionalBeanInfo, $new($BeanInfoArray, 0));
	}
}

$BeanInfo* Introspector::getBeanInfo() {
	$useLocalCurrentObjectStackCache();
	$var($BeanDescriptor, bd, getTargetBeanDescriptor());
	$var($MethodDescriptorArray, mds, getTargetMethodInfo());
	$var($EventSetDescriptorArray, esds, getTargetEventInfo());
	$var($PropertyDescriptorArray, pds, getTargetPropertyInfo());
	int32_t defaultEvent = getTargetDefaultEventIndex();
	int32_t defaultProperty = getTargetDefaultPropertyIndex();
	return $new($GenericBeanInfo, bd, esds, defaultEvent, pds, defaultProperty, mds, this->explicitBeanInfo);
}

$BeanInfo* Introspector::findExplicitBeanInfo($Class* beanClass) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	return $cast($BeanInfo, $nc($($nc($($ThreadGroupContext::getContext()))->getBeanInfoFinder()))->find(beanClass));
}

$PropertyDescriptorArray* Introspector::getTargetPropertyInfo() {
	$useLocalCurrentObjectStackCache();
	$var($PropertyDescriptorArray, explicitProperties, nullptr);
	if (this->explicitBeanInfo != nullptr) {
		$assign(explicitProperties, getPropertyDescriptors(this->explicitBeanInfo));
	}
	if (explicitProperties == nullptr && this->superBeanInfo != nullptr) {
		addPropertyDescriptors($(getPropertyDescriptors(this->superBeanInfo)));
	}
	for (int32_t i = 0; i < $nc(this->additionalBeanInfo)->length; ++i) {
		addPropertyDescriptors($($nc($nc(this->additionalBeanInfo)->get(i))->getPropertyDescriptors()));
	}
	if (explicitProperties != nullptr) {
		addPropertyDescriptors(explicitProperties);
	} else {
		{
			$var($Iterator, i$, $nc($($nc($($nc($($1ClassInfo::get(this->beanClass)))->getProperties()))->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					addPropertyDescriptor(nullptr != $nc(($cast($PropertyInfo, $($nc(entry)->getValue()))))->getIndexed() ? static_cast<$PropertyDescriptor*>($$new($IndexedPropertyDescriptor, entry, this->propertyChangeSource)) : $$new($PropertyDescriptor, entry, this->propertyChangeSource));
				}
			}
		}
		$load($JavaBean);
		$var($JavaBean, annotation, $cast($JavaBean, $nc(this->beanClass)->getAnnotation($JavaBean::class$)));
		if ((annotation != nullptr) && !$nc($(annotation->defaultProperty()))->isEmpty()) {
			$set(this, defaultPropertyName, annotation->defaultProperty());
		}
	}
	processPropertyDescriptors();
	$var($PropertyDescriptorArray, result, $fcast($PropertyDescriptorArray, $nc($($nc(this->properties)->values()))->toArray($$new($PropertyDescriptorArray, $nc(this->properties)->size()))));
	if (this->defaultPropertyName != nullptr) {
		for (int32_t i = 0; i < $nc(result)->length; ++i) {
			if ($nc(this->defaultPropertyName)->equals($($nc(result->get(i))->getName()))) {
				this->defaultPropertyIndex = i;
			}
		}
	}
	return result;
}

void Introspector::addPropertyDescriptor($PropertyDescriptor* pd$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($PropertyDescriptor, pd, pd$renamed);
	$var($String, propName, $nc(pd)->getName());
	$var($List, list, $cast($List, $nc(this->pdStore)->get(propName)));
	if (list == nullptr) {
		$assign(list, $new($ArrayList));
		$nc(this->pdStore)->put(propName, list);
	}
	if (this->beanClass != pd->getClass0()) {
		$var($Method, read, pd->getReadMethod());
		$var($Method, write, pd->getWriteMethod());
		bool cls = true;
		if (read != nullptr) {
			cls = cls && $instanceOf($Class, $(read->getGenericReturnType()));
		}
		if (write != nullptr) {
			cls = cls && $instanceOf($Class, $nc($(write->getGenericParameterTypes()))->get(0));
		}
		if ($instanceOf($IndexedPropertyDescriptor, pd)) {
			$var($IndexedPropertyDescriptor, ipd, $cast($IndexedPropertyDescriptor, pd));
			$var($Method, readI, ipd->getIndexedReadMethod());
			$var($Method, writeI, ipd->getIndexedWriteMethod());
			if (readI != nullptr) {
				cls = cls && $instanceOf($Class, $(readI->getGenericReturnType()));
			}
			if (writeI != nullptr) {
				cls = cls && $instanceOf($Class, $nc($(writeI->getGenericParameterTypes()))->get(1));
			}
			if (!cls) {
				$assign(pd, $new($IndexedPropertyDescriptor, ipd));
				pd->updateGenericsFor(this->beanClass);
			}
		} else if (!cls) {
			$assign(pd, $new($PropertyDescriptor, pd));
			pd->updateGenericsFor(this->beanClass);
		}
	}
	$nc(list)->add(pd);
}

void Introspector::addPropertyDescriptors($PropertyDescriptorArray* descriptors) {
	$useLocalCurrentObjectStackCache();
	if (descriptors != nullptr) {
		{
			$var($PropertyDescriptorArray, arr$, descriptors);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($PropertyDescriptor, descriptor, arr$->get(i$));
				{
					addPropertyDescriptor(descriptor);
				}
			}
		}
	}
}

$PropertyDescriptorArray* Introspector::getPropertyDescriptors($BeanInfo* info) {
	$var($PropertyDescriptorArray, descriptors, $nc(info)->getPropertyDescriptors());
	int32_t index = info->getDefaultPropertyIndex();
	if ((0 <= index) && (index < $nc(descriptors)->length)) {
		$set(this, defaultPropertyName, $nc(descriptors->get(index))->getName());
	}
	return descriptors;
}

void Introspector::processPropertyDescriptors() {
	$useLocalCurrentObjectStackCache();
	if (this->properties == nullptr) {
		$set(this, properties, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
	}
	$var($List, list, nullptr);
	$var($PropertyDescriptor, pd, nullptr);
	$var($PropertyDescriptor, gpd, nullptr);
	$var($PropertyDescriptor, spd, nullptr);
	$var($IndexedPropertyDescriptor, ipd, nullptr);
	$var($IndexedPropertyDescriptor, igpd, nullptr);
	$var($IndexedPropertyDescriptor, ispd, nullptr);
	{
		$var($Iterator, i$, $nc($($nc(this->pdStore)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, propertyDescriptors, $cast($List, i$->next()));
			{
				$assign(pd, nullptr);
				$assign(gpd, nullptr);
				$assign(spd, nullptr);
				$assign(ipd, nullptr);
				$assign(igpd, nullptr);
				$assign(ispd, nullptr);
				$assign(list, propertyDescriptors);
				for (int32_t i = 0; i < $nc(list)->size(); ++i) {
					$assign(pd, $cast($PropertyDescriptor, list->get(i)));
					if ($instanceOf($IndexedPropertyDescriptor, pd)) {
						$assign(ipd, $cast($IndexedPropertyDescriptor, pd));
						if ($nc(ipd)->getIndexedReadMethod() != nullptr) {
							if (igpd != nullptr) {
								$assign(igpd, $new($IndexedPropertyDescriptor, static_cast<$PropertyDescriptor*>(igpd), static_cast<$PropertyDescriptor*>(ipd)));
							} else {
								$assign(igpd, ipd);
							}
						}
					} else if ($nc(pd)->getReadMethod() != nullptr) {
						$var($String, pdName, $nc($(pd->getReadMethod()))->getName());
						if (gpd != nullptr) {
							$var($String, gpdName, $nc($(gpd->getReadMethod()))->getName());
							bool var$0 = $nc(gpdName)->equals(pdName);
							if (var$0 || !$nc(gpdName)->startsWith(Introspector::IS_PREFIX)) {
								$assign(gpd, $new($PropertyDescriptor, gpd, pd));
							}
						} else {
							$assign(gpd, pd);
						}
					}
				}
				for (int32_t i = 0; i < $nc(list)->size(); ++i) {
					$assign(pd, $cast($PropertyDescriptor, list->get(i)));
					if ($instanceOf($IndexedPropertyDescriptor, pd)) {
						$assign(ipd, $cast($IndexedPropertyDescriptor, pd));
						if ($nc(ipd)->getIndexedWriteMethod() != nullptr) {
							if (igpd != nullptr) {
								$Class* var$1 = igpd->getIndexedPropertyType();
								if (isAssignable(var$1, ipd->getIndexedPropertyType())) {
									if (ispd != nullptr) {
										$assign(ispd, $new($IndexedPropertyDescriptor, static_cast<$PropertyDescriptor*>(ispd), static_cast<$PropertyDescriptor*>(ipd)));
									} else {
										$assign(ispd, ipd);
									}
								}
							} else if (ispd != nullptr) {
								$assign(ispd, $new($IndexedPropertyDescriptor, static_cast<$PropertyDescriptor*>(ispd), static_cast<$PropertyDescriptor*>(ipd)));
							} else {
								$assign(ispd, ipd);
							}
						}
					} else if ($nc(pd)->getWriteMethod() != nullptr) {
						if (gpd != nullptr) {
							$Class* var$2 = gpd->getPropertyType();
							if (isAssignable(var$2, pd->getPropertyType())) {
								if (spd != nullptr) {
									$assign(spd, $new($PropertyDescriptor, spd, pd));
								} else {
									$assign(spd, pd);
								}
							}
						} else if (spd != nullptr) {
							$assign(spd, $new($PropertyDescriptor, spd, pd));
						} else {
							$assign(spd, pd);
						}
					}
				}
				$assign(pd, nullptr);
				$assign(ipd, nullptr);
				if (igpd != nullptr && ispd != nullptr) {
					if ((gpd == spd) || (gpd == nullptr)) {
						$assign(pd, spd);
					} else if (spd == nullptr) {
						$assign(pd, gpd);
					} else if ($instanceOf($IndexedPropertyDescriptor, spd)) {
						$assign(pd, mergePropertyWithIndexedProperty(gpd, $cast($IndexedPropertyDescriptor, spd)));
					} else if ($instanceOf($IndexedPropertyDescriptor, gpd)) {
						$assign(pd, mergePropertyWithIndexedProperty(spd, $cast($IndexedPropertyDescriptor, gpd)));
					} else {
						$assign(pd, mergePropertyDescriptor(gpd, spd));
					}
					if (igpd == ispd) {
						$assign(ipd, igpd);
					} else {
						$assign(ipd, mergePropertyDescriptor(igpd, ispd));
					}
					if (pd == nullptr) {
						$assign(pd, ipd);
					} else {
						$Class* propType = $nc(pd)->getPropertyType();
						$Class* ipropType = $nc(ipd)->getIndexedPropertyType();
						bool var$3 = $nc(propType)->isArray();
						if (var$3 && propType->getComponentType() == ipropType) {
							$assign(pd, $nc(pd->getClass0())->isAssignableFrom(ipd->getClass0()) ? static_cast<$PropertyDescriptor*>($new($IndexedPropertyDescriptor, pd, static_cast<$PropertyDescriptor*>(ipd))) : static_cast<$PropertyDescriptor*>($new($IndexedPropertyDescriptor, static_cast<$PropertyDescriptor*>(ipd), pd)));
						} else if ($nc(pd->getClass0())->isAssignableFrom(ipd->getClass0())) {
							$assign(pd, $nc(pd->getClass0())->isAssignableFrom(ipd->getClass0()) ? $new($PropertyDescriptor, pd, static_cast<$PropertyDescriptor*>(ipd)) : $new($PropertyDescriptor, static_cast<$PropertyDescriptor*>(ipd), pd));
						} else {
							$assign(pd, ipd);
						}
					}
				} else if (gpd != nullptr && spd != nullptr) {
					if (igpd != nullptr) {
						$assign(gpd, mergePropertyWithIndexedProperty(gpd, igpd));
					}
					if (ispd != nullptr) {
						$assign(spd, mergePropertyWithIndexedProperty(spd, ispd));
					}
					if (gpd == spd) {
						$assign(pd, gpd);
					} else if ($instanceOf($IndexedPropertyDescriptor, spd)) {
						$assign(pd, mergePropertyWithIndexedProperty(gpd, $cast($IndexedPropertyDescriptor, spd)));
					} else if ($instanceOf($IndexedPropertyDescriptor, gpd)) {
						$assign(pd, mergePropertyWithIndexedProperty(spd, $cast($IndexedPropertyDescriptor, gpd)));
					} else {
						$assign(pd, mergePropertyDescriptor(gpd, spd));
					}
				} else if (ispd != nullptr) {
					$assign(pd, ispd);
					if (spd != nullptr) {
						$assign(pd, mergePropertyDescriptor(ispd, spd));
					}
					if (gpd != nullptr) {
						$assign(pd, mergePropertyDescriptor(ispd, gpd));
					}
				} else if (igpd != nullptr) {
					$assign(pd, igpd);
					if (gpd != nullptr) {
						$assign(pd, mergePropertyDescriptor(igpd, gpd));
					}
					if (spd != nullptr) {
						$assign(pd, mergePropertyDescriptor(igpd, spd));
					}
				} else if (spd != nullptr) {
					$assign(pd, spd);
				} else if (gpd != nullptr) {
					$assign(pd, gpd);
				}
				if ($instanceOf($IndexedPropertyDescriptor, pd)) {
					$assign(ipd, $cast($IndexedPropertyDescriptor, pd));
					bool var$4 = $nc(ipd)->getIndexedReadMethod() == nullptr;
					if (var$4 && ipd->getIndexedWriteMethod() == nullptr) {
						$assign(pd, $new($PropertyDescriptor, ipd));
					}
				}
				if ((pd == nullptr) && ($nc(list)->size() > 0)) {
					$assign(pd, $cast($PropertyDescriptor, list->get(0)));
				}
				if (pd != nullptr) {
					$nc(this->properties)->put($(pd->getName()), pd);
				}
			}
		}
	}
}

bool Introspector::isAssignable($Class* current, $Class* candidate) {
	$init(Introspector);
	return ((current == nullptr) || (candidate == nullptr)) ? current == candidate : $nc(current)->isAssignableFrom(candidate);
}

$PropertyDescriptor* Introspector::mergePropertyWithIndexedProperty($PropertyDescriptor* pd, $IndexedPropertyDescriptor* ipd) {
	$Class* type = $nc(pd)->getPropertyType();
	bool var$0 = $nc(type)->isArray();
	if (var$0) {
		var$0 = (type->getComponentType() == $nc(ipd)->getIndexedPropertyType());
	}
	if (var$0) {
		return $nc(pd->getClass0())->isAssignableFrom(ipd->getClass0()) ? static_cast<$PropertyDescriptor*>($new($IndexedPropertyDescriptor, pd, static_cast<$PropertyDescriptor*>(ipd))) : static_cast<$PropertyDescriptor*>($new($IndexedPropertyDescriptor, static_cast<$PropertyDescriptor*>(ipd), pd));
	}
	return pd;
}

$PropertyDescriptor* Introspector::mergePropertyDescriptor($IndexedPropertyDescriptor* ipd, $PropertyDescriptor* pd) {
	$useLocalCurrentObjectStackCache();
	$var($PropertyDescriptor, result, nullptr);
	$Class* propType = $nc(pd)->getPropertyType();
	$Class* ipropType = $nc(ipd)->getIndexedPropertyType();
	bool var$0 = $nc(propType)->isArray();
	if (var$0 && propType->getComponentType() == ipropType) {
		if ($nc(pd->getClass0())->isAssignableFrom(ipd->getClass0())) {
			$assign(result, $new($IndexedPropertyDescriptor, pd, static_cast<$PropertyDescriptor*>(ipd)));
		} else {
			$assign(result, $new($IndexedPropertyDescriptor, static_cast<$PropertyDescriptor*>(ipd), pd));
		}
	} else {
		bool var$2 = (ipd->getReadMethod() == nullptr);
		if (var$2 && (ipd->getWriteMethod() == nullptr)) {
			if ($nc(pd->getClass0())->isAssignableFrom(ipd->getClass0())) {
				$assign(result, $new($PropertyDescriptor, pd, static_cast<$PropertyDescriptor*>(ipd)));
			} else {
				$assign(result, $new($PropertyDescriptor, static_cast<$PropertyDescriptor*>(ipd), pd));
			}
		} else if ($nc(pd->getClass0())->isAssignableFrom(ipd->getClass0())) {
			$assign(result, ipd);
		} else {
			$assign(result, pd);
			$var($Method, write, result->getWriteMethod());
			$var($Method, read, result->getReadMethod());
			if (read == nullptr && write != nullptr) {
				$Class* var$3 = result->getClass0();
				$assign(read, findMethod(var$3, $$str({Introspector::GET_PREFIX, $($NameGenerator::capitalize($(result->getName())))}), 0));
				if (read != nullptr) {
					try {
						result->setReadMethod(read);
					} catch ($IntrospectionException& ex) {
					}
				}
			}
			if (write == nullptr && read != nullptr) {
				$Class* var$4 = result->getClass0();
				$var($String, var$5, $str({Introspector::SET_PREFIX, $($NameGenerator::capitalize($(result->getName())))}));
				$assign(write, findMethod(var$4, var$5, 1, $$new($ClassArray, {$FeatureDescriptor::getReturnType(result->getClass0(), read)})));
				if (write != nullptr) {
					try {
						result->setWriteMethod(write);
					} catch ($IntrospectionException& ex) {
					}
				}
			}
		}
	}
	return result;
}

$PropertyDescriptor* Introspector::mergePropertyDescriptor($PropertyDescriptor* pd1, $PropertyDescriptor* pd2) {
	if ($nc($nc(pd1)->getClass0())->isAssignableFrom($nc(pd2)->getClass0())) {
		return $new($PropertyDescriptor, pd1, pd2);
	} else {
		return $new($PropertyDescriptor, pd2, pd1);
	}
}

$IndexedPropertyDescriptor* Introspector::mergePropertyDescriptor($IndexedPropertyDescriptor* ipd1, $IndexedPropertyDescriptor* ipd2) {
	if ($nc($nc(ipd1)->getClass0())->isAssignableFrom($nc(ipd2)->getClass0())) {
		return $new($IndexedPropertyDescriptor, static_cast<$PropertyDescriptor*>(ipd1), static_cast<$PropertyDescriptor*>(ipd2));
	} else {
		return $new($IndexedPropertyDescriptor, static_cast<$PropertyDescriptor*>(ipd2), static_cast<$PropertyDescriptor*>(ipd1));
	}
}

$EventSetDescriptorArray* Introspector::getTargetEventInfo() {
	$useLocalCurrentObjectStackCache();
	if (this->events == nullptr) {
		$set(this, events, $new($HashMap));
	}
	$var($EventSetDescriptorArray, explicitEvents, nullptr);
	if (this->explicitBeanInfo != nullptr) {
		$assign(explicitEvents, $nc(this->explicitBeanInfo)->getEventSetDescriptors());
		int32_t ix = $nc(this->explicitBeanInfo)->getDefaultEventIndex();
		if (ix >= 0 && ix < $nc(explicitEvents)->length) {
			$set(this, defaultEventName, $nc(explicitEvents->get(ix))->getName());
		}
	}
	if (explicitEvents == nullptr && this->superBeanInfo != nullptr) {
		$var($EventSetDescriptorArray, supers, $nc(this->superBeanInfo)->getEventSetDescriptors());
		for (int32_t i = 0; i < $nc(supers)->length; ++i) {
			addEvent(supers->get(i));
		}
		int32_t ix = $nc(this->superBeanInfo)->getDefaultEventIndex();
		if (ix >= 0 && ix < $nc(supers)->length) {
			$set(this, defaultEventName, $nc(supers->get(ix))->getName());
		}
	}
	for (int32_t i = 0; i < $nc(this->additionalBeanInfo)->length; ++i) {
		$var($EventSetDescriptorArray, additional, $nc($nc(this->additionalBeanInfo)->get(i))->getEventSetDescriptors());
		if (additional != nullptr) {
			for (int32_t j = 0; j < additional->length; ++j) {
				addEvent(additional->get(j));
			}
		}
	}
	if (explicitEvents != nullptr) {
		for (int32_t i = 0; i < explicitEvents->length; ++i) {
			addEvent(explicitEvents->get(i));
		}
	} else {
		{
			$var($Iterator, i$, $nc($($nc($($nc($($1ClassInfo::get(this->beanClass)))->getEventSets()))->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($List, methods, $new($ArrayList));
					{
						$var($Iterator, i$, $nc($($nc($($1ClassInfo::get($nc(($cast($EventSetInfo, $($nc(entry)->getValue()))))->getListenerType())))->getMethods()))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Method, method, $cast($Method, i$->next()));
							{
								if (isEventHandler(method)) {
									methods->add(method);
								}
							}
						}
					}
					$var($String, var$0, $cast($String, $nc(entry)->getKey()));
					$var($EventSetInfo, var$1, $cast($EventSetInfo, entry->getValue()));
					addEvent($$new($EventSetDescriptor, var$0, var$1, $fcast($MethodArray, $(methods->toArray($$new($MethodArray, methods->size()))))));
				}
			}
		}
		$load($JavaBean);
		$var($JavaBean, annotation, $cast($JavaBean, $nc(this->beanClass)->getAnnotation($JavaBean::class$)));
		if ((annotation != nullptr) && !$nc($(annotation->defaultEventSet()))->isEmpty()) {
			$set(this, defaultEventName, annotation->defaultEventSet());
		}
	}
	$var($EventSetDescriptorArray, result, nullptr);
	if ($nc(this->events)->size() == 0) {
		$assign(result, Introspector::EMPTY_EVENTSETDESCRIPTORS);
	} else {
		$assign(result, $new($EventSetDescriptorArray, $nc(this->events)->size()));
		$assign(result, $fcast($EventSetDescriptorArray, $nc($($nc(this->events)->values()))->toArray(result)));
		if (this->defaultEventName != nullptr) {
			for (int32_t i = 0; i < $nc(result)->length; ++i) {
				if ($nc(this->defaultEventName)->equals($($nc(result->get(i))->getName()))) {
					this->defaultEventIndex = i;
				}
			}
		}
	}
	return result;
}

void Introspector::addEvent($EventSetDescriptor* esd) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, $nc(esd)->getName());
	if ($nc($(esd->getName()))->equals("propertyChange"_s)) {
		this->propertyChangeSource = true;
	}
	$var($EventSetDescriptor, old, $cast($EventSetDescriptor, $nc(this->events)->get(key)));
	if (old == nullptr) {
		$nc(this->events)->put(key, esd);
		return;
	}
	$var($EventSetDescriptor, composite, $new($EventSetDescriptor, old, esd));
	$nc(this->events)->put(key, composite);
}

$MethodDescriptorArray* Introspector::getTargetMethodInfo() {
	$useLocalCurrentObjectStackCache();
	if (this->methods == nullptr) {
		$set(this, methods, $new($HashMap, 100));
	}
	$var($MethodDescriptorArray, explicitMethods, nullptr);
	if (this->explicitBeanInfo != nullptr) {
		$assign(explicitMethods, $nc(this->explicitBeanInfo)->getMethodDescriptors());
	}
	if (explicitMethods == nullptr && this->superBeanInfo != nullptr) {
		$var($MethodDescriptorArray, supers, $nc(this->superBeanInfo)->getMethodDescriptors());
		for (int32_t i = 0; i < $nc(supers)->length; ++i) {
			addMethod(supers->get(i));
		}
	}
	for (int32_t i = 0; i < $nc(this->additionalBeanInfo)->length; ++i) {
		$var($MethodDescriptorArray, additional, $nc($nc(this->additionalBeanInfo)->get(i))->getMethodDescriptors());
		if (additional != nullptr) {
			for (int32_t j = 0; j < additional->length; ++j) {
				addMethod(additional->get(j));
			}
		}
	}
	if (explicitMethods != nullptr) {
		for (int32_t i = 0; i < explicitMethods->length; ++i) {
			addMethod(explicitMethods->get(i));
		}
	} else {
		{
			$var($Iterator, i$, $nc($($nc($($1ClassInfo::get(this->beanClass)))->getMethods()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Method, method, $cast($Method, i$->next()));
				{
					addMethod($$new($MethodDescriptor, method));
				}
			}
		}
	}
	$var($MethodDescriptorArray, result, $new($MethodDescriptorArray, $nc(this->methods)->size()));
	$assign(result, $fcast($MethodDescriptorArray, $nc($($nc(this->methods)->values()))->toArray(result)));
	return result;
}

void Introspector::addMethod($MethodDescriptor* md) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(md)->getName());
	$var($MethodDescriptor, old, $cast($MethodDescriptor, $nc(this->methods)->get(name)));
	if (old == nullptr) {
		$nc(this->methods)->put(name, md);
		return;
	}
	$var($StringArray, p1, md->getParamNames());
	$var($StringArray, p2, $nc(old)->getParamNames());
	bool match = false;
	if ($nc(p1)->length == $nc(p2)->length) {
		match = true;
		for (int32_t i = 0; i < p1->length; ++i) {
			if (p1->get(i) != p2->get(i)) {
				match = false;
				break;
			}
		}
	}
	if (match) {
		$var($MethodDescriptor, composite, $new($MethodDescriptor, old, md));
		$nc(this->methods)->put(name, composite);
		return;
	}
	$var($String, longKey, makeQualifiedMethodName(name, p1));
	$assign(old, $cast($MethodDescriptor, $nc(this->methods)->get(longKey)));
	if (old == nullptr) {
		$nc(this->methods)->put(longKey, md);
		return;
	}
	$var($MethodDescriptor, composite, $new($MethodDescriptor, old, md));
	$nc(this->methods)->put(longKey, composite);
}

$String* Introspector::makeQualifiedMethodName($String* name, $StringArray* params) {
	$init(Introspector);
	$var($StringBuilder, sb, $new($StringBuilder, name));
	sb->append(u'=');
	for (int32_t i = 0; i < $nc(params)->length; ++i) {
		sb->append(u':');
		sb->append(params->get(i));
	}
	return sb->toString();
}

int32_t Introspector::getTargetDefaultEventIndex() {
	return this->defaultEventIndex;
}

int32_t Introspector::getTargetDefaultPropertyIndex() {
	return this->defaultPropertyIndex;
}

$BeanDescriptor* Introspector::getTargetBeanDescriptor() {
	if (this->explicitBeanInfo != nullptr) {
		$var($BeanDescriptor, bd, $nc(this->explicitBeanInfo)->getBeanDescriptor());
		if (bd != nullptr) {
			return (bd);
		}
	}
	return $new($BeanDescriptor, this->beanClass, findCustomizerClass(this->beanClass));
}

$Class* Introspector::findCustomizerClass($Class* type) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, name, $str({$($nc(type)->getName()), "Customizer"_s}));
	try {
		type = $ClassFinder::findClass(name, $(type->getClassLoader()));
		$load($Component);
		bool var$0 = $Component::class$->isAssignableFrom(type);
		$load($Customizer);
		if (var$0 && $Customizer::class$->isAssignableFrom(type)) {
			return type;
		}
	} catch ($Exception& exception) {
	}
	return nullptr;
}

bool Introspector::isEventHandler($Method* m) {
	$useLocalCurrentObjectStackCache();
	$var($TypeArray, argTypes, $nc(m)->getGenericParameterTypes());
	if ($nc(argTypes)->length != 1) {
		return false;
	}
	$load($EventObject);
	return isSubclass($TypeResolver::erase($($TypeResolver::resolveInClass(this->beanClass, $nc(argTypes)->get(0)))), $EventObject::class$);
}

$Method* Introspector::internalFindMethod($Class* start, $String* methodName, int32_t argCount, $ClassArray* args) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	{
		$Class* cl = start;
		for (; cl != nullptr; cl = $nc(cl)->getSuperclass()) {
			{
				$var($Iterator, i$, $nc($($nc($($1ClassInfo::get(cl)))->getMethods()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Method, method, $cast($Method, i$->next()));
					{
						if ($nc($($nc(method)->getName()))->equals(methodName)) {
							$var($TypeArray, params, method->getGenericParameterTypes());
							if ($nc(params)->length == argCount) {
								if (args != nullptr) {
									bool different = false;
									if (argCount > 0) {
										for (int32_t j = 0; j < argCount; ++j) {
											if ($TypeResolver::erase($($TypeResolver::resolveInClass(start, params->get(j)))) != args->get(j)) {
												different = true;
												continue;
											}
										}
										if (different) {
											continue;
										}
									}
								}
								return method;
							}
						}
					}
				}
			}
		}
	}
	$var($ClassArray, ifcs, $nc(start)->getInterfaces());
	for (int32_t i = 0; i < ifcs->length; ++i) {
		$var($Method, method, internalFindMethod(ifcs->get(i), methodName, argCount, nullptr));
		if (method != nullptr) {
			return method;
		}
	}
	return nullptr;
}

$Method* Introspector::findMethod($Class* cls, $String* methodName, int32_t argCount) {
	$init(Introspector);
	return findMethod(cls, methodName, argCount, nullptr);
}

$Method* Introspector::findMethod($Class* cls, $String* methodName, int32_t argCount, $ClassArray* args) {
	$init(Introspector);
	if (methodName == nullptr) {
		return nullptr;
	}
	return internalFindMethod(cls, methodName, argCount, args);
}

bool Introspector::isSubclass($Class* a, $Class* b) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	if (a == b) {
		return true;
	}
	if (a == nullptr || b == nullptr) {
		return false;
	}
	{
		$Class* x = a;
		for (; x != nullptr; x = $nc(x)->getSuperclass()) {
			if (x == b) {
				return true;
			}
			if ($nc(b)->isInterface()) {
				$var($ClassArray, interfaces, x->getInterfaces());
				for (int32_t i = 0; i < interfaces->length; ++i) {
					if (isSubclass(interfaces->get(i), b)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

$Object* Introspector::instantiate($Class* sibling, $String* className) {
	$init(Introspector);
	$beforeCallerSensitive();
	$var($ClassLoader, cl, $nc(sibling)->getClassLoader());
	$Class* cls = $ClassFinder::findClass(className, cl);
	return $of($nc(cls)->newInstance());
}

void clinit$Introspector($Class* class$) {
	$assignStatic(Introspector::ADD_PREFIX, "add"_s);
	$assignStatic(Introspector::REMOVE_PREFIX, "remove"_s);
	$assignStatic(Introspector::GET_PREFIX, "get"_s);
	$assignStatic(Introspector::SET_PREFIX, "set"_s);
	$assignStatic(Introspector::IS_PREFIX, "is"_s);
	$assignStatic(Introspector::EMPTY_EVENTSETDESCRIPTORS, $new($EventSetDescriptorArray, 0));
	{
		$SharedSecrets::setJavaBeansAccess($$new($Introspector$1));
	}
}

Introspector::Introspector() {
}

$Class* Introspector::load$($String* name, bool initialize) {
	$loadClass(Introspector, name, initialize, &_Introspector_ClassInfo_, clinit$Introspector, allocate$Introspector);
	return class$;
}

$Class* Introspector::class$ = nullptr;

	} // beans
} // java