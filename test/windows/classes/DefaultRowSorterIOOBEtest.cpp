#include <DefaultRowSorterIOOBEtest.h>

#include <DefaultRowSorterIOOBEtest$1.h>
#include <DefaultRowSorterIOOBEtest$2.h>
#include <DefaultRowSorterIOOBEtest$3.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter.h>
#include <jcpp.h>

using $DefaultRowSorterIOOBEtest$1 = ::DefaultRowSorterIOOBEtest$1;
using $DefaultRowSorterIOOBEtest$2 = ::DefaultRowSorterIOOBEtest$2;
using $DefaultRowSorterIOOBEtest$3 = ::DefaultRowSorterIOOBEtest$3;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $TableModel = ::javax::swing::table::TableModel;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;

$FieldInfo _DefaultRowSorterIOOBEtest_FieldInfo_[] = {
	{"rows", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $STATIC, $staticField(DefaultRowSorterIOOBEtest, rows)},
	{"tableModel", "Ljavax/swing/table/TableModel;", nullptr, $STATIC, $staticField(DefaultRowSorterIOOBEtest, tableModel)},
	{}
};

$MethodInfo _DefaultRowSorterIOOBEtest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultRowSorterIOOBEtest::*)()>(&DefaultRowSorterIOOBEtest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DefaultRowSorterIOOBEtest::main))},
	{}
};

$InnerClassInfo _DefaultRowSorterIOOBEtest_InnerClassesInfo_[] = {
	{"DefaultRowSorterIOOBEtest$SorterModelWrapper", "DefaultRowSorterIOOBEtest", "SorterModelWrapper", $STATIC},
	{"DefaultRowSorterIOOBEtest$3", nullptr, nullptr, 0},
	{"DefaultRowSorterIOOBEtest$2", nullptr, nullptr, 0},
	{"DefaultRowSorterIOOBEtest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultRowSorterIOOBEtest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DefaultRowSorterIOOBEtest",
	"javax.swing.table.TableRowSorter",
	nullptr,
	_DefaultRowSorterIOOBEtest_FieldInfo_,
	_DefaultRowSorterIOOBEtest_MethodInfo_,
	"Ljavax/swing/table/TableRowSorter<Ljavax/swing/table/TableModel;>;",
	nullptr,
	_DefaultRowSorterIOOBEtest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"DefaultRowSorterIOOBEtest$SorterModelWrapper,DefaultRowSorterIOOBEtest$3,DefaultRowSorterIOOBEtest$2,DefaultRowSorterIOOBEtest$1"
};

$Object* allocate$DefaultRowSorterIOOBEtest($Class* clazz) {
	return $of($alloc(DefaultRowSorterIOOBEtest));
}

$List* DefaultRowSorterIOOBEtest::rows = nullptr;
$TableModel* DefaultRowSorterIOOBEtest::tableModel = nullptr;

void DefaultRowSorterIOOBEtest::init$() {
	$TableRowSorter::init$();
}

void DefaultRowSorterIOOBEtest::main($StringArray* args) {
	$init(DefaultRowSorterIOOBEtest);
	$useLocalCurrentObjectStackCache();
	$var($DefaultRowSorter, sorter, $new($DefaultRowSorterIOOBEtest$2));
	$var($PrintStream, err, $System::err);
	$var($ByteArrayOutputStream, bos, $new($DefaultRowSorterIOOBEtest$3, 10000, err));
	$System::setErr($$new($PrintStream, static_cast<$OutputStream*>(bos)));
	$nc(DefaultRowSorterIOOBEtest::rows)->add("New"_s);
	sorter->convertRowIndexToView(0);
	sorter->convertRowIndexToModel(0);
	$var($String, out, $new($String, $(bos->toByteArray())));
	if (out->indexOf("WARNING:"_s) < 0) {
		$throwNew($RuntimeException, "No warnings found"_s);
	}
}

void clinit$DefaultRowSorterIOOBEtest($Class* class$) {
	$assignStatic(DefaultRowSorterIOOBEtest::rows, $new($ArrayList));
	$assignStatic(DefaultRowSorterIOOBEtest::tableModel, $new($DefaultRowSorterIOOBEtest$1));
}

DefaultRowSorterIOOBEtest::DefaultRowSorterIOOBEtest() {
}

$Class* DefaultRowSorterIOOBEtest::load$($String* name, bool initialize) {
	$loadClass(DefaultRowSorterIOOBEtest, name, initialize, &_DefaultRowSorterIOOBEtest_ClassInfo_, clinit$DefaultRowSorterIOOBEtest, allocate$DefaultRowSorterIOOBEtest);
	return class$;
}

$Class* DefaultRowSorterIOOBEtest::class$ = nullptr;