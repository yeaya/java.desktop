#include <javax/swing/plaf/basic/BasicRootPaneUI.h>

#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentInputMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/RootPaneUI.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI$Actions.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI$RootPaneInputMap.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef FALSE
#undef POST_POPUP
#undef PRESS
#undef RELEASE
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_IN_FOCUSED_WINDOW

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ComponentInputMapUIResource = ::javax::swing::plaf::ComponentInputMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $RootPaneUI = ::javax::swing::plaf::RootPaneUI;
using $BasicRootPaneUI$Actions = ::javax::swing::plaf::basic::BasicRootPaneUI$Actions;
using $BasicRootPaneUI$RootPaneInputMap = ::javax::swing::plaf::basic::BasicRootPaneUI$RootPaneInputMap;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicRootPaneUI_FieldInfo_[] = {
	{"rootPaneUI", "Ljavax/swing/plaf/RootPaneUI;", nullptr, $PRIVATE | $STATIC, $staticField(BasicRootPaneUI, rootPaneUI)},
	{}
};

$MethodInfo _BasicRootPaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicRootPaneUI::*)()>(&BasicRootPaneUI::init$))},
	{"createInputMap", "(ILjavax/swing/JComponent;)Ljavax/swing/ComponentInputMap;", nullptr, 0},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicRootPaneUI::createUI))},
	{"getInputMap", "(ILjavax/swing/JComponent;)Ljavax/swing/InputMap;", nullptr, 0},
	{"installComponents", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"installDefaults", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"installKeyboardActions", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicRootPaneUI::loadActionMap))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallComponents", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateDefaultButtonBindings", "(Ljavax/swing/JRootPane;)V", nullptr, 0},
	{}
};

$InnerClassInfo _BasicRootPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicRootPaneUI$RootPaneInputMap", "javax.swing.plaf.basic.BasicRootPaneUI", "RootPaneInputMap", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicRootPaneUI$Actions", "javax.swing.plaf.basic.BasicRootPaneUI", "Actions", $STATIC},
	{}
};

$ClassInfo _BasicRootPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicRootPaneUI",
	"javax.swing.plaf.RootPaneUI",
	"java.beans.PropertyChangeListener",
	_BasicRootPaneUI_FieldInfo_,
	_BasicRootPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicRootPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicRootPaneUI$RootPaneInputMap,javax.swing.plaf.basic.BasicRootPaneUI$Actions"
};

$Object* allocate$BasicRootPaneUI($Class* clazz) {
	return $of($alloc(BasicRootPaneUI));
}

int32_t BasicRootPaneUI::hashCode() {
	 return this->$RootPaneUI::hashCode();
}

bool BasicRootPaneUI::equals(Object$* arg0) {
	 return this->$RootPaneUI::equals(arg0);
}

$Object* BasicRootPaneUI::clone() {
	 return this->$RootPaneUI::clone();
}

$String* BasicRootPaneUI::toString() {
	 return this->$RootPaneUI::toString();
}

void BasicRootPaneUI::finalize() {
	this->$RootPaneUI::finalize();
}

$RootPaneUI* BasicRootPaneUI::rootPaneUI = nullptr;

void BasicRootPaneUI::init$() {
	$RootPaneUI::init$();
}

$ComponentUI* BasicRootPaneUI::createUI($JComponent* c) {
	$init(BasicRootPaneUI);
	return BasicRootPaneUI::rootPaneUI;
}

void BasicRootPaneUI::installUI($JComponent* c) {
	installDefaults($cast($JRootPane, c));
	installComponents($cast($JRootPane, c));
	installListeners($cast($JRootPane, c));
	installKeyboardActions($cast($JRootPane, c));
}

void BasicRootPaneUI::uninstallUI($JComponent* c) {
	uninstallDefaults($cast($JRootPane, c));
	uninstallComponents($cast($JRootPane, c));
	uninstallListeners($cast($JRootPane, c));
	uninstallKeyboardActions($cast($JRootPane, c));
}

void BasicRootPaneUI::installDefaults($JRootPane* c) {
	$init($Boolean);
	$LookAndFeel::installProperty(c, "opaque"_s, $Boolean::FALSE);
}

