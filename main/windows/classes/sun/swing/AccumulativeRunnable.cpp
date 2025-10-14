#include <sun/swing/AccumulativeRunnable.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace sun {
	namespace swing {

$CompoundAttribute _AccumulativeRunnable_MethodAnnotations_add1[] = {
	{"Ljava/lang/SafeVarargs;", nullptr},
	{}
};

$FieldInfo _AccumulativeRunnable_FieldInfo_[] = {
	{"arguments", "Ljava/util/List;", "Ljava/util/List<TT;>;", $PRIVATE, $field(AccumulativeRunnable, arguments)},
	{}
};

$MethodInfo _AccumulativeRunnable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AccumulativeRunnable::*)()>(&AccumulativeRunnable::init$))},
	{"add", "([Ljava/lang/Object;)V", "([TT;)V", $PUBLIC | $FINAL | $SYNCHRONIZED | $TRANSIENT, $method(static_cast<void(AccumulativeRunnable::*)($ObjectArray*)>(&AccumulativeRunnable::add)), nullptr, nullptr, _AccumulativeRunnable_MethodAnnotations_add1},
	{"flush", "()Ljava/util/List;", "()Ljava/util/List<TT;>;", $PRIVATE | $SYNCHRONIZED, $method(static_cast<$List*(AccumulativeRunnable::*)()>(&AccumulativeRunnable::flush))},
	{"run", "(Ljava/util/List;)V", "(Ljava/util/List<TT;>;)V", $PROTECTED | $ABSTRACT},
	{"run", "()V", nullptr, $PUBLIC | $FINAL},
	{"submit", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AccumulativeRunnable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.swing.AccumulativeRunnable",
	"java.lang.Object",
	"java.lang.Runnable",
	_AccumulativeRunnable_FieldInfo_,
	_AccumulativeRunnable_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/Runnable;"
};

$Object* allocate$AccumulativeRunnable($Class* clazz) {
	return $of($alloc(AccumulativeRunnable));
}

void AccumulativeRunnable::init$() {
	$set(this, arguments, nullptr);
}

void AccumulativeRunnable::run() {
	run($(flush()));
}

void AccumulativeRunnable::add($ObjectArray* args) {
	$synchronized(this) {
		bool isSubmitted = true;
		if (this->arguments == nullptr) {
			isSubmitted = false;
			$set(this, arguments, $new($ArrayList));
		}
		$Collections::addAll(this->arguments, args);
		if (!isSubmitted) {
			submit();
		}
	}
}

void AccumulativeRunnable::submit() {
	$SwingUtilities::invokeLater(this);
}

$List* AccumulativeRunnable::flush() {
	$synchronized(this) {
		$var($List, list, this->arguments);
		$set(this, arguments, nullptr);
		return list;
	}
}

AccumulativeRunnable::AccumulativeRunnable() {
}

$Class* AccumulativeRunnable::load$($String* name, bool initialize) {
	$loadClass(AccumulativeRunnable, name, initialize, &_AccumulativeRunnable_ClassInfo_, allocate$AccumulativeRunnable);
	return class$;
}

$Class* AccumulativeRunnable::class$ = nullptr;

	} // swing
} // sun