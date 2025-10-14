#include <javax/print/attribute/standard/PrinterStateReasons$PrinterStateReasonSetIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/NoSuchElementException.h>
#include <javax/print/attribute/standard/PrinterStateReason.h>
#include <javax/print/attribute/standard/PrinterStateReasons.h>
#include <javax/print/attribute/standard/Severity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $PrinterStateReason = ::javax::print::attribute::standard::PrinterStateReason;
using $PrinterStateReasons = ::javax::print::attribute::standard::PrinterStateReasons;
using $Severity = ::javax::print::attribute::standard::Severity;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PrinterStateReasons$PrinterStateReasonSetIterator_FieldInfo_[] = {
	{"this$0", "Ljavax/print/attribute/standard/PrinterStateReasons;", nullptr, $FINAL | $SYNTHETIC, $field(PrinterStateReasons$PrinterStateReasonSetIterator, this$0)},
	{"mySeverity", "Ljavax/print/attribute/standard/Severity;", nullptr, $PRIVATE, $field(PrinterStateReasons$PrinterStateReasonSetIterator, mySeverity)},
	{"myIterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljavax/print/attribute/standard/PrinterStateReason;Ljavax/print/attribute/standard/Severity;>;>;", $PRIVATE, $field(PrinterStateReasons$PrinterStateReasonSetIterator, myIterator)},
	{"myEntry", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<Ljavax/print/attribute/standard/PrinterStateReason;Ljavax/print/attribute/standard/Severity;>;", $PRIVATE, $field(PrinterStateReasons$PrinterStateReasonSetIterator, myEntry)},
	{}
};

$MethodInfo _PrinterStateReasons$PrinterStateReasonSetIterator_MethodInfo_[] = {
	{"<init>", "(Ljavax/print/attribute/standard/PrinterStateReasons;Ljavax/print/attribute/standard/Severity;Ljava/util/Iterator;)V", "(Ljavax/print/attribute/standard/Severity;Ljava/util/Iterator<Ljava/util/Map$Entry<Ljavax/print/attribute/standard/PrinterStateReason;Ljavax/print/attribute/standard/Severity;>;>;)V", $PUBLIC, $method(static_cast<void(PrinterStateReasons$PrinterStateReasonSetIterator::*)($PrinterStateReasons*,$Severity*,$Iterator*)>(&PrinterStateReasons$PrinterStateReasonSetIterator::init$))},
	{"goToNext", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrinterStateReasons$PrinterStateReasonSetIterator::*)()>(&PrinterStateReasons$PrinterStateReasonSetIterator::goToNext))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PrinterStateReasons$PrinterStateReasonSetIterator_InnerClassesInfo_[] = {
	{"javax.print.attribute.standard.PrinterStateReasons$PrinterStateReasonSetIterator", "javax.print.attribute.standard.PrinterStateReasons", "PrinterStateReasonSetIterator", $PRIVATE},
	{}
};

$ClassInfo _PrinterStateReasons$PrinterStateReasonSetIterator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.attribute.standard.PrinterStateReasons$PrinterStateReasonSetIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_PrinterStateReasons$PrinterStateReasonSetIterator_FieldInfo_,
	_PrinterStateReasons$PrinterStateReasonSetIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/print/attribute/standard/PrinterStateReason;>;",
	nullptr,
	_PrinterStateReasons$PrinterStateReasonSetIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.standard.PrinterStateReasons"
};

$Object* allocate$PrinterStateReasons$PrinterStateReasonSetIterator($Class* clazz) {
	return $of($alloc(PrinterStateReasons$PrinterStateReasonSetIterator));
}

void PrinterStateReasons$PrinterStateReasonSetIterator::init$($PrinterStateReasons* this$0, $Severity* severity, $Iterator* iterator) {
	$set(this, this$0, this$0);
	$set(this, mySeverity, severity);
	$set(this, myIterator, iterator);
	goToNext();
}

void PrinterStateReasons$PrinterStateReasonSetIterator::goToNext() {
	$set(this, myEntry, nullptr);
	while (this->myEntry == nullptr && $nc(this->myIterator)->hasNext()) {
		$set(this, myEntry, $cast($Map$Entry, $nc(this->myIterator)->next()));
		if (!$equals($nc(this->myEntry)->getValue(), this->mySeverity)) {
			$set(this, myEntry, nullptr);
		}
	}
}

bool PrinterStateReasons$PrinterStateReasonSetIterator::hasNext() {
	return this->myEntry != nullptr;
}

$Object* PrinterStateReasons$PrinterStateReasonSetIterator::next() {
	if (this->myEntry == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($PrinterStateReason, result, $cast($PrinterStateReason, $nc(this->myEntry)->getKey()));
	goToNext();
	return $of(result);
}

void PrinterStateReasons$PrinterStateReasonSetIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

PrinterStateReasons$PrinterStateReasonSetIterator::PrinterStateReasons$PrinterStateReasonSetIterator() {
}

$Class* PrinterStateReasons$PrinterStateReasonSetIterator::load$($String* name, bool initialize) {
	$loadClass(PrinterStateReasons$PrinterStateReasonSetIterator, name, initialize, &_PrinterStateReasons$PrinterStateReasonSetIterator_ClassInfo_, allocate$PrinterStateReasons$PrinterStateReasonSetIterator);
	return class$;
}

$Class* PrinterStateReasons$PrinterStateReasonSetIterator::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax