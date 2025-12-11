#include <java/awt/Container$DropTargetEventTargetFilter.h>

#include <java/awt/Component.h>
#include <java/awt/Container$EventTargetFilter.h>
#include <java/awt/Container.h>
#include <java/awt/dnd/DropTarget.h>
#include <jcpp.h>

#undef FILTER

using $Component = ::java::awt::Component;
using $Container$EventTargetFilter = ::java::awt::Container$EventTargetFilter;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Container$DropTargetEventTargetFilter_FieldInfo_[] = {
	{"FILTER", "Ljava/awt/Container$EventTargetFilter;", nullptr, $STATIC | $FINAL, $staticField(Container$DropTargetEventTargetFilter, FILTER)},
	{}
};

$MethodInfo _Container$DropTargetEventTargetFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Container$DropTargetEventTargetFilter::*)()>(&Container$DropTargetEventTargetFilter::init$))},
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Container$DropTargetEventTargetFilter_InnerClassesInfo_[] = {
	{"java.awt.Container$DropTargetEventTargetFilter", "java.awt.Container", "DropTargetEventTargetFilter", $STATIC},
	{"java.awt.Container$EventTargetFilter", "java.awt.Container", "EventTargetFilter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Container$DropTargetEventTargetFilter_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Container$DropTargetEventTargetFilter",
	"java.lang.Object",
	"java.awt.Container$EventTargetFilter",
	_Container$DropTargetEventTargetFilter_FieldInfo_,
	_Container$DropTargetEventTargetFilter_MethodInfo_,
	nullptr,
	nullptr,
	_Container$DropTargetEventTargetFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Container"
};

$Object* allocate$Container$DropTargetEventTargetFilter($Class* clazz) {
	return $of($alloc(Container$DropTargetEventTargetFilter));
}

$Container$EventTargetFilter* Container$DropTargetEventTargetFilter::FILTER = nullptr;

void Container$DropTargetEventTargetFilter::init$() {
}

bool Container$DropTargetEventTargetFilter::accept($Component* comp) {
	$var($DropTarget, dt, $nc(comp)->getDropTarget());
	return dt != nullptr && dt->isActive();
}

void clinit$Container$DropTargetEventTargetFilter($Class* class$) {
	$assignStatic(Container$DropTargetEventTargetFilter::FILTER, $new(Container$DropTargetEventTargetFilter));
}

Container$DropTargetEventTargetFilter::Container$DropTargetEventTargetFilter() {
}

$Class* Container$DropTargetEventTargetFilter::load$($String* name, bool initialize) {
	$loadClass(Container$DropTargetEventTargetFilter, name, initialize, &_Container$DropTargetEventTargetFilter_ClassInfo_, clinit$Container$DropTargetEventTargetFilter, allocate$Container$DropTargetEventTargetFilter);
	return class$;
}

$Class* Container$DropTargetEventTargetFilter::class$ = nullptr;

	} // awt
} // java