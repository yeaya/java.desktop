#include <javax/print/attribute/standard/PrinterStateReasons$PrinterStateReasonSet.h>

#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/print/attribute/standard/PrinterStateReasons$PrinterStateReasonSetIterator.h>
#include <javax/print/attribute/standard/PrinterStateReasons.h>
#include <javax/print/attribute/standard/Severity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $PrinterStateReasons = ::javax::print::attribute::standard::PrinterStateReasons;
using $PrinterStateReasons$PrinterStateReasonSetIterator = ::javax::print::attribute::standard::PrinterStateReasons$PrinterStateReasonSetIterator;
using $Severity = ::javax::print::attribute::standard::Severity;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PrinterStateReasons$PrinterStateReasonSet_FieldInfo_[] = {
	{"this$0", "Ljavax/print/attribute/standard/PrinterStateReasons;", nullptr, $FINAL | $SYNTHETIC, $field(PrinterStateReasons$PrinterStateReasonSet, this$0)},
	{"mySeverity", "Ljavax/print/attribute/standard/Severity;", nullptr, $PRIVATE, $field(PrinterStateReasons$PrinterStateReasonSet, mySeverity)},
	{"myEntrySet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<Ljavax/print/attribute/standard/PrinterStateReason;Ljavax/print/attribute/standard/Severity;>;>;", $PRIVATE, $field(PrinterStateReasons$PrinterStateReasonSet, myEntrySet)},
	{}
};

$MethodInfo _PrinterStateReasons$PrinterStateReasonSet_MethodInfo_[] = {
	{"<init>", "(Ljavax/print/attribute/standard/PrinterStateReasons;Ljavax/print/attribute/standard/Severity;Ljava/util/Set;)V", "(Ljavax/print/attribute/standard/Severity;Ljava/util/Set<Ljava/util/Map$Entry<Ljavax/print/attribute/standard/PrinterStateReason;Ljavax/print/attribute/standard/Severity;>;>;)V", $PUBLIC, $method(static_cast<void(PrinterStateReasons$PrinterStateReasonSet::*)($PrinterStateReasons*,$Severity*,$Set*)>(&PrinterStateReasons$PrinterStateReasonSet::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/print/attribute/standard/PrinterStateReason;>;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PrinterStateReasons$PrinterStateReasonSet_InnerClassesInfo_[] = {
	{"javax.print.attribute.standard.PrinterStateReasons$PrinterStateReasonSet", "javax.print.attribute.standard.PrinterStateReasons", "PrinterStateReasonSet", $PRIVATE},
	{}
};

$ClassInfo _PrinterStateReasons$PrinterStateReasonSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.attribute.standard.PrinterStateReasons$PrinterStateReasonSet",
	"java.util.AbstractSet",
	nullptr,
	_PrinterStateReasons$PrinterStateReasonSet_FieldInfo_,
	_PrinterStateReasons$PrinterStateReasonSet_MethodInfo_,
	"Ljava/util/AbstractSet<Ljavax/print/attribute/standard/PrinterStateReason;>;",
	nullptr,
	_PrinterStateReasons$PrinterStateReasonSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.standard.PrinterStateReasons"
};

$Object* allocate$PrinterStateReasons$PrinterStateReasonSet($Class* clazz) {
	return $of($alloc(PrinterStateReasons$PrinterStateReasonSet));
}

void PrinterStateReasons$PrinterStateReasonSet::init$($PrinterStateReasons* this$0, $Severity* severity, $Set* entrySet) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
	$set(this, mySeverity, severity);
	$set(this, myEntrySet, entrySet);
}

int32_t PrinterStateReasons$PrinterStateReasonSet::size() {
	int32_t result = 0;
	$var($Iterator, iter, iterator());
	while ($nc(iter)->hasNext()) {
		iter->next();
		++result;
	}
	return result;
}

$Iterator* PrinterStateReasons$PrinterStateReasonSet::iterator() {
	return $new($PrinterStateReasons$PrinterStateReasonSetIterator, this->this$0, this->mySeverity, $($nc(this->myEntrySet)->iterator()));
}

PrinterStateReasons$PrinterStateReasonSet::PrinterStateReasons$PrinterStateReasonSet() {
}

$Class* PrinterStateReasons$PrinterStateReasonSet::load$($String* name, bool initialize) {
	$loadClass(PrinterStateReasons$PrinterStateReasonSet, name, initialize, &_PrinterStateReasons$PrinterStateReasonSet_ClassInfo_, allocate$PrinterStateReasons$PrinterStateReasonSet);
	return class$;
}

$Class* PrinterStateReasons$PrinterStateReasonSet::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax