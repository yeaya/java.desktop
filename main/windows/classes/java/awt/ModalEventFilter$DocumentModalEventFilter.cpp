#include <java/awt/ModalEventFilter$DocumentModalEventFilter.h>

#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog.h>
#include <java/awt/EventFilter$FilterAction.h>
#include <java/awt/ModalEventFilter.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ACCEPT
#undef ACCEPT_IMMEDIATELY
#undef APPLICATION_EXCLUDE
#undef REJECT

using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $EventFilter$FilterAction = ::java::awt::EventFilter$FilterAction;
using $ModalEventFilter = ::java::awt::ModalEventFilter;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _ModalEventFilter$DocumentModalEventFilter_FieldInfo_[] = {
	{"documentRoot", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(ModalEventFilter$DocumentModalEventFilter, documentRoot)},
	{}
};

$MethodInfo _ModalEventFilter$DocumentModalEventFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Dialog;)V", nullptr, 0, $method(static_cast<void(ModalEventFilter$DocumentModalEventFilter::*)($Dialog*)>(&ModalEventFilter$DocumentModalEventFilter::init$))},
	{"acceptWindow", "(Ljava/awt/Window;)Ljava/awt/EventFilter$FilterAction;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _ModalEventFilter$DocumentModalEventFilter_InnerClassesInfo_[] = {
	{"java.awt.ModalEventFilter$DocumentModalEventFilter", "java.awt.ModalEventFilter", "DocumentModalEventFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ModalEventFilter$DocumentModalEventFilter_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.ModalEventFilter$DocumentModalEventFilter",
	"java.awt.ModalEventFilter",
	nullptr,
	_ModalEventFilter$DocumentModalEventFilter_FieldInfo_,
	_ModalEventFilter$DocumentModalEventFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ModalEventFilter$DocumentModalEventFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.ModalEventFilter"
};

$Object* allocate$ModalEventFilter$DocumentModalEventFilter($Class* clazz) {
	return $of($alloc(ModalEventFilter$DocumentModalEventFilter));
}

void ModalEventFilter$DocumentModalEventFilter::init$($Dialog* modalDialog) {
	$ModalEventFilter::init$(modalDialog);
	$set(this, documentRoot, $nc(modalDialog)->getDocumentRoot());
}

$EventFilter$FilterAction* ModalEventFilter$DocumentModalEventFilter::acceptWindow($Window* w$renamed) {
	$var($Window, w, w$renamed);
	$init($Dialog$ModalExclusionType);
	if ($nc(w)->isModalExcluded($Dialog$ModalExclusionType::APPLICATION_EXCLUDE)) {
		$var($Window, w1, $nc(this->modalDialog)->getOwner());
		while (w1 != nullptr) {
			if (w1 == w) {
				$init($EventFilter$FilterAction);
				return $EventFilter$FilterAction::REJECT;
			}
			$assign(w1, w1->getOwner());
		}
		$init($EventFilter$FilterAction);
		return $EventFilter$FilterAction::ACCEPT;
	}
	while (w != nullptr) {
		if ($equals(w, this->modalDialog)) {
			$init($EventFilter$FilterAction);
			return $EventFilter$FilterAction::ACCEPT_IMMEDIATELY;
		}
		if (w == this->documentRoot) {
			$init($EventFilter$FilterAction);
			return $EventFilter$FilterAction::REJECT;
		}
		$assign(w, w->getOwner());
	}
	$init($EventFilter$FilterAction);
	return $EventFilter$FilterAction::ACCEPT;
}

ModalEventFilter$DocumentModalEventFilter::ModalEventFilter$DocumentModalEventFilter() {
}

$Class* ModalEventFilter$DocumentModalEventFilter::load$($String* name, bool initialize) {
	$loadClass(ModalEventFilter$DocumentModalEventFilter, name, initialize, &_ModalEventFilter$DocumentModalEventFilter_ClassInfo_, allocate$ModalEventFilter$DocumentModalEventFilter);
	return class$;
}

$Class* ModalEventFilter$DocumentModalEventFilter::class$ = nullptr;

	} // awt
} // java