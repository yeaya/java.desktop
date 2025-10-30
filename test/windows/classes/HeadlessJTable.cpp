#include <HeadlessJTable.h>

#include <HeadlessJTable$1.h>
#include <HeadlessJTable$2.h>
#include <HeadlessJTable$3.h>
#include <HeadlessJTable$4.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/ColorModel.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef AUTO_RESIZE_ALL_COLUMNS
#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJTable$1 = ::HeadlessJTable$1;
using $HeadlessJTable$2 = ::HeadlessJTable$2;
using $HeadlessJTable$3 = ::HeadlessJTable$3;
using $HeadlessJTable$4 = ::HeadlessJTable$4;
using $ComponentArray = $Array<::java::awt::Component>;
using $LocaleArray = $Array<::java::util::Locale>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $TableModel = ::javax::swing::table::TableModel;

$MethodInfo _HeadlessJTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJTable::*)()>(&HeadlessJTable::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJTable::main))},
	{}
};

$InnerClassInfo _HeadlessJTable_InnerClassesInfo_[] = {
	{"HeadlessJTable$4", nullptr, nullptr, 0},
	{"HeadlessJTable$3", nullptr, nullptr, 0},
	{"HeadlessJTable$2", nullptr, nullptr, 0},
	{"HeadlessJTable$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJTable",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJTable_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJTable$4,HeadlessJTable$3,HeadlessJTable$2,HeadlessJTable$1"
};

$Object* allocate$HeadlessJTable($Class* clazz) {
	return $of($alloc(HeadlessJTable));
}

void HeadlessJTable::init$() {
}

void HeadlessJTable::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JTable, t, nullptr);
	$assign(t, $new($JTable));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("cell_1_1"_s),
			$of("cell_1_2"_s),
			$of("cell_1_3"_s)
		}),
		$$new($ObjectArray, {
			$of("cell_2_1"_s),
			$of("cell_2_2"_s),
			$of("cell_2_3"_s)
		}),
		$$new($ObjectArray, {
			$of("cell_3_1"_s),
			$of("cell_3_2"_s),
			$of("cell_3_3"_s)
		}),
		$$new($ObjectArray, {
			$of("cell_4_1"_s),
			$of("cell_4_2"_s),
			$of("cell_4_3"_s)
		})
	}));
	$var($TableModel, dataModel, $new($HeadlessJTable$1, data));
	$assign(t, $new($JTable, dataModel));
	t->setAutoResizeMode($JTable::AUTO_RESIZE_ALL_COLUMNS);
	t->getAutoResizeMode();
	$nc($($nc($(t->getColumnModel()))->getColumn(1)))->setMinWidth(5);
	$nc($(t->getTableHeader()))->setReorderingAllowed(false);
	$nc($(t->getTableHeader()))->setResizingAllowed(false);
	t->getAccessibleContext();
	t->isFocusTraversable();
	t->setEnabled(false);
	t->setEnabled(true);
	t->requestFocus();
	t->requestFocusInWindow();
	t->getPreferredSize();
	t->getMaximumSize();
	t->getMinimumSize();
	t->contains(1, 2);
	$var($Component, c1, t->add(static_cast<$Component*>($$new($HeadlessJTable$2))));
	$var($Component, c2, t->add(static_cast<$Component*>($$new($HeadlessJTable$3))));
	$var($Component, c3, t->add(static_cast<$Component*>($$new($HeadlessJTable$4))));
	$var($Insets, ins, t->getInsets());
	t->getAlignmentY();
	t->getAlignmentX();
	t->getGraphics();
	t->setVisible(false);
	t->setVisible(true);
	$init($Color);
	t->setForeground($Color::red);
	t->setBackground($Color::red);
	{
		$var($StringArray, arr$, $nc($($Toolkit::getDefaultToolkit()))->getFontList());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, font, arr$->get(i$));
			{
				for (int32_t j = 8; j < 17; ++j) {
					$var($Font, f1, $new($Font, font, $Font::PLAIN, j));
					$var($Font, f2, $new($Font, font, $Font::BOLD, j));
					$var($Font, f3, $new($Font, font, $Font::ITALIC, j));
					$var($Font, f4, $new($Font, font, $Font::BOLD | $Font::ITALIC, j));
					t->setFont(f1);
					t->setFont(f2);
					t->setFont(f3);
					t->setFont(f4);
					t->getFontMetrics(f1);
					t->getFontMetrics(f2);
					t->getFontMetrics(f3);
					t->getFontMetrics(f4);
				}
			}
		}
	}
	t->enable();
	t->disable();
	t->reshape(10, 10, 10, 10);
	t->getBounds($$new($Rectangle, 1, 1, 1, 1));
	t->getSize($$new($Dimension, 1, 2));
	t->getLocation($$new($Point, 1, 2));
	t->getX();
	t->getY();
	t->getWidth();
	t->getHeight();
	t->isOpaque();
	t->isValidateRoot();
	t->isOptimizedDrawingEnabled();
	t->isDoubleBuffered();
	t->getComponentCount();
	t->countComponents();
	t->getComponent(1);
	t->getComponent(2);
	$var($ComponentArray, cs, t->getComponents());
	t->getLayout();
	t->setLayout($$new($FlowLayout));
	t->doLayout();
	t->layout();
	t->invalidate();
	t->validate();
	t->remove(0);
	t->remove(c2);
	t->removeAll();
	t->preferredSize();
	t->minimumSize();
	t->getComponentAt(1, 2);
	t->locate(1, 2);
	t->getComponentAt($$new($Point, 1, 2));
	t->isFocusCycleRoot($$new($Container));
	t->transferFocusBackward();
	t->setName("goober"_s);
	t->getName();
	t->getParent();
	t->getGraphicsConfiguration();
	t->getTreeLock();
	t->getToolkit();
	t->isValid();
	t->isDisplayable();
	t->isVisible();
	t->isShowing();
	t->isEnabled();
	t->enable(false);
	t->enable(true);
	t->enableInputMethods(false);
	t->enableInputMethods(true);
	t->show();
	t->show(false);
	t->show(true);
	t->hide();
	t->getForeground();
	t->isForegroundSet();
	t->getBackground();
	t->isBackgroundSet();
	t->getFont();
	t->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(t));
	t->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			t->setLocale(locale);
		}
	}
	t->getColorModel();
	t->getLocation();
	bool exceptions = false;
	try {
		t->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	t->location();
	t->setLocation(1, 2);
	t->move(1, 2);
	t->setLocation($$new($Point, 1, 2));
	t->getSize();
	t->size();
	t->setSize(1, 32);
	t->resize(1, 32);
	t->setSize($$new($Dimension, 1, 32));
	t->resize($$new($Dimension, 1, 32));
	t->getBounds();
	t->bounds();
	t->setBounds(10, 10, 10, 10);
	t->setBounds($$new($Rectangle, 10, 10, 10, 10));
	t->isLightweight();
	t->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	t->getCursor();
	t->isCursorSet();
	t->inside(1, 2);
	t->contains($$new($Point, 1, 2));
	t->isFocusable();
	t->setFocusable(true);
	t->setFocusable(false);
	t->transferFocus();
	t->getFocusCycleRootAncestor();
	t->nextFocus();
	t->transferFocusUpCycle();
	t->hasFocus();
	t->isFocusOwner();
	t->toString();
	$init($ComponentOrientation);
	t->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	t->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	t->setComponentOrientation($ComponentOrientation::UNKNOWN);
	t->getComponentOrientation();
}

HeadlessJTable::HeadlessJTable() {
}

$Class* HeadlessJTable::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTable, name, initialize, &_HeadlessJTable_ClassInfo_, allocate$HeadlessJTable);
	return class$;
}

$Class* HeadlessJTable::class$ = nullptr;