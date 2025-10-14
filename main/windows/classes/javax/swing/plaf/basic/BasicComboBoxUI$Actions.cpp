#include <javax/swing/plaf/basic/BasicComboBoxUI$Actions.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef DOWN
#undef DOWN_2
#undef END
#undef ENTER
#undef HIDE
#undef HOME
#undef PAGE_DOWN
#undef PAGE_UP
#undef TOGGLE
#undef TOGGLE_2
#undef UP
#undef UP_2
#undef VK_ENTER
#undef WHEN_IN_FOCUSED_WINDOW

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $InputMap = ::javax::swing::InputMap;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JRootPane = ::javax::swing::JRootPane;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboBoxUI$Actions_FieldInfo_[] = {
	{"HIDE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI$Actions, HIDE)},
	{"DOWN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI$Actions, DOWN)},
	{"DOWN_2", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI$Actions, DOWN_2)},
	{"TOGGLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI$Actions, TOGGLE)},
	{"TOGGLE_2", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI$Actions, TOGGLE_2)},
	{"UP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI$Actions, UP)},
	{"UP_2", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI$Actions, UP_2)},
	{"ENTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI$Actions, ENTER)},
	{"PAGE_DOWN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI$Actions, PAGE_DOWN)},
	{"PAGE_UP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI$Actions, PAGE_UP)},
	{"HOME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI$Actions, HOME)},
	{"END", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI$Actions, END)},
	{}
};

$MethodInfo _BasicComboBoxUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicComboBoxUI$Actions::*)($String*)>(&BasicComboBoxUI$Actions::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"getNextIndex", "(Ljavax/swing/JComboBox;Ljava/lang/String;)I", "(Ljavax/swing/JComboBox<*>;Ljava/lang/String;)I", $PRIVATE, $method(static_cast<int32_t(BasicComboBoxUI$Actions::*)($JComboBox*,$String*)>(&BasicComboBoxUI$Actions::getNextIndex))},
	{}
};

$InnerClassInfo _BasicComboBoxUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxUI$Actions", "javax.swing.plaf.basic.BasicComboBoxUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicComboBoxUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicComboBoxUI$Actions_FieldInfo_,
	_BasicComboBoxUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxUI"
};

$Object* allocate$BasicComboBoxUI$Actions($Class* clazz) {
	return $of($alloc(BasicComboBoxUI$Actions));
}

$String* BasicComboBoxUI$Actions::HIDE = nullptr;
$String* BasicComboBoxUI$Actions::DOWN = nullptr;
$String* BasicComboBoxUI$Actions::DOWN_2 = nullptr;
$String* BasicComboBoxUI$Actions::TOGGLE = nullptr;
$String* BasicComboBoxUI$Actions::TOGGLE_2 = nullptr;
$String* BasicComboBoxUI$Actions::UP = nullptr;
$String* BasicComboBoxUI$Actions::UP_2 = nullptr;
$String* BasicComboBoxUI$Actions::ENTER = nullptr;
$String* BasicComboBoxUI$Actions::PAGE_DOWN = nullptr;
$String* BasicComboBoxUI$Actions::PAGE_UP = nullptr;
$String* BasicComboBoxUI$Actions::HOME = nullptr;
$String* BasicComboBoxUI$Actions::END = nullptr;

void BasicComboBoxUI$Actions::init$($String* name) {
	$UIAction::init$(name);
}

void BasicComboBoxUI$Actions::actionPerformed($ActionEvent* e) {
	$var($String, key, getName());
	$var($JComboBox, comboBox, $cast($JComboBox, $nc(e)->getSource()));
	$load($BasicComboBoxUI);
	$var($BasicComboBoxUI, ui, $cast($BasicComboBoxUI, $BasicLookAndFeel::getUIOfType($($nc(comboBox)->getUI()), $BasicComboBoxUI::class$)));
	if (key == BasicComboBoxUI$Actions::HIDE) {
		$nc(comboBox)->firePopupMenuCanceled();
		comboBox->setPopupVisible(false);
	} else if (key == BasicComboBoxUI$Actions::PAGE_DOWN || key == BasicComboBoxUI$Actions::PAGE_UP || key == BasicComboBoxUI$Actions::HOME || key == BasicComboBoxUI$Actions::END) {
		int32_t index = getNextIndex(comboBox, key);
		if (index >= 0 && index < $nc(comboBox)->getItemCount()) {
			bool var$0 = $UIManager::getBoolean("ComboBox.noActionOnKeyNavigation"_s);
			if (var$0 && comboBox->isPopupVisible()) {
				$nc($nc(ui)->listBox)->setSelectedIndex(index);
				$nc(ui->listBox)->ensureIndexIsVisible(index);
				comboBox->repaint();
			} else {
				comboBox->setSelectedIndex(index);
			}
		}
	} else if (key == BasicComboBoxUI$Actions::DOWN) {
		if ($nc(comboBox)->isShowing()) {
			if (comboBox->isPopupVisible()) {
				if (ui != nullptr) {
					ui->selectNextPossibleValue();
				}
			} else {
				comboBox->setPopupVisible(true);
			}
		}
	} else if (key == BasicComboBoxUI$Actions::DOWN_2) {
		if ($nc(comboBox)->isShowing()) {
			bool var$2 = comboBox->isEditable();
			bool var$1 = (var$2 || (ui != nullptr && ui->isTableCellEditor()));
			if (var$1 && !comboBox->isPopupVisible()) {
				comboBox->setPopupVisible(true);
			} else if (ui != nullptr) {
				ui->selectNextPossibleValue();
			}
		}
	} else if (key == BasicComboBoxUI$Actions::TOGGLE || key == BasicComboBoxUI$Actions::TOGGLE_2) {
		if (ui != nullptr && (key == BasicComboBoxUI$Actions::TOGGLE || !$nc(comboBox)->isEditable())) {
			if ($nc(ui)->isTableCellEditor()) {
				comboBox->setSelectedIndex($nc($($nc(ui->popup)->getList()))->getSelectedIndex());
			} else {
				comboBox->setPopupVisible(!comboBox->isPopupVisible());
			}
		}
	} else if (key == BasicComboBoxUI$Actions::UP) {
		if (ui != nullptr) {
			if (ui->isPopupVisible(comboBox)) {
				ui->selectPreviousPossibleValue();
			} else if ($DefaultLookup::getBoolean(comboBox, ui, "ComboBox.showPopupOnNavigation"_s, false)) {
				ui->setPopupVisible(comboBox, true);
			}
		}
	} else if (key == BasicComboBoxUI$Actions::UP_2) {
		if ($nc(comboBox)->isShowing() && ui != nullptr) {
			bool var$3 = comboBox->isEditable();
			if (var$3 && !comboBox->isPopupVisible()) {
				comboBox->setPopupVisible(true);
			} else {
				ui->selectPreviousPossibleValue();
			}
		}
	} else if (key == BasicComboBoxUI$Actions::ENTER) {
		if ($nc(comboBox)->isPopupVisible()) {
			if ($UIManager::getBoolean("ComboBox.noActionOnKeyNavigation"_s)) {
				$var($Object, listItem, $nc($($nc($nc(ui)->popup)->getList()))->getSelectedValue());
				if (listItem != nullptr) {
					$nc($(comboBox->getEditor()))->setItem(listItem);
					comboBox->setSelectedItem(listItem);
				}
				comboBox->setPopupVisible(false);
			} else {
				bool isEnterSelectablePopup = $UIManager::getBoolean("ComboBox.isEnterSelectablePopup"_s);
				if (!comboBox->isEditable() || isEnterSelectablePopup || $nc(ui)->isTableCellEditor$) {
					$var($Object, listItem, $nc($($nc(ui->popup)->getList()))->getSelectedValue());
					if (listItem != nullptr) {
						$nc($(comboBox->getEditor()))->setItem(listItem);
						comboBox->setSelectedItem(listItem);
					}
				}
				comboBox->setPopupVisible(false);
			}
		} else {
			if ($nc(ui)->isTableCellEditor$ && !comboBox->isEditable()) {
				comboBox->setSelectedItem($(comboBox->getSelectedItem()));
			}
			$var($JRootPane, root, $SwingUtilities::getRootPane(comboBox));
			if (root != nullptr) {
				$var($InputMap, im, root->getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
				$var($ActionMap, am, root->getActionMap());
				if (im != nullptr && am != nullptr) {
					$var($Object, obj, im->get($($KeyStroke::getKeyStroke($KeyEvent::VK_ENTER, 0))));
					if (obj != nullptr) {
						$var($Action, action, am->get(obj));
						if (action != nullptr) {
							$var($Object, var$4, $of(root));
							int32_t var$5 = e->getID();
							$var($String, var$6, e->getActionCommand());
							int64_t var$7 = e->getWhen();
							action->actionPerformed($$new($ActionEvent, var$4, var$5, var$6, var$7, e->getModifiers()));
						}
					}
				}
			}
		}
	}
}

int32_t BasicComboBoxUI$Actions::getNextIndex($JComboBox* comboBox, $String* key) {
	int32_t listHeight = $nc(comboBox)->getMaximumRowCount();
	int32_t selectedIndex = comboBox->getSelectedIndex();
	bool var$0 = $UIManager::getBoolean("ComboBox.noActionOnKeyNavigation"_s);
	if (var$0 && ($instanceOf($BasicComboBoxUI, $($cast($ComboBoxUI, comboBox->getUI()))))) {
		selectedIndex = $nc($nc(($cast($BasicComboBoxUI, $($cast($ComboBoxUI, comboBox->getUI())))))->listBox)->getSelectedIndex();
	}
	if (key == BasicComboBoxUI$Actions::PAGE_UP) {
		int32_t index = selectedIndex - listHeight;
		return (index < 0 ? 0 : index);
	} else if (key == BasicComboBoxUI$Actions::PAGE_DOWN) {
		int32_t index = selectedIndex + listHeight;
		int32_t max = comboBox->getItemCount();
		return (index < max ? index : max - 1);
	} else if (key == BasicComboBoxUI$Actions::HOME) {
		return 0;
	} else if (key == BasicComboBoxUI$Actions::END) {
		return comboBox->getItemCount() - 1;
	}
	return comboBox->getSelectedIndex();
}

bool BasicComboBoxUI$Actions::accept(Object$* c) {
	if (getName() == BasicComboBoxUI$Actions::HIDE) {
		return (c != nullptr && $nc(($cast($JComboBox, c)))->isPopupVisible());
	} else if (getName() == BasicComboBoxUI$Actions::ENTER) {
		$var($JRootPane, root, $SwingUtilities::getRootPane($cast($JComboBox, c)));
		if (root != nullptr && (c != nullptr && !$nc(($cast($JComboBox, c)))->isPopupVisible())) {
			$var($InputMap, im, root->getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
			$var($ActionMap, am, root->getActionMap());
			if (im != nullptr && am != nullptr) {
				$var($Object, obj, im->get($($KeyStroke::getKeyStroke($KeyEvent::VK_ENTER, 0))));
				if (obj == nullptr) {
					return false;
				}
			}
		}
	}
	return true;
}

BasicComboBoxUI$Actions::BasicComboBoxUI$Actions() {
}

void clinit$BasicComboBoxUI$Actions($Class* class$) {
	$assignStatic(BasicComboBoxUI$Actions::HIDE, "hidePopup"_s);
	$assignStatic(BasicComboBoxUI$Actions::DOWN, "selectNext"_s);
	$assignStatic(BasicComboBoxUI$Actions::DOWN_2, "selectNext2"_s);
	$assignStatic(BasicComboBoxUI$Actions::TOGGLE, "togglePopup"_s);
	$assignStatic(BasicComboBoxUI$Actions::TOGGLE_2, "spacePopup"_s);
	$assignStatic(BasicComboBoxUI$Actions::UP, "selectPrevious"_s);
	$assignStatic(BasicComboBoxUI$Actions::UP_2, "selectPrevious2"_s);
	$assignStatic(BasicComboBoxUI$Actions::ENTER, "enterPressed"_s);
	$assignStatic(BasicComboBoxUI$Actions::PAGE_DOWN, "pageDownPassThrough"_s);
	$assignStatic(BasicComboBoxUI$Actions::PAGE_UP, "pageUpPassThrough"_s);
	$assignStatic(BasicComboBoxUI$Actions::HOME, "homePassThrough"_s);
	$assignStatic(BasicComboBoxUI$Actions::END, "endPassThrough"_s);
}

$Class* BasicComboBoxUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxUI$Actions, name, initialize, &_BasicComboBoxUI$Actions_ClassInfo_, clinit$BasicComboBoxUI$Actions, allocate$BasicComboBoxUI$Actions);
	return class$;
}

$Class* BasicComboBoxUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax