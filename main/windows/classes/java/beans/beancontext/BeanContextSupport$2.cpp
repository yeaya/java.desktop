#include <java/beans/beancontext/BeanContextSupport$2.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/beancontext/BeanContextSupport.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $BeanContextSupport = ::java::beans::beancontext::BeanContextSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextSupport$2_FieldInfo_[] = {
	{"this$0", "Ljava/beans/beancontext/BeanContextSupport;", nullptr, $FINAL | $SYNTHETIC, $field(BeanContextSupport$2, this$0)},
	{}
};

$MethodInfo _BeanContextSupport$2_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/beancontext/BeanContextSupport;)V", nullptr, 0, $method(static_cast<void(BeanContextSupport$2::*)($BeanContextSupport*)>(&BeanContextSupport$2::init$))},
	{"vetoableChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException"},
	{}
};

$EnclosingMethodInfo _BeanContextSupport$2_EnclosingMethodInfo_ = {
	"java.beans.beancontext.BeanContextSupport",
	"initialize",
	"()V"
};

$InnerClassInfo _BeanContextSupport$2_InnerClassesInfo_[] = {
	{"java.beans.beancontext.BeanContextSupport$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BeanContextSupport$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.beancontext.BeanContextSupport$2",
	"java.lang.Object",
	"java.beans.VetoableChangeListener",
	_BeanContextSupport$2_FieldInfo_,
	_BeanContextSupport$2_MethodInfo_,
	nullptr,
	&_BeanContextSupport$2_EnclosingMethodInfo_,
	_BeanContextSupport$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.beancontext.BeanContextSupport"
};

$Object* allocate$BeanContextSupport$2($Class* clazz) {
	return $of($alloc(BeanContextSupport$2));
}

void BeanContextSupport$2::init$($BeanContextSupport* this$0) {
	$set(this, this$0, this$0);
}

void BeanContextSupport$2::vetoableChange($PropertyChangeEvent* pce) {
	this->this$0->vetoableChange(pce);
}

BeanContextSupport$2::BeanContextSupport$2() {
}

$Class* BeanContextSupport$2::load$($String* name, bool initialize) {
	$loadClass(BeanContextSupport$2, name, initialize, &_BeanContextSupport$2_ClassInfo_, allocate$BeanContextSupport$2);
	return class$;
}

$Class* BeanContextSupport$2::class$ = nullptr;

		} // beancontext
	} // beans
} // java