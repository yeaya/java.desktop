#include <javax/swing/plaf/basic/BasicOptionPaneUI$Handler.h>

#include <java/awt/ComponentOrientation.h>
#include <java/awt/Point.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

#undef ERROR_MESSAGE
#undef ICON_PROPERTY
#undef INFORMATION_MESSAGE
#undef INITIAL_SELECTION_VALUE_PROPERTY
#undef INITIAL_VALUE_PROPERTY
#undef MESSAGE_PROPERTY
#undef MESSAGE_TYPE_PROPERTY
#undef OK_OPTION
#undef OPTIONS_PROPERTY
#undef OPTION_TYPE_PROPERTY
#undef PLAIN_MESSAGE
#undef QUESTION_MESSAGE
#undef SELECTION_VALUES_PROPERTY
#undef WANTS_INPUT_PROPERTY
#undef WARNING_MESSAGE

using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JTextField = ::javax::swing::JTextField;
using $ListModel = ::javax::swing::ListModel;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicOptionPaneUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicOptionPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicOptionPaneUI$Handler, this$0)},
	{}
};

$MethodInfo _BasicOptionPaneUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicOptionPaneUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicOptionPaneUI$Handler::*)($BasicOptionPaneUI*)>(&BasicOptionPaneUI$Handler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicOptionPaneUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicOptionPaneUI$Handler", "javax.swing.plaf.basic.BasicOptionPaneUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicOptionPaneUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicOptionPaneUI$Handler",
	"java.lang.Object",
	"java.awt.event.ActionListener,java.awt.event.MouseListener,java.beans.PropertyChangeListener",
	_BasicOptionPaneUI$Handler_FieldInfo_,
	_BasicOptionPaneUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicOptionPaneUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicOptionPaneUI"
};

$Object* allocate$BasicOptionPaneUI$Handler($Class* clazz) {
	return $of($alloc(BasicOptionPaneUI$Handler));
}

int32_t BasicOptionPaneUI$Handler::hashCode() {
	 return this->$ActionListener::hashCode();
}

bool BasicOptionPaneUI$Handler::equals(Object$* arg0) {
	 return this->$ActionListener::equals(arg0);
}

$Object* BasicOptionPaneUI$Handler::clone() {
	 return this->$ActionListener::clone();
}

$String* BasicOptionPaneUI$Handler::toString() {
	 return this->$ActionListener::toString();
}

void BasicOptionPaneUI$Handler::finalize() {
	this->$ActionListener::finalize();
}

void BasicOptionPaneUI$Handler::init$($BasicOptionPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicOptionPaneUI$Handler::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$0->optionPane)->setInputValue($($nc(($cast($JTextField, $($nc(e)->getSource()))))->getText()));
}

void BasicOptionPaneUI$Handler::mouseClicked($MouseEvent* e) {
}

void BasicOptionPaneUI$Handler::mouseReleased($MouseEvent* e) {
}

void BasicOptionPaneUI$Handler::mouseEntered($MouseEvent* e) {
}

void BasicOptionPaneUI$Handler::mouseExited($MouseEvent* e) {
}

void BasicOptionPaneUI$Handler::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->getClickCount() == 2) {
		$var($JList, list, $cast($JList, e->getSource()));
		int32_t index = $nc(list)->locationToIndex($(e->getPoint()));
		$nc(this->this$0->optionPane)->setInputValue($($nc($(list->getModel()))->getElementAt(index)));
		$nc(this->this$0->optionPane)->setValue($($Integer::valueOf($JOptionPane::OK_OPTION)));
	}
}

void BasicOptionPaneUI$Handler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($equals($nc(e)->getSource(), this->this$0->optionPane)) {
		if ("ancestor"_s == e->getPropertyName()) {
			$var($JOptionPane, op, $cast($JOptionPane, e->getSource()));
			bool isComingUp = false;
			if (e->getOldValue() == nullptr) {
				isComingUp = true;
			} else {
				isComingUp = false;
			}
			switch ($nc(op)->getMessageType()) {
			case $JOptionPane::PLAIN_MESSAGE:
				{
					if (isComingUp) {
						$BasicLookAndFeel::playSound(this->this$0->optionPane, "OptionPane.informationSound"_s);
					}
					break;
				}
			case $JOptionPane::QUESTION_MESSAGE:
				{
					if (isComingUp) {
						$BasicLookAndFeel::playSound(this->this$0->optionPane, "OptionPane.questionSound"_s);
					}
					break;
				}
			case $JOptionPane::INFORMATION_MESSAGE:
				{
					if (isComingUp) {
						$BasicLookAndFeel::playSound(this->this$0->optionPane, "OptionPane.informationSound"_s);
					}
					break;
				}
			case $JOptionPane::WARNING_MESSAGE:
				{
					if (isComingUp) {
						$BasicLookAndFeel::playSound(this->this$0->optionPane, "OptionPane.warningSound"_s);
					}
					break;
				}
			case $JOptionPane::ERROR_MESSAGE:
				{
					if (isComingUp) {
						$BasicLookAndFeel::playSound(this->this$0->optionPane, "OptionPane.errorSound"_s);
					}
					break;
				}
			default:
				{
					$nc($System::err)->println($$str({"Undefined JOptionPane type: "_s, $$str(op->getMessageType())}));
					break;
				}
			}
		}
		$var($String, changeName, e->getPropertyName());
		$init($JOptionPane);
		if (changeName == $JOptionPane::OPTIONS_PROPERTY || changeName == $JOptionPane::INITIAL_VALUE_PROPERTY || changeName == $JOptionPane::ICON_PROPERTY || changeName == $JOptionPane::MESSAGE_TYPE_PROPERTY || changeName == $JOptionPane::OPTION_TYPE_PROPERTY || changeName == $JOptionPane::MESSAGE_PROPERTY || changeName == $JOptionPane::SELECTION_VALUES_PROPERTY || changeName == $JOptionPane::INITIAL_SELECTION_VALUE_PROPERTY || changeName == $JOptionPane::WANTS_INPUT_PROPERTY) {
			this->this$0->uninstallComponents();
			this->this$0->installComponents();
			$nc(this->this$0->optionPane)->validate();
		} else if (changeName == "componentOrientation"_s) {
			$var($ComponentOrientation, o, $cast($ComponentOrientation, e->getNewValue()));
			$var($JOptionPane, op, $cast($JOptionPane, e->getSource()));
			if (!$equals(o, e->getOldValue())) {
				$nc(op)->applyComponentOrientation(o);
			}
		}
	}
}

BasicOptionPaneUI$Handler::BasicOptionPaneUI$Handler() {
}

$Class* BasicOptionPaneUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicOptionPaneUI$Handler, name, initialize, &_BasicOptionPaneUI$Handler_ClassInfo_, allocate$BasicOptionPaneUI$Handler);
	return class$;
}

$Class* BasicOptionPaneUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax