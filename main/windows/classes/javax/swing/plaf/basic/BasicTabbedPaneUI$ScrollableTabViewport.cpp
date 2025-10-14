#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabViewport.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

#undef SIMPLE_SCROLL_MODE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JViewport = ::javax::swing::JViewport;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$ScrollableTabViewport_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$ScrollableTabViewport, this$0)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$ScrollableTabViewport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTabbedPaneUI$ScrollableTabViewport::*)($BasicTabbedPaneUI*)>(&BasicTabbedPaneUI$ScrollableTabViewport::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI$ScrollableTabViewport_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabViewport", "javax.swing.plaf.basic.BasicTabbedPaneUI", "ScrollableTabViewport", $PRIVATE},
	{}
};

$ClassInfo _BasicTabbedPaneUI$ScrollableTabViewport_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabViewport",
	"javax.swing.JViewport",
	"javax.swing.plaf.UIResource",
	_BasicTabbedPaneUI$ScrollableTabViewport_FieldInfo_,
	_BasicTabbedPaneUI$ScrollableTabViewport_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$ScrollableTabViewport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$ScrollableTabViewport($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$ScrollableTabViewport));
}

$String* BasicTabbedPaneUI$ScrollableTabViewport::toString() {
	 return this->$JViewport::toString();
}

int32_t BasicTabbedPaneUI$ScrollableTabViewport::hashCode() {
	 return this->$JViewport::hashCode();
}

bool BasicTabbedPaneUI$ScrollableTabViewport::equals(Object$* arg0) {
	 return this->$JViewport::equals(arg0);
}

$Object* BasicTabbedPaneUI$ScrollableTabViewport::clone() {
	 return this->$JViewport::clone();
}

void BasicTabbedPaneUI$ScrollableTabViewport::finalize() {
	this->$JViewport::finalize();
}

void BasicTabbedPaneUI$ScrollableTabViewport::init$($BasicTabbedPaneUI* this$0) {
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

BasicTabbedPaneUI$ScrollableTabViewport::BasicTabbedPaneUI$ScrollableTabViewport() {
}

$Class* BasicTabbedPaneUI$ScrollableTabViewport::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$ScrollableTabViewport, name, initialize, &_BasicTabbedPaneUI$ScrollableTabViewport_ClassInfo_, allocate$BasicTabbedPaneUI$ScrollableTabViewport);
	return class$;
}

$Class* BasicTabbedPaneUI$ScrollableTabViewport::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax