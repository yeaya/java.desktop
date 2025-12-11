#include <com/apple/laf/AquaSpinnerUI$PropertyChangeHandler.h>

#include <com/apple/laf/AquaSpinnerUI$ArrowButtonHandler.h>
#include <com/apple/laf/AquaSpinnerUI.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Font.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/SpinnerUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef TOOL_TIP_TEXT_KEY

using $AquaSpinnerUI = ::com::apple::laf::AquaSpinnerUI;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Font = ::java::awt::Font;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $SpinnerUI = ::javax::swing::plaf::SpinnerUI;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaSpinnerUI$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaSpinnerUI$PropertyChangeHandler::*)()>(&AquaSpinnerUI$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaSpinnerUI$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSpinnerUI$PropertyChangeHandler", "com.apple.laf.AquaSpinnerUI", "PropertyChangeHandler", $STATIC},
	{}
};

$ClassInfo _AquaSpinnerUI$PropertyChangeHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSpinnerUI$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	_AquaSpinnerUI$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaSpinnerUI$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSpinnerUI"
};

$Object* allocate$AquaSpinnerUI$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(AquaSpinnerUI$PropertyChangeHandler));
}

void AquaSpinnerUI$PropertyChangeHandler::init$() {
}

void AquaSpinnerUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(e)->getPropertyName());
	$var($JSpinner, spinner, ($cast($JSpinner, e->getSource())));
	$var($SpinnerUI, spinnerUI, $cast($SpinnerUI, $nc(spinner)->getUI()));
	if ($instanceOf($AquaSpinnerUI, spinnerUI)) {
		$var($AquaSpinnerUI, ui, $cast($AquaSpinnerUI, spinnerUI));
		if ("editor"_s->equals(propertyName)) {
			$var($JComponent, oldEditor, $cast($JComponent, e->getOldValue()));
			$var($JComponent, newEditor, $cast($JComponent, e->getNewValue()));
			$nc(ui)->replaceEditor(oldEditor, newEditor);
			ui->updateEnabledState();
			if ($instanceOf($JSpinner$DefaultEditor, oldEditor)) {
				$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, oldEditor)))->getTextField());
				if (tf != nullptr) {
					tf->removeFocusListener($($AquaSpinnerUI::getNextButtonHandler()));
					tf->removeFocusListener($($AquaSpinnerUI::getPreviousButtonHandler()));
				}
			}
			if ($instanceOf($JSpinner$DefaultEditor, newEditor)) {
				$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, newEditor)))->getTextField());
				if (tf != nullptr) {
					if ($instanceOf($UIResource, $(tf->getFont()))) {
						$var($Font, font, spinner->getFont());
						tf->setFont(font == nullptr ? ($Font*)nullptr : static_cast<$Font*>($$new($FontUIResource, font)));
					}
					tf->addFocusListener($($AquaSpinnerUI::getNextButtonHandler()));
					tf->addFocusListener($($AquaSpinnerUI::getPreviousButtonHandler()));
				}
			}
		} else if ("componentOrientation"_s->equals(propertyName)) {
			$var($ComponentOrientation, o, $cast($ComponentOrientation, e->getNewValue()));
			if (!$equals(o, e->getOldValue())) {
				$var($JComponent, editor, spinner->getEditor());
				if (editor != nullptr) {
					editor->applyComponentOrientation(o);
				}
				spinner->revalidate();
				spinner->repaint();
			}
		} else if ("enabled"_s->equals(propertyName)) {
			$nc(ui)->updateEnabledState();
		} else {
			$init($JComponent);
			if ($nc($JComponent::TOOL_TIP_TEXT_KEY)->equals(propertyName)) {
				$nc(ui)->updateToolTipTextForChildren(spinner);
			} else if ("font"_s->equals(propertyName)) {
				$var($JComponent, editor, spinner->getEditor());
				if ($instanceOf($JSpinner$DefaultEditor, editor)) {
					$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
					if (tf != nullptr) {
						if ($instanceOf($UIResource, $(tf->getFont()))) {
							$var($Font, font, spinner->getFont());
							tf->setFont(font == nullptr ? ($Font*)nullptr : static_cast<$Font*>($$new($FontUIResource, font)));
						}
					}
				}
			}
		}
	}
}

AquaSpinnerUI$PropertyChangeHandler::AquaSpinnerUI$PropertyChangeHandler() {
}

$Class* AquaSpinnerUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(AquaSpinnerUI$PropertyChangeHandler, name, initialize, &_AquaSpinnerUI$PropertyChangeHandler_ClassInfo_, allocate$AquaSpinnerUI$PropertyChangeHandler);
	return class$;
}

$Class* AquaSpinnerUI$PropertyChangeHandler::class$ = nullptr;

		} // laf
	} // apple
} // com