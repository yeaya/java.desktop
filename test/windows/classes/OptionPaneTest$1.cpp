#include <OptionPaneTest$1.h>

#include <OptionPaneTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <java/awt/Window.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef DEFAULT_OPTION
#undef INFORMATION_MESSAGE

using $OptionPaneTest = ::OptionPaneTest;
using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Insets = ::java::awt::Insets;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JPanel = ::javax::swing::JPanel;

$MethodInfo _OptionPaneTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OptionPaneTest$1::*)()>(&OptionPaneTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _OptionPaneTest$1_EnclosingMethodInfo_ = {
	"OptionPaneTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _OptionPaneTest$1_InnerClassesInfo_[] = {
	{"OptionPaneTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OptionPaneTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"OptionPaneTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_OptionPaneTest$1_MethodInfo_,
	nullptr,
	&_OptionPaneTest$1_EnclosingMethodInfo_,
	_OptionPaneTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OptionPaneTest"
};

$Object* allocate$OptionPaneTest$1($Class* clazz) {
	return $of($alloc(OptionPaneTest$1));
}

void OptionPaneTest$1::init$() {
}

void OptionPaneTest$1::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($JOptionPane, optionPane, $new($JOptionPane, "JOptionPane"_s, $JOptionPane::INFORMATION_MESSAGE, $JOptionPane::DEFAULT_OPTION, nullptr, $$new($StringArray, {
				"3"_s,
				"2"_s,
				"1"_s
			}), nullptr));
			$init($OptionPaneTest);
			$assignStatic($OptionPaneTest::dialog, optionPane->createDialog("JOptionPane"_s));
			int32_t width = 0;
			$var($ComponentArray, comps, optionPane->getComponents());
			{
				$var($ComponentArray, arr$, comps);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Component, comp, arr$->get(i$));
					{
						if ($instanceOf($JPanel, comp)) {
							$var($ComponentArray, child, $nc(($cast($JPanel, comp)))->getComponents());
							{
								$var($ComponentArray, arr$, child);
								int32_t len$ = arr$->length;
								int32_t i$ = 0;
								for (; i$ < len$; ++i$) {
									$var($Component, c, arr$->get(i$));
									{
										if ($instanceOf($JButton, c)) {
											width += $nc(c)->getWidth();
										}
									}
								}
							}
						}
					}
				}
			}
			$var($Insets, in, optionPane->getInsets());
			width += $nc(in)->left + in->right;
			if (width > optionPane->getWidth()) {
				$OptionPaneTest::testFailed = true;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init($OptionPaneTest);
			$nc($OptionPaneTest::dialog)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

OptionPaneTest$1::OptionPaneTest$1() {
}

$Class* OptionPaneTest$1::load$($String* name, bool initialize) {
	$loadClass(OptionPaneTest$1, name, initialize, &_OptionPaneTest$1_ClassInfo_, allocate$OptionPaneTest$1);
	return class$;
}

$Class* OptionPaneTest$1::class$ = nullptr;