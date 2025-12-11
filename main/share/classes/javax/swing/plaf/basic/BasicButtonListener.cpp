#include <javax/swing/plaf/basic/BasicButtonListener.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentInputMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonListener$Actions.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef CONTENT_AREA_FILLED_CHANGED_PROPERTY
#undef MNEMONIC_CHANGED_PROPERTY
#undef PRESS
#undef RELEASE
#undef TEXT_CHANGED_PROPERTY
#undef WHEN_FOCUSED
#undef WHEN_IN_FOCUSED_WINDOW

using $FocusEvent = ::java::awt::event::FocusEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ButtonModel = ::javax::swing::ButtonModel;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentInputMapUIResource = ::javax::swing::plaf::ComponentInputMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonListener$Actions = ::javax::swing::plaf::basic::BasicButtonListener$Actions;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicButtonListener_FieldInfo_[] = {
	{"lastPressedTimestamp", "J", nullptr, $PRIVATE, $field(BasicButtonListener, lastPressedTimestamp)},
	{"shouldDiscardRelease", "Z", nullptr, $PRIVATE, $field(BasicButtonListener, shouldDiscardRelease)},
	{}
};

$MethodInfo _BasicButtonListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicButtonListener::*)($AbstractButton*)>(&BasicButtonListener::init$))},
	{"checkOpacity", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getInputMap", "(ILjavax/swing/JComponent;)Ljavax/swing/InputMap;", nullptr, 0},
	{"installKeyboardActions", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicButtonListener::loadActionMap))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallKeyboardActions", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateMnemonicBinding", "(Ljavax/swing/AbstractButton;)V", nullptr, 0},
	{}
};

$InnerClassInfo _BasicButtonListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicButtonListener$Actions", "javax.swing.plaf.basic.BasicButtonListener", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicButtonListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicButtonListener",
	"java.lang.Object",
	"java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.awt.event.FocusListener,javax.swing.event.ChangeListener,java.beans.PropertyChangeListener",
	_BasicButtonListener_FieldInfo_,
	_BasicButtonListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicButtonListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicButtonListener$Actions"
};

$Object* allocate$BasicButtonListener($Class* clazz) {
	return $of($alloc(BasicButtonListener));
}

int32_t BasicButtonListener::hashCode() {
	 return this->$MouseListener::hashCode();
}

bool BasicButtonListener::equals(Object$* arg0) {
	 return this->$MouseListener::equals(arg0);
}

$Object* BasicButtonListener::clone() {
	 return this->$MouseListener::clone();
}

$String* BasicButtonListener::toString() {
	 return this->$MouseListener::toString();
}

void BasicButtonListener::finalize() {
	this->$MouseListener::finalize();
}

void BasicButtonListener::loadActionMap($LazyActionMap* map) {
	$init(BasicButtonListener);
	$useLocalCurrentObjectStackCache();
	$init($BasicButtonListener$Actions);
	$nc(map)->put($$new($BasicButtonListener$Actions, $BasicButtonListener$Actions::PRESS));
	map->put($$new($BasicButtonListener$Actions, $BasicButtonListener$Actions::RELEASE));
}

void BasicButtonListener::init$($AbstractButton* b) {
	this->lastPressedTimestamp = -1;
	this->shouldDiscardRelease = false;
}

void BasicButtonListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(e)->getPropertyName());
	$init($AbstractButton);
	if (prop == $AbstractButton::MNEMONIC_CHANGED_PROPERTY) {
		updateMnemonicBinding($cast($AbstractButton, $(e->getSource())));
	} else {
		if (prop == $AbstractButton::CONTENT_AREA_FILLED_CHANGED_PROPERTY) {
			checkOpacity($cast($AbstractButton, $(e->getSource())));
		} else {
			if (prop == $AbstractButton::TEXT_CHANGED_PROPERTY || "font"_s == prop || "foreground"_s == prop || $SwingUtilities2::isScaleChanged(e)) {
				$var($AbstractButton, b, $cast($AbstractButton, e->getSource()));
				$BasicHTML::updateRenderer(b, $($nc(b)->getText()));
			}
		}
	}
}

void BasicButtonListener::checkOpacity($AbstractButton* b) {
	$nc(b)->setOpaque(b->isContentAreaFilled());
}

void BasicButtonListener::installKeyboardActions($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	updateMnemonicBinding(b);
	$LazyActionMap::installLazyActionMap(c, BasicButtonListener::class$, "Button.actionMap"_s);
	$var($InputMap, km, getInputMap($JComponent::WHEN_FOCUSED, c));
	$SwingUtilities::replaceUIInputMap(c, $JComponent::WHEN_FOCUSED, km);
}

void BasicButtonListener::uninstallKeyboardActions($JComponent* c) {
	$SwingUtilities::replaceUIInputMap(c, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
	$SwingUtilities::replaceUIInputMap(c, $JComponent::WHEN_FOCUSED, nullptr);
	$SwingUtilities::replaceUIActionMap(c, nullptr);
}

$InputMap* BasicButtonListener::getInputMap(int32_t condition, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if (condition == $JComponent::WHEN_FOCUSED) {
		$load($BasicButtonUI);
		$var($BasicButtonUI, ui, $cast($BasicButtonUI, $BasicLookAndFeel::getUIOfType($($nc(($cast($AbstractButton, c)))->getUI()), $BasicButtonUI::class$)));
		if (ui != nullptr) {
			return $cast($InputMap, $DefaultLookup::get(c, ui, $$str({$(ui->getPropertyPrefix()), "focusInputMap"_s})));
		}
	}
	return nullptr;
}

void BasicButtonListener::updateMnemonicBinding($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	int32_t m = $nc(b)->getMnemonic();
	if (m != 0) {
		$var($InputMap, map, $SwingUtilities::getUIInputMap(b, $JComponent::WHEN_IN_FOCUSED_WINDOW));
		if (map == nullptr) {
			$assign(map, $new($ComponentInputMapUIResource, b));
			$SwingUtilities::replaceUIInputMap(b, $JComponent::WHEN_IN_FOCUSED_WINDOW, map);
		}
		$nc(map)->clear();
		map->put($($KeyStroke::getKeyStroke(m, $BasicLookAndFeel::getFocusAcceleratorKeyMask(), false)), "pressed"_s);
		map->put($($KeyStroke::getKeyStroke(m, $SwingUtilities2::setAltGraphMask($BasicLookAndFeel::getFocusAcceleratorKeyMask()), false)), "pressed"_s);
		map->put($($KeyStroke::getKeyStroke(m, $BasicLookAndFeel::getFocusAcceleratorKeyMask(), true)), "released"_s);
		map->put($($KeyStroke::getKeyStroke(m, $SwingUtilities2::setAltGraphMask($BasicLookAndFeel::getFocusAcceleratorKeyMask()), true)), "released"_s);
		map->put($($KeyStroke::getKeyStroke(m, 0, true)), "released"_s);
	} else {
		$var($InputMap, map, $SwingUtilities::getUIInputMap(b, $JComponent::WHEN_IN_FOCUSED_WINDOW));
		if (map != nullptr) {
			map->clear();
		}
	}
}

void BasicButtonListener::stateChanged($ChangeEvent* e) {
	$var($AbstractButton, b, $cast($AbstractButton, $nc(e)->getSource()));
	$nc(b)->repaint();
}

void BasicButtonListener::focusGained($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, $nc(e)->getSource()));
	if ($instanceOf($JButton, b) && $nc(($cast($JButton, b)))->isDefaultCapable()) {
		$var($JRootPane, root, $nc(b)->getRootPane());
		if (root != nullptr) {
			$load($BasicButtonUI);
			$var($BasicButtonUI, ui, $cast($BasicButtonUI, $BasicLookAndFeel::getUIOfType($(b->getUI()), $BasicButtonUI::class$)));
			if (ui != nullptr && $DefaultLookup::getBoolean(b, ui, $$str({$(ui->getPropertyPrefix()), "defaultButtonFollowsFocus"_s}), true)) {
				root->putClientProperty("temporaryDefaultButton"_s, b);
				root->setDefaultButton($cast($JButton, b));
				root->putClientProperty("temporaryDefaultButton"_s, nullptr);
			}
		}
	}
	$nc(b)->repaint();
}

