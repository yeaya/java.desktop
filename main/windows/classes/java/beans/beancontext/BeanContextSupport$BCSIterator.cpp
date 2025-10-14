#include <java/beans/beancontext/BeanContextSupport$BCSIterator.h>

#include <java/beans/beancontext/BeanContextSupport.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $BeanContextSupport = ::java::beans::beancontext::BeanContextSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextSupport$BCSIterator_FieldInfo_[] = {
	{"src", "Ljava/util/Iterator;", "Ljava/util/Iterator<*>;", $PRIVATE, $field(BeanContextSupport$BCSIterator, src)},
	{}
};

$MethodInfo _BeanContextSupport$BCSIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<*>;)V", 0, $method(static_cast<void(BeanContextSupport$BCSIterator::*)($Iterator*)>(&BeanContextSupport$BCSIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BeanContextSupport$BCSIterator_InnerClassesInfo_[] = {
	{"java.beans.beancontext.BeanContextSupport$BCSIterator", "java.beans.beancontext.BeanContextSupport", "BCSIterator", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _BeanContextSupport$BCSIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.beans.beancontext.BeanContextSupport$BCSIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_BeanContextSupport$BCSIterator_FieldInfo_,
	_BeanContextSupport$BCSIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/Object;>;",
	nullptr,
	_BeanContextSupport$BCSIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.beancontext.BeanContextSupport"
};

$Object* allocate$BeanContextSupport$BCSIterator($Class* clazz) {
	return $of($alloc(BeanContextSupport$BCSIterator));
}

void BeanContextSupport$BCSIterator::init$($Iterator* i) {
	$set(this, src, i);
}

bool BeanContextSupport$BCSIterator::hasNext() {
	return $nc(this->src)->hasNext();
}

$Object* BeanContextSupport$BCSIterator::next() {
	return $of($nc(this->src)->next());
}

void BeanContextSupport$BCSIterator::remove() {
}

BeanContextSupport$BCSIterator::BeanContextSupport$BCSIterator() {
}

$Class* BeanContextSupport$BCSIterator::load$($String* name, bool initialize) {
	$loadClass(BeanContextSupport$BCSIterator, name, initialize, &_BeanContextSupport$BCSIterator_ClassInfo_, allocate$BeanContextSupport$BCSIterator);
	return class$;
}

$Class* BeanContextSupport$BCSIterator::class$ = nullptr;

		} // beancontext
	} // beans
} // java