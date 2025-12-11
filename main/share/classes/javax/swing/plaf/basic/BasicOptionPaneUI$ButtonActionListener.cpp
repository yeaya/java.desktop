#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonActionListener.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

#undef DEFAULT_OPTION
#undef OK_CANCEL_OPTION
#undef YES_NO_CANCEL_OPTION
#undef YES_NO_OPTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicOptionPaneUI$ButtonActionListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicOptionPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicOptionPaneUI$ButtonActionListener, this$0)},
	{"buttonIndex", "I", nullptr, $PROTECTED, $field(BasicOptionPaneUI$ButtonActionListener, buttonIndex)},
	{}
};

$MethodInfo _BasicOptionPaneUI$ButtonActionListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicOptionPaneUI;I)V", nullptr, $PUBLIC, $method(static_cast<void(BasicOptionPaneUI$ButtonActionListener::*)($BasicOptionPaneUI*,int32_t)>(&BasicOptionPaneUI$ButtonActionListener::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicOptionPaneUI$ButtonActionListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonActionListener", "javax.swing.plaf.basic.BasicOptionPaneUI", "ButtonActionListener", $PUBLIC},
	{}
};

$ClassInfo _BasicOptionPaneUI$ButtonActionListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonActionListener",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_BasicOptionPaneUI$ButtonActionListener_FieldInfo_,
	_BasicOptionPaneUI$ButtonActionListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicOptionPaneUI$ButtonActionListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicOptionPaneUI"
};

$Object* allocate$BasicOptionPaneUI$ButtonActionListener($Class* clazz) {
	return $of($alloc(BasicOptionPaneUI$ButtonActionListener));
}

void BasicOptionPaneUI$ButtonActionListener::init$($BasicOptionPaneUI* this$0, int32_t buttonIndex) {
	$set(this, this$0, this$0);
	this->buttonIndex = buttonIndex;
}

void BasicOptionPaneUI$ButtonActionListener::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->optionPane != nullptr) {
		int32_t optionType = $nc(this->this$0->optionPane)->getOptionType();
		$var($ObjectArray, options, $nc(this->this$0->optionPane)->getOptions());
		if (this->this$0->inputComponent != nullptr) {
			if (options != nullptr || optionType == $JOptionPane::DEFAULT_OPTION || ((optionType == $JOptionPane::YES_NO_OPTION || optionType == $JOptionPane::YES_NO_CANCEL_OPTION || optionType == $JOptionPane::OK_CANCEL_OPTION) && this->buttonIndex == 0)) {
				this->this$0->resetInputValue();
			}
		}
		if (options == nullptr) {
			if (optionType == $JOptionPane::OK_CANCEL_OPTION && this->buttonIndex == 1) {
				$nc(this->this$0->optionPane)->setValue($($Integer::valueOf(2)));
			} else {
				$nc(this->this$0->optionPane)->setValue($($Integer::valueOf(this->buttonIndex)));
			}
		} else {
			$nc(this->this$0->optionPane)->setValue($nc(options)->get(this->buttonIndex));
		}
	}
}

BasicOptionPaneUI$ButtonActionListener::BasicOptionPaneUI$ButtonActionListener() {
}

$Class* BasicOptionPaneUI$ButtonActionListener::load$($String* name, bool initialize) {
	$loadClass(BasicOptionPaneUI$ButtonActionListener, name, initialize, &_BasicOptionPaneUI$ButtonActionListener_ClassInfo_, allocate$BasicOptionPaneUI$ButtonActionListener);
	return class$;
}

$Class* BasicOptionPaneUI$ButtonActionListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax