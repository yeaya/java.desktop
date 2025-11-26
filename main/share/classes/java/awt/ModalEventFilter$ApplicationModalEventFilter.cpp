#include <java/awt/ModalEventFilter$ApplicationModalEventFilter.h>

#include <java/awt/Component.h>
#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog.h>
#include <java/awt/EventFilter$FilterAction.h>
#include <java/awt/ModalEventFilter.h>
#include <java/awt/Window.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef ACCEPT
#undef ACCEPT_IMMEDIATELY
#undef APPLICATION_EXCLUDE
#undef REJECT

using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $EventFilter$FilterAction = ::java::awt::EventFilter$FilterAction;
using $ModalEventFilter = ::java::awt::ModalEventFilter;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

$FieldInfo _ModalEventFilter$ApplicationModalEventFilter_FieldInfo_[] = {
	{"appContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE, $field(ModalEventFilter$ApplicationModalEventFilter, appContext)},
	{}
};

$MethodInfo _ModalEventFilter$ApplicationModalEventFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Dialog;)V", nullptr, 0, $method(static_cast<void(ModalEventFilter$ApplicationModalEventFilter::*)($Dialog*)>(&ModalEventFilter$ApplicationModalEventFilter::init$))},
	{"acceptWindow", "(Ljava/awt/Window;)Ljava/awt/EventFilter$FilterAction;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _ModalEventFilter$ApplicationModalEventFilter_InnerClassesInfo_[] = {
	{"java.awt.ModalEventFilter$ApplicationModalEventFilter", "java.awt.ModalEventFilter", "ApplicationModalEventFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ModalEventFilter$ApplicationModalEventFilter_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.ModalEventFilter$ApplicationModalEventFilter",
	"java.awt.ModalEventFilter",
	nullptr,
	_ModalEventFilter$ApplicationModalEventFilter_FieldInfo_,
	_ModalEventFilter$ApplicationModalEventFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ModalEventFilter$ApplicationModalEventFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.ModalEventFilter"
};

$Object* allocate$ModalEventFilter$ApplicationModalEventFilter($Class* clazz) {
	return $of($alloc(ModalEventFilter$ApplicationModalEventFilter));
}

void ModalEventFilter$ApplicationModalEventFilter::init$($Dialog* modalDialog) {
	$ModalEventFilter::init$(modalDialog);
	$set(this, appContext, $nc(modalDialog)->appContext);
}

$EventFilter$FilterAction* ModalEventFilter$ApplicationModalEventFilter::acceptWindow($Window* w$renamed) {
	$var($Window, w, w$renamed);
	$init($Dialog$ModalExclusionType);
	if ($nc(w)->isModalExcluded($Dialog$ModalExclusionType::APPLICATION_EXCLUDE)) {
		$init($EventFilter$FilterAction);
		return $EventFilter$FilterAction::ACCEPT;
	}
	if ($nc(w)->appContext == this->appContext) {
		while (w != nullptr) {
			if ($equals(w, this->modalDialog)) {
				$init($EventFilter$FilterAction);
				return $EventFilter$FilterAction::ACCEPT_IMMEDIATELY;
			}
			$assign(w, w->getOwner());
		}
		$init($EventFilter$FilterAction);
		return $EventFilter$FilterAction::REJECT;
	}
	$init($EventFilter$FilterAction);
	return $EventFilter$FilterAction::ACCEPT;
}

ModalEventFilter$ApplicationModalEventFilter::ModalEventFilter$ApplicationModalEventFilter() {
}

$Class* ModalEventFilter$ApplicationModalEventFilter::load$($String* name, bool initialize) {
	$loadClass(ModalEventFilter$ApplicationModalEventFilter, name, initialize, &_ModalEventFilter$ApplicationModalEventFilter_ClassInfo_, allocate$ModalEventFilter$ApplicationModalEventFilter);
	return class$;
}

$Class* ModalEventFilter$ApplicationModalEventFilter::class$ = nullptr;

	} // awt
} // java