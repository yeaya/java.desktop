#include <PrintManualTest_FitWidthMultiple$1.h>

#include <PrintManualTest_FitWidthMultiple$1$1.h>
#include <PrintManualTest_FitWidthMultiple$1$2.h>
#include <PrintManualTest_FitWidthMultiple$1$3.h>
#include <PrintManualTest_FitWidthMultiple$1$4.h>
#include <PrintManualTest_FitWidthMultiple.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/text/MessageFormat.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef CENTER
#undef LANDSCAPE
#undef SOUTH
#undef WHEN_IN_FOCUSED_WINDOW

using $PrintManualTest_FitWidthMultiple = ::PrintManualTest_FitWidthMultiple;
using $PrintManualTest_FitWidthMultiple$1$1 = ::PrintManualTest_FitWidthMultiple$1$1;
using $PrintManualTest_FitWidthMultiple$1$2 = ::PrintManualTest_FitWidthMultiple$1$2;
using $PrintManualTest_FitWidthMultiple$1$3 = ::PrintManualTest_FitWidthMultiple$1$3;
using $PrintManualTest_FitWidthMultiple$1$4 = ::PrintManualTest_FitWidthMultiple$1$4;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $MessageFormat = ::java::text::MessageFormat;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $Attribute = ::javax::print::attribute::Attribute;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JRootPane = ::javax::swing::JRootPane;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $KeyStroke = ::javax::swing::KeyStroke;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $TableModel = ::javax::swing::table::TableModel;

class PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0 : public $ActionListener {
	$class(PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(PrintManualTest_FitWidthMultiple$1* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0>());
	}
	PrintManualTest_FitWidthMultiple$1* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0, inst$)},
	{}
};
$MethodInfo PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0::methodInfos[3] = {
	{"<init>", "(LPrintManualTest_FitWidthMultiple$1;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0::*)(PrintManualTest_FitWidthMultiple$1*)>(&PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$loadClass(PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0::class$ = nullptr;

class PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1 : public $ActionListener {
	$class(PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(PrintManualTest_FitWidthMultiple$1* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$1(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1>());
	}
	PrintManualTest_FitWidthMultiple$1* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1, inst$)},
	{}
};
$MethodInfo PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1::methodInfos[3] = {
	{"<init>", "(LPrintManualTest_FitWidthMultiple$1;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1::*)(PrintManualTest_FitWidthMultiple$1*)>(&PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1::load$($String* name, bool initialize) {
	$loadClass(PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1::class$ = nullptr;

$FieldInfo _PrintManualTest_FitWidthMultiple$1_FieldInfo_[] = {
	{"this$0", "LPrintManualTest_FitWidthMultiple;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1, this$0)},
	{"val$footer", "Ljava/text/MessageFormat;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1, val$footer)},
	{"val$header", "Ljava/text/MessageFormat;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1, val$header)},
	{}
};

$MethodInfo _PrintManualTest_FitWidthMultiple$1_MethodInfo_[] = {
	{"<init>", "(LPrintManualTest_FitWidthMultiple;Ljava/text/MessageFormat;Ljava/text/MessageFormat;)V", "()V", 0, $method(static_cast<void(PrintManualTest_FitWidthMultiple$1::*)($PrintManualTest_FitWidthMultiple*,$MessageFormat*,$MessageFormat*)>(&PrintManualTest_FitWidthMultiple$1::init$))},
	{"lambda$run$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(PrintManualTest_FitWidthMultiple$1::*)($ActionEvent*)>(&PrintManualTest_FitWidthMultiple$1::lambda$run$0))},
	{"lambda$run$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(PrintManualTest_FitWidthMultiple$1::*)($ActionEvent*)>(&PrintManualTest_FitWidthMultiple$1::lambda$run$1))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PrintManualTest_FitWidthMultiple$1_EnclosingMethodInfo_ = {
	"PrintManualTest_FitWidthMultiple",
	"createUIandTest",
	"()V"
};

$InnerClassInfo _PrintManualTest_FitWidthMultiple$1_InnerClassesInfo_[] = {
	{"PrintManualTest_FitWidthMultiple$1", nullptr, nullptr, 0},
	{"PrintManualTest_FitWidthMultiple$1$4", nullptr, nullptr, 0},
	{"PrintManualTest_FitWidthMultiple$1$3", nullptr, nullptr, 0},
	{"PrintManualTest_FitWidthMultiple$1$2", nullptr, nullptr, 0},
	{"PrintManualTest_FitWidthMultiple$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintManualTest_FitWidthMultiple$1_ClassInfo_ = {
	$ACC_SUPER,
	"PrintManualTest_FitWidthMultiple$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_PrintManualTest_FitWidthMultiple$1_FieldInfo_,
	_PrintManualTest_FitWidthMultiple$1_MethodInfo_,
	nullptr,
	&_PrintManualTest_FitWidthMultiple$1_EnclosingMethodInfo_,
	_PrintManualTest_FitWidthMultiple$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrintManualTest_FitWidthMultiple"
};

$Object* allocate$PrintManualTest_FitWidthMultiple$1($Class* clazz) {
	return $of($alloc(PrintManualTest_FitWidthMultiple$1));
}

void PrintManualTest_FitWidthMultiple$1::init$($PrintManualTest_FitWidthMultiple* this$0, $MessageFormat* val$header, $MessageFormat* val$footer) {
	$set(this, this$0, this$0);
	$set(this, val$header, val$header);
	$set(this, val$footer, val$footer);
}

void PrintManualTest_FitWidthMultiple$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, info, " \nThis test case brings up JTable with more Columns and Rows \nPress the Print Button. It Prints in PRINT_MODE_FIT_WIDTH \nIt Pops up the Print Dialog. Check if Job/Print Attributes in the\nPrint Dialog are configurable. Default Print out will be in Landscape \nThe Print out should have JTable Centered on the Print out with thin borders \nPrints out with Header and Footer. \nThe JTable should have all columns printed within border"_s);
	$init($PrintManualTest_FitWidthMultiple);
	$assignStatic($PrintManualTest_FitWidthMultiple::instructFrame, $new($JFrame, "PrintManualTest_NormalSingle"_s));
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$var($JButton, button1, $new($JButton, "Pass"_s));
	$var($JButton, button2, $new($JButton, "Fail"_s));
	button1->addActionListener(static_cast<$ActionListener*>($$new(PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0, this)));
	button2->addActionListener(static_cast<$ActionListener*>($$new(PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1, this)));
	$var($JPanel, btnpanel1, $new($JPanel));
	btnpanel1->add(static_cast<$Component*>(button1));
	btnpanel1->add(static_cast<$Component*>(button2));
	$init($BorderLayout);
	panel->add($(static_cast<$Component*>(this->this$0->addInfo(info))), $of($BorderLayout::CENTER));
	panel->add(static_cast<$Component*>(btnpanel1), $of($BorderLayout::SOUTH));
	$nc($($nc($PrintManualTest_FitWidthMultiple::instructFrame)->getContentPane()))->add(static_cast<$Component*>(panel));
	$nc($PrintManualTest_FitWidthMultiple::instructFrame)->setBounds(600, 100, 350, 350);
	$var($JButton, printButton, $new($JButton, "Print"_s));
	$var($TableModel, datamodel, $new($PrintManualTest_FitWidthMultiple$1$1, this));
	$var($JTable, table, $new($JTable, datamodel));
	$var($JScrollPane, scrollpane, $new($JScrollPane, table));
	$assignStatic($PrintManualTest_FitWidthMultiple::fr, $new($JFrame, "PrintManualTest_FitWidthMultiple"_s));
	$nc($($nc($PrintManualTest_FitWidthMultiple::fr)->getContentPane()))->add(static_cast<$Component*>(scrollpane));
	$var($JPanel, btnpanel, $new($JPanel));
	btnpanel->add(static_cast<$Component*>(printButton));
	$nc($($nc($PrintManualTest_FitWidthMultiple::fr)->getContentPane()))->add(static_cast<$Component*>(btnpanel), $of($BorderLayout::SOUTH));
	$nc($PrintManualTest_FitWidthMultiple::fr)->setBounds(0, 0, 400, 400);
	$nc($PrintManualTest_FitWidthMultiple::fr)->setSize(500, 500);
	$nc($($nc($($nc($PrintManualTest_FitWidthMultiple::fr)->getRootPane()))->getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW)))->put($($KeyStroke::getKeyStroke("ctrl P"_s)), "printButton"_s);
	$nc($($nc($($nc($PrintManualTest_FitWidthMultiple::fr)->getRootPane()))->getActionMap()))->put("printButton"_s, $$new($PrintManualTest_FitWidthMultiple$1$2, this, printButton));
	$nc($PrintManualTest_FitWidthMultiple::fr)->addWindowListener($$new($PrintManualTest_FitWidthMultiple$1$3, this));
	$var($PrintRequestAttributeSet, prattr, $new($HashPrintRequestAttributeSet));
	$init($OrientationRequested);
	prattr->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($OrientationRequested::LANDSCAPE)));
	printButton->addActionListener($$new($PrintManualTest_FitWidthMultiple$1$4, this, table, prattr));
	$nc($PrintManualTest_FitWidthMultiple::instructFrame)->setVisible(true);
	$nc($PrintManualTest_FitWidthMultiple::fr)->setVisible(true);
}

void PrintManualTest_FitWidthMultiple$1::lambda$run$1($ActionEvent* e) {
	$init($PrintManualTest_FitWidthMultiple);
	$PrintManualTest_FitWidthMultiple::testPassed = false;
	this->this$0->dispose();
	$nc(this->this$0->latch)->countDown();
}

void PrintManualTest_FitWidthMultiple$1::lambda$run$0($ActionEvent* e) {
	$init($PrintManualTest_FitWidthMultiple);
	$PrintManualTest_FitWidthMultiple::testPassed = true;
	this->this$0->dispose();
	$nc(this->this$0->latch)->countDown();
}

PrintManualTest_FitWidthMultiple$1::PrintManualTest_FitWidthMultiple$1() {
}

$Class* PrintManualTest_FitWidthMultiple$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0::classInfo$.name)) {
			return PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$0::load$(name, initialize);
		}
		if (name->equals(PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1::classInfo$.name)) {
			return PrintManualTest_FitWidthMultiple$1$$Lambda$lambda$run$1$1::load$(name, initialize);
		}
	}
	$loadClass(PrintManualTest_FitWidthMultiple$1, name, initialize, &_PrintManualTest_FitWidthMultiple$1_ClassInfo_, allocate$PrintManualTest_FitWidthMultiple$1);
	return class$;
}

$Class* PrintManualTest_FitWidthMultiple$1::class$ = nullptr;