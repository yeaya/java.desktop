#include <java/awt/ModalEventFilter.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/EventFilter$FilterAction.h>
#include <java/awt/ModalEventFilter$1.h>
#include <java/awt/ModalEventFilter$ApplicationModalEventFilter.h>
#include <java/awt/ModalEventFilter$DocumentModalEventFilter.h>
#include <java/awt/ModalEventFilter$ToolkitModalEventFilter.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Enum.h>
#include <sun/awt/ModalExclude.h>
#include <jcpp.h>

#undef ACCEPT
#undef ACTION_FIRST
#undef ACTION_LAST
#undef MOUSE_FIRST
#undef MOUSE_LAST
#undef WINDOW_CLOSING

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $EventFilter = ::java::awt::EventFilter;
using $EventFilter$FilterAction = ::java::awt::EventFilter$FilterAction;
using $ModalEventFilter$1 = ::java::awt::ModalEventFilter$1;
using $ModalEventFilter$ApplicationModalEventFilter = ::java::awt::ModalEventFilter$ApplicationModalEventFilter;
using $ModalEventFilter$DocumentModalEventFilter = ::java::awt::ModalEventFilter$DocumentModalEventFilter;
using $ModalEventFilter$ToolkitModalEventFilter = ::java::awt::ModalEventFilter$ToolkitModalEventFilter;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $ModalExclude = ::sun::awt::ModalExclude;

namespace java {
	namespace awt {

$FieldInfo _ModalEventFilter_FieldInfo_[] = {
	{"modalDialog", "Ljava/awt/Dialog;", nullptr, $PROTECTED, $field(ModalEventFilter, modalDialog)},
	{"disabled", "Z", nullptr, $PROTECTED, $field(ModalEventFilter, disabled)},
	{}
};

$MethodInfo _ModalEventFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Dialog;)V", nullptr, $PROTECTED, $method(static_cast<void(ModalEventFilter::*)($Dialog*)>(&ModalEventFilter::init$))},
	{"acceptEvent", "(Ljava/awt/AWTEvent;)Ljava/awt/EventFilter$FilterAction;", nullptr, $PUBLIC},
	{"acceptWindow", "(Ljava/awt/Window;)Ljava/awt/EventFilter$FilterAction;", nullptr, $PROTECTED | $ABSTRACT},
	{"compareTo", "(Ljava/awt/ModalEventFilter;)I", nullptr, 0},
	{"createFilterForDialog", "(Ljava/awt/Dialog;)Ljava/awt/ModalEventFilter;", nullptr, $STATIC, $method(static_cast<ModalEventFilter*(*)($Dialog*)>(&ModalEventFilter::createFilterForDialog))},
	{"disable", "()V", nullptr, 0},
	{"getModalDialog", "()Ljava/awt/Dialog;", nullptr, 0},
	{}
};

