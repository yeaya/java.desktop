#include <javax/print/MimeType$ParameterMapEntrySetIterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <javax/print/MimeType$ParameterMapEntry.h>
#include <javax/print/MimeType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $MimeType = ::javax::print::MimeType;
using $MimeType$ParameterMapEntry = ::javax::print::MimeType$ParameterMapEntry;

namespace javax {
	namespace print {

$FieldInfo _MimeType$ParameterMapEntrySetIterator_FieldInfo_[] = {
	{"this$0", "Ljavax/print/MimeType;", nullptr, $FINAL | $SYNTHETIC, $field(MimeType$ParameterMapEntrySetIterator, this$0)},
	{"myIndex", "I", nullptr, $PRIVATE, $field(MimeType$ParameterMapEntrySetIterator, myIndex)},
	{}
};

$MethodInfo _MimeType$ParameterMapEntrySetIterator_MethodInfo_[] = {
	{"<init>", "(Ljavax/print/MimeType;)V", nullptr, $PRIVATE, $method(static_cast<void(MimeType$ParameterMapEntrySetIterator::*)($MimeType*)>(&MimeType$ParameterMapEntrySetIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MimeType$ParameterMapEntrySetIterator_InnerClassesInfo_[] = {
	{"javax.print.MimeType$ParameterMapEntrySetIterator", "javax.print.MimeType", "ParameterMapEntrySetIterator", $PRIVATE},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MimeType$ParameterMapEntrySetIterator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.MimeType$ParameterMapEntrySetIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_MimeType$ParameterMapEntrySetIterator_FieldInfo_,
	_MimeType$ParameterMapEntrySetIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;",
	nullptr,
	_MimeType$ParameterMapEntrySetIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.MimeType"
};

$Object* allocate$MimeType$ParameterMapEntrySetIterator($Class* clazz) {
	return $of($alloc(MimeType$ParameterMapEntrySetIterator));
}

void MimeType$ParameterMapEntrySetIterator::init$($MimeType* this$0) {
	$set(this, this$0, this$0);
	this->myIndex = 2;
}

bool MimeType$ParameterMapEntrySetIterator::hasNext() {
	return this->myIndex < $nc(this->this$0->myPieces)->length;
}

$Object* MimeType$ParameterMapEntrySetIterator::next() {
	if (hasNext()) {
		$var($MimeType$ParameterMapEntry, result, $new($MimeType$ParameterMapEntry, this->this$0, this->myIndex));
		this->myIndex += 2;
		return $of(result);
	} else {
		$throwNew($NoSuchElementException);
	}
}

void MimeType$ParameterMapEntrySetIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

MimeType$ParameterMapEntrySetIterator::MimeType$ParameterMapEntrySetIterator() {
}

$Class* MimeType$ParameterMapEntrySetIterator::load$($String* name, bool initialize) {
	$loadClass(MimeType$ParameterMapEntrySetIterator, name, initialize, &_MimeType$ParameterMapEntrySetIterator_ClassInfo_, allocate$MimeType$ParameterMapEntrySetIterator);
	return class$;
}

$Class* MimeType$ParameterMapEntrySetIterator::class$ = nullptr;

	} // print
} // javax