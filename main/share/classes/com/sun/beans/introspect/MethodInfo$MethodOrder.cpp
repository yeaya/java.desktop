#include <com/sun/beans/introspect/MethodInfo$MethodOrder.h>

#include <com/sun/beans/introspect/MethodInfo.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

$FieldInfo _MethodInfo$MethodOrder_FieldInfo_[] = {
	{"instance", "Lcom/sun/beans/introspect/MethodInfo$MethodOrder;", nullptr, $STATIC | $FINAL, $staticField(MethodInfo$MethodOrder, instance)},
	{}
};

$MethodInfo _MethodInfo$MethodOrder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MethodInfo$MethodOrder::*)()>(&MethodInfo$MethodOrder::init$))},
	{"compare", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(MethodInfo$MethodOrder::*)($Method*,$Method*)>(&MethodInfo$MethodOrder::compare))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _MethodInfo$MethodOrder_InnerClassesInfo_[] = {
	{"com.sun.beans.introspect.MethodInfo$MethodOrder", "com.sun.beans.introspect.MethodInfo", "MethodOrder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MethodInfo$MethodOrder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.introspect.MethodInfo$MethodOrder",
	"java.lang.Object",
	"java.util.Comparator",
	_MethodInfo$MethodOrder_FieldInfo_,
	_MethodInfo$MethodOrder_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/reflect/Method;>;",
	nullptr,
	_MethodInfo$MethodOrder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.introspect.MethodInfo"
};

$Object* allocate$MethodInfo$MethodOrder($Class* clazz) {
	return $of($alloc(MethodInfo$MethodOrder));
}

MethodInfo$MethodOrder* MethodInfo$MethodOrder::instance = nullptr;

void MethodInfo$MethodOrder::init$() {
}

int32_t MethodInfo$MethodOrder::compare($Method* a, $Method* b) {
	$useLocalCurrentObjectStackCache();
	int32_t cmp = $nc($($nc(a)->getName()))->compareTo($($nc(b)->getName()));
	if (cmp != 0) {
		return cmp;
	}
	$var($ClassArray, aparams, a->getParameterTypes());
	$var($ClassArray, bparams, $nc(b)->getParameterTypes());
	if ($nc(aparams)->length != $nc(bparams)->length) {
		return aparams->length - bparams->length;
	}
	for (int32_t i = 0; i < $nc(aparams)->length; ++i) {
		$Class* aparam = aparams->get(i);
		$Class* bparam = $nc(bparams)->get(i);
		if (aparam == bparam) {
			continue;
		}
		cmp = $nc($($nc(aparam)->getName()))->compareTo($($nc(bparam)->getName()));
		if (cmp != 0) {
			return cmp;
		}
	}
	$Class* aret = a->getReturnType();
	$Class* bret = b->getReturnType();
	if (aret == bret) {
		return 0;
	}
	if ($nc(aret)->isAssignableFrom(bret)) {
		return 1;
	}
	if ($nc(bret)->isAssignableFrom(aret)) {
		return -1;
	}
	return $nc($($nc(aret)->getName()))->compareTo($($nc(bret)->getName()));
}

int32_t MethodInfo$MethodOrder::compare(Object$* a, Object$* b) {
	return this->compare($cast($Method, a), $cast($Method, b));
}

void clinit$MethodInfo$MethodOrder($Class* class$) {
	$assignStatic(MethodInfo$MethodOrder::instance, $new(MethodInfo$MethodOrder));
}

MethodInfo$MethodOrder::MethodInfo$MethodOrder() {
}

$Class* MethodInfo$MethodOrder::load$($String* name, bool initialize) {
	$loadClass(MethodInfo$MethodOrder, name, initialize, &_MethodInfo$MethodOrder_ClassInfo_, clinit$MethodInfo$MethodOrder, allocate$MethodInfo$MethodOrder);
	return class$;
}

$Class* MethodInfo$MethodOrder::class$ = nullptr;

			} // introspect
		} // beans
	} // sun
} // com