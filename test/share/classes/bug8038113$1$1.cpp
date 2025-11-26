#include <bug8038113$1$1.h>

#include <bug8038113$1.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Stroke.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $bug8038113$1 = ::bug8038113$1;
using $BasicStroke = ::java::awt::BasicStroke;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Stroke = ::java::awt::Stroke;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;

$FieldInfo _bug8038113$1$1_FieldInfo_[] = {
	{"this$1", "Lbug8038113$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug8038113$1$1, this$1)},
	{"val$treeUI", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(bug8038113$1$1, val$treeUI)},
	{}
};

$MethodInfo _bug8038113$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug8038113$1;Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, 0, $method(static_cast<void(bug8038113$1$1::*)($bug8038113$1*,$BasicTreeUI*)>(&bug8038113$1$1::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8038113$1$1_EnclosingMethodInfo_ = {
	"bug8038113$1",
	"run",
	"()V"
};

$InnerClassInfo _bug8038113$1$1_InnerClassesInfo_[] = {
	{"bug8038113$1", nullptr, nullptr, 0},
	{"bug8038113$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8038113$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8038113$1$1",
	"javax.swing.JPanel",
	nullptr,
	_bug8038113$1$1_FieldInfo_,
	_bug8038113$1$1_MethodInfo_,
	nullptr,
	&_bug8038113$1$1_EnclosingMethodInfo_,
	_bug8038113$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8038113"
};

$Object* allocate$bug8038113$1$1($Class* clazz) {
	return $of($alloc(bug8038113$1$1));
}

void bug8038113$1$1::init$($bug8038113$1* this$1, $BasicTreeUI* val$treeUI) {
	$set(this, this$1, this$1);
	$set(this, val$treeUI, val$treeUI);
	$JPanel::init$();
}

void bug8038113$1$1::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$JPanel::paint(g);
	$var($Graphics2D, g2, $cast($Graphics2D, g));
	$nc(g2)->setStroke($$new($BasicStroke, 0.5f));
	g2->scale((double)2, (double)2);
	int32_t x = 10;
	int32_t y = 10;
	$var($Icon, collapsedIcon, $nc(this->val$treeUI)->getCollapsedIcon());
	$var($Icon, expandeIcon, $nc(this->val$treeUI)->getExpandedIcon());
	int32_t w = $nc(collapsedIcon)->getIconWidth();
	int32_t h = collapsedIcon->getIconHeight();
	collapsedIcon->paintIcon(this, g, x, y);
	$nc(g)->drawRect(x, y, w, h);
	y += 10 + h;
	w = $nc(expandeIcon)->getIconWidth();
	h = expandeIcon->getIconHeight();
	expandeIcon->paintIcon(this, g, x, y);
	g->drawRect(x, y, w, h);
}

bug8038113$1$1::bug8038113$1$1() {
}

$Class* bug8038113$1$1::load$($String* name, bool initialize) {
	$loadClass(bug8038113$1$1, name, initialize, &_bug8038113$1$1_ClassInfo_, allocate$bug8038113$1$1);
	return class$;
}

$Class* bug8038113$1$1::class$ = nullptr;