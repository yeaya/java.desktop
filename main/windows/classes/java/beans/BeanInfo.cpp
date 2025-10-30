#include <java/beans/BeanInfo.h>

#include <java/awt/Image.h>
#include <java/beans/BeanDescriptor.h>
#include <java/beans/EventSetDescriptor.h>
#include <java/beans/MethodDescriptor.h>
#include <java/beans/PropertyDescriptor.h>
#include <jcpp.h>

using $BeanInfoArray = $Array<::java::beans::BeanInfo>;
using $EventSetDescriptorArray = $Array<::java::beans::EventSetDescriptor>;
using $MethodDescriptorArray = $Array<::java::beans::MethodDescriptor>;
using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $Image = ::java::awt::Image;
using $BeanDescriptor = ::java::beans::BeanDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$FieldInfo _BeanInfo_FieldInfo_[] = {
	{"ICON_COLOR_16x16", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BeanInfo, ICON_COLOR_16x16)},
	{"ICON_COLOR_32x32", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BeanInfo, ICON_COLOR_32x32)},
	{"ICON_MONO_16x16", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BeanInfo, ICON_MONO_16x16)},
	{"ICON_MONO_32x32", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BeanInfo, ICON_MONO_32x32)},
	{}
};

$MethodInfo _BeanInfo_MethodInfo_[] = {
	{"getAdditionalBeanInfo", "()[Ljava/beans/BeanInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBeanDescriptor", "()Ljava/beans/BeanDescriptor;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultEventIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultPropertyIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getEventSetDescriptors", "()[Ljava/beans/EventSetDescriptor;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIcon", "(I)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMethodDescriptors", "()[Ljava/beans/MethodDescriptor;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPropertyDescriptors", "()[Ljava/beans/PropertyDescriptor;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BeanInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.BeanInfo",
	nullptr,
	nullptr,
	_BeanInfo_FieldInfo_,
	_BeanInfo_MethodInfo_
};

$Object* allocate$BeanInfo($Class* clazz) {
	return $of($alloc(BeanInfo));
}

$Class* BeanInfo::load$($String* name, bool initialize) {
	$loadClass(BeanInfo, name, initialize, &_BeanInfo_ClassInfo_, allocate$BeanInfo);
	return class$;
}

$Class* BeanInfo::class$ = nullptr;

	} // beans
} // java