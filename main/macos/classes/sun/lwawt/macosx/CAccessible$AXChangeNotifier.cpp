#include <sun/lwawt/macosx/CAccessible$AXChangeNotifier.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/JTabbedPane.h>
#include <sun/lwawt/macosx/CAccessible.h>
#include <jcpp.h>

#undef CHECK_BOX
#undef COMBO_BOX
#undef FOCUSED
#undef MENU_ITEM
#undef POPUP_MENU
#undef PROGRESS_BAR
#undef SLIDER
#undef VISIBLE

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $CAccessible = ::sun::lwawt::macosx::CAccessible;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessible$AXChangeNotifier_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CAccessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessible$AXChangeNotifier, this$0)},
	{}
};

$MethodInfo _CAccessible$AXChangeNotifier_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CAccessible;)V", nullptr, $PRIVATE, $method(static_cast<void(CAccessible$AXChangeNotifier::*)($CAccessible*)>(&CAccessible$AXChangeNotifier::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CAccessible$AXChangeNotifier_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessible$AXChangeNotifier", "sun.lwawt.macosx.CAccessible", "AXChangeNotifier", $PRIVATE},
	{}
};

$ClassInfo _CAccessible$AXChangeNotifier_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessible$AXChangeNotifier",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_CAccessible$AXChangeNotifier_FieldInfo_,
	_CAccessible$AXChangeNotifier_MethodInfo_,
	nullptr,
	nullptr,
	_CAccessible$AXChangeNotifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessible"
};

$Object* allocate$CAccessible$AXChangeNotifier($Class* clazz) {
	return $of($alloc(CAccessible$AXChangeNotifier));
}

void CAccessible$AXChangeNotifier::init$($CAccessible* this$0) {
	$set(this, this$0, this$0);
}

void CAccessible$AXChangeNotifier::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(e)->getPropertyName());
	if (this->this$0->ptr != 0) {
		$var($Object, newValue, e->getNewValue());
		$var($Object, oldValue, e->getOldValue());
		if ($nc(name)->compareTo("AccessibleCaret"_s) == 0) {
			$CAccessible::selectedTextChanged(this->this$0->ptr);
		} else if (name->compareTo("AccessibleText"_s) == 0) {
			$CAccessible::valueChanged(this->this$0->ptr);
		} else if (name->compareTo("AccessibleSelection"_s) == 0) {
			$CAccessible::selectionChanged(this->this$0->ptr);
		} else if (name->compareTo("accessibleTableModelChanged"_s) == 0) {
			$CAccessible::valueChanged(this->this$0->ptr);
		} else if (name->compareTo("AccessibleActiveDescendant"_s) == 0) {
			if ($instanceOf($AccessibleContext, newValue)) {
				$set(this->this$0, activeDescendant, $cast($AccessibleContext, newValue));
			}
		} else if (name->compareTo("AccessibleState"_s) == 0) {
			$var($AccessibleContext, thisAC, $nc(this->this$0->accessible)->getAccessibleContext());
			$var($AccessibleRole, thisRole, $nc(thisAC)->getAccessibleRole());
			$var($Accessible, parentAccessible, thisAC->getAccessibleParent());
			$var($AccessibleRole, parentRole, nullptr);
			if (parentAccessible != nullptr) {
				$assign(parentRole, $nc($(parentAccessible->getAccessibleContext()))->getAccessibleRole());
			}
			$init($AccessibleRole);
			if (parentRole != $AccessibleRole::COMBO_BOX) {
				if (thisRole == $AccessibleRole::POPUP_MENU) {
					$init($AccessibleState);
					if (newValue != nullptr && ($cast($AccessibleState, newValue)) == $AccessibleState::VISIBLE) {
						$CAccessible::menuOpened(this->this$0->ptr);
					} else {
						if (oldValue != nullptr && ($cast($AccessibleState, oldValue)) == $AccessibleState::VISIBLE) {
							$CAccessible::menuClosed(this->this$0->ptr);
						}
					}
				} else {
					if (thisRole == $AccessibleRole::MENU_ITEM) {
						$init($AccessibleState);
						if (newValue != nullptr && ($cast($AccessibleState, newValue)) == $AccessibleState::FOCUSED) {
							$CAccessible::menuItemSelected(this->this$0->ptr);
						}
					}
				}
			}
			if (thisRole == $AccessibleRole::CHECK_BOX) {
				$CAccessible::valueChanged(this->this$0->ptr);
			}
		} else if (name->compareTo("AccessibleName"_s) == 0) {
			if ($instanceOf($JTabbedPane, $(e->getSource()))) {
				$CAccessible::titleChanged(this->this$0->ptr);
			}
		} else if (name->compareTo("AccessibleValue"_s) == 0) {
			$var($AccessibleRole, thisRole, $nc($($nc(this->this$0->accessible)->getAccessibleContext()))->getAccessibleRole());
			$init($AccessibleRole);
			if (thisRole == $AccessibleRole::SLIDER || thisRole == $AccessibleRole::PROGRESS_BAR) {
				$CAccessible::valueChanged(this->this$0->ptr);
			}
		}
	}
}

CAccessible$AXChangeNotifier::CAccessible$AXChangeNotifier() {
}

$Class* CAccessible$AXChangeNotifier::load$($String* name, bool initialize) {
	$loadClass(CAccessible$AXChangeNotifier, name, initialize, &_CAccessible$AXChangeNotifier_ClassInfo_, allocate$CAccessible$AXChangeNotifier);
	return class$;
}

$Class* CAccessible$AXChangeNotifier::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun