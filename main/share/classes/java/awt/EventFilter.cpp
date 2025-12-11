#include <java/awt/EventFilter.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/EventFilter$FilterAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _EventFilter_MethodInfo_[] = {
	{"acceptEvent", "(Ljava/awt/AWTEvent;)Ljava/awt/EventFilter$FilterAction;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _EventFilter_InnerClassesInfo_[] = {
	{"java.awt.EventFilter$FilterAction", "java.awt.EventFilter", "FilterAction", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _EventFilter_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.awt.EventFilter",
	nullptr,
	nullptr,
	nullptr,
	_EventFilter_MethodInfo_,
	nullptr,
	nullptr,
	_EventFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.EventFilter$FilterAction"
};

$Object* allocate$EventFilter($Class* clazz) {
	return $of($alloc(EventFilter));
}

$Class* EventFilter::load$($String* name, bool initialize) {
	$loadClass(EventFilter, name, initialize, &_EventFilter_ClassInfo_, allocate$EventFilter);
	return class$;
}

$Class* EventFilter::class$ = nullptr;

	} // awt
} // java