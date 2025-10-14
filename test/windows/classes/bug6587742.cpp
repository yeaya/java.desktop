#include <bug6587742.h>

#include <bug6587742$TestPanel.h>
#include <java/awt/Container.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/SwingConstants.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $bug6587742$TestPanel = ::bug6587742$TestPanel;
using $Container = ::java::awt::Container;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JSlider = ::javax::swing::JSlider;
using $SwingConstants = ::javax::swing::SwingConstants;

$MethodInfo _bug6587742_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6587742::*)()>(&bug6587742::init$))},
	{"createSlider", "(ZLjava/lang/Boolean;ZZ)Ljavax/swing/JSlider;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JSlider*(*)(bool,$Boolean*,bool,bool)>(&bug6587742::createSlider))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6587742_InnerClassesInfo_[] = {
	{"bug6587742$TestPanel", "bug6587742", "TestPanel", $PRIVATE},
	{}
};

$ClassInfo _bug6587742_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6587742",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug6587742_MethodInfo_,
	nullptr,
	nullptr,
	_bug6587742_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6587742$TestPanel,bug6587742$TestPanel$1"
};

$Object* allocate$bug6587742($Class* clazz) {
	return $of($alloc(bug6587742));
}

void bug6587742::init$() {
	$JApplet::init$();
}

void bug6587742::init() {
	$var($bug6587742$TestPanel, panel, $new($bug6587742$TestPanel, this));
	setContentPane(panel);
}

$JSlider* bug6587742::createSlider(bool vertical, $Boolean* filled, bool enabled, bool inverted) {
	$init(bug6587742);
	$var($JSlider, result, $new($JSlider, vertical ? $SwingConstants::VERTICAL : $SwingConstants::HORIZONTAL, 0, 100, 50));
	result->setMajorTickSpacing(20);
	result->setMinorTickSpacing(5);
	result->setPaintTicks(true);
	result->setPaintLabels(true);
	result->setEnabled(enabled);
	if (filled != nullptr) {
		result->putClientProperty("JSlider.isFilled"_s, filled);
	}
	result->setInverted(inverted);
	result->setToolTipText($$str({"<html>vertical = "_s, $$str(vertical), "<br>enabled = "_s, $$str(enabled), "<br>filled = "_s, filled, "<br>inverted = "_s, $$str(inverted), "</html>"_s}));
	return result;
}

bug6587742::bug6587742() {
}

$Class* bug6587742::load$($String* name, bool initialize) {
	$loadClass(bug6587742, name, initialize, &_bug6587742_ClassInfo_, allocate$bug6587742);
	return class$;
}

$Class* bug6587742::class$ = nullptr;