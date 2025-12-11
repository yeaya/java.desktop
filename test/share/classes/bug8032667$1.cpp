#include <bug8032667$1.h>

#include <bug8032667$1$1.h>
#include <bug8032667.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Canvas.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Image.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef CENTER

using $bug8032667 = ::bug8032667;
using $bug8032667$1$1 = ::bug8032667$1$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Canvas = ::java::awt::Canvas;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;

$FieldInfo _bug8032667$1_FieldInfo_[] = {
	{"this$0", "Lbug8032667;", nullptr, $FINAL | $SYNTHETIC, $field(bug8032667$1, this$0)},
	{}
};

$MethodInfo _bug8032667$1_MethodInfo_[] = {
	{"<init>", "(Lbug8032667;)V", nullptr, 0, $method(static_cast<void(bug8032667$1::*)($bug8032667*)>(&bug8032667$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8032667$1_EnclosingMethodInfo_ = {
	"bug8032667",
	"init",
	"()V"
};

$InnerClassInfo _bug8032667$1_InnerClassesInfo_[] = {
	{"bug8032667$1", nullptr, nullptr, 0},
	{"bug8032667$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8032667$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8032667$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug8032667$1_FieldInfo_,
	_bug8032667$1_MethodInfo_,
	nullptr,
	&_bug8032667$1_EnclosingMethodInfo_,
	_bug8032667$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8032667"
};

$Object* allocate$bug8032667$1($Class* clazz) {
	return $of($alloc(bug8032667$1));
}

void bug8032667$1::init$($bug8032667* this$0) {
	$set(this, this$0, this$0);
}

void bug8032667$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($Image, image1, $bug8032667::getImage($(static_cast<$JComponent*>($bug8032667::getCheckBox("Deselected"_s, false)))));
	$var($Image, image2, $bug8032667::getImage($(static_cast<$JComponent*>($bug8032667::getCheckBox("Selected"_s, true)))));
	$var($Canvas, canvas, $new($bug8032667$1$1, this, image1, image2));
	$init($BorderLayout);
	$nc($(this->this$0->getContentPane()))->add(static_cast<$Component*>(canvas), $of($BorderLayout::CENTER));
}

bug8032667$1::bug8032667$1() {
}

$Class* bug8032667$1::load$($String* name, bool initialize) {
	$loadClass(bug8032667$1, name, initialize, &_bug8032667$1_ClassInfo_, allocate$bug8032667$1);
	return class$;
}

$Class* bug8032667$1::class$ = nullptr;