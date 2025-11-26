#include <javax/print/attribute/standard/JobStateReasons.h>

#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <javax/print/attribute/standard/JobStateReason.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $JobStateReason = ::javax::print::attribute::standard::JobStateReason;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobStateReasons_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobStateReasons, serialVersionUID)},
	{}
};

$MethodInfo _JobStateReasons_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JobStateReasons::*)()>(&JobStateReasons::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobStateReasons::*)(int32_t)>(&JobStateReasons::init$))},
	{"<init>", "(IF)V", nullptr, $PUBLIC, $method(static_cast<void(JobStateReasons::*)(int32_t,float)>(&JobStateReasons::init$))},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<Ljavax/print/attribute/standard/JobStateReason;>;)V", $PUBLIC, $method(static_cast<void(JobStateReasons::*)($Collection*)>(&JobStateReasons::init$))},
	{"add", "(Ljavax/print/attribute/standard/JobStateReason;)Z", nullptr, $PUBLIC, $method(static_cast<bool(JobStateReasons::*)($JobStateReason*)>(&JobStateReasons::add))},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobStateReasons_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobStateReasons",
	"java.util.HashSet",
	"javax.print.attribute.PrintJobAttribute",
	_JobStateReasons_FieldInfo_,
	_JobStateReasons_MethodInfo_,
	"Ljava/util/HashSet<Ljavax/print/attribute/standard/JobStateReason;>;Ljavax/print/attribute/PrintJobAttribute;"
};

$Object* allocate$JobStateReasons($Class* clazz) {
	return $of($alloc(JobStateReasons));
}

$Object* JobStateReasons::clone() {
	 return this->$HashSet::clone();
}

bool JobStateReasons::equals(Object$* arg0) {
	 return this->$HashSet::equals(arg0);
}

int32_t JobStateReasons::hashCode() {
	 return this->$HashSet::hashCode();
}

$String* JobStateReasons::toString() {
	 return this->$HashSet::toString();
}

void JobStateReasons::finalize() {
	this->$HashSet::finalize();
}

void JobStateReasons::init$() {
	$HashSet::init$();
}

void JobStateReasons::init$(int32_t initialCapacity) {
	$HashSet::init$(initialCapacity);
}

void JobStateReasons::init$(int32_t initialCapacity, float loadFactor) {
	$HashSet::init$(initialCapacity, loadFactor);
}

void JobStateReasons::init$($Collection* collection) {
	$HashSet::init$(collection);
}

bool JobStateReasons::add($JobStateReason* o) {
	if (o == nullptr) {
		$throwNew($NullPointerException);
	}
	return $HashSet::add(o);
}

$Class* JobStateReasons::getCategory() {
	return JobStateReasons::class$;
}

$String* JobStateReasons::getName() {
	return "job-state-reasons"_s;
}

bool JobStateReasons::add(Object$* o) {
	return this->add($cast($JobStateReason, o));
}

JobStateReasons::JobStateReasons() {
}

$Class* JobStateReasons::load$($String* name, bool initialize) {
	$loadClass(JobStateReasons, name, initialize, &_JobStateReasons_ClassInfo_, allocate$JobStateReasons);
	return class$;
}

$Class* JobStateReasons::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax