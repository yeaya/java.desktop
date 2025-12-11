#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef SIMPLE_SCROLL_MODE

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JViewport = ::javax::swing::JViewport;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport, this$0)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport::*)($AquaTabbedPaneCopyFromBasicUI*)>(&AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "ScrollableTabViewport", $PRIVATE},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport",
	"javax.swing.JViewport",
	"javax.swing.plaf.UIResource",
	_AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport));
}

$String* AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport::toString() {
	 return this->$JViewport::toString();
}

int32_t AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport::hashCode() {
	 return this->$JViewport::hashCode();
}

bool AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport::equals(Object$* arg0) {
	 return this->$JViewport::equals(arg0);
}

$Object* AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport::clone() {
	 return this->$JViewport::clone();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport::finalize() {
	this->$JViewport::finalize();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
	$JViewport::init$();
	setName("TabbedPane.scrollableViewport"_s);
	setScrollMode($JViewport::SIMPLE_SCROLL_MODE);
	setOpaque($nc(this$0->tabPane)->isOpaque());
	$var($Color, bgColor, $UIManager::getColor("TabbedPane.tabAreaBackground"_s));
	if (bgColor == nullptr) {
		$assign(bgColor, $nc(this$0->tabPane)->getBackground());
	}
	setBackground(bgColor);
}

AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport::AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport_ClassInfo_, allocate$AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport::class$ = nullptr;

		} // laf
	} // apple
} // com