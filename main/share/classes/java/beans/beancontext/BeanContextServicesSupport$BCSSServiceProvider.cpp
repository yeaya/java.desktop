#include <java/beans/beancontext/BeanContextServicesSupport$BCSSServiceProvider.h>

#include <java/beans/beancontext/BeanContextServiceProvider.h>
#include <java/beans/beancontext/BeanContextServicesSupport.h>
#include <jcpp.h>

using $BeanContextServiceProvider = ::java::beans::beancontext::BeanContextServiceProvider;
using $BeanContextServicesSupport = ::java::beans::beancontext::BeanContextServicesSupport;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextServicesSupport$BCSSServiceProvider_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextServicesSupport$BCSSServiceProvider, serialVersionUID)},
	{"serviceProvider", "Ljava/beans/beancontext/BeanContextServiceProvider;", nullptr, $PROTECTED, $field(BeanContextServicesSupport$BCSSServiceProvider, serviceProvider)},
	{}
};

$MethodInfo _BeanContextServicesSupport$BCSSServiceProvider_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/beans/beancontext/BeanContextServiceProvider;)V", "(Ljava/lang/Class<*>;Ljava/beans/beancontext/BeanContextServiceProvider;)V", 0, $method(static_cast<void(BeanContextServicesSupport$BCSSServiceProvider::*)($Class*,$BeanContextServiceProvider*)>(&BeanContextServicesSupport$BCSSServiceProvider::init$))},
	{"getServiceProvider", "()Ljava/beans/beancontext/BeanContextServiceProvider;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BeanContextServicesSupport$BCSSServiceProvider_InnerClassesInfo_[] = {
	{"java.beans.beancontext.BeanContextServicesSupport$BCSSServiceProvider", "java.beans.beancontext.BeanContextServicesSupport", "BCSSServiceProvider", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _BeanContextServicesSupport$BCSSServiceProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.beancontext.BeanContextServicesSupport$BCSSServiceProvider",
	"java.lang.Object",
	"java.io.Serializable",
	_BeanContextServicesSupport$BCSSServiceProvider_FieldInfo_,
	_BeanContextServicesSupport$BCSSServiceProvider_MethodInfo_,
	nullptr,
	nullptr,
	_BeanContextServicesSupport$BCSSServiceProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.beancontext.BeanContextServicesSupport"
};

$Object* allocate$BeanContextServicesSupport$BCSSServiceProvider($Class* clazz) {
	return $of($alloc(BeanContextServicesSupport$BCSSServiceProvider));
}

void BeanContextServicesSupport$BCSSServiceProvider::init$($Class* sc, $BeanContextServiceProvider* bcsp) {
	$set(this, serviceProvider, bcsp);
}

$BeanContextServiceProvider* BeanContextServicesSupport$BCSSServiceProvider::getServiceProvider() {
	return this->serviceProvider;
}

BeanContextServicesSupport$BCSSServiceProvider::BeanContextServicesSupport$BCSSServiceProvider() {
}

$Class* BeanContextServicesSupport$BCSSServiceProvider::load$($String* name, bool initialize) {
	$loadClass(BeanContextServicesSupport$BCSSServiceProvider, name, initialize, &_BeanContextServicesSupport$BCSSServiceProvider_ClassInfo_, allocate$BeanContextServicesSupport$BCSSServiceProvider);
	return class$;
}

$Class* BeanContextServicesSupport$BCSSServiceProvider::class$ = nullptr;

		} // beancontext
	} // beans
} // java