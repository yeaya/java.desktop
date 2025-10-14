#include <javax/print/attribute/AttributeSetUtilities.h>

#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$SynchronizedAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$SynchronizedDocAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$SynchronizedPrintJobAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$SynchronizedPrintRequestAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$SynchronizedPrintServiceAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$UnmodifiableAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$UnmodifiableDocAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$UnmodifiablePrintJobAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet.h>
#include <javax/print/attribute/DocAttributeSet.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities$SynchronizedAttributeSet = ::javax::print::attribute::AttributeSetUtilities$SynchronizedAttributeSet;
using $AttributeSetUtilities$SynchronizedDocAttributeSet = ::javax::print::attribute::AttributeSetUtilities$SynchronizedDocAttributeSet;
using $AttributeSetUtilities$SynchronizedPrintJobAttributeSet = ::javax::print::attribute::AttributeSetUtilities$SynchronizedPrintJobAttributeSet;
using $AttributeSetUtilities$SynchronizedPrintRequestAttributeSet = ::javax::print::attribute::AttributeSetUtilities$SynchronizedPrintRequestAttributeSet;
using $AttributeSetUtilities$SynchronizedPrintServiceAttributeSet = ::javax::print::attribute::AttributeSetUtilities$SynchronizedPrintServiceAttributeSet;
using $AttributeSetUtilities$UnmodifiableAttributeSet = ::javax::print::attribute::AttributeSetUtilities$UnmodifiableAttributeSet;
using $AttributeSetUtilities$UnmodifiableDocAttributeSet = ::javax::print::attribute::AttributeSetUtilities$UnmodifiableDocAttributeSet;
using $AttributeSetUtilities$UnmodifiablePrintJobAttributeSet = ::javax::print::attribute::AttributeSetUtilities$UnmodifiablePrintJobAttributeSet;
using $AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet = ::javax::print::attribute::AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet;
using $AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet = ::javax::print::attribute::AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet;
using $DocAttributeSet = ::javax::print::attribute::DocAttributeSet;
using $PrintJobAttributeSet = ::javax::print::attribute::PrintJobAttributeSet;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$MethodInfo _AttributeSetUtilities_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AttributeSetUtilities::*)()>(&AttributeSetUtilities::init$))},
	{"synchronizedView", "(Ljavax/print/attribute/AttributeSet;)Ljavax/print/attribute/AttributeSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AttributeSet*(*)($AttributeSet*)>(&AttributeSetUtilities::synchronizedView))},
	{"synchronizedView", "(Ljavax/print/attribute/DocAttributeSet;)Ljavax/print/attribute/DocAttributeSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DocAttributeSet*(*)($DocAttributeSet*)>(&AttributeSetUtilities::synchronizedView))},
	{"synchronizedView", "(Ljavax/print/attribute/PrintRequestAttributeSet;)Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrintRequestAttributeSet*(*)($PrintRequestAttributeSet*)>(&AttributeSetUtilities::synchronizedView))},
	{"synchronizedView", "(Ljavax/print/attribute/PrintJobAttributeSet;)Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrintJobAttributeSet*(*)($PrintJobAttributeSet*)>(&AttributeSetUtilities::synchronizedView))},
	{"synchronizedView", "(Ljavax/print/attribute/PrintServiceAttributeSet;)Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrintServiceAttributeSet*(*)($PrintServiceAttributeSet*)>(&AttributeSetUtilities::synchronizedView))},
	{"unmodifiableView", "(Ljavax/print/attribute/AttributeSet;)Ljavax/print/attribute/AttributeSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AttributeSet*(*)($AttributeSet*)>(&AttributeSetUtilities::unmodifiableView))},
	{"unmodifiableView", "(Ljavax/print/attribute/DocAttributeSet;)Ljavax/print/attribute/DocAttributeSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DocAttributeSet*(*)($DocAttributeSet*)>(&AttributeSetUtilities::unmodifiableView))},
	{"unmodifiableView", "(Ljavax/print/attribute/PrintRequestAttributeSet;)Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrintRequestAttributeSet*(*)($PrintRequestAttributeSet*)>(&AttributeSetUtilities::unmodifiableView))},
	{"unmodifiableView", "(Ljavax/print/attribute/PrintJobAttributeSet;)Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrintJobAttributeSet*(*)($PrintJobAttributeSet*)>(&AttributeSetUtilities::unmodifiableView))},
	{"unmodifiableView", "(Ljavax/print/attribute/PrintServiceAttributeSet;)Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrintServiceAttributeSet*(*)($PrintServiceAttributeSet*)>(&AttributeSetUtilities::unmodifiableView))},
	{"verifyAttributeCategory", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/Object;Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)(Object$*,$Class*)>(&AttributeSetUtilities::verifyAttributeCategory))},
	{"verifyAttributeValue", "(Ljava/lang/Object;Ljava/lang/Class;)Ljavax/print/attribute/Attribute;", "(Ljava/lang/Object;Ljava/lang/Class<*>;)Ljavax/print/attribute/Attribute;", $PUBLIC | $STATIC, $method(static_cast<$Attribute*(*)(Object$*,$Class*)>(&AttributeSetUtilities::verifyAttributeValue))},
	{"verifyCategoryForValue", "(Ljava/lang/Class;Ljavax/print/attribute/Attribute;)V", "(Ljava/lang/Class<*>;Ljavax/print/attribute/Attribute;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*,$Attribute*)>(&AttributeSetUtilities::verifyCategoryForValue))},
	{}
};

$InnerClassInfo _AttributeSetUtilities_InnerClassesInfo_[] = {
	{"javax.print.attribute.AttributeSetUtilities$SynchronizedPrintServiceAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedPrintServiceAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$SynchronizedPrintJobAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedPrintJobAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$SynchronizedPrintRequestAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedPrintRequestAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$SynchronizedDocAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedDocAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiablePrintServiceAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintJobAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiablePrintJobAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiablePrintRequestAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiableDocAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiableDocAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiableAttributeSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AttributeSetUtilities_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.AttributeSetUtilities",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AttributeSetUtilities_MethodInfo_,
	nullptr,
	nullptr,
	_AttributeSetUtilities_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.print.attribute.AttributeSetUtilities$SynchronizedPrintServiceAttributeSet,javax.print.attribute.AttributeSetUtilities$SynchronizedPrintJobAttributeSet,javax.print.attribute.AttributeSetUtilities$SynchronizedPrintRequestAttributeSet,javax.print.attribute.AttributeSetUtilities$SynchronizedDocAttributeSet,javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet,javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet,javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintJobAttributeSet,javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet,javax.print.attribute.AttributeSetUtilities$UnmodifiableDocAttributeSet,javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet"
};

$Object* allocate$AttributeSetUtilities($Class* clazz) {
	return $of($alloc(AttributeSetUtilities));
}

void AttributeSetUtilities::init$() {
}

$AttributeSet* AttributeSetUtilities::unmodifiableView($AttributeSet* attributeSet) {
	if (attributeSet == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($AttributeSetUtilities$UnmodifiableAttributeSet, attributeSet);
}

$DocAttributeSet* AttributeSetUtilities::unmodifiableView($DocAttributeSet* attributeSet) {
	if (attributeSet == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($AttributeSetUtilities$UnmodifiableDocAttributeSet, attributeSet);
}

$PrintRequestAttributeSet* AttributeSetUtilities::unmodifiableView($PrintRequestAttributeSet* attributeSet) {
	if (attributeSet == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet, attributeSet);
}

$PrintJobAttributeSet* AttributeSetUtilities::unmodifiableView($PrintJobAttributeSet* attributeSet) {
	if (attributeSet == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($AttributeSetUtilities$UnmodifiablePrintJobAttributeSet, attributeSet);
}

$PrintServiceAttributeSet* AttributeSetUtilities::unmodifiableView($PrintServiceAttributeSet* attributeSet) {
	if (attributeSet == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet, attributeSet);
}

$AttributeSet* AttributeSetUtilities::synchronizedView($AttributeSet* attributeSet) {
	if (attributeSet == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($AttributeSetUtilities$SynchronizedAttributeSet, attributeSet);
}

$DocAttributeSet* AttributeSetUtilities::synchronizedView($DocAttributeSet* attributeSet) {
	if (attributeSet == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($AttributeSetUtilities$SynchronizedDocAttributeSet, attributeSet);
}

$PrintRequestAttributeSet* AttributeSetUtilities::synchronizedView($PrintRequestAttributeSet* attributeSet) {
	if (attributeSet == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($AttributeSetUtilities$SynchronizedPrintRequestAttributeSet, attributeSet);
}

$PrintJobAttributeSet* AttributeSetUtilities::synchronizedView($PrintJobAttributeSet* attributeSet) {
	if (attributeSet == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($AttributeSetUtilities$SynchronizedPrintJobAttributeSet, attributeSet);
}

$PrintServiceAttributeSet* AttributeSetUtilities::synchronizedView($PrintServiceAttributeSet* attributeSet) {
	if (attributeSet == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($AttributeSetUtilities$SynchronizedPrintServiceAttributeSet, attributeSet);
}

$Class* AttributeSetUtilities::verifyAttributeCategory(Object$* object, $Class* interfaceName) {
	$Class* result = $cast($Class, object);
	if ($nc(interfaceName)->isAssignableFrom(result)) {
		return result;
	} else {
		$throwNew($ClassCastException);
	}
}

$Attribute* AttributeSetUtilities::verifyAttributeValue(Object$* object, $Class* interfaceName) {
	if (object == nullptr) {
		$throwNew($NullPointerException);
	} else if (interfaceName->isInstance(object)) {
		return $cast($Attribute, object);
	} else {
		$throwNew($ClassCastException);
	}
}

void AttributeSetUtilities::verifyCategoryForValue($Class* category, $Attribute* attribute) {
	if (!$nc($of(category))->equals($nc(attribute)->getCategory())) {
		$throwNew($IllegalArgumentException);
	}
}

AttributeSetUtilities::AttributeSetUtilities() {
}

$Class* AttributeSetUtilities::load$($String* name, bool initialize) {
	$loadClass(AttributeSetUtilities, name, initialize, &_AttributeSetUtilities_ClassInfo_, allocate$AttributeSetUtilities);
	return class$;
}

$Class* AttributeSetUtilities::class$ = nullptr;

		} // attribute
	} // print
} // javax