#include <TableHeaderRendererExceptionTest.h>

#include <java/awt/Component.h>
#include <javax/swing/JTable.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;

$MethodInfo _TableHeaderRendererExceptionTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TableHeaderRendererExceptionTest::*)()>(&TableHeaderRendererExceptionTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TableHeaderRendererExceptionTest::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _TableHeaderRendererExceptionTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TableHeaderRendererExceptionTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TableHeaderRendererExceptionTest_MethodInfo_
};

$Object* allocate$TableHeaderRendererExceptionTest($Class* clazz) {
	return $of($alloc(TableHeaderRendererExceptionTest));
}

void TableHeaderRendererExceptionTest::init$() {
}

void TableHeaderRendererExceptionTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				$var($String, lookAndFeelString, $nc(lookAndFeelItem)->getClassName());
				try {
					$UIManager::setLookAndFeel(lookAndFeelString);
				} catch ($UnsupportedLookAndFeelException& ignored) {
					continue;
				}
				$var($JTableHeader, header, $new($JTableHeader));
				$nc($(header->getDefaultRenderer()))->getTableCellRendererComponent(nullptr, " test "_s, true, true, -1, 0);
			}
		}
	}
}

TableHeaderRendererExceptionTest::TableHeaderRendererExceptionTest() {
}

$Class* TableHeaderRendererExceptionTest::load$($String* name, bool initialize) {
	$loadClass(TableHeaderRendererExceptionTest, name, initialize, &_TableHeaderRendererExceptionTest_ClassInfo_, allocate$TableHeaderRendererExceptionTest);
	return class$;
}

$Class* TableHeaderRendererExceptionTest::class$ = nullptr;