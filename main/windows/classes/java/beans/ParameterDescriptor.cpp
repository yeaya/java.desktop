#include <java/beans/ParameterDescriptor.h>

#include <java/beans/FeatureDescriptor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _ParameterDescriptor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParameterDescriptor::*)()>(&ParameterDescriptor::init$))},
	{"<init>", "(Ljava/beans/ParameterDescriptor;)V", nullptr, 0, $method(static_cast<void(ParameterDescriptor::*)(ParameterDescriptor*)>(&ParameterDescriptor::init$))},
	{}
};

$ClassInfo _ParameterDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.ParameterDescriptor",
	"java.beans.FeatureDescriptor",
	nullptr,
	nullptr,
	_ParameterDescriptor_MethodInfo_
};

$Object* allocate$ParameterDescriptor($Class* clazz) {
	return $of($alloc(ParameterDescriptor));
}

void ParameterDescriptor::init$() {
	$FeatureDescriptor::init$();
}

void ParameterDescriptor::init$(ParameterDescriptor* old) {
	$FeatureDescriptor::init$(old);
}

ParameterDescriptor::ParameterDescriptor() {
}

$Class* ParameterDescriptor::load$($String* name, bool initialize) {
	$loadClass(ParameterDescriptor, name, initialize, &_ParameterDescriptor_ClassInfo_, allocate$ParameterDescriptor);
	return class$;
}

$Class* ParameterDescriptor::class$ = nullptr;

	} // beans
} // java