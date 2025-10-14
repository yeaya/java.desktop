#include <java/beans/SimpleBeanInfo.h>

#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/ImageProducer.h>
#include <java/beans/BeanDescriptor.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/EventSetDescriptor.h>
#include <java/beans/JavaBean.h>
#include <java/beans/MethodDescriptor.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $BeanInfoArray = $Array<::java::beans::BeanInfo>;
using $EventSetDescriptorArray = $Array<::java::beans::EventSetDescriptor>;
using $MethodDescriptorArray = $Array<::java::beans::MethodDescriptor>;
using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $BeanDescriptor = ::java::beans::BeanDescriptor;
using $BeanInfo = ::java::beans::BeanInfo;
using $JavaBean = ::java::beans::JavaBean;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace beans {

class SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0 : public $PrivilegedAction {
	$class(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(SimpleBeanInfo* inst, $String* resourceName) {
		$set(this, inst$, inst);
		$set(this, resourceName, resourceName);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$loadStandardImage$0(resourceName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0>());
	}
	SimpleBeanInfo* inst$ = nullptr;
	$String* resourceName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0, inst$)},
	{"resourceName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0, resourceName)},
	{}
};
$MethodInfo SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0::methodInfos[3] = {
	{"<init>", "(Ljava/beans/SimpleBeanInfo;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0::*)(SimpleBeanInfo*,$String*)>(&SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.beans.SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0::load$($String* name, bool initialize) {
	$loadClass(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0::class$ = nullptr;

$MethodInfo _SimpleBeanInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SimpleBeanInfo::*)()>(&SimpleBeanInfo::init$))},
	{"getAdditionalBeanInfo", "()[Ljava/beans/BeanInfo;", nullptr, $PUBLIC},
	{"getBeanDescriptor", "()Ljava/beans/BeanDescriptor;", nullptr, $PUBLIC},
	{"getDefaultEventIndex", "()I", nullptr, $PUBLIC},
	{"getDefaultPropertyIndex", "()I", nullptr, $PUBLIC},
	{"getEventSetDescriptors", "()[Ljava/beans/EventSetDescriptor;", nullptr, $PUBLIC},
	{"getIcon", "(I)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getMethodDescriptors", "()[Ljava/beans/MethodDescriptor;", nullptr, $PUBLIC},
	{"getPropertyDescriptors", "()[Ljava/beans/PropertyDescriptor;", nullptr, $PUBLIC},
	{"lambda$loadStandardImage$0", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Image*(SimpleBeanInfo::*)($String*)>(&SimpleBeanInfo::lambda$loadStandardImage$0))},
	{"loadImage", "(Ljava/lang/String;Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PRIVATE, $method(static_cast<$Image*(SimpleBeanInfo::*)($String*,$String*)>(&SimpleBeanInfo::loadImage))},
	{"loadImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"loadStandardImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PRIVATE, $method(static_cast<$Image*(SimpleBeanInfo::*)($String*)>(&SimpleBeanInfo::loadStandardImage))},
	{}
};

$ClassInfo _SimpleBeanInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.SimpleBeanInfo",
	"java.lang.Object",
	"java.beans.BeanInfo",
	nullptr,
	_SimpleBeanInfo_MethodInfo_
};

$Object* allocate$SimpleBeanInfo($Class* clazz) {
	return $of($alloc(SimpleBeanInfo));
}

void SimpleBeanInfo::init$() {
}

$BeanDescriptor* SimpleBeanInfo::getBeanDescriptor() {
	return nullptr;
}

$PropertyDescriptorArray* SimpleBeanInfo::getPropertyDescriptors() {
	return nullptr;
}

int32_t SimpleBeanInfo::getDefaultPropertyIndex() {
	return -1;
}

$EventSetDescriptorArray* SimpleBeanInfo::getEventSetDescriptors() {
	return nullptr;
}

int32_t SimpleBeanInfo::getDefaultEventIndex() {
	return -1;
}

$MethodDescriptorArray* SimpleBeanInfo::getMethodDescriptors() {
	return nullptr;
}

$BeanInfoArray* SimpleBeanInfo::getAdditionalBeanInfo() {
	return nullptr;
}

$Image* SimpleBeanInfo::getIcon(int32_t iconKind) {
	$beforeCallerSensitive();
	$var($BeanDescriptor, descriptor, getBeanDescriptor());
	if (descriptor != nullptr) {
		$Class* type = descriptor->getBeanClass();
		bool var$0 = type != nullptr && type->getClassLoader() == nullptr;
		$load($JavaBean);
		if (var$0 && type->getAnnotation($JavaBean::class$) != nullptr) {
			$var($String, name, type->getName());
			int32_t index = $nc(name)->lastIndexOf((int32_t)u'.');
			if ($(name->substring(0, index))->equals("javax.swing"_s)) {
				$var($String, className, type->getSimpleName());
				switch (iconKind) {
				case $BeanInfo::ICON_COLOR_32x32:
					{
						return loadImage(className, "Color32.gif"_s);
					}
				case $BeanInfo::ICON_COLOR_16x16:
					{
						return loadImage(className, "Color16.gif"_s);
					}
				case $BeanInfo::ICON_MONO_32x32:
					{
						return loadImage(className, "Mono32.gif"_s);
					}
				case $BeanInfo::ICON_MONO_16x16:
					{
						return loadImage(className, "Mono16.gif"_s);
					}
				}
			}
		}
	}
	return nullptr;
}

$Image* SimpleBeanInfo::loadStandardImage($String* resourceName) {
	$beforeCallerSensitive();
	return $cast($Image, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0, this, resourceName))));
}

$Image* SimpleBeanInfo::loadImage($String* resourceName, $String* suffix) {
	$var($String, prefix, "/javax/swing/beaninfo/images/"_s);
	$var($Image, image, loadStandardImage($$str({prefix, resourceName, suffix})));
	return image == nullptr ? loadStandardImage($$str({prefix, "JComponent"_s, suffix})) : image;
}

$Image* SimpleBeanInfo::loadImage($String* resourceName) {
	$beforeCallerSensitive();
	try {
		$var($URL, url, $of(this)->getClass()->getResource(resourceName));
		if (url != nullptr) {
			$var($ImageProducer, ip, $cast($ImageProducer, url->getContent()));
			if (ip != nullptr) {
				return $nc($($Toolkit::getDefaultToolkit()))->createImage(ip);
			}
		}
	} catch ($Exception&) {
		$catch();
	}
	return nullptr;
}

$Image* SimpleBeanInfo::lambda$loadStandardImage$0($String* resourceName) {
	return loadImage(resourceName);
}

SimpleBeanInfo::SimpleBeanInfo() {
}

$Class* SimpleBeanInfo::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0::classInfo$.name)) {
			return SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0::load$(name, initialize);
		}
	}
	$loadClass(SimpleBeanInfo, name, initialize, &_SimpleBeanInfo_ClassInfo_, allocate$SimpleBeanInfo);
	return class$;
}

$Class* SimpleBeanInfo::class$ = nullptr;

	} // beans
} // java