#include <com/sun/beans/finder/BeanInfoFinder.h>

#include <com/sun/beans/finder/InstanceFinder.h>
#include <java/beans/BeanDescriptor.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/MethodDescriptor.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DEFAULT
#undef DEFAULT_NEW

using $MethodDescriptorArray = $Array<::java::beans::MethodDescriptor>;
using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $InstanceFinder = ::com::sun::beans::finder::InstanceFinder;
using $BeanDescriptor = ::java::beans::BeanDescriptor;
using $BeanInfo = ::java::beans::BeanInfo;
using $MethodDescriptor = ::java::beans::MethodDescriptor;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$FieldInfo _BeanInfoFinder_FieldInfo_[] = {
	{"DEFAULT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BeanInfoFinder, DEFAULT)},
	{"DEFAULT_NEW", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BeanInfoFinder, DEFAULT_NEW)},
	{}
};

$MethodInfo _BeanInfoFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BeanInfoFinder::*)()>(&BeanInfoFinder::init$))},
	{"find", "(Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getPackages", "()[Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"instantiate", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/beans/BeanInfo;", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;)Ljava/beans/BeanInfo;", $PROTECTED},
	{"isValid", "(Ljava/lang/Class;Ljava/lang/reflect/Method;)Z", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Method;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*,$Method*)>(&BeanInfoFinder::isValid))},
	{"setPackages", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _BeanInfoFinder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.finder.BeanInfoFinder",
	"com.sun.beans.finder.InstanceFinder",
	nullptr,
	_BeanInfoFinder_FieldInfo_,
	_BeanInfoFinder_MethodInfo_,
	"Lcom/sun/beans/finder/InstanceFinder<Ljava/beans/BeanInfo;>;"
};

$Object* allocate$BeanInfoFinder($Class* clazz) {
	return $of($alloc(BeanInfoFinder));
}

$String* BeanInfoFinder::DEFAULT = nullptr;
$String* BeanInfoFinder::DEFAULT_NEW = nullptr;

void BeanInfoFinder::init$() {
	$load($BeanInfo);
	$InstanceFinder::init$($BeanInfo::class$, true, "BeanInfo"_s, $$new($StringArray, {BeanInfoFinder::DEFAULT}));
}

bool BeanInfoFinder::isValid($Class* type, $Method* method) {
	$init(BeanInfoFinder);
	return (method != nullptr) && $nc(method->getDeclaringClass())->isAssignableFrom(type);
}

$Object* BeanInfoFinder::instantiate($Class* type, $String* prefix$renamed, $String* name) {
	$var($String, prefix, prefix$renamed);
	if ($nc(BeanInfoFinder::DEFAULT)->equals(prefix)) {
		$assign(prefix, BeanInfoFinder::DEFAULT_NEW);
	}
	bool var$0 = !$nc(BeanInfoFinder::DEFAULT_NEW)->equals(prefix);
	$var($BeanInfo, info, var$0 || "ComponentBeanInfo"_s->equals(name) ? $cast($BeanInfo, $InstanceFinder::instantiate(type, prefix, name)) : ($BeanInfo*)nullptr);
	if (info != nullptr) {
		$var($BeanDescriptor, bd, info->getBeanDescriptor());
		if (bd != nullptr) {
			if ($nc($of(type))->equals(bd->getBeanClass())) {
				return $of(info);
			}
		} else {
			$var($PropertyDescriptorArray, pds, info->getPropertyDescriptors());
			if (pds != nullptr) {
				{
					$var($PropertyDescriptorArray, arr$, pds);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($PropertyDescriptor, pd, arr$->get(i$));
						{
							$var($Method, method, $nc(pd)->getReadMethod());
							if (method == nullptr) {
								$assign(method, pd->getWriteMethod());
							}
							if (isValid(type, method)) {
								return $of(info);
							}
						}
					}
				}
			} else {
				$var($MethodDescriptorArray, mds, info->getMethodDescriptors());
				if (mds != nullptr) {
					{
						$var($MethodDescriptorArray, arr$, mds);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($MethodDescriptor, md, arr$->get(i$));
							{
								if (isValid(type, $($nc(md)->getMethod()))) {
									return $of(info);
								}
							}
						}
					}
				}
			}
		}
	}
	return $of(nullptr);
}

$Object* BeanInfoFinder::find($Class* type) {
	return $of($InstanceFinder::find(type));
}

void BeanInfoFinder::setPackages($StringArray* packages) {
	$InstanceFinder::setPackages(packages);
}

$StringArray* BeanInfoFinder::getPackages() {
	return $InstanceFinder::getPackages();
}

BeanInfoFinder::BeanInfoFinder() {
}

void clinit$BeanInfoFinder($Class* class$) {
	$assignStatic(BeanInfoFinder::DEFAULT, "sun.beans.infos"_s);
	$assignStatic(BeanInfoFinder::DEFAULT_NEW, "com.sun.beans.infos"_s);
}

$Class* BeanInfoFinder::load$($String* name, bool initialize) {
	$loadClass(BeanInfoFinder, name, initialize, &_BeanInfoFinder_ClassInfo_, clinit$BeanInfoFinder, allocate$BeanInfoFinder);
	return class$;
}

$Class* BeanInfoFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com