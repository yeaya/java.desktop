#include <bug4987336$LafRadioButton$1.h>

#include <bug4987336$LafRadioButton.h>
#include <bug4987336.h>
#include <java/applet/Applet.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Panel.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug4987336 = ::bug4987336;
using $bug4987336$LafRadioButton = ::bug4987336$LafRadioButton;
using $Applet = ::java::applet::Applet;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Panel = ::java::awt::Panel;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$FieldInfo _bug4987336$LafRadioButton$1_FieldInfo_[] = {
	{"this$1", "Lbug4987336$LafRadioButton;", nullptr, $FINAL | $SYNTHETIC, $field(bug4987336$LafRadioButton$1, this$1)},
	{"val$lafInfo", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $FINAL | $SYNTHETIC, $field(bug4987336$LafRadioButton$1, val$lafInfo)},
	{"val$this$0", "Lbug4987336;", nullptr, $FINAL | $SYNTHETIC, $field(bug4987336$LafRadioButton$1, val$this$0)},
	{}
};

$MethodInfo _bug4987336$LafRadioButton$1_MethodInfo_[] = {
	{"<init>", "(Lbug4987336$LafRadioButton;Lbug4987336;Ljavax/swing/UIManager$LookAndFeelInfo;)V", "()V", 0, $method(static_cast<void(bug4987336$LafRadioButton$1::*)($bug4987336$LafRadioButton*,$bug4987336*,$UIManager$LookAndFeelInfo*)>(&bug4987336$LafRadioButton$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4987336$LafRadioButton$1_EnclosingMethodInfo_ = {
	"bug4987336$LafRadioButton",
	"<init>",
	"(Lbug4987336;Ljavax/swing/UIManager$LookAndFeelInfo;)V"
};

$InnerClassInfo _bug4987336$LafRadioButton$1_InnerClassesInfo_[] = {
	{"bug4987336$LafRadioButton", "bug4987336", "LafRadioButton", $PRIVATE},
	{"bug4987336$LafRadioButton$1", nullptr, nullptr, 0},
	{"javax.swing.UIManager$LookAndFeelInfo", "javax.swing.UIManager", "LookAndFeelInfo", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _bug4987336$LafRadioButton$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4987336$LafRadioButton$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_bug4987336$LafRadioButton$1_FieldInfo_,
	_bug4987336$LafRadioButton$1_MethodInfo_,
	nullptr,
	&_bug4987336$LafRadioButton$1_EnclosingMethodInfo_,
	_bug4987336$LafRadioButton$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4987336"
};

$Object* allocate$bug4987336$LafRadioButton$1($Class* clazz) {
	return $of($alloc(bug4987336$LafRadioButton$1));
}

void bug4987336$LafRadioButton$1::init$($bug4987336$LafRadioButton* this$1, $bug4987336* val$this$0, $UIManager$LookAndFeelInfo* val$lafInfo) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
	$set(this, val$lafInfo, val$lafInfo);
}

void bug4987336$LafRadioButton$1::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(this->val$lafInfo)->getClassName()));
		$SwingUtilities::updateComponentTreeUI(this->this$1->this$0);
	} catch ($Exception& ex) {
		$nc($System::out)->println($$str({"Cannot set LAF "_s, $($nc(this->val$lafInfo)->getName())}));
	}
}

bug4987336$LafRadioButton$1::bug4987336$LafRadioButton$1() {
}

$Class* bug4987336$LafRadioButton$1::load$($String* name, bool initialize) {
	$loadClass(bug4987336$LafRadioButton$1, name, initialize, &_bug4987336$LafRadioButton$1_ClassInfo_, allocate$bug4987336$LafRadioButton$1);
	return class$;
}

$Class* bug4987336$LafRadioButton$1::class$ = nullptr;