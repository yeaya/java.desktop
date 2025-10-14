#include <java/beans/beancontext/BeanContextSupport$1.h>

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
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $BeanContextSupport = ::java::beans::beancontext::BeanContextSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextSupport$1_FieldInfo_[] = {
	{"this$0", "Ljava/beans/beancontext/BeanContextSupport;", nullptr, $FINAL | $SYNTHETIC, $field(BeanContextSupport$1, this$0)},
	{}
};

$MethodInfo _BeanContextSupport$1_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/beancontext/BeanContextSupport;)V", nullptr, 0, $method(static_cast<void(BeanContextSupport$1::*)($BeanContextSupport*)>(&BeanContextSupport$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BeanContextSupport$1_EnclosingMethodInfo_ = {
	"java.beans.beancontext.BeanContextSupport",
	"initialize",
	"()V"
};

$InnerClassInfo _BeanContextSupport$1_InnerClassesInfo_[] = {
	{"java.beans.beancontext.BeanContextSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BeanContextSupport$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.beancontext.BeanContextSupport$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BeanContextSupport$1_FieldInfo_,
	_BeanContextSupport$1_MethodInfo_,
	nullptr,
	&_BeanContextSupport$1_EnclosingMethodInfo_,
	_BeanContextSupport$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.beancontext.BeanContextSupport"
};

$Object* allocate$BeanContextSupport$1($Class* clazz) {
	return $of($alloc(BeanContextSupport$1));
}

void BeanContextSupport$1::init$($BeanContextSupport* this$0) {
	$set(this, this$0, this$0);
}

void BeanContextSupport$1::propertyChange($PropertyChangeEvent* pce) {
	this->this$0->propertyChange(pce);
}

BeanContextSupport$1::BeanContextSupport$1() {
}

$Class* BeanContextSupport$1::load$($String* name, bool initialize) {
	$loadClass(BeanContextSupport$1, name, initialize, &_BeanContextSupport$1_ClassInfo_, allocate$BeanContextSupport$1);
	return class$;
}

$Class* BeanContextSupport$1::class$ = nullptr;

		} // beancontext
	} // beans
} // java