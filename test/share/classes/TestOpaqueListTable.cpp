#include <TestOpaqueListTable.h>

#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/JTree.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef LF

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JTable = ::javax::swing::JTable;
using $JToolTip = ::javax::swing::JToolTip;
using $JTree = ::javax::swing::JTree;
using $JViewport = ::javax::swing::JViewport;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestOpaqueListTable$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestOpaqueListTable$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestOpaqueListTable::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestOpaqueListTable$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestOpaqueListTable$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestOpaqueListTable$$Lambda$lambda$main$0::*)()>(&TestOpaqueListTable$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestOpaqueListTable$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestOpaqueListTable$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestOpaqueListTable$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestOpaqueListTable$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestOpaqueListTable$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _TestOpaqueListTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestOpaqueListTable::*)()>(&TestOpaqueListTable::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestOpaqueListTable::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestOpaqueListTable::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestOpaqueListTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestOpaqueListTable",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestOpaqueListTable_MethodInfo_
};

$Object* allocate$TestOpaqueListTable($Class* clazz) {
	return $of($alloc(TestOpaqueListTable));
}

void TestOpaqueListTable::init$() {
}

void TestOpaqueListTable::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($UIManager$LookAndFeelInfoArray, installedLookAndFeels, nullptr);
	$assign(installedLookAndFeels, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, installedLookAndFeels);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, LF, arr$->get(i$));
			{
				try {
					$UIManager::setLookAndFeel($($nc(LF)->getClassName()));
					$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestOpaqueListTable$$Lambda$lambda$main$0)));
				} catch ($UnsupportedLookAndFeelException& e) {
					$nc($System::out)->println($$str({"Note: LookAndFeel "_s, $($nc(LF)->getClassName()), " is not supported on this configuration"_s}));
				}
			}
		}
	}
}

void TestOpaqueListTable::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$var($JList, list, $new($JList));
	$var($JTable, table, $new($JTable));
	$var($JTree, tree, $new($JTree));
	$var($JToolTip, toolTip, $new($JToolTip));
	$var($JViewport, viewport, $new($JViewport));
	$var($String, opaqueValue, $new($String, " "_s));
	if (!list->isOpaque()) {
		$plusAssign(opaqueValue, "JList, "_s);
	}
	if (!table->isOpaque()) {
		$plusAssign(opaqueValue, "JTable, "_s);
	}
	if (!tree->isOpaque()) {
		$plusAssign(opaqueValue, "JTree, "_s);
	}
	if (!toolTip->isOpaque()) {
		$plusAssign(opaqueValue, "JToolTip, "_s);
	}
	if (!viewport->isOpaque()) {
		$plusAssign(opaqueValue, "JViewport, "_s);
	}
	if (!opaqueValue->equals(" "_s)) {
		$throwNew($RuntimeException, $$str({"Default value of \"opaque\" property for "_s, opaqueValue, " is changed "_s}));
	}
	$LookAndFeel::installProperty(list, "opaque"_s, $($Boolean::valueOf(false)));
	$LookAndFeel::installProperty(table, "opaque"_s, $($Boolean::valueOf(false)));
	$LookAndFeel::installProperty(tree, "opaque"_s, $($Boolean::valueOf(false)));
	$LookAndFeel::installProperty(toolTip, "opaque"_s, $($Boolean::valueOf(false)));
	$LookAndFeel::installProperty(viewport, "opaque"_s, $($Boolean::valueOf(false)));
	$assign(opaqueValue, " "_s);
	if (list->isOpaque()) {
		$plusAssign(opaqueValue, "JList, "_s);
	}
	if (table->isOpaque()) {
		$plusAssign(opaqueValue, "JTable, "_s);
	}
	if (tree->isOpaque()) {
		$plusAssign(opaqueValue, "JTree, "_s);
	}
	if (toolTip->isOpaque()) {
		$plusAssign(opaqueValue, "JToolTip, "_s);
	}
	if (viewport->isOpaque()) {
		$plusAssign(opaqueValue, "JViewport, "_s);
	}
	if (!opaqueValue->equals(" "_s)) {
		$throwNew($RuntimeException, $$str({"setUIProperty failed to clear "_s, opaqueValue, " opaque when opaque is not set by client"_s}));
	}
	list->setOpaque(true);
	table->setOpaque(true);
	tree->setOpaque(true);
	toolTip->setOpaque(true);
	viewport->setOpaque(true);
	$LookAndFeel::installProperty(list, "opaque"_s, $($Boolean::valueOf(false)));
	$LookAndFeel::installProperty(table, "opaque"_s, $($Boolean::valueOf(false)));
	$LookAndFeel::installProperty(tree, "opaque"_s, $($Boolean::valueOf(false)));
	$LookAndFeel::installProperty(toolTip, "opaque"_s, $($Boolean::valueOf(false)));
	$LookAndFeel::installProperty(viewport, "opaque"_s, $($Boolean::valueOf(false)));
	$assign(opaqueValue, " "_s);
	if (!list->isOpaque()) {
		$plusAssign(opaqueValue, "JList"_s);
	}
	if (!table->isOpaque()) {
		$plusAssign(opaqueValue, "JTable"_s);
	}
	if (!tree->isOpaque()) {
		$plusAssign(opaqueValue, "JTree"_s);
	}
	if (!toolTip->isOpaque()) {
		$plusAssign(opaqueValue, "JToolTip"_s);
	}
	if (!viewport->isOpaque()) {
		$plusAssign(opaqueValue, "JViewport"_s);
	}
	if (!opaqueValue->equals(" "_s)) {
		$throwNew($RuntimeException, $$str({"setUIProperty cleared the "_s, opaqueValue, " Opaque when opaque is set by client"_s}));
	}
}

TestOpaqueListTable::TestOpaqueListTable() {
}

$Class* TestOpaqueListTable::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestOpaqueListTable$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestOpaqueListTable$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(TestOpaqueListTable, name, initialize, &_TestOpaqueListTable_ClassInfo_, allocate$TestOpaqueListTable);
	return class$;
}

$Class* TestOpaqueListTable::class$ = nullptr;