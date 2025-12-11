#include <bug6742358.h>

#include <bug6742358$TestPanel.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE
#undef HORIZONTAL
#undef VERTICAL

using $bug6742358$TestPanel = ::bug6742358$TestPanel;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JSlider = ::javax::swing::JSlider;
using $SwingConstants = ::javax::swing::SwingConstants;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;

$MethodInfo _bug6742358_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6742358::*)()>(&bug6742358::init$))},
	{"createSlider", "(ZZZZ)Ljavax/swing/JSlider;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JSlider*(*)(bool,bool,bool,bool)>(&bug6742358::createSlider))},
	{"init", "()V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6742358::main))},
	{}
};

$InnerClassInfo _bug6742358_InnerClassesInfo_[] = {
	{"bug6742358$TestPanel", "bug6742358", "TestPanel", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug6742358_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6742358",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug6742358_MethodInfo_,
	nullptr,
	nullptr,
	_bug6742358_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6742358$TestPanel"
};

$Object* allocate$bug6742358($Class* clazz) {
	return $of($alloc(bug6742358));
}

void bug6742358::init$() {
	$JApplet::init$();
}

void bug6742358::main($StringArray* args) {
	$init(bug6742358);
	$useLocalCurrentObjectStackCache();
	$MetalLookAndFeel::setCurrentTheme($$new($DefaultMetalTheme));
	$var($JFrame, frame, $new($JFrame));
	frame->setContentPane($$new($bug6742358$TestPanel));
	frame->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	frame->pack();
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
}

void bug6742358::init() {
	$useLocalCurrentObjectStackCache();
	$MetalLookAndFeel::setCurrentTheme($$new($DefaultMetalTheme));
	$var($bug6742358$TestPanel, panel, $new($bug6742358$TestPanel));
	setContentPane(panel);
}

$JSlider* bug6742358::createSlider(bool vertical, bool enabled, bool filled, bool inverted) {
	$init(bug6742358);
	$useLocalCurrentObjectStackCache();
	$var($JSlider, result, $new($JSlider, vertical ? $SwingConstants::VERTICAL : $SwingConstants::HORIZONTAL, 0, 10, 5));
	result->setEnabled(enabled);
	result->putClientProperty("JSlider.isFilled"_s, $($Boolean::valueOf(filled)));
	result->setInverted(inverted);
	result->setToolTipText($$str({"<html>vertical = "_s, $$str(vertical), "<br>enabled = "_s, $$str(enabled), "<br>filled = "_s, $$str(filled), "<br>inverted = "_s, $$str(inverted), "</html>"_s}));
	return result;
}

bug6742358::bug6742358() {
}

$Class* bug6742358::load$($String* name, bool initialize) {
	$loadClass(bug6742358, name, initialize, &_bug6742358_ClassInfo_, allocate$bug6742358);
	return class$;
}

$Class* bug6742358::class$ = nullptr;