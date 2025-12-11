#include <java/beans/GenericBeanInfo.h>

#include <com/sun/beans/finder/BeanInfoFinder.h>
#include <java/awt/Image.h>
#include <java/beans/BeanDescriptor.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/EventSetDescriptor.h>
#include <java/beans/IndexedPropertyDescriptor.h>
#include <java/beans/MethodDescriptor.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/beans/SimpleBeanInfo.h>
#include <java/beans/ThreadGroupContext.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/SoftReference.h>
#include <jcpp.h>

using $EventSetDescriptorArray = $Array<::java::beans::EventSetDescriptor>;
using $MethodDescriptorArray = $Array<::java::beans::MethodDescriptor>;
using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $BeanInfoFinder = ::com::sun::beans::finder::BeanInfoFinder;
using $Image = ::java::awt::Image;
using $BeanDescriptor = ::java::beans::BeanDescriptor;
using $BeanInfo = ::java::beans::BeanInfo;
using $EventSetDescriptor = ::java::beans::EventSetDescriptor;
using $IndexedPropertyDescriptor = ::java::beans::IndexedPropertyDescriptor;
using $MethodDescriptor = ::java::beans::MethodDescriptor;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $SimpleBeanInfo = ::java::beans::SimpleBeanInfo;
using $ThreadGroupContext = ::java::beans::ThreadGroupContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace java {
	namespace beans {

$FieldInfo _GenericBeanInfo_FieldInfo_[] = {
	{"beanDescriptor", "Ljava/beans/BeanDescriptor;", nullptr, $PRIVATE, $field(GenericBeanInfo, beanDescriptor)},
	{"events", "[Ljava/beans/EventSetDescriptor;", nullptr, $PRIVATE, $field(GenericBeanInfo, events)},
	{"defaultEvent", "I", nullptr, $PRIVATE, $field(GenericBeanInfo, defaultEvent)},
	{"properties", "[Ljava/beans/PropertyDescriptor;", nullptr, $PRIVATE, $field(GenericBeanInfo, properties)},
	{"defaultProperty", "I", nullptr, $PRIVATE, $field(GenericBeanInfo, defaultProperty)},
	{"methods", "[Ljava/beans/MethodDescriptor;", nullptr, $PRIVATE, $field(GenericBeanInfo, methods)},
	{"targetBeanInfoRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Ljava/beans/BeanInfo;>;", $PRIVATE, $field(GenericBeanInfo, targetBeanInfoRef)},
	{}
};

$MethodInfo _GenericBeanInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/BeanDescriptor;[Ljava/beans/EventSetDescriptor;I[Ljava/beans/PropertyDescriptor;I[Ljava/beans/MethodDescriptor;Ljava/beans/BeanInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(GenericBeanInfo::*)($BeanDescriptor*,$EventSetDescriptorArray*,int32_t,$PropertyDescriptorArray*,int32_t,$MethodDescriptorArray*,$BeanInfo*)>(&GenericBeanInfo::init$))},
	{"<init>", "(Ljava/beans/GenericBeanInfo;)V", nullptr, 0, $method(static_cast<void(GenericBeanInfo::*)(GenericBeanInfo*)>(&GenericBeanInfo::init$))},
	{"getBeanDescriptor", "()Ljava/beans/BeanDescriptor;", nullptr, $PUBLIC},
	{"getDefaultEventIndex", "()I", nullptr, $PUBLIC},
	{"getDefaultPropertyIndex", "()I", nullptr, $PUBLIC},
	{"getEventSetDescriptors", "()[Ljava/beans/EventSetDescriptor;", nullptr, $PUBLIC},
	{"getIcon", "(I)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getMethodDescriptors", "()[Ljava/beans/MethodDescriptor;", nullptr, $PUBLIC},
	{"getPropertyDescriptors", "()[Ljava/beans/PropertyDescriptor;", nullptr, $PUBLIC},
	{"getTargetBeanInfo", "()Ljava/beans/BeanInfo;", nullptr, $PRIVATE, $method(static_cast<$BeanInfo*(GenericBeanInfo::*)()>(&GenericBeanInfo::getTargetBeanInfo))},
	{}
};

$ClassInfo _GenericBeanInfo_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.GenericBeanInfo",
	"java.beans.SimpleBeanInfo",
	nullptr,
	_GenericBeanInfo_FieldInfo_,
	_GenericBeanInfo_MethodInfo_
};

$Object* allocate$GenericBeanInfo($Class* clazz) {
	return $of($alloc(GenericBeanInfo));
}

void GenericBeanInfo::init$($BeanDescriptor* beanDescriptor, $EventSetDescriptorArray* events, int32_t defaultEvent, $PropertyDescriptorArray* properties, int32_t defaultProperty, $MethodDescriptorArray* methods, $BeanInfo* targetBeanInfo) {
	$SimpleBeanInfo::init$();
	$set(this, beanDescriptor, beanDescriptor);
	$set(this, events, events);
	this->defaultEvent = defaultEvent;
	$set(this, properties, properties);
	this->defaultProperty = defaultProperty;
	$set(this, methods, methods);
	$set(this, targetBeanInfoRef, (targetBeanInfo != nullptr) ? static_cast<$Reference*>($new($SoftReference, targetBeanInfo)) : ($Reference*)nullptr);
}

void GenericBeanInfo::init$(GenericBeanInfo* old) {
	$useLocalCurrentObjectStackCache();
	$SimpleBeanInfo::init$();
	$set(this, beanDescriptor, $new($BeanDescriptor, $nc(old)->beanDescriptor));
	if ($nc(old)->events != nullptr) {
		int32_t len = $nc(old->events)->length;
		$set(this, events, $new($EventSetDescriptorArray, len));
		for (int32_t i = 0; i < len; ++i) {
			$nc(this->events)->set(i, $$new($EventSetDescriptor, $nc(old->events)->get(i)));
		}
	}
	this->defaultEvent = $nc(old)->defaultEvent;
	if (old->properties != nullptr) {
		int32_t len = $nc(old->properties)->length;
		$set(this, properties, $new($PropertyDescriptorArray, len));
		for (int32_t i = 0; i < len; ++i) {
			$var($PropertyDescriptor, oldp, $nc(old->properties)->get(i));
			if ($instanceOf($IndexedPropertyDescriptor, oldp)) {
				$nc(this->properties)->set(i, $$new($IndexedPropertyDescriptor, $cast($IndexedPropertyDescriptor, oldp)));
			} else {
				$nc(this->properties)->set(i, $$new($PropertyDescriptor, oldp));
			}
		}
	}
	this->defaultProperty = old->defaultProperty;
	if (old->methods != nullptr) {
		int32_t len = $nc(old->methods)->length;
		$set(this, methods, $new($MethodDescriptorArray, len));
		for (int32_t i = 0; i < len; ++i) {
			$nc(this->methods)->set(i, $$new($MethodDescriptor, $nc(old->methods)->get(i)));
		}
	}
	$set(this, targetBeanInfoRef, old->targetBeanInfoRef);
}

$PropertyDescriptorArray* GenericBeanInfo::getPropertyDescriptors() {
	return this->properties;
}

int32_t GenericBeanInfo::getDefaultPropertyIndex() {
	return this->defaultProperty;
}

$EventSetDescriptorArray* GenericBeanInfo::getEventSetDescriptors() {
	return this->events;
}

int32_t GenericBeanInfo::getDefaultEventIndex() {
	return this->defaultEvent;
}

$MethodDescriptorArray* GenericBeanInfo::getMethodDescriptors() {
	return this->methods;
}

$BeanDescriptor* GenericBeanInfo::getBeanDescriptor() {
	return this->beanDescriptor;
}

$Image* GenericBeanInfo::getIcon(int32_t iconKind) {
	$var($BeanInfo, targetBeanInfo, getTargetBeanInfo());
	if (targetBeanInfo != nullptr) {
		return targetBeanInfo->getIcon(iconKind);
	}
	return $SimpleBeanInfo::getIcon(iconKind);
}

$BeanInfo* GenericBeanInfo::getTargetBeanInfo() {
	$useLocalCurrentObjectStackCache();
	if (this->targetBeanInfoRef == nullptr) {
		return nullptr;
	}
	$var($BeanInfo, targetBeanInfo, $cast($BeanInfo, $nc(this->targetBeanInfoRef)->get()));
	if (targetBeanInfo == nullptr) {
		$assign(targetBeanInfo, $cast($BeanInfo, $nc($($nc($($ThreadGroupContext::getContext()))->getBeanInfoFinder()))->find($nc(this->beanDescriptor)->getBeanClass())));
		if (targetBeanInfo != nullptr) {
			$set(this, targetBeanInfoRef, $new($SoftReference, targetBeanInfo));
		}
	}
	return targetBeanInfo;
}

GenericBeanInfo::GenericBeanInfo() {
}

$Class* GenericBeanInfo::load$($String* name, bool initialize) {
	$loadClass(GenericBeanInfo, name, initialize, &_GenericBeanInfo_ClassInfo_, allocate$GenericBeanInfo);
	return class$;
}

$Class* GenericBeanInfo::class$ = nullptr;

	} // beans
} // java