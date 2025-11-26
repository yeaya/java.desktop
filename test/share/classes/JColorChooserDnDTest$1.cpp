#include <JColorChooserDnDTest$1.h>

#include <JColorChooserDnDTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $JColorChooserDnDTest = ::JColorChooserDnDTest;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$MethodInfo _JColorChooserDnDTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JColorChooserDnDTest$1::*)()>(&JColorChooserDnDTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JColorChooserDnDTest$1_EnclosingMethodInfo_ = {
	"JColorChooserDnDTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _JColorChooserDnDTest$1_InnerClassesInfo_[] = {
	{"JColorChooserDnDTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JColorChooserDnDTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"JColorChooserDnDTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JColorChooserDnDTest$1_MethodInfo_,
	nullptr,
	&_JColorChooserDnDTest$1_EnclosingMethodInfo_,
	_JColorChooserDnDTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JColorChooserDnDTest"
};

$Object* allocate$JColorChooserDnDTest$1($Class* clazz) {
	return $of($alloc(JColorChooserDnDTest$1));
}

void JColorChooserDnDTest$1::init$() {
}

void JColorChooserDnDTest$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $new($JFrame));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel));
	$var($JColorChooser, colorChooser, $new($JColorChooser));
	colorChooser->setDragEnabled(true);
	panel->setBorder($($BorderFactory::createTitledBorder("JColorChoosers"_s)));
	panel->add(static_cast<$Component*>(colorChooser));
	frame->setContentPane(panel);
	frame->pack();
	frame->setVisible(true);
}

JColorChooserDnDTest$1::JColorChooserDnDTest$1() {
}

$Class* JColorChooserDnDTest$1::load$($String* name, bool initialize) {
	$loadClass(JColorChooserDnDTest$1, name, initialize, &_JColorChooserDnDTest$1_ClassInfo_, allocate$JColorChooserDnDTest$1);
	return class$;
}

$Class* JColorChooserDnDTest$1::class$ = nullptr;