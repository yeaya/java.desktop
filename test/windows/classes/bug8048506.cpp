#include <bug8048506.h>

#include <bug8048506$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8048506$1 = ::bug8048506$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$MethodInfo _bug8048506_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8048506::*)()>(&bug8048506::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8048506::createAndShowGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8048506::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8048506_InnerClassesInfo_[] = {
	{"bug8048506$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8048506_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8048506",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug8048506_MethodInfo_,
	nullptr,
	nullptr,
	_bug8048506_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8048506$1"
};

$Object* allocate$bug8048506($Class* clazz) {
	return $of($alloc(bug8048506));
}

void bug8048506::init$() {
}

void bug8048506::main($StringArray* args) {
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	$SwingUtilities::invokeAndWait($$new($bug8048506$1));
	$init($System);
	$nc($System::out)->println("The test passed"_s);
}

void bug8048506::createAndShowGUI() {
	$var($JFrame, frame, $new($JFrame, "bug8048506"_s));
	frame->setSize(400, 400);
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	frame->setVisible(true);
	$var($PopupFactory, factory, $PopupFactory::getSharedInstance());
	$var($Popup, popup1, $nc(factory)->getPopup(frame, $$new($JLabel, "Popup with owner"_s), 100, 100));
	$nc(popup1)->show();
	$var($Popup, popup2, factory->getPopup(nullptr, $$new($JLabel, "Popup without owner"_s), 200, 200));
	$nc(popup2)->show();
}

bug8048506::bug8048506() {
}

$Class* bug8048506::load$($String* name, bool initialize) {
	$loadClass(bug8048506, name, initialize, &_bug8048506_ClassInfo_, allocate$bug8048506);
	return class$;
}

$Class* bug8048506::class$ = nullptr;