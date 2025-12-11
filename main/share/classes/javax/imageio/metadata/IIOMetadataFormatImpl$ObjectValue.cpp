#include <javax/imageio/metadata/IIOMetadataFormatImpl$ObjectValue.h>

#include <java/lang/Comparable.h>
#include <java/util/List.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;

namespace javax {
	namespace imageio {
		namespace metadata {

$FieldInfo _IIOMetadataFormatImpl$ObjectValue_FieldInfo_[] = {
	{"this$0", "Ljavax/imageio/metadata/IIOMetadataFormatImpl;", nullptr, $FINAL | $SYNTHETIC, $field(IIOMetadataFormatImpl$ObjectValue, this$0)},
	{"valueType", "I", nullptr, 0, $field(IIOMetadataFormatImpl$ObjectValue, valueType)},
	{"classType", "Ljava/lang/Class;", "Ljava/lang/Class<+TT;>;", 0, $field(IIOMetadataFormatImpl$ObjectValue, classType)},
	{"defaultValue", "Ljava/lang/Object;", "TT;", 0, $field(IIOMetadataFormatImpl$ObjectValue, defaultValue)},
	{"enumeratedValues", "Ljava/util/List;", "Ljava/util/List<+TT;>;", 0, $field(IIOMetadataFormatImpl$ObjectValue, enumeratedValues)},
	{"minValue", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<-TT;>;", 0, $field(IIOMetadataFormatImpl$ObjectValue, minValue)},
	{"maxValue", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<-TT;>;", 0, $field(IIOMetadataFormatImpl$ObjectValue, maxValue)},
	{"arrayMinLength", "I", nullptr, 0, $field(IIOMetadataFormatImpl$ObjectValue, arrayMinLength)},
	{"arrayMaxLength", "I", nullptr, 0, $field(IIOMetadataFormatImpl$ObjectValue, arrayMaxLength)},
	{}
};

$MethodInfo _IIOMetadataFormatImpl$ObjectValue_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/metadata/IIOMetadataFormatImpl;)V", nullptr, 0, $method(static_cast<void(IIOMetadataFormatImpl$ObjectValue::*)($IIOMetadataFormatImpl*)>(&IIOMetadataFormatImpl$ObjectValue::init$))},
	{}
};

$InnerClassInfo _IIOMetadataFormatImpl$ObjectValue_InnerClassesInfo_[] = {
	{"javax.imageio.metadata.IIOMetadataFormatImpl$ObjectValue", "javax.imageio.metadata.IIOMetadataFormatImpl", "ObjectValue", 0},
	{}
};

$ClassInfo _IIOMetadataFormatImpl$ObjectValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.metadata.IIOMetadataFormatImpl$ObjectValue",
	"java.lang.Object",
	nullptr,
	_IIOMetadataFormatImpl$ObjectValue_FieldInfo_,
	_IIOMetadataFormatImpl$ObjectValue_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_IIOMetadataFormatImpl$ObjectValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.metadata.IIOMetadataFormatImpl"
};

$Object* allocate$IIOMetadataFormatImpl$ObjectValue($Class* clazz) {
	return $of($alloc(IIOMetadataFormatImpl$ObjectValue));
}

void IIOMetadataFormatImpl$ObjectValue::init$($IIOMetadataFormatImpl* this$0) {
	$set(this, this$0, this$0);
	this->valueType = 0;
	$set(this, classType, nullptr);
	$set(this, defaultValue, nullptr);
	$set(this, enumeratedValues, nullptr);
	$set(this, minValue, nullptr);
	$set(this, maxValue, nullptr);
	this->arrayMinLength = 0;
	this->arrayMaxLength = 0;
}

IIOMetadataFormatImpl$ObjectValue::IIOMetadataFormatImpl$ObjectValue() {
}

$Class* IIOMetadataFormatImpl$ObjectValue::load$($String* name, bool initialize) {
	$loadClass(IIOMetadataFormatImpl$ObjectValue, name, initialize, &_IIOMetadataFormatImpl$ObjectValue_ClassInfo_, allocate$IIOMetadataFormatImpl$ObjectValue);
	return class$;
}

$Class* IIOMetadataFormatImpl$ObjectValue::class$ = nullptr;

		} // metadata
	} // imageio
} // javax