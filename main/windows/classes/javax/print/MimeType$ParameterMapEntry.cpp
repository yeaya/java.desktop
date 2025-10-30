#include <javax/print/MimeType$ParameterMapEntry.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Map$Entry.h>
#include <javax/print/MimeType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Map$Entry = ::java::util::Map$Entry;
using $MimeType = ::javax::print::MimeType;

namespace javax {
	namespace print {

$FieldInfo _MimeType$ParameterMapEntry_FieldInfo_[] = {
	{"this$0", "Ljavax/print/MimeType;", nullptr, $FINAL | $SYNTHETIC, $field(MimeType$ParameterMapEntry, this$0)},
	{"myIndex", "I", nullptr, $PRIVATE, $field(MimeType$ParameterMapEntry, myIndex)},
	{}
};

$MethodInfo _MimeType$ParameterMapEntry_MethodInfo_[] = {
	{"<init>", "(Ljavax/print/MimeType;I)V", nullptr, $PUBLIC, $method(static_cast<void(MimeType$ParameterMapEntry::*)($MimeType*,int32_t)>(&MimeType$ParameterMapEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _MimeType$ParameterMapEntry_InnerClassesInfo_[] = {
	{"javax.print.MimeType$ParameterMapEntry", "javax.print.MimeType", "ParameterMapEntry", $PRIVATE},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MimeType$ParameterMapEntry_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.MimeType$ParameterMapEntry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_MimeType$ParameterMapEntry_FieldInfo_,
	_MimeType$ParameterMapEntry_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;",
	nullptr,
	_MimeType$ParameterMapEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.MimeType"
};

$Object* allocate$MimeType$ParameterMapEntry($Class* clazz) {
	return $of($alloc(MimeType$ParameterMapEntry));
}

void MimeType$ParameterMapEntry::init$($MimeType* this$0, int32_t theIndex) {
	$set(this, this$0, this$0);
	this->myIndex = theIndex;
}

$Object* MimeType$ParameterMapEntry::getKey() {
	return $of($nc(this->this$0->myPieces)->get(this->myIndex));
}

$Object* MimeType$ParameterMapEntry::getValue() {
	return $of($nc(this->this$0->myPieces)->get(this->myIndex + 1));
}

$String* MimeType$ParameterMapEntry::setValue($String* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool MimeType$ParameterMapEntry::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = o != nullptr && $instanceOf($Map$Entry, o) && $nc($($cast($String, getKey())))->equals($($nc(($cast($Map$Entry, o)))->getKey()));
	return (var$0 && $nc($($cast($String, getValue())))->equals($($nc(($cast($Map$Entry, o)))->getValue())));
}

int32_t MimeType$ParameterMapEntry::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc($($cast($String, getKey())))->hashCode();
	return var$0 ^ $nc($($cast($String, getValue())))->hashCode();
}

$Object* MimeType$ParameterMapEntry::setValue(Object$* value) {
	return $of(this->setValue($cast($String, value)));
}

MimeType$ParameterMapEntry::MimeType$ParameterMapEntry() {
}

$Class* MimeType$ParameterMapEntry::load$($String* name, bool initialize) {
	$loadClass(MimeType$ParameterMapEntry, name, initialize, &_MimeType$ParameterMapEntry_ClassInfo_, allocate$MimeType$ParameterMapEntry);
	return class$;
}

$Class* MimeType$ParameterMapEntry::class$ = nullptr;

	} // print
} // javax