#ifndef _java_beans_Introspector_h_
#define _java_beans_Introspector_h_
//$ class java.beans.Introspector
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ADD_PREFIX")
#undef ADD_PREFIX
#pragma push_macro("EMPTY_EVENTSETDESCRIPTORS")
#undef EMPTY_EVENTSETDESCRIPTORS
#pragma push_macro("GET_PREFIX")
#undef GET_PREFIX
#pragma push_macro("IGNORE_ALL_BEANINFO")
#undef IGNORE_ALL_BEANINFO
#pragma push_macro("IGNORE_IMMEDIATE_BEANINFO")
#undef IGNORE_IMMEDIATE_BEANINFO
#pragma push_macro("IS_PREFIX")
#undef IS_PREFIX
#pragma push_macro("REMOVE_PREFIX")
#undef REMOVE_PREFIX
#pragma push_macro("SET_PREFIX")
#undef SET_PREFIX
#pragma push_macro("USE_ALL_BEANINFO")
#undef USE_ALL_BEANINFO

namespace java {
	namespace beans {
		class BeanDescriptor;
		class BeanInfo;
		class EventSetDescriptor;
		class IndexedPropertyDescriptor;
		class MethodDescriptor;
		class PropertyDescriptor;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Map;
	}
}

namespace java {
	namespace beans {

class $import Introspector : public ::java::lang::Object {
	$class(Introspector, 0, ::java::lang::Object)
public:
	Introspector();
	void init$($Class* beanClass, $Class* stopClass, int32_t flags);
	void addEvent(::java::beans::EventSetDescriptor* esd);
	void addMethod(::java::beans::MethodDescriptor* md);
	void addPropertyDescriptor(::java::beans::PropertyDescriptor* pd);
	void addPropertyDescriptors($Array<::java::beans::PropertyDescriptor>* descriptors);
	static $String* decapitalize($String* name);
	static $Class* findCustomizerClass($Class* type);
	static ::java::beans::BeanInfo* findExplicitBeanInfo($Class* beanClass);
	static ::java::lang::reflect::Method* findMethod($Class* cls, $String* methodName, int32_t argCount);
	static ::java::lang::reflect::Method* findMethod($Class* cls, $String* methodName, int32_t argCount, $ClassArray* args);
	static void flushCaches();
	static void flushFromCaches($Class* clz);
	static ::java::beans::BeanInfo* getBeanInfo($Class* beanClass);
	static ::java::beans::BeanInfo* getBeanInfo($Class* beanClass, int32_t flags);
	static ::java::beans::BeanInfo* getBeanInfo($Class* beanClass, $Class* stopClass);
	static ::java::beans::BeanInfo* getBeanInfo($Class* beanClass, $Class* stopClass, int32_t flags);
	::java::beans::BeanInfo* getBeanInfo();
	static $StringArray* getBeanInfoSearchPath();
	$Array<::java::beans::PropertyDescriptor>* getPropertyDescriptors(::java::beans::BeanInfo* info);
	::java::beans::BeanDescriptor* getTargetBeanDescriptor();
	int32_t getTargetDefaultEventIndex();
	int32_t getTargetDefaultPropertyIndex();
	$Array<::java::beans::EventSetDescriptor>* getTargetEventInfo();
	$Array<::java::beans::MethodDescriptor>* getTargetMethodInfo();
	$Array<::java::beans::PropertyDescriptor>* getTargetPropertyInfo();
	static $Object* instantiate($Class* sibling, $String* className);
	static ::java::lang::reflect::Method* internalFindMethod($Class* start, $String* methodName, int32_t argCount, $ClassArray* args);
	static bool isAssignable($Class* current, $Class* candidate);
	bool isEventHandler(::java::lang::reflect::Method* m);
	static bool isSubclass($Class* a, $Class* b);
	static $String* makeQualifiedMethodName($String* name, $StringArray* params);
	::java::beans::PropertyDescriptor* mergePropertyDescriptor(::java::beans::IndexedPropertyDescriptor* ipd, ::java::beans::PropertyDescriptor* pd);
	::java::beans::PropertyDescriptor* mergePropertyDescriptor(::java::beans::PropertyDescriptor* pd1, ::java::beans::PropertyDescriptor* pd2);
	::java::beans::IndexedPropertyDescriptor* mergePropertyDescriptor(::java::beans::IndexedPropertyDescriptor* ipd1, ::java::beans::IndexedPropertyDescriptor* ipd2);
	::java::beans::PropertyDescriptor* mergePropertyWithIndexedProperty(::java::beans::PropertyDescriptor* pd, ::java::beans::IndexedPropertyDescriptor* ipd);
	void processPropertyDescriptors();
	static void setBeanInfoSearchPath($StringArray* path);
	static const int32_t USE_ALL_BEANINFO = 1;
	static const int32_t IGNORE_IMMEDIATE_BEANINFO = 2;
	static const int32_t IGNORE_ALL_BEANINFO = 3;
	$Class* beanClass = nullptr;
	::java::beans::BeanInfo* explicitBeanInfo = nullptr;
	::java::beans::BeanInfo* superBeanInfo = nullptr;
	$Array<::java::beans::BeanInfo>* additionalBeanInfo = nullptr;
	bool propertyChangeSource = false;
	$String* defaultEventName = nullptr;
	$String* defaultPropertyName = nullptr;
	int32_t defaultEventIndex = 0;
	int32_t defaultPropertyIndex = 0;
	::java::util::Map* methods = nullptr;
	::java::util::Map* properties = nullptr;
	::java::util::Map* events = nullptr;
	static $Array<::java::beans::EventSetDescriptor>* EMPTY_EVENTSETDESCRIPTORS;
	static $String* ADD_PREFIX;
	static $String* REMOVE_PREFIX;
	static $String* GET_PREFIX;
	static $String* SET_PREFIX;
	static $String* IS_PREFIX;
	::java::util::HashMap* pdStore = nullptr;
};

	} // beans
} // java

#pragma pop_macro("ADD_PREFIX")
#pragma pop_macro("EMPTY_EVENTSETDESCRIPTORS")
#pragma pop_macro("GET_PREFIX")
#pragma pop_macro("IGNORE_ALL_BEANINFO")
#pragma pop_macro("IGNORE_IMMEDIATE_BEANINFO")
#pragma pop_macro("IS_PREFIX")
#pragma pop_macro("REMOVE_PREFIX")
#pragma pop_macro("SET_PREFIX")
#pragma pop_macro("USE_ALL_BEANINFO")

#endif // _java_beans_Introspector_h_