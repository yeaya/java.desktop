#include <javax/print/MimeType$ParameterMapEntrySet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <javax/print/MimeType$ParameterMapEntrySetIterator.h>
#include <javax/print/MimeType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $MimeType = ::javax::print::MimeType;
using $MimeType$ParameterMapEntrySetIterator = ::javax::print::MimeType$ParameterMapEntrySetIterator;

namespace javax {
	namespace print {

$FieldInfo _MimeType$ParameterMapEntrySet_FieldInfo_[] = {
	{"this$0", "Ljavax/print/MimeType;", nullptr, $FINAL | $SYNTHETIC, $field(MimeType$ParameterMapEntrySet, this$0)},
	{}
};

$MethodInfo _MimeType$ParameterMapEntrySet_MethodInfo_[] = {
	{"<init>", "(Ljavax/print/MimeType;)V", nullptr, $PRIVATE, $method(static_cast<void(MimeType$ParameterMapEntrySet::*)($MimeType*)>(&MimeType$ParameterMapEntrySet::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MimeType$ParameterMapEntrySet_InnerClassesInfo_[] = {
	{"javax.print.MimeType$ParameterMapEntrySet", "javax.print.MimeType", "ParameterMapEntrySet", $PRIVATE},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MimeType$ParameterMapEntrySet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.MimeType$ParameterMapEntrySet",
	"java.util.AbstractSet",
	nullptr,
	_MimeType$ParameterMapEntrySet_FieldInfo_,
	_MimeType$ParameterMapEntrySet_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;",
	nullptr,
	_MimeType$ParameterMapEntrySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.MimeType"
};

$Object* allocate$MimeType$ParameterMapEntrySet($Class* clazz) {
	return $of($alloc(MimeType$ParameterMapEntrySet));
}

void MimeType$ParameterMapEntrySet::init$($MimeType* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

$Iterator* MimeType$ParameterMapEntrySet::iterator() {
	return $new($MimeType$ParameterMapEntrySetIterator, this->this$0);
}

int32_t MimeType$ParameterMapEntrySet::size() {
	return ($nc(this->this$0->myPieces)->length - 2) / 2;
}

MimeType$ParameterMapEntrySet::MimeType$ParameterMapEntrySet() {
}

$Class* MimeType$ParameterMapEntrySet::load$($String* name, bool initialize) {
	$loadClass(MimeType$ParameterMapEntrySet, name, initialize, &_MimeType$ParameterMapEntrySet_ClassInfo_, allocate$MimeType$ParameterMapEntrySet);
	return class$;
}

$Class* MimeType$ParameterMapEntrySet::class$ = nullptr;

	} // print
} // javax