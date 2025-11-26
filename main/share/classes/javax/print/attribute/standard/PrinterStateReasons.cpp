#include <javax/print/attribute/standard/PrinterStateReasons.h>

#include <java/util/AbstractSet.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/print/attribute/standard/PrinterStateReason.h>
#include <javax/print/attribute/standard/PrinterStateReasons$PrinterStateReasonSet.h>
#include <javax/print/attribute/standard/Severity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractSet = ::java::util::AbstractSet;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $PrinterStateReason = ::javax::print::attribute::standard::PrinterStateReason;
using $PrinterStateReasons$PrinterStateReasonSet = ::javax::print::attribute::standard::PrinterStateReasons$PrinterStateReasonSet;
using $Severity = ::javax::print::attribute::standard::Severity;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PrinterStateReasons_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterStateReasons, serialVersionUID)},
	{}
};

$MethodInfo _PrinterStateReasons_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrinterStateReasons::*)()>(&PrinterStateReasons::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterStateReasons::*)(int32_t)>(&PrinterStateReasons::init$))},
	{"<init>", "(IF)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterStateReasons::*)(int32_t,float)>(&PrinterStateReasons::init$))},
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljavax/print/attribute/standard/PrinterStateReason;Ljavax/print/attribute/standard/Severity;>;)V", $PUBLIC, $method(static_cast<void(PrinterStateReasons::*)($Map*)>(&PrinterStateReasons::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"printerStateReasonSet", "(Ljavax/print/attribute/standard/Severity;)Ljava/util/Set;", "(Ljavax/print/attribute/standard/Severity;)Ljava/util/Set<Ljavax/print/attribute/standard/PrinterStateReason;>;", $PUBLIC, $method(static_cast<$Set*(PrinterStateReasons::*)($Severity*)>(&PrinterStateReasons::printerStateReasonSet))},
	{"put", "(Ljavax/print/attribute/standard/PrinterStateReason;Ljavax/print/attribute/standard/Severity;)Ljavax/print/attribute/standard/Severity;", nullptr, $PUBLIC, $method(static_cast<$Severity*(PrinterStateReasons::*)($PrinterStateReason*,$Severity*)>(&PrinterStateReasons::put))},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PrinterStateReasons_InnerClassesInfo_[] = {
	{"javax.print.attribute.standard.PrinterStateReasons$PrinterStateReasonSetIterator", "javax.print.attribute.standard.PrinterStateReasons", "PrinterStateReasonSetIterator", $PRIVATE},
	{"javax.print.attribute.standard.PrinterStateReasons$PrinterStateReasonSet", "javax.print.attribute.standard.PrinterStateReasons", "PrinterStateReasonSet", $PRIVATE},
	{}
};

$ClassInfo _PrinterStateReasons_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterStateReasons",
	"java.util.HashMap",
	"javax.print.attribute.PrintServiceAttribute",
	_PrinterStateReasons_FieldInfo_,
	_PrinterStateReasons_MethodInfo_,
	"Ljava/util/HashMap<Ljavax/print/attribute/standard/PrinterStateReason;Ljavax/print/attribute/standard/Severity;>;Ljavax/print/attribute/PrintServiceAttribute;",
	nullptr,
	_PrinterStateReasons_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.print.attribute.standard.PrinterStateReasons$PrinterStateReasonSetIterator,javax.print.attribute.standard.PrinterStateReasons$PrinterStateReasonSet"
};

$Object* allocate$PrinterStateReasons($Class* clazz) {
	return $of($alloc(PrinterStateReasons));
}

$Object* PrinterStateReasons::clone() {
	 return this->$HashMap::clone();
}

bool PrinterStateReasons::equals(Object$* arg0) {
	 return this->$HashMap::equals(arg0);
}

int32_t PrinterStateReasons::hashCode() {
	 return this->$HashMap::hashCode();
}

$String* PrinterStateReasons::toString() {
	 return this->$HashMap::toString();
}

void PrinterStateReasons::finalize() {
	this->$HashMap::finalize();
}

void PrinterStateReasons::init$() {
	$HashMap::init$();
}

void PrinterStateReasons::init$(int32_t initialCapacity) {
	$HashMap::init$(initialCapacity);
}

void PrinterStateReasons::init$(int32_t initialCapacity, float loadFactor) {
	$HashMap::init$(initialCapacity, loadFactor);
}

void PrinterStateReasons::init$($Map* map) {
	$useLocalCurrentObjectStackCache();
	PrinterStateReasons::init$();
	{
		$var($Iterator, i$, $nc($($nc(map)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			$var($PrinterStateReason, var$0, $cast($PrinterStateReason, $nc(e)->getKey()));
			put(var$0, $cast($Severity, $(e->getValue())));
		}
	}
}

$Severity* PrinterStateReasons::put($PrinterStateReason* reason, $Severity* severity) {
	if (reason == nullptr) {
		$throwNew($NullPointerException, "reason is null"_s);
	}
	if (severity == nullptr) {
		$throwNew($NullPointerException, "severity is null"_s);
	}
	return $cast($Severity, $HashMap::put(reason, severity));
}

$Class* PrinterStateReasons::getCategory() {
	return PrinterStateReasons::class$;
}

$String* PrinterStateReasons::getName() {
	return "printer-state-reasons"_s;
}

$Set* PrinterStateReasons::printerStateReasonSet($Severity* severity) {
	if (severity == nullptr) {
		$throwNew($NullPointerException, "severity is null"_s);
	}
	return $new($PrinterStateReasons$PrinterStateReasonSet, this, severity, $(entrySet()));
}

$Object* PrinterStateReasons::put(Object$* reason, Object$* severity) {
	return $of(this->put($cast($PrinterStateReason, reason), $cast($Severity, severity)));
}

PrinterStateReasons::PrinterStateReasons() {
}

$Class* PrinterStateReasons::load$($String* name, bool initialize) {
	$loadClass(PrinterStateReasons, name, initialize, &_PrinterStateReasons_ClassInfo_, allocate$PrinterStateReasons);
	return class$;
}

$Class* PrinterStateReasons::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax