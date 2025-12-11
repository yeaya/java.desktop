#include <bug6670274$TestTabbedPaneUI.h>

#include <bug6670274.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $View = ::javax::swing::text::View;

$MethodInfo _bug6670274$TestTabbedPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6670274$TestTabbedPaneUI::*)()>(&bug6670274$TestTabbedPaneUI::init$))},
	{"getTabbedPane", "()Ljavax/swing/JTabbedPane;", nullptr, $PUBLIC},
	{"getTextViewForTab", "(I)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6670274$TestTabbedPaneUI_InnerClassesInfo_[] = {
	{"bug6670274$TestTabbedPaneUI", "bug6670274", "TestTabbedPaneUI", $STATIC},
	{}
};

$ClassInfo _bug6670274$TestTabbedPaneUI_ClassInfo_ = {
	$ACC_SUPER,
	"bug6670274$TestTabbedPaneUI",
	"javax.swing.plaf.basic.BasicTabbedPaneUI",
	nullptr,
	nullptr,
	_bug6670274$TestTabbedPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_bug6670274$TestTabbedPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6670274"
};

$Object* allocate$bug6670274$TestTabbedPaneUI($Class* clazz) {
	return $of($alloc(bug6670274$TestTabbedPaneUI));
}

void bug6670274$TestTabbedPaneUI::init$() {
	$BasicTabbedPaneUI::init$();
}

$View* bug6670274$TestTabbedPaneUI::getTextViewForTab(int32_t tabIndex) {
	return $BasicTabbedPaneUI::getTextViewForTab(tabIndex);
}

$JTabbedPane* bug6670274$TestTabbedPaneUI::getTabbedPane() {
	return this->tabPane;
}

bug6670274$TestTabbedPaneUI::bug6670274$TestTabbedPaneUI() {
}

$Class* bug6670274$TestTabbedPaneUI::load$($String* name, bool initialize) {
	$loadClass(bug6670274$TestTabbedPaneUI, name, initialize, &_bug6670274$TestTabbedPaneUI_ClassInfo_, allocate$bug6670274$TestTabbedPaneUI);
	return class$;
}

$Class* bug6670274$TestTabbedPaneUI::class$ = nullptr;