void BasicRootPaneUI::installComponents($JRootPane* root) {
}

void BasicRootPaneUI::installListeners($JRootPane* root) {
	$nc(root)->addPropertyChangeListener(this);
}

void BasicRootPaneUI::installKeyboardActions($JRootPane* root) {
	$var($InputMap, km, getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW, root));
	$SwingUtilities::replaceUIInputMap(root, $JComponent::WHEN_IN_FOCUSED_WINDOW, km);
	$assign(km, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, root));
	$SwingUtilities::replaceUIInputMap(root, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, km);
	$LazyActionMap::installLazyActionMap(root, BasicRootPaneUI::class$, "RootPane.actionMap"_s);
	updateDefaultButtonBindings(root);
}

void BasicRootPaneUI::uninstallDefaults($JRootPane* root) {
}

void BasicRootPaneUI::uninstallComponents($JRootPane* root) {
}

void BasicRootPaneUI::uninstallListeners($JRootPane* root) {
	$nc(root)->removePropertyChangeListener(this);
}

void BasicRootPaneUI::uninstallKeyboardActions($JRootPane* root) {
	$SwingUtilities::replaceUIInputMap(root, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
	$SwingUtilities::replaceUIActionMap(root, nullptr);
}

$InputMap* BasicRootPaneUI::getInputMap(int32_t condition, $JComponent* c) {
	if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		return $cast($InputMap, $DefaultLookup::get(c, this, "RootPane.ancestorInputMap"_s));
	}
	if (condition == $JComponent::WHEN_IN_FOCUSED_WINDOW) {
		return createInputMap(condition, c);
	}
	return nullptr;
}

$ComponentInputMap* BasicRootPaneUI::createInputMap(int32_t condition, $JComponent* c) {
	return $new($BasicRootPaneUI$RootPaneInputMap, c);
}

void BasicRootPaneUI::loadActionMap($LazyActionMap* map) {
	$init(BasicRootPaneUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicRootPaneUI$Actions);
	$nc(map)->put($$new($BasicRootPaneUI$Actions, $BasicRootPaneUI$Actions::PRESS));
	map->put($$new($BasicRootPaneUI$Actions, $BasicRootPaneUI$Actions::RELEASE));
	map->put($$new($BasicRootPaneUI$Actions, $BasicRootPaneUI$Actions::POST_POPUP));
}

void BasicRootPaneUI::updateDefaultButtonBindings($JRootPane* root) {
	$useLocalCurrentObjectStackCache();
	$var($InputMap, km, $SwingUtilities::getUIInputMap(root, $JComponent::WHEN_IN_FOCUSED_WINDOW));
	while (km != nullptr && !($instanceOf($BasicRootPaneUI$RootPaneInputMap, km))) {
		$assign(km, km->getParent());
	}
	if (km != nullptr) {
		km->clear();
		if ($nc(root)->getDefaultButton() != nullptr) {
			$var($ObjectArray, bindings, $cast($ObjectArray, $DefaultLookup::get(root, this, "RootPane.defaultButtonWindowKeyBindings"_s)));
			if (bindings != nullptr) {
				$LookAndFeel::loadKeyBindings(km, bindings);
			}
		}
	}
}

void BasicRootPaneUI::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(e)->getPropertyName()))->equals("defaultButton"_s)) {
		$var($JRootPane, rootpane, $cast($JRootPane, e->getSource()));
		updateDefaultButtonBindings(rootpane);
		if ($nc(rootpane)->getClientProperty("temporaryDefaultButton"_s) == nullptr) {
			rootpane->putClientProperty("initialDefaultButton"_s, $(e->getNewValue()));
		}
	}
}

void clinit$BasicRootPaneUI($Class* class$) {
	$assignStatic(BasicRootPaneUI::rootPaneUI, $new(BasicRootPaneUI));
}

BasicRootPaneUI::BasicRootPaneUI() {
}

$Class* BasicRootPaneUI::load$($String* name, bool initialize) {
	$loadClass(BasicRootPaneUI, name, initialize, &_BasicRootPaneUI_ClassInfo_, clinit$BasicRootPaneUI, allocate$BasicRootPaneUI);
	return class$;
}

$Class* BasicRootPaneUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax