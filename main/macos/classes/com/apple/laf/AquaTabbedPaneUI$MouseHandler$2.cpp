#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler$2.h>

#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $AquaTabbedPaneUI$MouseHandler = ::com::apple::laf::AquaTabbedPaneUI$MouseHandler;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneUI$MouseHandler$2_FieldInfo_[] = {
	{"this$1", "Lcom/apple/laf/AquaTabbedPaneUI$MouseHandler;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$MouseHandler$2, this$1)},
	{"val$component", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$MouseHandler$2, val$component)},
	{}
};

$MethodInfo _AquaTabbedPaneUI$MouseHandler$2_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI$MouseHandler;Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(AquaTabbedPaneUI$MouseHandler$2::*)($AquaTabbedPaneUI$MouseHandler*,$Component*)>(&AquaTabbedPaneUI$MouseHandler$2::init$))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTabbedPaneUI$MouseHandler$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTabbedPaneUI$MouseHandler",
	"createMenuItem",
	"(I)Ljavax/swing/JMenuItem;"
};

$InnerClassInfo _AquaTabbedPaneUI$MouseHandler$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneUI$MouseHandler", "com.apple.laf.AquaTabbedPaneUI", "MouseHandler", 0},
	{"com.apple.laf.AquaTabbedPaneUI$MouseHandler$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTabbedPaneUI$MouseHandler$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneUI$MouseHandler$2",
	"javax.swing.JMenuItem",
	nullptr,
	_AquaTabbedPaneUI$MouseHandler$2_FieldInfo_,
	_AquaTabbedPaneUI$MouseHandler$2_MethodInfo_,
	nullptr,
	&_AquaTabbedPaneUI$MouseHandler$2_EnclosingMethodInfo_,
	_AquaTabbedPaneUI$MouseHandler$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneUI"
};

$Object* allocate$AquaTabbedPaneUI$MouseHandler$2($Class* clazz) {
	return $of($alloc(AquaTabbedPaneUI$MouseHandler$2));
}

void AquaTabbedPaneUI$MouseHandler$2::init$($AquaTabbedPaneUI$MouseHandler* this$1, $Component* val$component) {
	$set(this, this$1, this$1);
	$set(this, val$component, val$component);
	$JMenuItem::init$();
}

void AquaTabbedPaneUI$MouseHandler$2::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$JMenuItem::paintComponent(g);
	$var($Dimension, size, $nc(this->val$component)->getSize());
	$nc(this->val$component)->setSize($(getSize()));
	$nc(this->val$component)->validate();
	$nc(this->val$component)->paint(g);
	$nc(this->val$component)->setSize(size);
}

$Dimension* AquaTabbedPaneUI$MouseHandler$2::getPreferredSize() {
	return $nc(this->val$component)->getPreferredSize();
}

AquaTabbedPaneUI$MouseHandler$2::AquaTabbedPaneUI$MouseHandler$2() {
}

$Class* AquaTabbedPaneUI$MouseHandler$2::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneUI$MouseHandler$2, name, initialize, &_AquaTabbedPaneUI$MouseHandler$2_ClassInfo_, allocate$AquaTabbedPaneUI$MouseHandler$2);
	return class$;
}

$Class* AquaTabbedPaneUI$MouseHandler$2::class$ = nullptr;

		} // laf
	} // apple
} // com