$InnerClassInfo _ModalEventFilter_InnerClassesInfo_[] = {
	{"java.awt.ModalEventFilter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"java.awt.ModalEventFilter$DocumentModalEventFilter", "java.awt.ModalEventFilter", "DocumentModalEventFilter", $PRIVATE | $STATIC},
	{"java.awt.ModalEventFilter$ApplicationModalEventFilter", "java.awt.ModalEventFilter", "ApplicationModalEventFilter", $PRIVATE | $STATIC},
	{"java.awt.ModalEventFilter$ToolkitModalEventFilter", "java.awt.ModalEventFilter", "ToolkitModalEventFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ModalEventFilter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.awt.ModalEventFilter",
	"java.lang.Object",
	"java.awt.EventFilter",
	_ModalEventFilter_FieldInfo_,
	_ModalEventFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ModalEventFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.ModalEventFilter$1,java.awt.ModalEventFilter$DocumentModalEventFilter,java.awt.ModalEventFilter$ApplicationModalEventFilter,java.awt.ModalEventFilter$ToolkitModalEventFilter"
};

$Object* allocate$ModalEventFilter($Class* clazz) {
	return $of($alloc(ModalEventFilter));
}

void ModalEventFilter::init$($Dialog* modalDialog) {
	$set(this, modalDialog, modalDialog);
	this->disabled = false;
}

$Dialog* ModalEventFilter::getModalDialog() {
	return this->modalDialog;
}

$EventFilter$FilterAction* ModalEventFilter::acceptEvent($AWTEvent* event) {
	$useLocalCurrentObjectStackCache();
	if (this->disabled || !$nc(this->modalDialog)->isVisible()) {
		$init($EventFilter$FilterAction);
		return $EventFilter$FilterAction::ACCEPT;
	}
	int32_t eventID = $nc(event)->getID();
	if ((eventID >= $MouseEvent::MOUSE_FIRST && eventID <= $MouseEvent::MOUSE_LAST) || (eventID >= $ActionEvent::ACTION_FIRST && eventID <= $ActionEvent::ACTION_LAST) || eventID == $WindowEvent::WINDOW_CLOSING) {
		$var($Object, o, event->getSource());
		if ($instanceOf($ModalExclude, o)) {
		} else if ($instanceOf($Component, o)) {
			$var($Component, c, $cast($Component, o));
			while ((c != nullptr) && !($instanceOf($Window, c))) {
				$assign(c, c->getParent_NoClientCode());
			}
			if (c != nullptr) {
				return acceptWindow($cast($Window, c));
			}
		}
	}
	$init($EventFilter$FilterAction);
	return $EventFilter$FilterAction::ACCEPT;
}

void ModalEventFilter::disable() {
	this->disabled = true;
}

int32_t ModalEventFilter::compareTo(ModalEventFilter* another) {
	$useLocalCurrentObjectStackCache();
	$var($Dialog, anotherDialog, $nc(another)->getModalDialog());
	$var($Component, c, this->modalDialog);
	while (c != nullptr) {
		if ($equals(c, anotherDialog)) {
			return 1;
		}
		$assign(c, c->getParent_NoClientCode());
	}
	$assign(c, anotherDialog);
	while (c != nullptr) {
		if ($equals(c, this->modalDialog)) {
			return -1;
		}
		$assign(c, c->getParent_NoClientCode());
	}
	$var($Dialog, blocker, $nc(this->modalDialog)->getModalBlocker());
	while (blocker != nullptr) {
		if (blocker == anotherDialog) {
			return -1;
		}
		$assign(blocker, blocker->getModalBlocker());
	}
	$assign(blocker, $nc(anotherDialog)->getModalBlocker());
	while (blocker != nullptr) {
		if (blocker == this->modalDialog) {
			return 1;
		}
		$assign(blocker, blocker->getModalBlocker());
	}
	return $nc($($nc(this->modalDialog)->getModalityType()))->compareTo($(static_cast<$Enum*>(anotherDialog->getModalityType())));
}

ModalEventFilter* ModalEventFilter::createFilterForDialog($Dialog* modalDialog) {
	$init(ModalEventFilter);
	$init($ModalEventFilter$1);
	switch ($nc($ModalEventFilter$1::$SwitchMap$java$awt$Dialog$ModalityType)->get($nc(($($nc(modalDialog)->getModalityType())))->ordinal())) {
	case 1:
		{
			return $new($ModalEventFilter$DocumentModalEventFilter, modalDialog);
		}
	case 2:
		{
			return $new($ModalEventFilter$ApplicationModalEventFilter, modalDialog);
		}
	case 3:
		{
			return $new($ModalEventFilter$ToolkitModalEventFilter, modalDialog);
		}
	}
	return nullptr;
}

ModalEventFilter::ModalEventFilter() {
}

$Class* ModalEventFilter::load$($String* name, bool initialize) {
	$loadClass(ModalEventFilter, name, initialize, &_ModalEventFilter_ClassInfo_, allocate$ModalEventFilter);
	return class$;
}

$Class* ModalEventFilter::class$ = nullptr;

	} // awt
} // java