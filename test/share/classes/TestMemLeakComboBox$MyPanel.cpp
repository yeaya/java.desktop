#include <TestMemLeakComboBox$MyPanel.h>

#include <TestMemLeakComboBox.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $TestMemLeakComboBox = ::TestMemLeakComboBox;
using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;

$MethodInfo _TestMemLeakComboBox$MyPanel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TestMemLeakComboBox$MyPanel::*)()>(&TestMemLeakComboBox$MyPanel::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"verifyChild", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(TestMemLeakComboBox$MyPanel::*)($Component*)>(&TestMemLeakComboBox$MyPanel::verifyChild))},
	{}
};

$InnerClassInfo _TestMemLeakComboBox$MyPanel_InnerClassesInfo_[] = {
	{"TestMemLeakComboBox$MyPanel", "TestMemLeakComboBox", "MyPanel", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TestMemLeakComboBox$MyPanel_ClassInfo_ = {
	$ACC_SUPER,
	"TestMemLeakComboBox$MyPanel",
	"javax.swing.JPanel",
	nullptr,
	nullptr,
	_TestMemLeakComboBox$MyPanel_MethodInfo_,
	nullptr,
	nullptr,
	_TestMemLeakComboBox$MyPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestMemLeakComboBox"
};

$Object* allocate$TestMemLeakComboBox$MyPanel($Class* clazz) {
	return $of($alloc(TestMemLeakComboBox$MyPanel));
}

void TestMemLeakComboBox$MyPanel::init$() {
	$JPanel::init$();
}

void TestMemLeakComboBox$MyPanel::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$JPanel::paint(g);
	{
		$var($ComponentArray, arr$, getComponents());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, child, arr$->get(i$));
			{
				verifyChild(child);
			}
		}
	}
}

void TestMemLeakComboBox$MyPanel::verifyChild($Component* c) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JComboBox, c)) {
		{
			$var($ComponentArray, arr$, $nc(($cast($Container, c)))->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, child, arr$->get(i$));
				{
					if ($instanceOf($CellRendererPane, child) && $nc(($cast($CellRendererPane, child)))->getComponentCount() > 0) {
						$init($TestMemLeakComboBox);
						$assignStatic($TestMemLeakComboBox::failed, $new($String, $$str({"CellRendererPane still has children for: "_s, c})));
					}
				}
			}
		}
	}
}

TestMemLeakComboBox$MyPanel::TestMemLeakComboBox$MyPanel() {
}

$Class* TestMemLeakComboBox$MyPanel::load$($String* name, bool initialize) {
	$loadClass(TestMemLeakComboBox$MyPanel, name, initialize, &_TestMemLeakComboBox$MyPanel_ClassInfo_, allocate$TestMemLeakComboBox$MyPanel);
	return class$;
}

$Class* TestMemLeakComboBox$MyPanel::class$ = nullptr;