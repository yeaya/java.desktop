#include <bug4987336$LafRadioButton.h>

#include <bug4987336$LafRadioButton$1.h>
#include <bug4987336.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug4987336 = ::bug4987336;
using $bug4987336$LafRadioButton$1 = ::bug4987336$LafRadioButton$1;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JRadioButton = ::javax::swing::JRadioButton;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$FieldInfo _bug4987336$LafRadioButton_FieldInfo_[] = {
	{"this$0", "Lbug4987336;", nullptr, $FINAL | $SYNTHETIC, $field(bug4987336$LafRadioButton, this$0)},
	{}
};

$MethodInfo _bug4987336$LafRadioButton_MethodInfo_[] = {
	{"<init>", "(Lbug4987336;Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4987336$LafRadioButton::*)($bug4987336*,$UIManager$LookAndFeelInfo*)>(&bug4987336$LafRadioButton::init$))},
	{}
};

$InnerClassInfo _bug4987336$LafRadioButton_InnerClassesInfo_[] = {
	{"bug4987336$LafRadioButton", "bug4987336", "LafRadioButton", $PRIVATE},
	{"bug4987336$LafRadioButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4987336$LafRadioButton_ClassInfo_ = {
	$ACC_SUPER,
	"bug4987336$LafRadioButton",
	"javax.swing.JRadioButton",
	nullptr,
	_bug4987336$LafRadioButton_FieldInfo_,
	_bug4987336$LafRadioButton_MethodInfo_,
	nullptr,
	nullptr,
	_bug4987336$LafRadioButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4987336"
};

$Object* allocate$bug4987336$LafRadioButton($Class* clazz) {
	return $of($alloc(bug4987336$LafRadioButton));
}

void bug4987336$LafRadioButton::init$($bug4987336* this$0, $UIManager$LookAndFeelInfo* lafInfo) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$var($String, var$0, $nc(lafInfo)->getName());
	$JRadioButton::init$(var$0, $nc($(lafInfo->getName()))->equals($($nc($($UIManager::getLookAndFeel()))->getName())));
	addActionListener($$new($bug4987336$LafRadioButton$1, this, this$0, lafInfo));
}

bug4987336$LafRadioButton::bug4987336$LafRadioButton() {
}

$Class* bug4987336$LafRadioButton::load$($String* name, bool initialize) {
	$loadClass(bug4987336$LafRadioButton, name, initialize, &_bug4987336$LafRadioButton_ClassInfo_, allocate$bug4987336$LafRadioButton);
	return class$;
}

$Class* bug4987336$LafRadioButton::class$ = nullptr;