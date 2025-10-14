#include <DrawGridLinesTest.h>

#include <DrawGridLinesTest$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef BLACK
#undef BLUE
#undef CELL_RENDERER_BACKGROUND_COLOR
#undef GRID_COLOR
#undef HEIGHT
#undef SCALE
#undef TABLE_BACKGROUND_COLOR
#undef TYPE_INT_RGB
#undef WIDTH
#undef YELLOW

using $DrawGridLinesTest$1 = ::DrawGridLinesTest$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
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
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableModel = ::javax::swing::table::TableModel;

class DrawGridLinesTest$$Lambda$checkTableGridLines : public $Runnable {
	$class(DrawGridLinesTest$$Lambda$checkTableGridLines, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DrawGridLinesTest::checkTableGridLines();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DrawGridLinesTest$$Lambda$checkTableGridLines>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DrawGridLinesTest$$Lambda$checkTableGridLines::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DrawGridLinesTest$$Lambda$checkTableGridLines::*)()>(&DrawGridLinesTest$$Lambda$checkTableGridLines::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DrawGridLinesTest$$Lambda$checkTableGridLines::classInfo$ = {
	$PUBLIC | $FINAL,
	"DrawGridLinesTest$$Lambda$checkTableGridLines",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DrawGridLinesTest$$Lambda$checkTableGridLines::load$($String* name, bool initialize) {
	$loadClass(DrawGridLinesTest$$Lambda$checkTableGridLines, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DrawGridLinesTest$$Lambda$checkTableGridLines::class$ = nullptr;

$FieldInfo _DrawGridLinesTest_FieldInfo_[] = {
	{"WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DrawGridLinesTest, WIDTH)},
	{"HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DrawGridLinesTest, HEIGHT)},
	{"GRID_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DrawGridLinesTest, GRID_COLOR)},
	{"TABLE_BACKGROUND_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DrawGridLinesTest, TABLE_BACKGROUND_COLOR)},
	{"CELL_RENDERER_BACKGROUND_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DrawGridLinesTest, CELL_RENDERER_BACKGROUND_COLOR)},
	{"SCALE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DrawGridLinesTest, SCALE)},
	{}
};

$MethodInfo _DrawGridLinesTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DrawGridLinesTest::*)()>(&DrawGridLinesTest::init$))},
	{"checkTableGridLines", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&DrawGridLinesTest::checkTableGridLines))},
	{"checkTableGridLines", "(Ljavax/swing/JTable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JTable*)>(&DrawGridLinesTest::checkTableGridLines))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DrawGridLinesTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _DrawGridLinesTest_InnerClassesInfo_[] = {
	{"DrawGridLinesTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DrawGridLinesTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DrawGridLinesTest",
	"java.lang.Object",
	nullptr,
	_DrawGridLinesTest_FieldInfo_,
	_DrawGridLinesTest_MethodInfo_,
	nullptr,
	nullptr,
	_DrawGridLinesTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"DrawGridLinesTest$1"
};

$Object* allocate$DrawGridLinesTest($Class* clazz) {
	return $of($alloc(DrawGridLinesTest));
}

$Color* DrawGridLinesTest::GRID_COLOR = nullptr;
$Color* DrawGridLinesTest::TABLE_BACKGROUND_COLOR = nullptr;
$Color* DrawGridLinesTest::CELL_RENDERER_BACKGROUND_COLOR = nullptr;

void DrawGridLinesTest::init$() {
}

void DrawGridLinesTest::main($StringArray* args) {
	$init(DrawGridLinesTest);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DrawGridLinesTest$$Lambda$checkTableGridLines)));
}

void DrawGridLinesTest::checkTableGridLines() {
	$init(DrawGridLinesTest);
	$var($TableModel, dataModel, $new($DrawGridLinesTest$1));
	$var($DefaultTableCellRenderer, r, $new($DefaultTableCellRenderer));
	r->setOpaque(true);
	r->setBackground(DrawGridLinesTest::CELL_RENDERER_BACKGROUND_COLOR);
	$var($JTable, table, $new($JTable, dataModel));
	table->setSize(DrawGridLinesTest::WIDTH, DrawGridLinesTest::HEIGHT);
	$load($Object);
	table->setDefaultRenderer($Object::class$, r);
	table->setGridColor(DrawGridLinesTest::GRID_COLOR);
	table->setShowGrid(true);
	table->setShowHorizontalLines(true);
	table->setShowVerticalLines(true);
	table->setBackground(DrawGridLinesTest::TABLE_BACKGROUND_COLOR);
	checkTableGridLines(table);
}

void DrawGridLinesTest::checkTableGridLines($JTable* table) {
	$init(DrawGridLinesTest);
	int32_t w = DrawGridLinesTest::SCALE * DrawGridLinesTest::WIDTH;
	int32_t h = DrawGridLinesTest::SCALE * DrawGridLinesTest::HEIGHT;
	$var($BufferedImage, img, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics2D, g, img->createGraphics());
	$nc(g)->scale((double)DrawGridLinesTest::SCALE, (double)DrawGridLinesTest::SCALE);
	$nc(table)->paint(g);
	g->dispose();
	int32_t size = $Math::min(w, h);
	int32_t rgb = $nc(DrawGridLinesTest::TABLE_BACKGROUND_COLOR)->getRGB();
	for (int32_t i = 0; i < size; ++i) {
		bool var$0 = img->getRGB(i, i) == rgb;
		if (var$0 || img->getRGB(i, size - i - 1) == rgb) {
			$throwNew($RuntimeException, "Artifacts in the table background color!"_s);
		}
	}
}

void clinit$DrawGridLinesTest($Class* class$) {
	$init($Color);
	$assignStatic(DrawGridLinesTest::GRID_COLOR, $Color::BLACK);
	$assignStatic(DrawGridLinesTest::TABLE_BACKGROUND_COLOR, $Color::BLUE);
	$assignStatic(DrawGridLinesTest::CELL_RENDERER_BACKGROUND_COLOR, $Color::YELLOW);
}

DrawGridLinesTest::DrawGridLinesTest() {
}

$Class* DrawGridLinesTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DrawGridLinesTest$$Lambda$checkTableGridLines::classInfo$.name)) {
			return DrawGridLinesTest$$Lambda$checkTableGridLines::load$(name, initialize);
		}
	}
	$loadClass(DrawGridLinesTest, name, initialize, &_DrawGridLinesTest_ClassInfo_, clinit$DrawGridLinesTest, allocate$DrawGridLinesTest);
	return class$;
}

$Class* DrawGridLinesTest::class$ = nullptr;