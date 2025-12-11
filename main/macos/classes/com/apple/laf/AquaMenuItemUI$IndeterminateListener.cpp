#include <com/apple/laf/AquaMenuItemUI$IndeterminateListener.h>

#include <com/apple/laf/AquaMenuItemUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef CLIENT_PROPERTY_KEY
#undef INDETERMINATE_LISTENER

using $AquaMenuItemUI = ::com::apple::laf::AquaMenuItemUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaMenuItemUI$IndeterminateListener_FieldInfo_[] = {
	{"CLIENT_PROPERTY_KEY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaMenuItemUI$IndeterminateListener, CLIENT_PROPERTY_KEY)},
	{}
};

$MethodInfo _AquaMenuItemUI$IndeterminateListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaMenuItemUI$IndeterminateListener::*)()>(&AquaMenuItemUI$IndeterminateListener::init$))},
	{"apply", "(Ljavax/swing/JMenuItem;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($JMenuItem*,Object$*)>(&AquaMenuItemUI$IndeterminateListener::apply))},
	{"install", "(Ljavax/swing/JMenuItem;)V", nullptr, $STATIC, $method(static_cast<void(*)($JMenuItem*)>(&AquaMenuItemUI$IndeterminateListener::install))},
	{"isIndeterminate", "(Ljavax/swing/JMenuItem;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JMenuItem*)>(&AquaMenuItemUI$IndeterminateListener::isIndeterminate))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"uninstall", "(Ljavax/swing/JMenuItem;)V", nullptr, $STATIC, $method(static_cast<void(*)($JMenuItem*)>(&AquaMenuItemUI$IndeterminateListener::uninstall))},
	{}
};

$InnerClassInfo _AquaMenuItemUI$IndeterminateListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaMenuItemUI$IndeterminateListener", "com.apple.laf.AquaMenuItemUI", "IndeterminateListener", $STATIC},
	{}
};

$ClassInfo _AquaMenuItemUI$IndeterminateListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaMenuItemUI$IndeterminateListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_AquaMenuItemUI$IndeterminateListener_FieldInfo_,
	_AquaMenuItemUI$IndeterminateListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaMenuItemUI$IndeterminateListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaMenuItemUI"
};

$Object* allocate$AquaMenuItemUI$IndeterminateListener($Class* clazz) {
	return $of($alloc(AquaMenuItemUI$IndeterminateListener));
}

$String* AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY = nullptr;

void AquaMenuItemUI$IndeterminateListener::init$() {
}

void AquaMenuItemUI$IndeterminateListener::install($JMenuItem* menuItem) {
	$init(AquaMenuItemUI$IndeterminateListener);
	$init($AquaMenuItemUI);
	$nc(menuItem)->addPropertyChangeListener(AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY, $AquaMenuItemUI::INDETERMINATE_LISTENER);
	apply(menuItem, $(menuItem->getClientProperty(AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY)));
}

void AquaMenuItemUI$IndeterminateListener::uninstall($JMenuItem* menuItem) {
	$init(AquaMenuItemUI$IndeterminateListener);
	$init($AquaMenuItemUI);
	$nc(menuItem)->removePropertyChangeListener(AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY, $AquaMenuItemUI::INDETERMINATE_LISTENER);
}

void AquaMenuItemUI$IndeterminateListener::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, $nc(evt)->getPropertyName());
	if (!$nc(AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY)->equalsIgnoreCase(key)) {
		return;
	}
	$var($Object, source, evt->getSource());
	if (!($instanceOf($JMenuItem, source))) {
		return;
	}
	$var($JMenuItem, c, $cast($JMenuItem, source));
	apply(c, $(evt->getNewValue()));
}

void AquaMenuItemUI$IndeterminateListener::apply($JMenuItem* menuItem, Object$* value) {
	$init(AquaMenuItemUI$IndeterminateListener);
	$useLocalCurrentObjectStackCache();
	$var($ButtonUI, ui, $cast($ButtonUI, $nc(menuItem)->getUI()));
	if (!($instanceOf($AquaMenuItemUI, ui))) {
		return;
	}
	$var($AquaMenuItemUI, aquaUI, $cast($AquaMenuItemUI, ui));
	if ($nc(aquaUI)->fIsIndeterminate = "indeterminate"_s->equals(value)) {
		$AquaMenuItemUI::access$202(aquaUI, $($UIManager::getIcon($$str({$(aquaUI->getPropertyPrefix()), ".dashIcon"_s}))));
	} else {
		$AquaMenuItemUI::access$302(aquaUI, $($UIManager::getIcon($$str({$(aquaUI->getPropertyPrefix()), ".checkIcon"_s}))));
	}
}

bool AquaMenuItemUI$IndeterminateListener::isIndeterminate($JMenuItem* menuItem) {
	$init(AquaMenuItemUI$IndeterminateListener);
	return "indeterminate"_s->equals($($nc(menuItem)->getClientProperty(AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY)));
}

AquaMenuItemUI$IndeterminateListener::AquaMenuItemUI$IndeterminateListener() {
}

void clinit$AquaMenuItemUI$IndeterminateListener($Class* class$) {
	$assignStatic(AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY, "JMenuItem.selectedState"_s);
}

$Class* AquaMenuItemUI$IndeterminateListener::load$($String* name, bool initialize) {
	$loadClass(AquaMenuItemUI$IndeterminateListener, name, initialize, &_AquaMenuItemUI$IndeterminateListener_ClassInfo_, clinit$AquaMenuItemUI$IndeterminateListener, allocate$AquaMenuItemUI$IndeterminateListener);
	return class$;
}

$Class* AquaMenuItemUI$IndeterminateListener::class$ = nullptr;

		} // laf
	} // apple
} // com