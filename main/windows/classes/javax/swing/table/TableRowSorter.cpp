#include <javax/swing/table/TableRowSorter.h>

#include <java/lang/Comparable.h>
#include <java/text/Collator.h>
#include <java/util/Comparator.h>
#include <javax/swing/DefaultRowSorter$ModelWrapper.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter$ComparableComparator.h>
#include <javax/swing/table/TableRowSorter$TableRowSorterModelWrapper.h>
#include <javax/swing/table/TableStringConverter.h>
#include <jcpp.h>

#undef COMPARABLE_COMPARATOR

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collator = ::java::text::Collator;
using $Comparator = ::java::util::Comparator;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $DefaultRowSorter$ModelWrapper = ::javax::swing::DefaultRowSorter$ModelWrapper;
using $TableModel = ::javax::swing::table::TableModel;
using $TableRowSorter$ComparableComparator = ::javax::swing::table::TableRowSorter$ComparableComparator;
using $TableRowSorter$TableRowSorterModelWrapper = ::javax::swing::table::TableRowSorter$TableRowSorterModelWrapper;
using $TableStringConverter = ::javax::swing::table::TableStringConverter;

namespace javax {
	namespace swing {
		namespace table {

$FieldInfo _TableRowSorter_FieldInfo_[] = {
	{"COMPARABLE_COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(TableRowSorter, COMPARABLE_COMPARATOR)},
	{"tableModel", "Ljavax/swing/table/TableModel;", "TM;", $PRIVATE, $field(TableRowSorter, tableModel)},
	{"stringConverter", "Ljavax/swing/table/TableStringConverter;", nullptr, $PRIVATE, $field(TableRowSorter, stringConverter)},
	{}
};

$MethodInfo _TableRowSorter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TableRowSorter::*)()>(&TableRowSorter::init$))},
	{"<init>", "(Ljavax/swing/table/TableModel;)V", "(TM;)V", $PUBLIC, $method(static_cast<void(TableRowSorter::*)($TableModel*)>(&TableRowSorter::init$))},
	{"getComparator", "(I)Ljava/util/Comparator;", "(I)Ljava/util/Comparator<*>;", $PUBLIC},
	{"getStringConverter", "()Ljavax/swing/table/TableStringConverter;", nullptr, $PUBLIC},
	{"setModel", "(Ljavax/swing/table/TableModel;)V", "(TM;)V", $PUBLIC},
	{"setStringConverter", "(Ljavax/swing/table/TableStringConverter;)V", nullptr, $PUBLIC},
	{"useToString", "(I)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _TableRowSorter_InnerClassesInfo_[] = {
	{"javax.swing.table.TableRowSorter$ComparableComparator", "javax.swing.table.TableRowSorter", "ComparableComparator", $PRIVATE | $STATIC},
	{"javax.swing.table.TableRowSorter$TableRowSorterModelWrapper", "javax.swing.table.TableRowSorter", "TableRowSorterModelWrapper", $PRIVATE},
	{}
};

$ClassInfo _TableRowSorter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.table.TableRowSorter",
	"javax.swing.DefaultRowSorter",
	nullptr,
	_TableRowSorter_FieldInfo_,
	_TableRowSorter_MethodInfo_,
	"<M::Ljavax/swing/table/TableModel;>Ljavax/swing/DefaultRowSorter<TM;Ljava/lang/Integer;>;",
	nullptr,
	_TableRowSorter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.table.TableRowSorter$ComparableComparator,javax.swing.table.TableRowSorter$TableRowSorterModelWrapper"
};

$Object* allocate$TableRowSorter($Class* clazz) {
	return $of($alloc(TableRowSorter));
}

$Comparator* TableRowSorter::COMPARABLE_COMPARATOR = nullptr;

void TableRowSorter::init$() {
	TableRowSorter::init$(nullptr);
}

void TableRowSorter::init$($TableModel* model) {
	$DefaultRowSorter::init$();
	setModel(model);
}

void TableRowSorter::setModel($TableModel* model) {
	$set(this, tableModel, model);
	setModelWrapper($$new($TableRowSorter$TableRowSorterModelWrapper, this));
}

void TableRowSorter::setStringConverter($TableStringConverter* stringConverter) {
	$set(this, stringConverter, stringConverter);
}

$TableStringConverter* TableRowSorter::getStringConverter() {
	return this->stringConverter;
}

$Comparator* TableRowSorter::getComparator(int32_t column) {
	$useLocalCurrentObjectStackCache();
	$var($Comparator, comparator, $DefaultRowSorter::getComparator(column));
	if (comparator != nullptr) {
		return comparator;
	}
	$Class* columnClass = $nc(($cast($TableModel, $(getModel()))))->getColumnClass(column);
	if (columnClass == $String::class$) {
		return $Collator::getInstance();
	}
	$load($Comparable);
	if ($Comparable::class$->isAssignableFrom(columnClass)) {
		return TableRowSorter::COMPARABLE_COMPARATOR;
	}
	return $Collator::getInstance();
}

bool TableRowSorter::useToString(int32_t column) {
	$useLocalCurrentObjectStackCache();
	$var($Comparator, comparator, $DefaultRowSorter::getComparator(column));
	if (comparator != nullptr) {
		return false;
	}
	$Class* columnClass = $nc(($cast($TableModel, $(getModel()))))->getColumnClass(column);
	if (columnClass == $String::class$) {
		return false;
	}
	$load($Comparable);
	if ($Comparable::class$->isAssignableFrom(columnClass)) {
		return false;
	}
	return true;
}

void clinit$TableRowSorter($Class* class$) {
	$assignStatic(TableRowSorter::COMPARABLE_COMPARATOR, $new($TableRowSorter$ComparableComparator));
}

TableRowSorter::TableRowSorter() {
}

$Class* TableRowSorter::load$($String* name, bool initialize) {
	$loadClass(TableRowSorter, name, initialize, &_TableRowSorter_ClassInfo_, clinit$TableRowSorter, allocate$TableRowSorter);
	return class$;
}

$Class* TableRowSorter::class$ = nullptr;

		} // table
	} // swing
} // javax