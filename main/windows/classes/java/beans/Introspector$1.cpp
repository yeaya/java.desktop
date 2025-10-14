#include <java/beans/Introspector$1.h>

#include <java/beans/BeanInfo.h>
#include <java/beans/ConstructorProperties.h>
#include <java/beans/Introspector.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $BeanInfo = ::java::beans::BeanInfo;
using $ConstructorProperties = ::java::beans::ConstructorProperties;
using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $Introspector = ::java::beans::Introspector;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $JavaBeansAccess = ::jdk::internal::access::JavaBeansAccess;

namespace java {
	namespace beans {

$MethodInfo _Introspector$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Introspector$1::*)()>(&Introspector$1::init$))},
	{"getConstructorPropertiesValue", "(Ljava/lang/reflect/Constructor;)[Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)[Ljava/lang/String;", $PUBLIC},
	{"getReadMethod", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Method;", $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Introspector$1_EnclosingMethodInfo_ = {
	"java.beans.Introspector",
	nullptr,
	nullptr
};

$InnerClassInfo _Introspector$1_InnerClassesInfo_[] = {
	{"java.beans.Introspector$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Introspector$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.Introspector$1",
	"java.lang.Object",
	"jdk.internal.access.JavaBeansAccess",
	nullptr,
	_Introspector$1_MethodInfo_,
	nullptr,
	&_Introspector$1_EnclosingMethodInfo_,
	_Introspector$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.Introspector"
};

$Object* allocate$Introspector$1($Class* clazz) {
	return $of($alloc(Introspector$1));
}

void Introspector$1::init$() {
}

$Method* Introspector$1::getReadMethod($Class* clazz, $String* property) {
	$var($BeanInfo, bi, $Introspector::getBeanInfo(clazz));
	$var($PropertyDescriptorArray, pds, $nc(bi)->getPropertyDescriptors());
	{
		$var($PropertyDescriptorArray, arr$, pds);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($PropertyDescriptor, pd, arr$->get(i$));
			{
				if ($nc($($nc(pd)->getName()))->equals(property)) {
					return pd->getReadMethod();
				}
			}
		}
	}
	return nullptr;
}

$StringArray* Introspector$1::getConstructorPropertiesValue($Constructor* ctr) {
	$load($ConstructorProperties);
	$var($ConstructorProperties, cp, $cast($ConstructorProperties, $nc(ctr)->getAnnotation($ConstructorProperties::class$)));
	$var($StringArray, ret, cp != nullptr ? $nc(cp)->value() : ($StringArray*)nullptr);
	return ret;
}

Introspector$1::Introspector$1() {
}

$Class* Introspector$1::load$($String* name, bool initialize) {
	$loadClass(Introspector$1, name, initialize, &_Introspector$1_ClassInfo_, allocate$Introspector$1);
	return class$;
}

$Class* Introspector$1::class$ = nullptr;

	} // beans
} // java