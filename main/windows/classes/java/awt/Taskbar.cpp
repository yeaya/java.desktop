#include <java/awt/Taskbar.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Image.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/Taskbar$Feature.h>
#include <java/awt/Taskbar$State.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/peer/TaskbarPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef ICON_BADGE_IMAGE_WINDOW
#undef ICON_BADGE_NUMBER
#undef ICON_IMAGE
#undef MENU
#undef PROGRESS_STATE_WINDOW
#undef PROGRESS_VALUE
#undef PROGRESS_VALUE_WINDOW
#undef USER_ATTENTION
#undef USER_ATTENTION_WINDOW

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Image = ::java::awt::Image;
using $PopupMenu = ::java::awt::PopupMenu;
using $Taskbar$Feature = ::java::awt::Taskbar$Feature;
using $Taskbar$State = ::java::awt::Taskbar$State;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $TaskbarPeer = ::java::awt::peer::TaskbarPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $AppContext = ::sun::awt::AppContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {

$FieldInfo _Taskbar_FieldInfo_[] = {
	{"peer", "Ljava/awt/peer/TaskbarPeer;", nullptr, $PRIVATE, $field(Taskbar, peer)},
	{}
};

$MethodInfo _Taskbar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Taskbar::*)()>(&Taskbar::init$))},
	{"checkEventsProcessingPermission", "()V", nullptr, $PRIVATE, $method(static_cast<void(Taskbar::*)()>(&Taskbar::checkEventsProcessingPermission))},
	{"checkFeatureSupport", "(Ljava/awt/Taskbar$Feature;)V", nullptr, $PRIVATE, $method(static_cast<void(Taskbar::*)($Taskbar$Feature*)>(&Taskbar::checkFeatureSupport))},
	{"getIconImage", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getMenu", "()Ljava/awt/PopupMenu;", nullptr, $PUBLIC},
	{"getTaskbar", "()Ljava/awt/Taskbar;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<Taskbar*(*)()>(&Taskbar::getTaskbar))},
	{"isSupported", "(Ljava/awt/Taskbar$Feature;)Z", nullptr, $PUBLIC},
	{"isTaskbarSupported", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&Taskbar::isTaskbarSupported))},
	{"requestUserAttention", "(ZZ)V", nullptr, $PUBLIC},
	{"requestWindowUserAttention", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{"setIconBadge", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setMenu", "(Ljava/awt/PopupMenu;)V", nullptr, $PUBLIC},
	{"setProgressValue", "(I)V", nullptr, $PUBLIC},
	{"setWindowIconBadge", "(Ljava/awt/Window;Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setWindowProgressState", "(Ljava/awt/Window;Ljava/awt/Taskbar$State;)V", nullptr, $PUBLIC},
	{"setWindowProgressValue", "(Ljava/awt/Window;I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Taskbar_InnerClassesInfo_[] = {
	{"java.awt.Taskbar$State", "java.awt.Taskbar", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.awt.Taskbar$Feature", "java.awt.Taskbar", "Feature", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Taskbar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Taskbar",
	"java.lang.Object",
	nullptr,
	_Taskbar_FieldInfo_,
	_Taskbar_MethodInfo_,
	nullptr,
	nullptr,
	_Taskbar_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Taskbar$State,java.awt.Taskbar$Feature"
};

$Object* allocate$Taskbar($Class* clazz) {
	return $of($alloc(Taskbar));
}

bool Taskbar::isSupported($Taskbar$Feature* feature) {
	return $nc(this->peer)->isSupported(feature);
}

void Taskbar::checkFeatureSupport($Taskbar$Feature* featureType) {
	if (!isSupported(featureType)) {
		$throwNew($UnsupportedOperationException, $$str({"The "_s, $($nc(featureType)->name()), " feature is not supported on the current platform!"_s}));
	}
}

void Taskbar::checkEventsProcessingPermission() {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "canProcessApplicationEvents"_s));
	}
}

void Taskbar::init$() {
	$var($Toolkit, defaultToolkit, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, defaultToolkit)) {
		$set(this, peer, $nc(($cast($SunToolkit, defaultToolkit)))->createTaskbarPeer(this));
	}
}

Taskbar* Taskbar::getTaskbar() {
	$load(Taskbar);
	$synchronized(class$) {
		if ($GraphicsEnvironment::isHeadless()) {
			$throwNew($HeadlessException);
		}
		if (!Taskbar::isTaskbarSupported()) {
			$throwNew($UnsupportedOperationException, "Taskbar API is not supported on the current platform"_s);
		}
		$var($AppContext, context, $AppContext::getAppContext());
		$var(Taskbar, taskbar, $cast(Taskbar, $nc(context)->get(Taskbar::class$)));
		if (taskbar == nullptr) {
			$assign(taskbar, $new(Taskbar));
			context->put(Taskbar::class$, taskbar);
		}
		return taskbar;
	}
}

bool Taskbar::isTaskbarSupported() {
	$var($Toolkit, defaultToolkit, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, defaultToolkit)) {
		return $nc(($cast($SunToolkit, defaultToolkit)))->isTaskbarSupported();
	}
	return false;
}

void Taskbar::requestUserAttention(bool enabled, bool critical) {
	checkEventsProcessingPermission();
	$init($Taskbar$Feature);
	checkFeatureSupport($Taskbar$Feature::USER_ATTENTION);
	$nc(this->peer)->requestUserAttention(enabled, critical);
}

void Taskbar::requestWindowUserAttention($Window* w) {
	checkEventsProcessingPermission();
	$init($Taskbar$Feature);
	checkFeatureSupport($Taskbar$Feature::USER_ATTENTION_WINDOW);
	$nc(this->peer)->requestWindowUserAttention(w);
}

void Taskbar::setMenu($PopupMenu* menu) {
	checkEventsProcessingPermission();
	$init($Taskbar$Feature);
	checkFeatureSupport($Taskbar$Feature::MENU);
	$nc(this->peer)->setMenu(menu);
}

$PopupMenu* Taskbar::getMenu() {
	checkEventsProcessingPermission();
	$init($Taskbar$Feature);
	checkFeatureSupport($Taskbar$Feature::MENU);
	return $nc(this->peer)->getMenu();
}

void Taskbar::setIconImage($Image* image) {
	checkEventsProcessingPermission();
	$init($Taskbar$Feature);
	checkFeatureSupport($Taskbar$Feature::ICON_IMAGE);
	$nc(this->peer)->setIconImage(image);
}

$Image* Taskbar::getIconImage() {
	checkEventsProcessingPermission();
	$init($Taskbar$Feature);
	checkFeatureSupport($Taskbar$Feature::ICON_IMAGE);
	return $nc(this->peer)->getIconImage();
}

void Taskbar::setIconBadge($String* badge) {
	checkEventsProcessingPermission();
	$init($Taskbar$Feature);
	checkFeatureSupport($Taskbar$Feature::ICON_BADGE_NUMBER);
	$nc(this->peer)->setIconBadge(badge);
}

void Taskbar::setWindowIconBadge($Window* w, $Image* badge) {
	checkEventsProcessingPermission();
	$init($Taskbar$Feature);
	checkFeatureSupport($Taskbar$Feature::ICON_BADGE_IMAGE_WINDOW);
	if (w != nullptr) {
		$nc(this->peer)->setWindowIconBadge(w, badge);
	}
}

void Taskbar::setProgressValue(int32_t value) {
	checkEventsProcessingPermission();
	$init($Taskbar$Feature);
	checkFeatureSupport($Taskbar$Feature::PROGRESS_VALUE);
	$nc(this->peer)->setProgressValue(value);
}

void Taskbar::setWindowProgressValue($Window* w, int32_t value) {
	checkEventsProcessingPermission();
	$init($Taskbar$Feature);
	checkFeatureSupport($Taskbar$Feature::PROGRESS_VALUE_WINDOW);
	if (w != nullptr) {
		$nc(this->peer)->setWindowProgressValue(w, value);
	}
}

void Taskbar::setWindowProgressState($Window* w, $Taskbar$State* state) {
	checkEventsProcessingPermission();
	$init($Taskbar$Feature);
	checkFeatureSupport($Taskbar$Feature::PROGRESS_STATE_WINDOW);
	if (w != nullptr) {
		$nc(this->peer)->setWindowProgressState(w, state);
	}
}

Taskbar::Taskbar() {
}

$Class* Taskbar::load$($String* name, bool initialize) {
	$loadClass(Taskbar, name, initialize, &_Taskbar_ClassInfo_, allocate$Taskbar);
	return class$;
}

$Class* Taskbar::class$ = nullptr;

	} // awt
} // java