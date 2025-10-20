#include <JTableAccessibleGetLocationOnScreen.h>

#include <JTableAccessibleGetLocationOnScreen$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleTable.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $JTableAccessibleGetLocationOnScreen$1 = ::JTableAccessibleGetLocationOnScreen$1;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleTable = ::javax::accessibility::AccessibleTable;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _JTableAccessibleGetLocationOnScreen_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JTableAccessibleGetLocationOnScreen, frame)},
	{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE | $STATIC, $staticField(JTableAccessibleGetLocationOnScreen, table)},
	{}
};

$MethodInfo _JTableAccessibleGetLocationOnScreen_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTableAccessibleGetLocationOnScreen::*)()>(&JTableAccessibleGetLocationOnScreen::init$))},
	{"assertGetLocation", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JTableAccessibleGetLocationOnScreen::assertGetLocation))},
	{"constructInEDT", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JTableAccessibleGetLocationOnScreen::constructInEDT))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JTableAccessibleGetLocationOnScreen::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JTableAccessibleGetLocationOnScreen_InnerClassesInfo_[] = {
	{"JTableAccessibleGetLocationOnScreen$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTableAccessibleGetLocationOnScreen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JTableAccessibleGetLocationOnScreen",
	"java.lang.Object",
	nullptr,
	_JTableAccessibleGetLocationOnScreen_FieldInfo_,
	_JTableAccessibleGetLocationOnScreen_MethodInfo_,
	nullptr,
	nullptr,
	_JTableAccessibleGetLocationOnScreen_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JTableAccessibleGetLocationOnScreen$1"
};

$Object* allocate$JTableAccessibleGetLocationOnScreen($Class* clazz) {
	return $of($alloc(JTableAccessibleGetLocationOnScreen));
}

$JFrame* JTableAccessibleGetLocationOnScreen::frame = nullptr;
$JTable* JTableAccessibleGetLocationOnScreen::table = nullptr;

void JTableAccessibleGetLocationOnScreen::init$() {
}

void JTableAccessibleGetLocationOnScreen::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($JTableAccessibleGetLocationOnScreen$1));
}

void JTableAccessibleGetLocationOnScreen::constructInEDT() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, columnNames, $new($StringArray, {
		"col1"_s,
		"col2"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("row1, col1"_s),
			$of("row1, col2"_s)
		}),
		$$new($ObjectArray, {
			$of("row2, col1"_s),
			$of("row2, col2"_s)
		})
	}));
	$init(JTableAccessibleGetLocationOnScreen);
	$assignStatic(JTableAccessibleGetLocationOnScreen::frame, $new($JFrame, "JTable AccessibleTableHeader and AccessibleJTableCell test"_s));
	$nc(JTableAccessibleGetLocationOnScreen::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(JTableAccessibleGetLocationOnScreen::table, $new($JTable, data, columnNames));
	$nc(JTableAccessibleGetLocationOnScreen::frame)->add(static_cast<$Component*>(JTableAccessibleGetLocationOnScreen::table));
	$nc(JTableAccessibleGetLocationOnScreen::frame)->pack();
}

void JTableAccessibleGetLocationOnScreen::assertGetLocation() {
	$useLocalCurrentObjectStackCache();
	$init(JTableAccessibleGetLocationOnScreen);
	$var($AccessibleTable, accessibleTable, $cast($AccessibleTable, $nc(JTableAccessibleGetLocationOnScreen::table)->getAccessibleContext()));
	$var($AccessibleTable, header, $nc(accessibleTable)->getAccessibleColumnHeader());
	$var($AccessibleComponent, accessibleComp1, $cast($AccessibleComponent, $nc(header)->getAccessibleAt(0, 0)));
	if (nullptr != $nc(accessibleComp1)->getLocationOnScreen()) {
		$throwNew($RuntimeException, "JTable$AccessibleJTable$AccessibleJTableHeaderCell.getLocation() must be null"_s);
	}
	$var($JComponent$AccessibleJComponent, accessibleJComponent, $cast($JComponent$AccessibleJComponent, $nc(JTableAccessibleGetLocationOnScreen::table)->getAccessibleContext()));
	$var($AccessibleComponent, accessibleComp2, $cast($AccessibleComponent, $nc(accessibleJComponent)->getAccessibleChild(3)));
	if (nullptr != $nc(accessibleComp2)->getLocationOnScreen()) {
		$throwNew($RuntimeException, "JTable$AccessibleJTable$AccessibleJTableCell.getLocation() must be null"_s);
	}
}

JTableAccessibleGetLocationOnScreen::JTableAccessibleGetLocationOnScreen() {
}

$Class* JTableAccessibleGetLocationOnScreen::load$($String* name, bool initialize) {
	$loadClass(JTableAccessibleGetLocationOnScreen, name, initialize, &_JTableAccessibleGetLocationOnScreen_ClassInfo_, allocate$JTableAccessibleGetLocationOnScreen);
	return class$;
}

$Class* JTableAccessibleGetLocationOnScreen::class$ = nullptr;