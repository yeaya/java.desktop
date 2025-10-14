#include <javax/swing/plaf/basic/BasicLabelUI$Actions.h>

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
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/InputMapUIResource.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef PRESS
#undef RELEASE
#undef VK_ALT
#undef WHEN_FOCUSED
#undef WHEN_IN_FOCUSED_WINDOW

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $InputMapUIResource = ::javax::swing::plaf::InputMapUIResource;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicLabelUI$Actions_FieldInfo_[] = {
	{"PRESS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicLabelUI$Actions, PRESS)},
	{"RELEASE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicLabelUI$Actions, RELEASE)},
	{}
};

$MethodInfo _BasicLabelUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicLabelUI$Actions::*)($String*)>(&BasicLabelUI$Actions::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"doPress", "(Ljavax/swing/JLabel;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicLabelUI$Actions::*)($JLabel*)>(&BasicLabelUI$Actions::doPress))},
	{"doRelease", "(Ljavax/swing/JLabel;Z)V", nullptr, $PRIVATE, $method(static_cast<void(BasicLabelUI$Actions::*)($JLabel*,bool)>(&BasicLabelUI$Actions::doRelease))},
	{"putOnRelease", "(Ljavax/swing/InputMap;II)V", nullptr, $PRIVATE, $method(static_cast<void(BasicLabelUI$Actions::*)($InputMap*,int32_t,int32_t)>(&BasicLabelUI$Actions::putOnRelease))},
	{"removeOnRelease", "(Ljavax/swing/InputMap;II)V", nullptr, $PRIVATE, $method(static_cast<void(BasicLabelUI$Actions::*)($InputMap*,int32_t,int32_t)>(&BasicLabelUI$Actions::removeOnRelease))},
	{}
};

$InnerClassInfo _BasicLabelUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicLabelUI$Actions", "javax.swing.plaf.basic.BasicLabelUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicLabelUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicLabelUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicLabelUI$Actions_FieldInfo_,
	_BasicLabelUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicLabelUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicLabelUI"
};

$Object* allocate$BasicLabelUI$Actions($Class* clazz) {
	return $of($alloc(BasicLabelUI$Actions));
}

$String* BasicLabelUI$Actions::PRESS = nullptr;
$String* BasicLabelUI$Actions::RELEASE = nullptr;

void BasicLabelUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

void BasicLabelUI$Actions::actionPerformed($ActionEvent* e) {
	$var($JLabel, label, $cast($JLabel, $nc(e)->getSource()));
	$var($String, key, getName());
	if (key == BasicLabelUI$Actions::PRESS) {
		doPress(label);
	} else if (key == BasicLabelUI$Actions::RELEASE) {
		doRelease(label, e->getActionCommand() != nullptr);
	}
}

void BasicLabelUI$Actions::doPress($JLabel* label) {
	$var($Component, labelFor, $nc(label)->getLabelFor());
	if (labelFor != nullptr && labelFor->isEnabled()) {
		$var($InputMap, inputMap, $SwingUtilities::getUIInputMap(label, $JComponent::WHEN_FOCUSED));
		if (inputMap == nullptr) {
			$assign(inputMap, $new($InputMapUIResource));
			$SwingUtilities::replaceUIInputMap(label, $JComponent::WHEN_FOCUSED, inputMap);
		}
		int32_t dka = label->getDisplayedMnemonic();
		putOnRelease(inputMap, dka, $BasicLookAndFeel::getFocusAcceleratorKeyMask());
		putOnRelease(inputMap, dka, $SwingUtilities2::setAltGraphMask($BasicLookAndFeel::getFocusAcceleratorKeyMask()));
		putOnRelease(inputMap, dka, 0);
		putOnRelease(inputMap, $KeyEvent::VK_ALT, 0);
		label->requestFocus();
	}
}

void BasicLabelUI$Actions::doRelease($JLabel* label, bool isCommand) {
	$var($Component, labelFor, $nc(label)->getLabelFor());
	if (labelFor != nullptr && labelFor->isEnabled()) {
		if (label->hasFocus()) {
			$var($InputMap, inputMap, $SwingUtilities::getUIInputMap(label, $JComponent::WHEN_FOCUSED));
			if (inputMap != nullptr) {
				int32_t dka = label->getDisplayedMnemonic();
				removeOnRelease(inputMap, dka, $BasicLookAndFeel::getFocusAcceleratorKeyMask());
				removeOnRelease(inputMap, dka, $SwingUtilities2::setAltGraphMask($BasicLookAndFeel::getFocusAcceleratorKeyMask()));
				removeOnRelease(inputMap, dka, 0);
				removeOnRelease(inputMap, $KeyEvent::VK_ALT, 0);
			}
			$assign(inputMap, $SwingUtilities::getUIInputMap(label, $JComponent::WHEN_IN_FOCUSED_WINDOW));
			if (inputMap == nullptr) {
				$assign(inputMap, $new($InputMapUIResource));
				$SwingUtilities::replaceUIInputMap(label, $JComponent::WHEN_IN_FOCUSED_WINDOW, inputMap);
			}
			int32_t dka = label->getDisplayedMnemonic();
			if (isCommand) {
				putOnRelease(inputMap, $KeyEvent::VK_ALT, 0);
			} else {
				putOnRelease(inputMap, dka, $BasicLookAndFeel::getFocusAcceleratorKeyMask());
				putOnRelease(inputMap, dka, $SwingUtilities2::setAltGraphMask($BasicLookAndFeel::getFocusAcceleratorKeyMask()));
				putOnRelease(inputMap, dka, 0);
			}
			if ($instanceOf($Container, labelFor) && $nc(($cast($Container, labelFor)))->isFocusCycleRoot()) {
				labelFor->requestFocus();
			} else {
				$SwingUtilities2::compositeRequestFocus(labelFor);
			}
		} else {
			$var($InputMap, inputMap, $SwingUtilities::getUIInputMap(label, $JComponent::WHEN_IN_FOCUSED_WINDOW));
			int32_t dka = label->getDisplayedMnemonic();
			if (inputMap != nullptr) {
				if (isCommand) {
					removeOnRelease(inputMap, dka, $BasicLookAndFeel::getFocusAcceleratorKeyMask());
					removeOnRelease(inputMap, dka, $SwingUtilities2::setAltGraphMask($BasicLookAndFeel::getFocusAcceleratorKeyMask()));
					removeOnRelease(inputMap, dka, 0);
				} else {
					removeOnRelease(inputMap, $KeyEvent::VK_ALT, 0);
				}
			}
		}
	}
}

void BasicLabelUI$Actions::putOnRelease($InputMap* inputMap, int32_t keyCode, int32_t modifiers) {
	$nc(inputMap)->put($($KeyStroke::getKeyStroke(keyCode, modifiers, true)), BasicLabelUI$Actions::RELEASE);
}

void BasicLabelUI$Actions::removeOnRelease($InputMap* inputMap, int32_t keyCode, int32_t modifiers) {
	$nc(inputMap)->remove($($KeyStroke::getKeyStroke(keyCode, modifiers, true)));
}

BasicLabelUI$Actions::BasicLabelUI$Actions() {
}

void clinit$BasicLabelUI$Actions($Class* class$) {
	$assignStatic(BasicLabelUI$Actions::PRESS, "press"_s);
	$assignStatic(BasicLabelUI$Actions::RELEASE, "release"_s);
}

$Class* BasicLabelUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicLabelUI$Actions, name, initialize, &_BasicLabelUI$Actions_ClassInfo_, clinit$BasicLabelUI$Actions, allocate$BasicLabelUI$Actions);
	return class$;
}

$Class* BasicLabelUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax