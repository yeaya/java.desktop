#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabButton.h>

#include <java/awt/Color.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$ScrollableTabButton_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$ScrollableTabButton, this$0)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$ScrollableTabButton_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;I)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTabbedPaneUI$ScrollableTabButton::*)($BasicTabbedPaneUI*,int32_t)>(&BasicTabbedPaneUI$ScrollableTabButton::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI$ScrollableTabButton_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabButton", "javax.swing.plaf.basic.BasicTabbedPaneUI", "ScrollableTabButton", $PRIVATE},
	{}
};

$ClassInfo _BasicTabbedPaneUI$ScrollableTabButton_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabButton",
	"javax.swing.plaf.basic.BasicArrowButton",
	"javax.swing.plaf.UIResource",
	_BasicTabbedPaneUI$ScrollableTabButton_FieldInfo_,
	_BasicTabbedPaneUI$ScrollableTabButton_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$ScrollableTabButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$ScrollableTabButton($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$ScrollableTabButton));
}

$String* BasicTabbedPaneUI$ScrollableTabButton::toString() {
	 return this->$BasicArrowButton::toString();
}

int32_t BasicTabbedPaneUI$ScrollableTabButton::hashCode() {
	 return this->$BasicArrowButton::hashCode();
}

bool BasicTabbedPaneUI$ScrollableTabButton::equals(Object$* arg0) {
	 return this->$BasicArrowButton::equals(arg0);
}

$Object* BasicTabbedPaneUI$ScrollableTabButton::clone() {
	 return this->$BasicArrowButton::clone();
}

void BasicTabbedPaneUI$ScrollableTabButton::finalize() {
	this->$BasicArrowButton::finalize();
}

void BasicTabbedPaneUI$ScrollableTabButton::init$($BasicTabbedPaneUI* this$0, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	int32_t var$0 = direction;
	$var($Color, var$1, $UIManager::getColor("TabbedPane.selected"_s));
	$var($Color, var$2, $UIManager::getColor("TabbedPane.shadow"_s));
	$var($Color, var$3, $UIManager::getColor("TabbedPane.darkShadow"_s));
	$BasicArrowButton::init$(var$0, var$1, var$2, var$3, $($UIManager::getColor("TabbedPane.highlight"_s)));
}

BasicTabbedPaneUI$ScrollableTabButton::BasicTabbedPaneUI$ScrollableTabButton() {
}

$Class* BasicTabbedPaneUI$ScrollableTabButton::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$ScrollableTabButton, name, initialize, &_BasicTabbedPaneUI$ScrollableTabButton_ClassInfo_, allocate$BasicTabbedPaneUI$ScrollableTabButton);
	return class$;
}

$Class* BasicTabbedPaneUI$ScrollableTabButton::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax