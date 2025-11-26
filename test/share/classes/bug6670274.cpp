#include <bug6670274.h>

#include <bug6670274$1.h>
#include <bug6670274$TestTabbedPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $bug6670274$1 = ::bug6670274$1;
using $bug6670274$TestTabbedPaneUI = ::bug6670274$TestTabbedPaneUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $View = ::javax::swing::text::View;

$MethodInfo _bug6670274_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6670274::*)()>(&bug6670274::init$))},
	{"check", "(Lbug6670274$TestTabbedPaneUI;[I)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($bug6670274$TestTabbedPaneUI*,$ints*)>(&bug6670274::check))},
	{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6670274::createGui))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6670274::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6670274_InnerClassesInfo_[] = {
	{"bug6670274$TestTabbedPaneUI", "bug6670274", "TestTabbedPaneUI", $STATIC},
	{"bug6670274$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6670274_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6670274",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6670274_MethodInfo_,
	nullptr,
	nullptr,
	_bug6670274_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6670274$TestTabbedPaneUI,bug6670274$1"
};

$Object* allocate$bug6670274($Class* clazz) {
	return $of($alloc(bug6670274));
}

void bug6670274::init$() {
}

void bug6670274::createGui() {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane, pane, $new($JTabbedPane));
	$var($bug6670274$TestTabbedPaneUI, ui, $new($bug6670274$TestTabbedPaneUI));
	pane->setUI(static_cast<$TabbedPaneUI*>(ui));
	pane->add("one"_s, static_cast<$Component*>($$new($JPanel)));
	pane->add("<html><i>Two</i></html>"_s, static_cast<$Component*>($$new($JPanel)));
	pane->add("three"_s, static_cast<$Component*>($$new($JPanel)));
	pane->setTitleAt(0, "<html><i>ONE</i></html>"_s);
	check(ui, $$new($ints, {
		0,
		1
	}));
	pane->setTitleAt(1, "hello"_s);
	check(ui, $$new($ints, {0}));
	pane->setTitleAt(0, "<html>html</html>"_s);
	pane->setTitleAt(2, "<html>html</html>"_s);
	check(ui, $$new($ints, {
		0,
		2
	}));
}

void bug6670274::check($bug6670274$TestTabbedPaneUI* ui, $ints* indices) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc($($nc(ui)->getTabbedPane()))->getTabCount(); ++i) {
		$nc($System::out)->print($$str({"Checking tab #"_s, $$str(i)}));
		$var($View, view, ui->getTextViewForTab(i));
		bool found = false;
		for (int32_t j = 0; j < $nc(indices)->length; ++j) {
			if (indices->get(j) == i) {
				found = true;
				break;
			}
		}
		$nc($System::out)->print($$str({"; view = "_s, view}));
		if (found) {
			if (view == nullptr) {
				$throwNew($RuntimeException, "View is unexpectedly null"_s);
			}
		} else if (view != nullptr) {
			$throwNew($RuntimeException, "View is unexpectedly not null"_s);
		}
		$nc($System::out)->println(" ok"_s);
	}
	$nc($System::out)->println(""_s);
}

void bug6670274::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6670274$1));
}

bug6670274::bug6670274() {
}

$Class* bug6670274::load$($String* name, bool initialize) {
	$loadClass(bug6670274, name, initialize, &_bug6670274_ClassInfo_, allocate$bug6670274);
	return class$;
}

$Class* bug6670274::class$ = nullptr;