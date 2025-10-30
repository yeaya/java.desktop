#include <javax/print/attribute/standard/PageRanges.h>

#include <javax/print/attribute/SetOfIntegerSyntax.h>
#include <jcpp.h>

using $intArray2 = $Array<int32_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $SetOfIntegerSyntax = ::javax::print::attribute::SetOfIntegerSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PageRanges_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageRanges, serialVersionUID)},
	{}
};

$MethodInfo _PageRanges_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "([[I)V", nullptr, $PUBLIC, $method(static_cast<void(PageRanges::*)($intArray2*)>(&PageRanges::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PageRanges::*)($String*)>(&PageRanges::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(PageRanges::*)(int32_t)>(&PageRanges::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(PageRanges::*)(int32_t,int32_t)>(&PageRanges::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"myPageRanges", "()V", nullptr, $PRIVATE, $method(static_cast<void(PageRanges::*)()>(&PageRanges::myPageRanges))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PageRanges_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PageRanges",
	"javax.print.attribute.SetOfIntegerSyntax",
	"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_PageRanges_FieldInfo_,
	_PageRanges_MethodInfo_
};

$Object* allocate$PageRanges($Class* clazz) {
	return $of($alloc(PageRanges));
}

int32_t PageRanges::hashCode() {
	 return this->$SetOfIntegerSyntax::hashCode();
}

$String* PageRanges::toString() {
	 return this->$SetOfIntegerSyntax::toString();
}

$Object* PageRanges::clone() {
	 return this->$SetOfIntegerSyntax::clone();
}

void PageRanges::finalize() {
	this->$SetOfIntegerSyntax::finalize();
}

void PageRanges::init$($intArray2* members) {
	$SetOfIntegerSyntax::init$(members);
	if (members == nullptr) {
		$throwNew($NullPointerException, "members is null"_s);
	}
	myPageRanges();
}

void PageRanges::init$($String* members) {
	$SetOfIntegerSyntax::init$(members);
	if (members == nullptr) {
		$throwNew($NullPointerException, "members is null"_s);
	}
	myPageRanges();
}

void PageRanges::myPageRanges() {
	$var($intArray2, myMembers, getMembers());
	int32_t n = $nc(myMembers)->length;
	if (n == 0) {
		$throwNew($IllegalArgumentException, "members is zero-length"_s);
	}
	int32_t i = 0;
	for (i = 0; i < n; ++i) {
		if ($nc(myMembers->get(i))->get(0) < 1) {
			$throwNew($IllegalArgumentException, "Page value < 1 specified"_s);
		}
	}
}

void PageRanges::init$(int32_t member) {
	$SetOfIntegerSyntax::init$(member);
	if (member < 1) {
		$throwNew($IllegalArgumentException, "Page value < 1 specified"_s);
	}
}

void PageRanges::init$(int32_t lowerBound, int32_t upperBound) {
	$SetOfIntegerSyntax::init$(lowerBound, upperBound);
	if (lowerBound > upperBound) {
		$throwNew($IllegalArgumentException, "Null range specified"_s);
	} else if (lowerBound < 1) {
		$throwNew($IllegalArgumentException, "Page value < 1 specified"_s);
	}
}

bool PageRanges::equals(Object$* object) {
	return ($SetOfIntegerSyntax::equals(object) && $instanceOf(PageRanges, object));
}

$Class* PageRanges::getCategory() {
	return PageRanges::class$;
}

$String* PageRanges::getName() {
	return "page-ranges"_s;
}

PageRanges::PageRanges() {
}

$Class* PageRanges::load$($String* name, bool initialize) {
	$loadClass(PageRanges, name, initialize, &_PageRanges_ClassInfo_, allocate$PageRanges);
	return class$;
}

$Class* PageRanges::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax