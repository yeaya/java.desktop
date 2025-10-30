#include <TAB.h>

#include <TAB$1.h>
#include <TAB$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef AUTO_RESIZE_OFF
#undef LOWERED
#undef RIGHT
#undef TAB

using $TAB$1 = ::TAB$1;
using $TAB$2 = ::TAB$2;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JApplet = ::javax::swing::JApplet;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $Border = ::javax::swing::border::Border;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableModel = ::javax::swing::table::TableModel;

class TAB$$Lambda$lambda$init$0 : public $Runnable {
	$class(TAB$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TAB* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$init$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TAB$$Lambda$lambda$init$0>());
	}
	TAB* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TAB$$Lambda$lambda$init$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TAB$$Lambda$lambda$init$0, inst$)},
	{}
};
$MethodInfo TAB$$Lambda$lambda$init$0::methodInfos[3] = {
	{"<init>", "(LTAB;)V", nullptr, $PUBLIC, $method(static_cast<void(TAB$$Lambda$lambda$init$0::*)(TAB*)>(&TAB$$Lambda$lambda$init$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TAB$$Lambda$lambda$init$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TAB$$Lambda$lambda$init$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TAB$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$loadClass(TAB$$Lambda$lambda$init$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TAB$$Lambda$lambda$init$0::class$ = nullptr;

$MethodInfo _TAB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TAB::*)()>(&TAB::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{"initTest", "(Ljava/awt/Container;)V", nullptr, $STATIC, $method(static_cast<void(*)($Container*)>(&TAB::initTest))},
	{"lambda$init$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TAB::*)()>(&TAB::lambda$init$0))},
	{}
};

$InnerClassInfo _TAB_InnerClassesInfo_[] = {
	{"TAB$2", nullptr, nullptr, 0},
	{"TAB$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TAB_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TAB",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_TAB_MethodInfo_,
	nullptr,
	nullptr,
	_TAB_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TAB$2,TAB$1"
};

$Object* allocate$TAB($Class* clazz) {
	return $of($alloc(TAB));
}

void TAB::init$() {
	$JApplet::init$();
}

void TAB::initTest($Container* contentPane) {
	$init(TAB);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, names, $new($StringArray, {
		"First Name"_s,
		"Last Name"_s,
		"Favorite Color"_s,
		"Favorite Number"_s,
		"Vegetarian"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Mark"_s),
			$of("Andrews"_s),
			$of("Red"_s),
			$of($$new($Integer, 2)),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Tom"_s),
			$of("Ball"_s),
			$of("Blue"_s),
			$of($$new($Integer, 99)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Alan"_s),
			$of("Chung"_s),
			$of("Green"_s),
			$of($$new($Integer, 838)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Jeff"_s),
			$of("Dinkins"_s),
			$of("Turquois"_s),
			$of($$new($Integer, 8)),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Amy"_s),
			$of("Fowler"_s),
			$of("Yellow"_s),
			$of($$new($Integer, 3)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Brian"_s),
			$of("Gerhold"_s),
			$of("Green"_s),
			$of($$new($Integer, 0)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("James"_s),
			$of("Gosling"_s),
			$of("Pink"_s),
			$of($$new($Integer, 21)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("David"_s),
			$of("Karlton"_s),
			$of("Red"_s),
			$of($$new($Integer, 1)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Dave"_s),
			$of("Kloba"_s),
			$of("Yellow"_s),
			$of($$new($Integer, 14)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Peter"_s),
			$of("Korn"_s),
			$of("Purple"_s),
			$of($$new($Integer, 12)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Phil"_s),
			$of("Milne"_s),
			$of("Purple"_s),
			$of($$new($Integer, 3)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Dave"_s),
			$of("Moore"_s),
			$of("Green"_s),
			$of($$new($Integer, 88)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Muller"_s),
			$of("Maroon"_s),
			$of($$new($Integer, 5)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Rick"_s),
			$of("Levenson"_s),
			$of("Blue"_s),
			$of($$new($Integer, 2)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Tim"_s),
			$of("Prinzing"_s),
			$of("Blue"_s),
			$of($$new($Integer, 22)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Chester"_s),
			$of("Rose"_s),
			$of("Black"_s),
			$of($$new($Integer, 0)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Ray"_s),
			$of("Ryan"_s),
			$of("Gray"_s),
			$of($$new($Integer, 77)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Georges"_s),
			$of("Saab"_s),
			$of("Red"_s),
			$of($$new($Integer, 4)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Willie"_s),
			$of("Walker"_s),
			$of("Phthalo Blue"_s),
			$of($$new($Integer, 4)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Kathy"_s),
			$of("Walrath"_s),
			$of("Blue"_s),
			$of($$new($Integer, 8)),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Arnaud"_s),
			$of("Weber"_s),
			$of("Green"_s),
			$of($$new($Integer, 44)),
			$of($$new($Boolean, false))
		})
	}));
	$var($TableModel, dataModel, $new($TAB$1, names, data));
	$var($JTable, tableView, $new($JTable, dataModel));
	tableView->setAutoResizeMode($JTable::AUTO_RESIZE_OFF);
	$var($JComboBox, comboBox, $new($JComboBox));
	comboBox->addItem("Red"_s);
	comboBox->addItem("Orange"_s);
	comboBox->addItem("Yellow"_s);
	comboBox->addItem("Green"_s);
	comboBox->addItem("Blue"_s);
	comboBox->addItem("Indigo"_s);
	comboBox->addItem("Violet"_s);
	$var($TableColumn, colorColumn, tableView->getColumn("Favorite Color"_s));
	$nc(colorColumn)->setCellEditor($$new($DefaultCellEditor, comboBox));
	$var($DefaultTableCellRenderer, colorColumnRenderer, $new($DefaultTableCellRenderer));
	$init($Color);
	colorColumnRenderer->setBackground($Color::pink);
	colorColumnRenderer->setToolTipText("Click for combo box"_s);
	colorColumn->setCellRenderer(colorColumnRenderer);
	$var($TableCellRenderer, headerRenderer, colorColumn->getHeaderRenderer());
	if ($instanceOf($DefaultTableCellRenderer, headerRenderer)) {
		$nc(($cast($DefaultTableCellRenderer, headerRenderer)))->setToolTipText("Hi Mom!"_s);
	}
	$var($TableColumn, vegetarianColumn, tableView->getColumn("Vegetarian"_s));
	$nc(vegetarianColumn)->setPreferredWidth(100);
	$var($TableColumn, numbersColumn, tableView->getColumn("Favorite Number"_s));
	$var($DefaultTableCellRenderer, numberColumnRenderer, $new($TAB$2));
	numberColumnRenderer->setHorizontalAlignment($JLabel::RIGHT);
	$nc(numbersColumn)->setCellRenderer(numberColumnRenderer);
	numbersColumn->setPreferredWidth(110);
	$var($JScrollPane, scrollpane, $new($JScrollPane, tableView));
	scrollpane->setBorder($$new($BevelBorder, $BevelBorder::LOWERED));
	scrollpane->setPreferredSize($$new($Dimension, 430, 200));
	$nc(contentPane)->add(static_cast<$Component*>(scrollpane));
}

void TAB::init() {
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(TAB$$Lambda$lambda$init$0, this)));
}

void TAB::lambda$init$0() {
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	initTest($(getContentPane()));
}

TAB::TAB() {
}

$Class* TAB::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TAB$$Lambda$lambda$init$0::classInfo$.name)) {
			return TAB$$Lambda$lambda$init$0::load$(name, initialize);
		}
	}
	$loadClass(TAB, name, initialize, &_TAB_ClassInfo_, allocate$TAB);
	return class$;
}

$Class* TAB::class$ = nullptr;