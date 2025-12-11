#include <com/apple/laf/ScreenMenuPropertyListener.h>

#include <com/apple/laf/AquaMenuItemUI$IndeterminateListener.h>
#include <com/apple/laf/ScreenMenuPropertyHandler.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef CLIENT_PROPERTY_KEY
#undef ENABLED
#undef ICON_CHANGED_PROPERTY
#undef TEXT_CHANGED_PROPERTY
#undef TOOL_TIP_TEXT_KEY

using $AquaMenuItemUI$IndeterminateListener = ::com::apple::laf::AquaMenuItemUI$IndeterminateListener;
using $ScreenMenuPropertyHandler = ::com::apple::laf::ScreenMenuPropertyHandler;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _ScreenMenuPropertyListener_FieldInfo_[] = {
	{"fMenu", "Lcom/apple/laf/ScreenMenuPropertyHandler;", nullptr, 0, $field(ScreenMenuPropertyListener, fMenu)},
	{}
};

$MethodInfo _ScreenMenuPropertyListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/ScreenMenuPropertyHandler;)V", nullptr, 0, $method(static_cast<void(ScreenMenuPropertyListener::*)($ScreenMenuPropertyHandler*)>(&ScreenMenuPropertyListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ScreenMenuPropertyListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.ScreenMenuPropertyListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_ScreenMenuPropertyListener_FieldInfo_,
	_ScreenMenuPropertyListener_MethodInfo_
};

$Object* allocate$ScreenMenuPropertyListener($Class* clazz) {
	return $of($alloc(ScreenMenuPropertyListener));
}

void ScreenMenuPropertyListener::init$($ScreenMenuPropertyHandler* mc) {
	$set(this, fMenu, mc);
}

void ScreenMenuPropertyListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if ("enabled"_s->equals(propertyName)) {
		$nc(this->fMenu)->setEnabled($nc(($cast($Boolean, $(e->getNewValue()))))->booleanValue());
		return;
	}
	$init($AccessibleContext);
	if ($nc($AccessibleContext::ACCESSIBLE_STATE_PROPERTY)->equals(propertyName)) {
		$init($AccessibleState);
		bool var$0 = $equals(e->getNewValue(), $AccessibleState::ENABLED);
		if (var$0 || $equals(e->getOldValue(), $AccessibleState::ENABLED)) {
			$var($Object, newValue, e->getNewValue());
			$nc(this->fMenu)->setEnabled($equals(newValue, $AccessibleState::ENABLED));
		}
		return;
	}
	if ("accelerator"_s->equals(propertyName)) {
		$nc(this->fMenu)->setAccelerator($cast($KeyStroke, $(e->getNewValue())));
		return;
	}
	$init($AbstractButton);
	if ($nc($AbstractButton::TEXT_CHANGED_PROPERTY)->equals(propertyName)) {
		$nc(this->fMenu)->setLabel($cast($String, $(e->getNewValue())));
		return;
	}
	if ($nc($AbstractButton::ICON_CHANGED_PROPERTY)->equals(propertyName)) {
		$nc(this->fMenu)->setIcon($cast($Icon, $(e->getNewValue())));
		return;
	}
	$init($JComponent);
	if ($nc($JComponent::TOOL_TIP_TEXT_KEY)->equals(propertyName)) {
		$nc(this->fMenu)->setToolTipText($cast($String, $(e->getNewValue())));
		return;
	}
	$init($AquaMenuItemUI$IndeterminateListener);
	if ($nc($AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY)->equals(propertyName)) {
		$nc(this->fMenu)->setIndeterminate($AquaMenuItemUI$IndeterminateListener::isIndeterminate($cast($JMenuItem, $(e->getSource()))));
		return;
	}
}

ScreenMenuPropertyListener::ScreenMenuPropertyListener() {
}

$Class* ScreenMenuPropertyListener::load$($String* name, bool initialize) {
	$loadClass(ScreenMenuPropertyListener, name, initialize, &_ScreenMenuPropertyListener_ClassInfo_, allocate$ScreenMenuPropertyListener);
	return class$;
}

$Class* ScreenMenuPropertyListener::class$ = nullptr;

		} // laf
	} // apple
} // com