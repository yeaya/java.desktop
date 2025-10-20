#include <java/beans/BeanDescriptor.h>

#include <java/beans/FeatureDescriptor.h>
#include <java/beans/JavaBean.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingContainer.h>
#include <jcpp.h>

using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $JavaBean = ::java::beans::JavaBean;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $Reference = ::java::lang::ref::Reference;
using $SwingContainer = ::javax::swing::SwingContainer;

namespace java {
	namespace beans {

$FieldInfo _BeanDescriptor_FieldInfo_[] = {
	{"beanClassRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<+Ljava/lang/Class<*>;>;", $PRIVATE, $field(BeanDescriptor, beanClassRef)},
	{"customizerClassRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<+Ljava/lang/Class<*>;>;", $PRIVATE, $field(BeanDescriptor, customizerClassRef)},
	{}
};

$MethodInfo _BeanDescriptor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(BeanDescriptor::*)($Class*)>(&BeanDescriptor::init$))},
	{"<init>", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(BeanDescriptor::*)($Class*,$Class*)>(&BeanDescriptor::init$))},
	{"<init>", "(Ljava/beans/BeanDescriptor;)V", nullptr, 0, $method(static_cast<void(BeanDescriptor::*)(BeanDescriptor*)>(&BeanDescriptor::init$))},
	{"appendTo", "(Ljava/lang/StringBuilder;)V", nullptr, 0},
	{"getBeanClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"getCustomizerClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{}
};

$ClassInfo _BeanDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.BeanDescriptor",
	"java.beans.FeatureDescriptor",
	nullptr,
	_BeanDescriptor_FieldInfo_,
	_BeanDescriptor_MethodInfo_
};

$Object* allocate$BeanDescriptor($Class* clazz) {
	return $of($alloc(BeanDescriptor));
}

void BeanDescriptor::init$($Class* beanClass) {
	BeanDescriptor::init$(beanClass, nullptr);
}

void BeanDescriptor::init$($Class* beanClass, $Class* customizerClass) {
	$useLocalCurrentObjectStackCache();
	$FeatureDescriptor::init$();
	$set(this, beanClassRef, getWeakReference(beanClass));
	$set(this, customizerClassRef, getWeakReference(customizerClass));
	$var($String, name, $nc(beanClass)->getName());
	while ($nc(name)->indexOf((int32_t)u'.') >= 0) {
		$assign(name, name->substring(name->indexOf((int32_t)u'.') + 1));
	}
	setName(name);
	$load($JavaBean);
	$var($JavaBean, annotation, $cast($JavaBean, beanClass->getAnnotation($JavaBean::class$)));
	if (annotation != nullptr) {
		setPreferred(true);
		$var($String, description, annotation->description());
		if (!$nc(description)->isEmpty()) {
			setShortDescription(description);
		}
	}
	$load($SwingContainer);
	$var($SwingContainer, container, $cast($SwingContainer, beanClass->getAnnotation($SwingContainer::class$)));
	if (container != nullptr) {
		setValue("isContainer"_s, $($Boolean::valueOf(container->value())));
		setValue("containerDelegate"_s, $(container->delegate()));
	}
}

$Class* BeanDescriptor::getBeanClass() {
	return (this->beanClassRef != nullptr) ? $cast($Class, $nc(this->beanClassRef)->get()) : ($Class*)nullptr;
}

$Class* BeanDescriptor::getCustomizerClass() {
	return (this->customizerClassRef != nullptr) ? $cast($Class, $nc(this->customizerClassRef)->get()) : ($Class*)nullptr;
}

void BeanDescriptor::init$(BeanDescriptor* old) {
	$FeatureDescriptor::init$(old);
	$set(this, beanClassRef, $nc(old)->beanClassRef);
	$set(this, customizerClassRef, old->customizerClassRef);
}

void BeanDescriptor::appendTo($StringBuilder* sb) {
	$FeatureDescriptor::appendTo(sb, "beanClass"_s, this->beanClassRef);
	$FeatureDescriptor::appendTo(sb, "customizerClass"_s, this->customizerClassRef);
}

BeanDescriptor::BeanDescriptor() {
}

$Class* BeanDescriptor::load$($String* name, bool initialize) {
	$loadClass(BeanDescriptor, name, initialize, &_BeanDescriptor_ClassInfo_, allocate$BeanDescriptor);
	return class$;
}

$Class* BeanDescriptor::class$ = nullptr;

	} // beans
} // java