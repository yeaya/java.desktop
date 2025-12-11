#include <java/beans/beancontext/BeanContext.h>

#include <java/beans/beancontext/BeanContextChild.h>
#include <java/beans/beancontext/BeanContextMembershipListener.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $BeanContextChild = ::java::beans::beancontext::BeanContextChild;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContext_FieldInfo_[] = {
	{"globalHierarchyLock", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BeanContext, globalHierarchyLock)},
	{}
};

$MethodInfo _BeanContext_MethodInfo_[] = {
	{"addBeanContextMembershipListener", "(Ljava/beans/beancontext/BeanContextMembershipListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getResource", "(Ljava/lang/String;Ljava/beans/beancontext/BeanContextChild;)Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"getResourceAsStream", "(Ljava/lang/String;Ljava/beans/beancontext/BeanContextChild;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"instantiateChild", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"removeBeanContextMembershipListener", "(Ljava/beans/beancontext/BeanContextMembershipListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BeanContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.beancontext.BeanContext",
	nullptr,
	"java.beans.beancontext.BeanContextChild,java.util.Collection,java.beans.DesignMode,java.beans.Visibility",
	_BeanContext_FieldInfo_,
	_BeanContext_MethodInfo_
};

$Object* allocate$BeanContext($Class* clazz) {
	return $of($alloc(BeanContext));
}

int32_t BeanContext::hashCode() {
	 return this->$BeanContextChild::hashCode();
}

bool BeanContext::equals(Object$* arg0) {
	 return this->$BeanContextChild::equals(arg0);
}

$Object* BeanContext::clone() {
	 return this->$BeanContextChild::clone();
}

$String* BeanContext::toString() {
	 return this->$BeanContextChild::toString();
}

void BeanContext::finalize() {
	this->$BeanContextChild::finalize();
}

$Object* BeanContext::globalHierarchyLock = nullptr;

void clinit$BeanContext($Class* class$) {
	$assignStatic(BeanContext::globalHierarchyLock, $new($Object));
}

$Class* BeanContext::load$($String* name, bool initialize) {
	$loadClass(BeanContext, name, initialize, &_BeanContext_ClassInfo_, clinit$BeanContext, allocate$BeanContext);
	return class$;
}

$Class* BeanContext::class$ = nullptr;

		} // beancontext
	} // beans
} // java