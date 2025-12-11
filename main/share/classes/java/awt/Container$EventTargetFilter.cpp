#include <java/awt/Container$EventTargetFilter.h>

#include <java/awt/Container.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _Container$EventTargetFilter_MethodInfo_[] = {
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Container$EventTargetFilter_InnerClassesInfo_[] = {
	{"java.awt.Container$EventTargetFilter", "java.awt.Container", "EventTargetFilter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Container$EventTargetFilter_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.awt.Container$EventTargetFilter",
	nullptr,
	nullptr,
	nullptr,
	_Container$EventTargetFilter_MethodInfo_,
	nullptr,
	nullptr,
	_Container$EventTargetFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Container"
};

$Object* allocate$Container$EventTargetFilter($Class* clazz) {
	return $of($alloc(Container$EventTargetFilter));
}

$Class* Container$EventTargetFilter::load$($String* name, bool initialize) {
	$loadClass(Container$EventTargetFilter, name, initialize, &_Container$EventTargetFilter_ClassInfo_, allocate$Container$EventTargetFilter);
	return class$;
}

$Class* Container$EventTargetFilter::class$ = nullptr;

	} // awt
} // java