void BasicButtonListener::focusLost($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, $nc(e)->getSource()));
	$var($JRootPane, root, $nc(b)->getRootPane());
	if (root != nullptr) {
		$var($JButton, initialDefault, $cast($JButton, root->getClientProperty("initialDefaultButton"_s)));
		if (!$equals(b, initialDefault)) {
			$load($BasicButtonUI);
			$var($BasicButtonUI, ui, $cast($BasicButtonUI, $BasicLookAndFeel::getUIOfType($(b->getUI()), $BasicButtonUI::class$)));
			if (ui != nullptr && $DefaultLookup::getBoolean(b, ui, $$str({$(ui->getPropertyPrefix()), "defaultButtonFollowsFocus"_s}), true)) {
				root->setDefaultButton(initialDefault);
			}
		}
	}
	$var($ButtonModel, model, b->getModel());
	$nc(model)->setPressed(false);
	model->setArmed(false);
	b->repaint();
}

void BasicButtonListener::mouseMoved($MouseEvent* e) {
}

void BasicButtonListener::mouseDragged($MouseEvent* e) {
}

void BasicButtonListener::mouseClicked($MouseEvent* e) {
}

void BasicButtonListener::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($SwingUtilities::isLeftMouseButton(e)) {
		$var($AbstractButton, b, $cast($AbstractButton, $nc(e)->getSource()));
		int32_t var$0 = e->getX();
		if ($nc(b)->contains(var$0, e->getY())) {
			int64_t lastTime = this->lastPressedTimestamp;
			this->lastPressedTimestamp = e->getWhen();
			int64_t timeSinceLastClick = this->lastPressedTimestamp - lastTime;
			if (lastTime != -1 && timeSinceLastClick > 0 && timeSinceLastClick < b->getMultiClickThreshhold()) {
				this->shouldDiscardRelease = true;
				return;
			}
			$var($ButtonModel, model, b->getModel());
			if (!$nc(model)->isEnabled()) {
				return;
			}
			if (!$nc(model)->isArmed()) {
				model->setArmed(true);
			}
			$nc(model)->setPressed(true);
			bool var$1 = !b->hasFocus();
			if (var$1 && b->isRequestFocusEnabled()) {
				b->requestFocus();
			}
		}
	}
}

void BasicButtonListener::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($SwingUtilities::isLeftMouseButton(e)) {
		if (this->shouldDiscardRelease) {
			this->shouldDiscardRelease = false;
			return;
		}
		$var($AbstractButton, b, $cast($AbstractButton, $nc(e)->getSource()));
		$var($ButtonModel, model, $nc(b)->getModel());
		$nc(model)->setPressed(false);
		model->setArmed(false);
	}
}

void BasicButtonListener::mouseEntered($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, $nc(e)->getSource()));
	$var($ButtonModel, model, $nc(b)->getModel());
	bool var$0 = b->isRolloverEnabled();
	if (var$0 && !$SwingUtilities::isLeftMouseButton(e)) {
		$nc(model)->setRollover(true);
	}
	if ($nc(model)->isPressed()) {
		model->setArmed(true);
	}
}

void BasicButtonListener::mouseExited($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, $nc(e)->getSource()));
	$var($ButtonModel, model, $nc(b)->getModel());
	if (b->isRolloverEnabled()) {
		$nc(model)->setRollover(false);
	}
	$nc(model)->setArmed(false);
}

BasicButtonListener::BasicButtonListener() {
}

$Class* BasicButtonListener::load$($String* name, bool initialize) {
	$loadClass(BasicButtonListener, name, initialize, &_BasicButtonListener_ClassInfo_, allocate$BasicButtonListener);
	return class$;
}

$Class* BasicButtonListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax