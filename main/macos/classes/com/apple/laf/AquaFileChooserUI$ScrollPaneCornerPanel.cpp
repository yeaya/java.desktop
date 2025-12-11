#include <com/apple/laf/AquaFileChooserUI$ScrollPaneCornerPanel.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$ScrollPaneCornerPanel_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$ScrollPaneCornerPanel, this$0)},
	{"border", "Ljavax/swing/border/Border;", nullptr, $FINAL, $field(AquaFileChooserUI$ScrollPaneCornerPanel, border)},
	{}
};

$MethodInfo _AquaFileChooserUI$ScrollPaneCornerPanel_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$ScrollPaneCornerPanel::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$ScrollPaneCornerPanel::init$))},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaFileChooserUI$ScrollPaneCornerPanel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$ScrollPaneCornerPanel", "com.apple.laf.AquaFileChooserUI", "ScrollPaneCornerPanel", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$ScrollPaneCornerPanel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$ScrollPaneCornerPanel",
	"javax.swing.JPanel",
	nullptr,
	_AquaFileChooserUI$ScrollPaneCornerPanel_FieldInfo_,
	_AquaFileChooserUI$ScrollPaneCornerPanel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$ScrollPaneCornerPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$ScrollPaneCornerPanel($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$ScrollPaneCornerPanel));
}

void AquaFileChooserUI$ScrollPaneCornerPanel::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, border, $UIManager::getBorder("TableHeader.cellBorder"_s));
}

void AquaFileChooserUI$ScrollPaneCornerPanel::paintComponent($Graphics* g) {
	$var($Graphics, var$0, g);
	int32_t var$1 = getWidth() + 1;
	$nc(this->border)->paintBorder(this, var$0, 0, 0, var$1, getHeight());
}

AquaFileChooserUI$ScrollPaneCornerPanel::AquaFileChooserUI$ScrollPaneCornerPanel() {
}

$Class* AquaFileChooserUI$ScrollPaneCornerPanel::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$ScrollPaneCornerPanel, name, initialize, &_AquaFileChooserUI$ScrollPaneCornerPanel_ClassInfo_, allocate$AquaFileChooserUI$ScrollPaneCornerPanel);
	return class$;
}

$Class* AquaFileChooserUI$ScrollPaneCornerPanel::class$ = nullptr;

		} // laf
	} // apple
} // com