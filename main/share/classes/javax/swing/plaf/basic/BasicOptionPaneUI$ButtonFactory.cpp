#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonFactory.h>

#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonFactory$ConstrainedButton.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $BasicOptionPaneUI$ButtonFactory$ConstrainedButton = ::javax::swing::plaf::basic::BasicOptionPaneUI$ButtonFactory$ConstrainedButton;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicOptionPaneUI$ButtonFactory_FieldInfo_[] = {
	{"text", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicOptionPaneUI$ButtonFactory, text)},
	{"mnemonic", "I", nullptr, $PRIVATE, $field(BasicOptionPaneUI$ButtonFactory, mnemonic)},
	{"icon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(BasicOptionPaneUI$ButtonFactory, icon)},
	{"minimumWidth", "I", nullptr, $PRIVATE, $field(BasicOptionPaneUI$ButtonFactory, minimumWidth)},
	{}
};

$MethodInfo _BasicOptionPaneUI$ButtonFactory_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjavax/swing/Icon;I)V", nullptr, 0, $method(static_cast<void(BasicOptionPaneUI$ButtonFactory::*)($String*,int32_t,$Icon*,int32_t)>(&BasicOptionPaneUI$ButtonFactory::init$))},
	{"createButton", "()Ljavax/swing/JButton;", nullptr, 0},
	{}
};

$InnerClassInfo _BasicOptionPaneUI$ButtonFactory_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory", "javax.swing.plaf.basic.BasicOptionPaneUI", "ButtonFactory", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory$ConstrainedButton", "javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory", "ConstrainedButton", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicOptionPaneUI$ButtonFactory_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory",
	"java.lang.Object",
	nullptr,
	_BasicOptionPaneUI$ButtonFactory_FieldInfo_,
	_BasicOptionPaneUI$ButtonFactory_MethodInfo_,
	nullptr,
	nullptr,
	_BasicOptionPaneUI$ButtonFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicOptionPaneUI"
};

$Object* allocate$BasicOptionPaneUI$ButtonFactory($Class* clazz) {
	return $of($alloc(BasicOptionPaneUI$ButtonFactory));
}

void BasicOptionPaneUI$ButtonFactory::init$($String* text, int32_t mnemonic, $Icon* icon, int32_t minimumWidth) {
	this->minimumWidth = -1;
	$set(this, text, text);
	this->mnemonic = mnemonic;
	$set(this, icon, icon);
	this->minimumWidth = minimumWidth;
}

$JButton* BasicOptionPaneUI$ButtonFactory::createButton() {
	$var($JButton, button, nullptr);
	if (this->minimumWidth > 0) {
		$assign(button, $new($BasicOptionPaneUI$ButtonFactory$ConstrainedButton, this->text, this->minimumWidth));
	} else {
		$assign(button, $new($JButton, this->text));
	}
	if (this->icon != nullptr) {
		$nc(button)->setIcon(this->icon);
	}
	if (this->mnemonic != 0) {
		$nc(button)->setMnemonic(this->mnemonic);
	}
	return button;
}

BasicOptionPaneUI$ButtonFactory::BasicOptionPaneUI$ButtonFactory() {
}

$Class* BasicOptionPaneUI$ButtonFactory::load$($String* name, bool initialize) {
	$loadClass(BasicOptionPaneUI$ButtonFactory, name, initialize, &_BasicOptionPaneUI$ButtonFactory_ClassInfo_, allocate$BasicOptionPaneUI$ButtonFactory);
	return class$;
}

$Class* BasicOptionPaneUI$ButtonFactory::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax