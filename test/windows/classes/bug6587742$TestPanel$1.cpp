#include <bug6587742$TestPanel$1.h>

#include <bug6587742$TestPanel.h>
#include <bug6587742.h>
#include <java/applet/Applet.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Panel.h>
#include <java/awt/event/ItemEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <jcpp.h>

#undef ERROR_MESSAGE

using $bug6587742 = ::bug6587742;
using $bug6587742$TestPanel = ::bug6587742$TestPanel;
using $Applet = ::java::applet::Applet;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Panel = ::java::awt::Panel;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JPanel = ::javax::swing::JPanel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;

$FieldInfo _bug6587742$TestPanel$1_FieldInfo_[] = {
	{"this$1", "Lbug6587742$TestPanel;", nullptr, $FINAL | $SYNTHETIC, $field(bug6587742$TestPanel$1, this$1)},
	{"val$this$0", "Lbug6587742;", nullptr, $FINAL | $SYNTHETIC, $field(bug6587742$TestPanel$1, val$this$0)},
	{}
};

$MethodInfo _bug6587742$TestPanel$1_MethodInfo_[] = {
	{"<init>", "(Lbug6587742$TestPanel;Lbug6587742;)V", "()V", 0, $method(static_cast<void(bug6587742$TestPanel$1::*)($bug6587742$TestPanel*,$bug6587742*)>(&bug6587742$TestPanel$1::init$))},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6587742$TestPanel$1_EnclosingMethodInfo_ = {
	"bug6587742$TestPanel",
	"<init>",
	"(Lbug6587742;)V"
};

$InnerClassInfo _bug6587742$TestPanel$1_InnerClassesInfo_[] = {
	{"bug6587742$TestPanel", "bug6587742", "TestPanel", $PRIVATE},
	{"bug6587742$TestPanel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6587742$TestPanel$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6587742$TestPanel$1",
	"java.lang.Object",
	"java.awt.event.ItemListener",
	_bug6587742$TestPanel$1_FieldInfo_,
	_bug6587742$TestPanel$1_MethodInfo_,
	nullptr,
	&_bug6587742$TestPanel$1_EnclosingMethodInfo_,
	_bug6587742$TestPanel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6587742"
};

$Object* allocate$bug6587742$TestPanel$1($Class* clazz) {
	return $of($alloc(bug6587742$TestPanel$1));
}

void bug6587742$TestPanel$1::init$($bug6587742$TestPanel* this$1, $bug6587742* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
}

void bug6587742$TestPanel$1::itemStateChanged($ItemEvent* e) {
	$var($MetalTheme, theme, $cast($MetalTheme, $nc(this->this$1->cbThemes)->getSelectedItem()));
	if (theme != nullptr) {
		$MetalLookAndFeel::setCurrentTheme(theme);
		try {
			$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
		} catch ($UnsupportedLookAndFeelException&) {
			$var($UnsupportedLookAndFeelException, e1, $catch());
			$JOptionPane::showMessageDialog(this->this$1, $$str({"Can\'t change theme: "_s, $(e1->getMessage())}), "Error"_s, $JOptionPane::ERROR_MESSAGE);
			return;
		}
		$SwingUtilities::updateComponentTreeUI(this->this$1->this$0);
	}
}

bug6587742$TestPanel$1::bug6587742$TestPanel$1() {
}

$Class* bug6587742$TestPanel$1::load$($String* name, bool initialize) {
	$loadClass(bug6587742$TestPanel$1, name, initialize, &_bug6587742$TestPanel$1_ClassInfo_, allocate$bug6587742$TestPanel$1);
	return class$;
}

$Class* bug6587742$TestPanel$1::class$ = nullptr;