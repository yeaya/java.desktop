#include <java/beans/beancontext/BeanContextSupport$BCSChild.h>

#include <java/beans/beancontext/BeanContextSupport.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $BeanContextSupport = ::java::beans::beancontext::BeanContextSupport;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextSupport$BCSChild_FieldInfo_[] = {
	{"this$0", "Ljava/beans/beancontext/BeanContextSupport;", nullptr, $FINAL | $SYNTHETIC, $field(BeanContextSupport$BCSChild, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextSupport$BCSChild, serialVersionUID)},
	{"child", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(BeanContextSupport$BCSChild, child)},
	{"proxyPeer", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(BeanContextSupport$BCSChild, proxyPeer)},
	{"removePending", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(BeanContextSupport$BCSChild, removePending)},
	{}
};

$MethodInfo _BeanContextSupport$BCSChild_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/beancontext/BeanContextSupport;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(BeanContextSupport$BCSChild::*)($BeanContextSupport*,Object$*,Object$*)>(&BeanContextSupport$BCSChild::init$))},
	{"getChild", "()Ljava/lang/Object;", nullptr, 0},
	{"getProxyPeer", "()Ljava/lang/Object;", nullptr, 0},
	{"isProxyPeer", "()Z", nullptr, 0},
	{"isRemovePending", "()Z", nullptr, 0},
	{"setRemovePending", "(Z)V", nullptr, 0},
	{}
};

$InnerClassInfo _BeanContextSupport$BCSChild_InnerClassesInfo_[] = {
	{"java.beans.beancontext.BeanContextSupport$BCSChild", "java.beans.beancontext.BeanContextSupport", "BCSChild", $PROTECTED},
	{}
};

$ClassInfo _BeanContextSupport$BCSChild_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.beancontext.BeanContextSupport$BCSChild",
	"java.lang.Object",
	"java.io.Serializable",
	_BeanContextSupport$BCSChild_FieldInfo_,
	_BeanContextSupport$BCSChild_MethodInfo_,
	nullptr,
	nullptr,
	_BeanContextSupport$BCSChild_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.beancontext.BeanContextSupport"
};

$Object* allocate$BeanContextSupport$BCSChild($Class* clazz) {
	return $of($alloc(BeanContextSupport$BCSChild));
}

void BeanContextSupport$BCSChild::init$($BeanContextSupport* this$0, Object$* bcc, Object$* peer) {
	$set(this, this$0, this$0);
	$set(this, child, bcc);
	$set(this, proxyPeer, peer);
}

$Object* BeanContextSupport$BCSChild::getChild() {
	return $of(this->child);
}

void BeanContextSupport$BCSChild::setRemovePending(bool v) {
	this->removePending = v;
}

bool BeanContextSupport$BCSChild::isRemovePending() {
	return this->removePending;
}

bool BeanContextSupport$BCSChild::isProxyPeer() {
	return this->proxyPeer != nullptr;
}

$Object* BeanContextSupport$BCSChild::getProxyPeer() {
	return $of(this->proxyPeer);
}

BeanContextSupport$BCSChild::BeanContextSupport$BCSChild() {
}

$Class* BeanContextSupport$BCSChild::load$($String* name, bool initialize) {
	$loadClass(BeanContextSupport$BCSChild, name, initialize, &_BeanContextSupport$BCSChild_ClassInfo_, allocate$BeanContextSupport$BCSChild);
	return class$;
}

$Class* BeanContextSupport$BCSChild::class$ = nullptr;

		} // beancontext
	} // beans
} // java