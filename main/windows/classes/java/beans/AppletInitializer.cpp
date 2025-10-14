#include <java/beans/AppletInitializer.h>

#include <java/applet/Applet.h>
#include <java/beans/beancontext/BeanContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Applet = ::java::applet::Applet;
using $BeanContext = ::java::beans::beancontext::BeanContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace beans {

$NamedAttribute AppletInitializer_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};
$CompoundAttribute _AppletInitializer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", AppletInitializer_Attribute_var$0},
	{}
};


$MethodInfo _AppletInitializer_MethodInfo_[] = {
	{"activate", "(Ljava/applet/Applet;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"initialize", "(Ljava/applet/Applet;Ljava/beans/beancontext/BeanContext;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AppletInitializer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.AppletInitializer",
	nullptr,
	nullptr,
	nullptr,
	_AppletInitializer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AppletInitializer_Annotations_
};

$Object* allocate$AppletInitializer($Class* clazz) {
	return $of($alloc(AppletInitializer));
}

$Class* AppletInitializer::load$($String* name, bool initialize) {
	$loadClass(AppletInitializer, name, initialize, &_AppletInitializer_ClassInfo_, allocate$AppletInitializer);
	return class$;
}

$Class* AppletInitializer::class$ = nullptr;

	} // beans
} // java