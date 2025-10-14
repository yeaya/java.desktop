#include <javax/print/attribute/standard/QueuedJobCount.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/IntegerSyntax.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _QueuedJobCount_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QueuedJobCount, serialVersionUID)},
	{}
};

$MethodInfo _QueuedJobCount_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(QueuedJobCount::*)(int32_t)>(&QueuedJobCount::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _QueuedJobCount_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.QueuedJobCount",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_QueuedJobCount_FieldInfo_,
	_QueuedJobCount_MethodInfo_
};

$Object* allocate$QueuedJobCount($Class* clazz) {
	return $of($alloc(QueuedJobCount));
}

int32_t QueuedJobCount::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* QueuedJobCount::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* QueuedJobCount::clone() {
	 return this->$IntegerSyntax::clone();
}

void QueuedJobCount::finalize() {
	this->$IntegerSyntax::finalize();
}

void QueuedJobCount::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool QueuedJobCount::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(QueuedJobCount, object));
}

$Class* QueuedJobCount::getCategory() {
	return QueuedJobCount::class$;
}

$String* QueuedJobCount::getName() {
	return "queued-job-count"_s;
}

QueuedJobCount::QueuedJobCount() {
}

$Class* QueuedJobCount::load$($String* name, bool initialize) {
	$loadClass(QueuedJobCount, name, initialize, &_QueuedJobCount_ClassInfo_, allocate$QueuedJobCount);
	return class$;
}

$Class* QueuedJobCount::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax